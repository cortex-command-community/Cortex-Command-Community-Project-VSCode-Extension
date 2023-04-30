module.exports = grammar({
  name: 'ccini',

  extras: ($) => [$.block_comment, $.comment, /\s/],

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $.comment,
    $.block_comment,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.includeFile, $.dataModule, $.settings, $.presetDefinition),

    includeFile: ($) => seq('IncludeFile', '=', $.modulePath),
    dataModule: ($) => seq('DataModule', $._indent, $.block),
    settings: ($) => seq('SettingsMan', $._indent, $.block),

    presetDefinition: ($) =>
      seq(alias(/\w+/, $._property), '=', $.classDefinition),

    block: ($) => seq(repeat1($._statement), $._dedent),

    _statement: ($) => seq($._property, '=', $._value),

    _property: ($) => /w+/,
    _value: ($) => choice($.classDefinition, $._number, $._string),

    classDefinition: ($) => seq($.className, $._indent, $.block),

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

    _number: ($) => choice($._integer, $._float),
    _integer: ($) => /(-?[0-9]+)/,
    _float: ($) => /(-?[0-9]+\.[0-9]+)/,

    _string: ($) => choice($.modulePath, /.*/),

    modulePath: ($) =>
      seq(
        /(([A-Z][A-z0-9 ]*\.rte)(\/[A-z0-9 ]*)*(\/[A-z0-9 ]+\.))/,
        $.fileExtension
      ),

    fileExtension: ($) => /(ini|txt|lua|cfg|bmp|png|jpg|jpeg|wav|ogg|mp3|flac)/,
  },
});
