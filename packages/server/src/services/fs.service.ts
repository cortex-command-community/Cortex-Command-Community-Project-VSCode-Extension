import { readdirSync, statSync } from 'fs';
import { join, relative } from 'path';
import { WorkspaceFolder } from 'vscode-languageserver';
import { URI } from 'vscode-uri';

class FileSystemService {
  public fileList: string[] = [];

  public registerWorkspaces(workspaces: WorkspaceFolder[]) {
    workspaces.forEach((folder) => {
      const workspacePath = URI.parse(folder.uri).fsPath;
      const workspaceFileList = this.getAllFiles(workspacePath);

      for (const file of workspaceFileList) {
        this.fileList.push(relative(workspacePath, file));
      }
    });
  }

  //   public init(rootUri: URI): void {
  //     this.fileList = this.getAllFiles(rootUri);
  //   }

  private getAllFiles(dirPath: string): string[] {
    const files = readdirSync(dirPath);

    const fileList: string[] = [];

    files.forEach((file) => {
      if (statSync(dirPath + '/' + file).isDirectory()) {
        fileList.push(...this.getAllFiles(join(dirPath, file)));
      } else {
        fileList.push(join(dirPath, file));
      }
    });

    return fileList;
  }
}

export const fileSystemService: FileSystemService = new FileSystemService();
