//@ts-check

const { composePlugins, withNx, withWeb } = require('@nrwl/webpack');

const path = require('path');
const { TsconfigPathsPlugin } = require('tsconfig-paths-webpack-plugin');

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
        logLevel: 'INFO',
      }),
    ],
    mainFields: ['module', 'main'],
    extensions: ['.ts', '.js', '.node'], // support ts-files and js-files
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
      {
        test: /\.node$/,
        type: 'asset/resource',
        generator: {
          // Ensure that prebuilt `.node` files are placed in the correct relative path for `node-gyp-build` to find them
          // "Prebuilds will be attempted loaded from `MODULE_PATH/prebuilds/...`"
          filename: (/** @type {import('webpack').PathData} */ pathData) => {
            if (!pathData.filename) {
              return 'prebuilds/[name].[hash][ext]';
            }

            const parts = pathData.filename.split('/');

            const prebuildsIndex = parts.indexOf('prebuilds');

            if (prebuildsIndex === -1) {
              return 'prebuilds/[name].[hash][ext]';
            }

            const prebuildDir = parts.slice(prebuildsIndex, -1).join('/');
            const assetModulePath = `${prebuildDir}/[name].[hash][ext]`;

            return assetModulePath;
          },
        },
      },
    ],
  };
  config.externals = {
    vscode: 'commonjs vscode', // ignored because it doesn't exist
    'tree-sitter-ccini': 'commonjs ../../tree-sitter-ccini',
  };

  config.output = config.output ?? {};

  config.output.libraryTarget = 'commonjs2';
  // config.output.filename = 'extension.js';

  config.output.publicPath = path.join(
    __dirname,
    'dist',
    'server',
    'src',
    'extension.js'
  );

  // yes, really source maps
  config.devtool = 'source-map';

  config.context = path.join(__dirname);
  config.entry = {
    extension: './src/extension.ts',
  };

  config.output.devtoolModuleFilenameTemplate = function (
    /** @type {{ absoluteResourcePath: string; }} */ info
  ) {
    const rel = path.relative(process.cwd(), info.absoluteResourcePath);
    return `webpack:///./${rel}`;
  };

  return config;
});
