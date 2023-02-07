## [1.3.2](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.3.1...v1.3.2) (2023-02-07)


### Bug Fixes

* resolve webpack build issues, start server correctly ([70b5aaf](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/70b5aaf77ae02e36056bf448d1d36720ff7d27e3))
* stop DataModule syntax highlighting breaking on empty lines ([367f17a](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/367f17a030704e4530e164cf0f7faffafc359226))

## [1.3.1](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.3.0...v1.3.1) (2023-02-04)


### Bug Fixes

* republish to package the correct version ([8b856f6](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/8b856f6ededc33319510281aaa4c996bd51fdedc))

# [1.3.0](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.2.2...v1.3.0) (2023-02-04)


### Bug Fixes

* remove breaking references to `vscode` externals ([108c75a](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/108c75a8693a24f84ac8efa95766f3d87263ced9))
* stop file path validation firing on commented out lines ([183974d](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/183974deeb3d047be15cf40c3b4cbceb55ca464d))


### Features

* add crude filepath detection to flag errors ([6a44787](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/6a44787b4d7e88354b3756b7056a28f878e47baf))
* add simple filepath validation to all ini files ([3186ac4](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/3186ac4a05b29f16c5e5e62a09335906f362de8d))
* ensure filepath validation accounts for image paths with trailing frame numbers ([d6b5bbc](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/d6b5bbc8136a0d4c63d2eac149f04672fb614c50))
* extend recognised file extension for syntax highlighting ([255221c](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/255221cc44ef40b84c66af8554412046d2f8ca8b))
* fix comments not disabling filepath validation ([4ce070f](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/4ce070f39449d85f0c1597b42179402209a39c1b))
* generate module filelist on activation use it in validation ([ed2e4e2](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/ed2e4e2572015493f4652987640fb1fb12c29971))
* update configuration and revalidate files when extension config is changed ([d71c54a](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/d71c54a9899aa336d12d5775948a7d5a27546912))
* update filetree when watched files are changed to revalidate text ([d57698b](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/d57698b0357b9c93434c9a56b4bdd766b7e976cd))

## [1.2.2](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.2.1...v1.2.2) (2023-01-29)


### Bug Fixes

* publish new docs ([37f2c54](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/37f2c547cbdfa015904c6d59c8d9052b1cc0e352))

## [1.2.1](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.2.0...v1.2.1) (2023-01-29)


### Bug Fixes

* update workplace extensions and republish docs ([16ff6a7](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/16ff6a79a36c867950950a9f09461c8e372cc1fe))

# [1.2.0](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.1.0...v1.2.0) (2023-01-29)


### Bug Fixes

* empty newlines no longer break a block (and hence syntax highlighting) ([a9d3247](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/a9d3247f94515ccb17944f955722f4d38e8757cf))
* language configurations are now correctly included in the build ([473b06b](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/473b06b4f38dd2a11ec86b6865bea2e9fc9127c4))


### Features

* add language snippets for several atomic classes ([9fa08b6](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/9fa08b679ad5f193a99020b5f804968550b77e87))
* update configuration properties and their titles for the language server ([255260b](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/255260be333fb9bed2c04bb0e448b0506047493d))

# [1.1.0](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.0.2...v1.1.0) (2023-01-29)


### Bug Fixes

* add empty `activationEvents` to manifest ([7081398](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/7081398a450fc8aaf3123ba040d98025c48cb3cc))
* retarget extension client to launch the language server on ccini files ([2469a1a](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/2469a1a655443c6cd5bd6ab710771bc8b02958bd))


### Features

* add language client and language server libraries ([5dd41e4](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/5dd41e46cff8e08339d45cab6794e2e4fdb5c511))
* add test extension configuration to specify game directory ([596709e](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/596709e95c490be9ffb71467265a6d14409b97ed))
* update grammar syntax to group blocks and handle module indexes ([7b3bda9](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/7b3bda9484454c656d85f37554daf61bae8aeca1))

## [1.0.2](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.0.1...v1.0.2) (2023-01-19)

### Bug Fixes

- enable updates to the package.json on publish ([0f8956d](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/0f8956d9f814b32d39b088da2ad0d3b2bdeca4f2))

## [1.0.1](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/compare/v1.0.0...v1.0.1) (2023-01-19)

### Bug Fixes

- test commit to trigger CI ([a0fe47e](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/a0fe47ec6d646840f08d8bf0dd01fc8c2ebf560e))

# 1.0.0 (2023-01-19)

### Bug Fixes

- block comments behave better with strings ([14f9b5d](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/14f9b5dc18291be3e05c9af2ca1841e5ff4b54f9))
- capture inline block comments in strings ([06a667b](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/06a667be769d93f688ed3120f93756e5580966c8))
- numbers correctly match to line end ([b2f1078](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/b2f1078a2a772f9b8a088c45ec22dfc188c92855))
- reclassify capture groups, add doc comment to expression match ([710dcae](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/710dcaeb0afd077cb9909973935fa1b699db77f7))
- resolve trailing block comment issues ([3e6ae27](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/3e6ae2766913beb851d9d66a7b6674de38e3d7f0))
- strings have lower precedence than numbers ([2f6f9b5](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/2f6f9b5356791d54e62dbd9fe3ba1017ab3067fc))
- strings now capture first character correctly ([81b548e](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/81b548e120abaa3a4d6c6c9fdea04dca562f68e0))

### Features

- add comments, strings and modulePaths to yaml grammar ([c085c69](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/c085c695de3cf8a14486a3b380ed93952af05de9))
- add numeric matching rule ([37336b6](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/37336b65e0b1dafb38d4a3aca7b1f13d19cc2e01))
- add repository label to package.json ([5d20adf](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/5d20adfd8b6b6827d9ca89e749185a0655de9981))
- add vscode extension manager to dev dependencies ([2a34e0d](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/2a34e0d9eefa6d1650acf5910a4995f7794fc203))
- added a whole loasd of syntax highlighting ([552271b](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/552271b9e769755a6a4350962d76d239aaad1f4d))
- backtrack on grammar, narrowing to restart ([07b4105](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/07b4105f5d375625747dd03942ce5a5f3a9c5711))
- captured trailing whitespace after properties ([9ec426e](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/9ec426e79a3285294dbc29446169855c87fe3ff0))
- enabled commitlint and pre-commit hooks ([712fae0](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/712fae004a4ca289715f90503be1edb3010f15fe))
- fix comment highlighting, add keyword matching ([e85754b](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/e85754b5c79794841291a6db2282923b9cd4825e))
- make block comments auto-close their pairs ([20dc98e](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/20dc98effff7953ed01495c57ed966b55756eacb))
- more attempts to have multiline comments work ([dd7c760](https://github.com/cortex-command-community/Cortex-Command-Community-Project-VSCode-Extension/commit/dd7c760b20da39e9c60eb30454dd5f990e222e12))

# Change Log

All notable changes to the "cortex-command-community-project-language-support" extension will be documented in this file.

Check [Keep a Changelog](http://keepachangelog.com/) for recommendations on how to structure this file.

## [Unreleased]

- Initial release
