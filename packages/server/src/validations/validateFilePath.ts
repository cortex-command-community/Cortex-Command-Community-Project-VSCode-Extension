import { basename, extname } from 'path';
import { Diagnostic, DiagnosticSeverity } from 'vscode-languageserver';
import { TextDocument } from 'vscode-languageserver-textdocument';
import { configService } from '../services/configuration.service';
import { fileSystemService } from '../services/fs.service';
import { imageFileExtensions } from 'shared';
import Parser, { Language, Query } from '@keqingmoe/tree-sitter';
import language from 'tree-sitter-ccini';

export function validateFilePaths(textDocument: TextDocument): Diagnostic[] {
  // In this simple example we get the settings for every validate run.
  //   const settings = await getDocumentSettings(textDocument.uri);

  // The validator creates diagnostics for all uppercase words length 2 and more
  const text = textDocument.getText();

  const parser = new Parser();
  parser.setLanguage(language as Language);

  const queryString = `\
(assignment
  key: (property)
  value: (modulePath
    extension: (fileExtension)
  ) @modulePathValue
)`;

  const filepathQuery = new Query(language as Language, queryString);

  const tree = parser.parse(text);

  const captures = filepathQuery.captures(tree.rootNode);

  let problems = 0;
  const diagnostics: Diagnostic[] = [];

  for (const capture of captures) {
    if (problems >= configService.globalSettings.maxNumberOfProblems) {
      break;
    }

    const filePath = capture.node.text;

    if (!checkIfPathExists(filePath)) {
      problems++;
      const diagnostic: Diagnostic = {
        severity: DiagnosticSeverity.Error,
        range: {
          start: textDocument.positionAt(capture.node.startIndex),
          end: textDocument.positionAt(capture.node.endIndex),
        },
        message: `Cannot find the file ${basename(filePath)} (${filePath})`,
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

/**
 * Checks if a given file path exists in the list of module files.
 * If not found, and the filepath is an image, it checks if there is an image file representing a frame of a sprite (e.g. Img000.png).
 * @param filePath a string representing the module file path to check. @example "Base.rte/Explosion.png"
 * @returns True if the list of included module files contains the given file path or its sprite frame variant, false otherwise.
 */
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
