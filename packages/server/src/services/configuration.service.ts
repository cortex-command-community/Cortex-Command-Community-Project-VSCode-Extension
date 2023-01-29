class ConfigurationService {
  public hasConfigurationCapability = false;
  public hasWorkspaceFolderCapability = false;
  public hasDiagnosticRelatedInformationCapability = false;
}

export const configService = new ConfigurationService();
