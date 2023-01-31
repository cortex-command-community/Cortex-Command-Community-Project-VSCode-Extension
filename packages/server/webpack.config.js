const { composePlugins, withNx, withWeb } = require('@nrwl/webpack');

const path = require('path');
const TsconfigPathsPlugin = require('tsconfig-paths-webpack-plugin');

// Nx plugins for webpack.
module.exports = composePlugins(withNx(), withWeb(), (config) => {
  // Update the webpack config as needed here.
  // e.g. `config.plugins.push(new MyPlugin())`
  config.mode = 'none'; // this leaves the source code as close as possible to the original (when packaging we set this to 'production')
  config.target = 'node'; // extensions run in a node context
  config.node = {
    __dirname: false, // leave the __dirname-behaviour intact
  };

  config.resolve = {
    plugins: [
      new TsconfigPathsPlugin({
        configFile: path.join(__dirname, 'tsconfig.app.json'),
      }),
    ],
    mainFields: ['module', 'main'],
    extensions: ['.ts', '.js'], // support ts-files and js-files
  };

  config.module = {
    rules: [
      {
        test: /\.ts$/,
        exclude: /node_modules/,
        use: [
          {
            // configure TypeScript loader:
            // * enable sources maps for end-to-end source maps
            loader: 'ts-loader',
            options: {
              compilerOptions: {
                sourceMap: true,
              },
            },
          },
        ],
      },
    ],
  };
  config.externals = {
    vscode: 'commonjs vscode', // ignored because it doesn't exist
  };

  config.output.libraryTarget = 'commonjs';

  // yes, really source maps
  config.devtool = 'source-map';

  config.context = path.join(__dirname);
  config.entry = {
    extension: './src/sampleServer.ts',
  };

  return config;
});
