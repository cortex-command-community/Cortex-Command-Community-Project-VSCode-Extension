/// <reference types="tree-sitter-cli/dsl" />
//@ts-check
/* eslint-disable no-undef */

module.exports = grammar({
  name: 'ccini',

  extras: ($) => [/\s/, $.comment, $.block_comment],

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $._block_comment_content,
    $.comment,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.includeFile, $.dataModule, $.settings, $.presetDefinition),

    includeFile: ($) => seq('IncludeFile', $._assignment, $.modulePath),
    dataModule: ($) => seq('DataModule', optional(seq($._indent, $._block))),
    settings: ($) => seq('SettingsMan', optional(seq($._indent, $._block))),

    presetDefinition: ($) =>
      seq(alias(/\w+/, $.property), $._assignment, $.classDefinition),

    _block: ($) => seq(repeat1($.assignment), $._dedent),

    assignment: ($) =>
      seq(field('key', $.property), $._assignment, field('value', $._value)),

    property: ($) => /\w+/,
    _value: ($) => choice($.classDefinition, $.modulePath, $.number, $.string),

    classDefinition: ($) => seq($.className, $._indent, $._block),

    _assignment: ($) => /\s+=\s+/,

    className: ($) =>
      choice(
        'Vector',
        'Matrix',
        'InputScheme',
        'InputMapping',
        'GenericSavedData',
        'Entity',
        'ContentFile',
        'Color',
        'Box',
        'Atom',
        'Turret',
        'ThrownDevice',
        'TerrainObject',
        'TerrainFrosting',
        'TerrainDebris',
        'TDExplosive',
        'SoundSet',
        'SoundContainer',
        'SLTerrain',
        'SLBackground',
        'SOPlacer',
        'SceneObject',
        'SceneLayer',
        'Area',
        'Scene',
        'Round',
        'PieSlice',
        'PEmitter',
        'MovableObject',
        'MOSRotating',
        'MOSprite',
        'MOSParticle',
        'MOPixel',
        'MetaSave',
        'MetaPlayer',
        'Material',
        'Magazine',
        'Loadout',
        'LimbPath',
        'Leg',
        'Icon',
        'HeldDevice',
        'HDFirearm',
        'GlobalScript',
        'Gib',
        'Emission',
        'Deployment',
        'BunkerAssemblyScheme',
        'BunkerAssembly',
        'Attachable',
        'AtomGroup',
        'Arm',
        'AHuman',
        'AEmitter',
        'BuyMenuTheme',
        'ADSensor',
        'ADoor',
        'Actor',
        'Activity',
        'ACRocket',
        'Exit',
        'ACraft',
        'ACrab',
        'ACDropShip',
        'MultiplayerServerLobby',
        'MultiplayerGame',
        'GATutorial',
        'GAScripted',
        'GameActivity'
      ),

    modulePath: ($) =>
      prec(
        3,
        seq(
          /((Data\/|UserData\/|Mods\/)?([A-Z][A-z0-9 ]*\.rte)(\/[A-z0-9 ]*)*(\/[A-z0-9 ]+\.))/,
          field('extension', $.fileExtension)
        )
      ),

    fileExtension: ($) => /(ini|txt|lua|cfg|bmp|png|jpg|jpeg|wav|ogg|mp3|flac)/,

    number: ($) => choice($._integer, $._float),
    _integer: ($) => /(-?[0-9]+)/,
    _float: ($) => /(-?[0-9]+\.[0-9]+)/,

    string: ($) => token(prec(-1, /.+/)),
    comment: ($) => token(seq('//', /(\\+(.|\r?\n)|[^\\\n])*/)),

    block_comment: ($) => seq('/*', optional($._block_comment_content), '*/'),
  },
});
