/* --------------------------------------------------------------------------------------------
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 * ------------------------------------------------------------------------------------------ */
'use strict';

import {
  CodeAction,
  CodeActionKind,
  Command,
  createConnection,
  Diagnostic,
  DiagnosticSeverity,
  InitializeParams,
  Position,
  ProposedFeatures,
  Range,
  TextDocumentEdit,
  TextDocuments,
  TextDocumentSyncKind,
  TextEdit,
} from 'vscode-languageserver/node';
import { TextDocument } from 'vscode-languageserver-textdocument';
import { configService } from './services/configuration.service';
import { validateFilePaths } from './validations/validate';

const connection = createConnection(ProposedFeatures.all);

connection.console.info(
  `CC Language server running in node ${process.version}`
);

const documents: TextDocuments<TextDocument> = new TextDocuments(TextDocument);
documents.listen(connection);

connection.onInitialize((params: InitializeParams) => {
  const capabilities = params.capabilities;

  // Does the client support the `workspace/configuration` request?
  // If not, we fall back using global settings.
  configService.hasConfigurationCapability = !!(
    capabilities.workspace && !!capabilities.workspace.configuration
  );
  configService.hasWorkspaceFolderCapability = !!(
    capabilities.workspace && !!capabilities.workspace.workspaceFolders
  );
  configService.hasDiagnosticRelatedInformationCapability =
    !!capabilities.textDocument?.publishDiagnostics?.relatedInformation;

  return {
    capabilities: {
      // codeActionProvider: true,
      textDocumentSync: {
        openClose: true,
        change: TextDocumentSyncKind.Incremental,
      },
      // executeCommandProvider: {
      //   commands: ['sample.fixMe'],
      // },
    },
  };
});

function validate(document: TextDocument): void {
  const diagnostics = validateFilePaths(document);

  connection.sendDiagnostics({
    uri: document.uri,
    version: document.version,
    diagnostics,
  });
}

documents.onDidOpen((event) => {
  validate(event.document);
});

documents.onDidChangeContent((event) => {
  validate(event.document);
});

/* 
connection.onCodeAction((params) => {
	const textDocument = documents.get(params.textDocument.uri);
	if (textDocument === undefined) {
		return undefined;
	}
	const title = 'With User Input';
	return [CodeAction.create(title, Command.create(title, 'sample.fixMe', textDocument.uri), CodeActionKind.QuickFix)];
});
 */

/* 
connection.onExecuteCommand(async (params) => {
	if (params.command !== 'sample.fixMe' || params.arguments ===  undefined) {
		return;
	}

	const textDocument = documents.get(params.arguments[0]);
	if (textDocument === undefined) {
		return;
	}
	const newText = typeof params.arguments[1] === 'string' ? params.arguments[1] : 'Eclipse';
	connection.workspace.applyEdit({
		documentChanges: [
			TextDocumentEdit.create({ uri: textDocument.uri, version: textDocument.version }, [
				TextEdit.insert(Position.create(0, 0), newText)
			])
		]
	});
});
 */
connection.listen();
