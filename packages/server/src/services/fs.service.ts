import { readdirSync, statSync } from 'fs';
import { join, relative } from 'path';
import {
  DATA_DIRECTORY,
  MOD_DIRECTORY,
  moduleDirectoryExtension,
} from 'shared';
import { WorkspaceFolder } from 'vscode-languageserver';
import { URI, Utils } from 'vscode-uri';

class FileSystemService {
  public moduleFileList: string[] = [];
  private workspaces: WorkspaceFolder[] = [];

  public registerWorkspaces(workspaces: WorkspaceFolder[]) {
    this.workspaces = workspaces;
    this.updateFileList();
  }

  public updateFileList(): void {
    console.log('Updating file list');
    this.moduleFileList = [];
    this.workspaces.forEach((folder) => {
      const workspaceUri = URI.parse(folder.uri);

      const dataPathUri = Utils.joinPath(workspaceUri, DATA_DIRECTORY);
      const modsPathUri = Utils.joinPath(workspaceUri, MOD_DIRECTORY);

      const workspaceDataFileList = this.getAllFiles(dataPathUri.fsPath);
      const workspaceModFileList = this.getAllFiles(modsPathUri.fsPath);

      for (const file of workspaceDataFileList) {
        this.moduleFileList.push(relative(dataPathUri.fsPath, file));
      }

      for (const file of workspaceModFileList) {
        this.moduleFileList.push(relative(modsPathUri.fsPath, file));
      }
    });
  }

  public trimWorkspaceFromURI(uri: string): string {
    const path = uri;
    for (const workspace of this.workspaces) {
      if (path.startsWith(workspace.uri)) {
        return path.substring(workspace.uri.length + 1);
      }
    }
    console.error(
      `TRIED TO TRIM THE URI ${uri.toString()} which doesn't exist in a workspace folder!`
    );
    return uri;
  }

  private getAllFiles(dirPath: string, isRoot = true): string[] {
    const files = readdirSync(dirPath);

    const foundFileList: string[] = [];

    files.forEach((file) => {
      if (isRoot && !file.endsWith(moduleDirectoryExtension)) {
        return;
      }
      const filepath = join(dirPath, file);
      const fileStats = statSync(filepath);
      if (fileStats.isDirectory()) {
        foundFileList.push(...this.getAllFiles(filepath, false));
      } else {
        foundFileList.push(filepath);
      }
    });

    return foundFileList;
  }
}

export const fileSystemService: FileSystemService = new FileSystemService();
