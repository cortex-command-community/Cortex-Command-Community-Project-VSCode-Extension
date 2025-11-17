import { extname } from 'path';
import { Diagnostic } from 'vscode-languageserver';
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
  key: (property) @key
  value: (modulePath
    extension: (fileExtension) @extension
  ) @modulePathValue
) @assignment`;

  const filepathQuery = new Query(language as Language, queryString);

  const tree = parser.parse(text);

  const captures = filepathQuery.captures(tree.rootNode);

  const problems = 0;
  const diagnostics: Diagnostic[] = [];

  for (const capture of captures) {
    if (problems >= configService.globalSettings.maxNumberOfProblems) {
      break;
    }

    console.log(capture.name);
    console.log(capture.node.text);
    const normalizedPath = capture.name;

    // if (!checkIfPathExists(normalizedPath)) {
    //   problems++;
    //   const diagnostic: Diagnostic = {
    //     severity: DiagnosticSeverity.Error,
    //     range: {
    //       start: textDocument.positionAt(captures.index + captures[1].length),
    //       end: textDocument.positionAt(captures.index + captures[0].length),
    //     },
    //     message: `Cannot find the file ${captures[2]}`,
    //     source: 'CC Language Features',
    //   };
    //   if (configService.hasDiagnosticRelatedInformationCapability) {
    //     diagnostic.relatedInformation = [
    //       {
    //         location: {
    //           uri: textDocument.uri,
    //           range: Object.assign({}, diagnostic.range),
    //         },
    //         message:
    //           'This may be due to a bad file extension/path, or incorrect capitalization.',
    //       },
    //     ];
    //   }
    //   diagnostics.push(diagnostic);
    // }
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
