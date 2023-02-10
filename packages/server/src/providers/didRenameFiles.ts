import {
  DidRenameFilesNotification,
  NotificationHandler,
  RenameFilesParams,
} from 'vscode-languageserver';

export class handler implements NotificationHandler<RenameFilesParams> {}
