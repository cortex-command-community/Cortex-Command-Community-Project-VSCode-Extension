import {
  DidRenameFilesNotification,
  NotificationHandler,
  RenameFilesParams,
} from 'vscode-languageserver';
import { fileSystemService } from '../services/fs.service';

export const renameFilesHandler: NotificationHandler<RenameFilesParams> = (
  params: RenameFilesParams
): void => {
  console.log(params);
  params.files.forEach((file) => {
    console.log('old:', fileSystemService.trimWorkspaceFromURI(file.oldUri));
    console.log('new:', fileSystemService.trimWorkspaceFromURI(file.newUri));
  });
};
