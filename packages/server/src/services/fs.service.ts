import { readdirSync, statSync } from 'fs';
import { join, relative } from 'path';
import { moduleDirectoryExtension } from 'shared';
import { WorkspaceFolder } from 'vscode-languageserver';
import { URI } from 'vscode-uri';

class FileSystemService {
  public moduleFileList: string[] = [];
  private workspaces: WorkspaceFolder[] = [];

  public registerWorkspaces(workspaces: WorkspaceFolder[]) {
    this.workspaces = workspaces;
    this.updateFileList();
  }

  public updateFileList(): void {
    this.moduleFileList = [];
    this.workspaces.forEach((folder) => {
      const workspacePath = URI.parse(folder.uri).fsPath;
      const workspaceFileList = this.getAllFiles(workspacePath);

      for (const file of workspaceFileList) {
        this.moduleFileList.push(relative(workspacePath, file));
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
