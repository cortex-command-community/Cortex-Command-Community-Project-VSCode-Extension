const { composePlugins, withNx, withWeb } = require('@nrwl/webpack');

// Nx plugins for webpack.
module.exports = composePlugins(withNx(), withWeb(), (config) => {
  // Update the webpack config as needed here.
  // e.g. `config.plugins.push(new MyPlugin())`

  config.devtool = 'source-map';

  config.resolve.extensions = ['.ts', '.js']; // support reading TypeScript and JavaScript files, 📖 -> https://github.com/TypeStrong/ts-loader

  config.module.rules.push({
    test: /\.ts$/,
    exclude: /node_modules/,
    use: [
      {
        loader: 'ts-loader',
        options: {
          compilerOptions: {
            module: 'es6', // override `tsconfig.json` so that TypeScript emits native JavaScript modules.
          },
        },
      },
    ],
  });
  return config;
});
