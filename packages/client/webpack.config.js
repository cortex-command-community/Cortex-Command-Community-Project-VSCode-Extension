const { composePlugins, withNx, withWeb } = require('@nrwl/webpack');

const withDefaults = require('../../shared.webpack.config');
const path = require('path');

// Nx plugins for webpack.
module.exports = composePlugins(withNx(), withWeb(), (config) => {
  // Update the webpack config as needed here.
  // e.g. `config.plugins.push(new MyPlugin())`
  const /**@type WebpackConfig*/ merged = withDefaults(
      /**@type WebpackConfig*/ config
    );

  merged.context = path.join(__dirname);
  merged.entry = {
    extension: './src/extension.ts',
  };
  merged.output = {
    filename: 'extension.js',
    path: path.join(__dirname, 'out'),
  };

  return merged;
});
