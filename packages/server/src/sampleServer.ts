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
  DidChangeConfigurationNotification,
  DidChangeWatchedFilesNotification,
  InitializeParams,
  InitializeResult,
  Position,
  ProposedFeatures,
  Range,
  TextDocumentEdit,
  TextDocuments,
  TextDocumentSyncKind,
  TextEdit,
} from 'vscode-languageserver/node';
import { TextDocument } from 'vscode-languageserver-textdocument';

import {
  configService,
  CortexCommandLanguageSupportConfiguration,
} from './services/configuration.service';
import { validateFilePaths } from './validations/validateFilePath';
import { fileSystemService } from './services/fs.service';

const connection = createConnection(ProposedFeatures.all);

connection.console.info(
  `CC Language server running in node ${process.version}`
);

const documents: TextDocuments<TextDocument> = new TextDocuments(TextDocument);
documents.listen(connection);

connection.onInitialize((params: InitializeParams): InitializeResult => {
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

  const result: InitializeResult = {
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

  if (configService.hasWorkspaceFolderCapability && params.workspaceFolders) {
    fileSystemService.registerWorkspaces(params.workspaceFolders);
    fileSystemService.moduleFileList.forEach((file) => {
      connection.console.log(file);
    });
  }

  if (configService.hasWorkspaceFolderCapability) {
    result.capabilities.workspace = {
      workspaceFolders: {
        supported: true,
      },
    };
  }

  return result;
});

connection.onInitialized(() => {
  if (configService.hasConfigurationCapability) {
    // Register for all configuration changes.
    connection.client.register(
      DidChangeConfigurationNotification.type,
      undefined
    );
  }

  connection.client.register(DidChangeWatchedFilesNotification.type);

  if (configService.hasWorkspaceFolderCapability) {
    connection.workspace.onDidChangeWorkspaceFolders((_event) => {
      connection.console.log('Workspace folder change event received.');
    });
  }
});

connection.onDidChangeConfiguration((change) => {
  if (configService.hasConfigurationCapability) {
    // Reset all cached document settings
    configService.documentSettings.clear();
  } else if (change.settings['cortexCommandLanguageSupport']) {
    configService.globalSettings = <CortexCommandLanguageSupportConfiguration>(
      change.settings['cortexCommandLanguageSupport']
    );
  }

  // Revalidate all open text documents
  documents.all().forEach(validate);
});

connection.onDidChangeWatchedFiles((change) => {
  change.changes.forEach((change) => {
    connection.console.log(change.type.toString() + change.uri);
  });
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
