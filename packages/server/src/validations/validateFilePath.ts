import { extname, normalize } from 'path';
import { Diagnostic, DiagnosticSeverity } from 'vscode-languageserver';
import { TextDocument } from 'vscode-languageserver-textdocument';
import { configService } from '../services/configuration.service';
import { fileSystemService } from '../services/fs.service';
import { imageFileExtensions } from 'shared';

export function validateFilePaths(textDocument: TextDocument): Diagnostic[] {
  // In this simple example we get the settings for every validate run.
  //   const settings = await getDocumentSettings(textDocument.uri);

  // The validator creates diagnostics for all uppercase words length 2 and more
  const text = textDocument.getText();

  const pattern =
    /(?:\/\*.*?(?=\*\/))|(\t*(?:ScriptPath|IncludeFile|LogoFile|FilePath|SkinFile)\s*=\s*)(.*?)(?=(?:$|\/\/|\/\*|(?:\s+(?:\/\/.*|\/\*.*))))/dgms;

  const commentPattern = /(\/\/[^\n]*\n)|(\/\*.*?\*\/)/dgms;
  const commentRanges = text.matchAll(commentPattern);

  let m: RegExpExecArray | null;

  let problems = 0;
  const diagnostics: Diagnostic[] = [];

  while (
    (m = pattern.exec(text)) &&
    problems < configService.globalSettings.maxNumberOfProblems
  ) {
    let skip = false;
    for (const comment of commentRanges) {
      if (!(comment.index && comment.length)) {
        continue;
      }
      skip =
        (comment.index < m.index && comment.index + comment.length > m.index) ||
        (comment.index > m.index && comment.index < m.index + m.length);
    }

    if (skip) {
      continue;
    }
    const normalizedPath = m[2] ? normalize(m[2].trim()) : null;
    if (normalizedPath && !checkIfPathExists(normalizedPath)) {
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

function checkIfPathExists(filePath: string): boolean {
  if (fileSystemService.moduleFileList.includes(filePath)) {
    return true;
  }

  if (imageFileExtensions.includes(extname(filePath))) {
    const index = filePath.lastIndexOf('.');
    if (index < 0) {
      return false;
    }

    filePath = filePath.substring(0, index) + '000' + filePath.substring(index);

    return fileSystemService.moduleFileList.includes(filePath);
  }

  return false;
}
