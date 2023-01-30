import { normalize } from 'path';
import { Diagnostic, DiagnosticSeverity } from 'vscode-languageserver';
import { TextDocument } from 'vscode-languageserver-textdocument';
import { configService } from '../services/configuration.service';
import { fileSystemService } from '../services/fs.service';

export function validateFilePaths(textDocument: TextDocument): Diagnostic[] {
  // In this simple example we get the settings for every validate run.
  //   const settings = await getDocumentSettings(textDocument.uri);

  // The validator creates diagnostics for all uppercase words length 2 and more
  const text = textDocument.getText();
  const pattern =
    /(\t*(?:ScriptPath|IncludeFile|LogoFile|FilePath|SkinFile)\s*=\s*)(.*)/dg;
  let m: RegExpExecArray | null;

  let problems = 0;
  const diagnostics: Diagnostic[] = [];

  while (
    (m = pattern.exec(text)) &&
    problems < configService.globalSettings.maxNumberOfProblems
  ) {
    const normalizedPath = normalize(m[2]);
    if (!fileSystemService.moduleFileList.includes(normalizedPath)) {
      problems++;
      const diagnostic: Diagnostic = {
        severity: DiagnosticSeverity.Error,
        range: {
          start: textDocument.positionAt(m.index + m[1].length),
          end: textDocument.positionAt(m.index + m[0].length),
        },
        message: `Cannot find the file ${m[2]}`,
        source: 'CC Language Features',
      };
      if (configService.hasDiagnosticRelatedInformationCapability) {
        diagnostic.relatedInformation = [
          {
            location: {
              uri: textDocument.uri,
              range: Object.assign({}, diagnostic.range),
            },
            message:
              'This may be due to a bad file extension/path, or incorrect capitalization.',
          },
        ];
      }
      diagnostics.push(diagnostic);
    }
  }

  // Send the computed diagnostics to VSCode.
  return diagnostics;
}
