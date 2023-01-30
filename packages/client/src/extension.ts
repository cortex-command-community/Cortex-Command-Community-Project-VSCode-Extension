/* --------------------------------------------------------------------------------------------
 * Copyright (c) Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 * ------------------------------------------------------------------------------------------ */
'use strict';

import * as path from 'path';
import { ExtensionContext, window as Window, workspace } from 'vscode';
import {
  LanguageClient,
  LanguageClientOptions,
  RevealOutputChannelOn,
  ServerOptions,
  TransportKind,
} from 'vscode-languageclient/node';

export function activate(context: ExtensionContext): void {
  const serverModule = context.asAbsolutePath(
    path.join('dist', 'packages', 'server', 'src', 'sampleServer.js')
  );
  const serverOptions: ServerOptions = {
    run: {
      module: serverModule,
      transport: TransportKind.ipc,
      options: { cwd: process.cwd() },
    },
    debug: {
      module: serverModule,
      transport: TransportKind.ipc,
      options: { cwd: process.cwd() },
    },
  };

  const clientOptions: LanguageClientOptions = {
    documentSelector: [{ scheme: 'file', language: 'ccini' }],
    revealOutputChannelOn: RevealOutputChannelOn.Error,
    progressOnInitialization: true,
    synchronize: {
      fileEvents: workspace.createFileSystemWatcher(
        '**/*.{ini,txt,lua,cfg,bmp,png,jpg,jpeg,wav,ogg,mp3,flac}'
      ),
    },
  };

  let client: LanguageClient;
  try {
    client = new LanguageClient(
      'Cortex Command Client',
      serverOptions,
      clientOptions
    );
  } catch (err) {
    Window.showErrorMessage(
      `The extension couldn't be started. See the output channel for details.`
    );
    return;
  }
  client.registerProposedFeatures();

  context.subscriptions.push(client.start());
}

// eslint-disable-next-line @typescript-eslint/no-empty-function
export function deactivate() {}
