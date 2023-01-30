import { Uri } from 'vscode';

export interface CortexCommandLanguageSupportConfiguration {
  maxNumberOfProblems: number;
  gameDirectoryPath: Uri;
}

class ConfigurationService {
  public hasConfigurationCapability = false;
  public hasWorkspaceFolderCapability = false;
  public hasDiagnosticRelatedInformationCapability = false;

  // The global settings, used when the `workspace/configuration` request is not supported by the client.
  // Please note that this is not the case when using this server with the client provided in this example
  // but could happen with other clients.
  public globalSettings: CortexCommandLanguageSupportConfiguration = {
    maxNumberOfProblems: 100,
    gameDirectoryPath: Uri.parse('.'),
  };

  // Cache the settings of all open documents
  public documentSettings: Map<
    string,
    Thenable<CortexCommandLanguageSupportConfiguration>
  > = new Map();
}

export const configService = new ConfigurationService();
