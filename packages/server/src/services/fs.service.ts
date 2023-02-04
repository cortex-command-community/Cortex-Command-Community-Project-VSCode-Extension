import { readdirSync, statSync } from 'fs';
import { join, relative } from 'path';
import { WorkspaceFolder } from 'vscode-languageserver';
import { URI } from 'vscode-uri';

class FileSystemService {
  public moduleFileList: string[] = [];
  private workspaces: WorkspaceFolder[] = [];

  public registerWorkspaces(workspaces: WorkspaceFolder[]) {
    this.workspaces = workspaces;
    this.updateFileList();
  }

  //   public init(rootUri: URI): void {
  //     this.fileList = this.getAllFiles(rootUri);
  //   }

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

  private getAllFiles(dirPath: string, isRoot = true): string[] {
    const files = readdirSync(dirPath);

    const foundFileList: string[] = [];

    files.forEach((file) => {
      if (isRoot && !file.endsWith('.rte')) {
        return;
      }

      const fileStats = statSync(dirPath + '/' + file);
      if (fileStats.isDirectory()) {
        foundFileList.push(...this.getAllFiles(join(dirPath, file), false));
      } else {
        foundFileList.push(join(dirPath, file));
      }
    });

    return foundFileList;
  }
}

export const fileSystemService: FileSystemService = new FileSystemService();
