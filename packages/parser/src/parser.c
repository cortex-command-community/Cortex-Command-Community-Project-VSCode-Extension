#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_IncludeFile = 1,
  anon_sym_DataModule = 2,
  anon_sym_SettingsMan = 3,
  aux_sym_presetDefinition_token1 = 4,
  sym__assignment = 5,
  anon_sym_Vector = 6,
  anon_sym_Matrix = 7,
  anon_sym_InputScheme = 8,
  anon_sym_InputMapping = 9,
  anon_sym_GenericSavedData = 10,
  anon_sym_Entity = 11,
  anon_sym_ContentFile = 12,
  anon_sym_Color = 13,
  anon_sym_Box = 14,
  anon_sym_Atom = 15,
  anon_sym_Turret = 16,
  anon_sym_ThrownDevice = 17,
  anon_sym_TerrainObject = 18,
  anon_sym_TerrainFrosting = 19,
  anon_sym_TerrainDebris = 20,
  anon_sym_TDExplosive = 21,
  anon_sym_SoundSet = 22,
  anon_sym_SoundContainer = 23,
  anon_sym_SLTerrain = 24,
  anon_sym_SLBackground = 25,
  anon_sym_SOPlacer = 26,
  anon_sym_SceneObject = 27,
  anon_sym_SceneLayer = 28,
  anon_sym_Area = 29,
  anon_sym_Scene = 30,
  anon_sym_Round = 31,
  anon_sym_PieSlice = 32,
  anon_sym_PEmitter = 33,
  anon_sym_MovableObject = 34,
  anon_sym_MOSRotating = 35,
  anon_sym_MOSprite = 36,
  anon_sym_MOSParticle = 37,
  anon_sym_MOPixel = 38,
  anon_sym_MetaSave = 39,
  anon_sym_MetaPlayer = 40,
  anon_sym_Material = 41,
  anon_sym_Magazine = 42,
  anon_sym_Loadout = 43,
  anon_sym_LimbPath = 44,
  anon_sym_Leg = 45,
  anon_sym_Icon = 46,
  anon_sym_HeldDevice = 47,
  anon_sym_HDFirearm = 48,
  anon_sym_GlobalScript = 49,
  anon_sym_Gib = 50,
  anon_sym_Emission = 51,
  anon_sym_Deployment = 52,
  anon_sym_BunkerAssemblyScheme = 53,
  anon_sym_BunkerAssembly = 54,
  anon_sym_Attachable = 55,
  anon_sym_AtomGroup = 56,
  anon_sym_Arm = 57,
  anon_sym_AHuman = 58,
  anon_sym_AEmitter = 59,
  anon_sym_BuyMenuTheme = 60,
  anon_sym_ADSensor = 61,
  anon_sym_ADoor = 62,
  anon_sym_Actor = 63,
  anon_sym_Activity = 64,
  anon_sym_ACRocket = 65,
  anon_sym_Exit = 66,
  anon_sym_ACraft = 67,
  anon_sym_ACrab = 68,
  anon_sym_ACDropShip = 69,
  anon_sym_MultiplayerServerLobby = 70,
  anon_sym_MultiplayerGame = 71,
  anon_sym_GATutorial = 72,
  anon_sym_GAScripted = 73,
  anon_sym_GameActivity = 74,
  aux_sym_modulePath_token1 = 75,
  sym_fileExtension = 76,
  sym__integer = 77,
  sym__float = 78,
  sym_string = 79,
  sym_comment = 80,
  sym__newline = 81,
  sym__indent = 82,
  sym__dedent = 83,
  sym_block_comment = 84,
  sym_source_file = 85,
  sym__definition = 86,
  sym_includeFile = 87,
  sym_dataModule = 88,
  sym_settings = 89,
  sym_presetDefinition = 90,
  sym__block = 91,
  sym_statement = 92,
  sym_property = 93,
  sym__value = 94,
  sym_classDefinition = 95,
  sym_className = 96,
  sym_modulePath = 97,
  sym_number = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym__block_repeat1 = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_IncludeFile] = "IncludeFile",
  [anon_sym_DataModule] = "DataModule",
  [anon_sym_SettingsMan] = "SettingsMan",
  [aux_sym_presetDefinition_token1] = "presetDefinition_token1",
  [sym__assignment] = "_assignment",
  [anon_sym_Vector] = "Vector",
  [anon_sym_Matrix] = "Matrix",
  [anon_sym_InputScheme] = "InputScheme",
  [anon_sym_InputMapping] = "InputMapping",
  [anon_sym_GenericSavedData] = "GenericSavedData",
  [anon_sym_Entity] = "Entity",
  [anon_sym_ContentFile] = "ContentFile",
  [anon_sym_Color] = "Color",
  [anon_sym_Box] = "Box",
  [anon_sym_Atom] = "Atom",
  [anon_sym_Turret] = "Turret",
  [anon_sym_ThrownDevice] = "ThrownDevice",
  [anon_sym_TerrainObject] = "TerrainObject",
  [anon_sym_TerrainFrosting] = "TerrainFrosting",
  [anon_sym_TerrainDebris] = "TerrainDebris",
  [anon_sym_TDExplosive] = "TDExplosive",
  [anon_sym_SoundSet] = "SoundSet",
  [anon_sym_SoundContainer] = "SoundContainer",
  [anon_sym_SLTerrain] = "SLTerrain",
  [anon_sym_SLBackground] = "SLBackground",
  [anon_sym_SOPlacer] = "SOPlacer",
  [anon_sym_SceneObject] = "SceneObject",
  [anon_sym_SceneLayer] = "SceneLayer",
  [anon_sym_Area] = "Area",
  [anon_sym_Scene] = "Scene",
  [anon_sym_Round] = "Round",
  [anon_sym_PieSlice] = "PieSlice",
  [anon_sym_PEmitter] = "PEmitter",
  [anon_sym_MovableObject] = "MovableObject",
  [anon_sym_MOSRotating] = "MOSRotating",
  [anon_sym_MOSprite] = "MOSprite",
  [anon_sym_MOSParticle] = "MOSParticle",
  [anon_sym_MOPixel] = "MOPixel",
  [anon_sym_MetaSave] = "MetaSave",
  [anon_sym_MetaPlayer] = "MetaPlayer",
  [anon_sym_Material] = "Material",
  [anon_sym_Magazine] = "Magazine",
  [anon_sym_Loadout] = "Loadout",
  [anon_sym_LimbPath] = "LimbPath",
  [anon_sym_Leg] = "Leg",
  [anon_sym_Icon] = "Icon",
  [anon_sym_HeldDevice] = "HeldDevice",
  [anon_sym_HDFirearm] = "HDFirearm",
  [anon_sym_GlobalScript] = "GlobalScript",
  [anon_sym_Gib] = "Gib",
  [anon_sym_Emission] = "Emission",
  [anon_sym_Deployment] = "Deployment",
  [anon_sym_BunkerAssemblyScheme] = "BunkerAssemblyScheme",
  [anon_sym_BunkerAssembly] = "BunkerAssembly",
  [anon_sym_Attachable] = "Attachable",
  [anon_sym_AtomGroup] = "AtomGroup",
  [anon_sym_Arm] = "Arm",
  [anon_sym_AHuman] = "AHuman",
  [anon_sym_AEmitter] = "AEmitter",
  [anon_sym_BuyMenuTheme] = "BuyMenuTheme",
  [anon_sym_ADSensor] = "ADSensor",
  [anon_sym_ADoor] = "ADoor",
  [anon_sym_Actor] = "Actor",
  [anon_sym_Activity] = "Activity",
  [anon_sym_ACRocket] = "ACRocket",
  [anon_sym_Exit] = "Exit",
  [anon_sym_ACraft] = "ACraft",
  [anon_sym_ACrab] = "ACrab",
  [anon_sym_ACDropShip] = "ACDropShip",
  [anon_sym_MultiplayerServerLobby] = "MultiplayerServerLobby",
  [anon_sym_MultiplayerGame] = "MultiplayerGame",
  [anon_sym_GATutorial] = "GATutorial",
  [anon_sym_GAScripted] = "GAScripted",
  [anon_sym_GameActivity] = "GameActivity",
  [aux_sym_modulePath_token1] = "modulePath_token1",
  [sym_fileExtension] = "fileExtension",
  [sym__integer] = "_integer",
  [sym__float] = "_float",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_includeFile] = "includeFile",
  [sym_dataModule] = "dataModule",
  [sym_settings] = "settings",
  [sym_presetDefinition] = "presetDefinition",
  [sym__block] = "_block",
  [sym_statement] = "statement",
  [sym_property] = "property",
  [sym__value] = "_value",
  [sym_classDefinition] = "classDefinition",
  [sym_className] = "className",
  [sym_modulePath] = "modulePath",
  [sym_number] = "number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__block_repeat1] = "_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_IncludeFile] = anon_sym_IncludeFile,
  [anon_sym_DataModule] = anon_sym_DataModule,
  [anon_sym_SettingsMan] = anon_sym_SettingsMan,
  [aux_sym_presetDefinition_token1] = aux_sym_presetDefinition_token1,
  [sym__assignment] = sym__assignment,
  [anon_sym_Vector] = anon_sym_Vector,
  [anon_sym_Matrix] = anon_sym_Matrix,
  [anon_sym_InputScheme] = anon_sym_InputScheme,
  [anon_sym_InputMapping] = anon_sym_InputMapping,
  [anon_sym_GenericSavedData] = anon_sym_GenericSavedData,
  [anon_sym_Entity] = anon_sym_Entity,
  [anon_sym_ContentFile] = anon_sym_ContentFile,
  [anon_sym_Color] = anon_sym_Color,
  [anon_sym_Box] = anon_sym_Box,
  [anon_sym_Atom] = anon_sym_Atom,
  [anon_sym_Turret] = anon_sym_Turret,
  [anon_sym_ThrownDevice] = anon_sym_ThrownDevice,
  [anon_sym_TerrainObject] = anon_sym_TerrainObject,
  [anon_sym_TerrainFrosting] = anon_sym_TerrainFrosting,
  [anon_sym_TerrainDebris] = anon_sym_TerrainDebris,
  [anon_sym_TDExplosive] = anon_sym_TDExplosive,
  [anon_sym_SoundSet] = anon_sym_SoundSet,
  [anon_sym_SoundContainer] = anon_sym_SoundContainer,
  [anon_sym_SLTerrain] = anon_sym_SLTerrain,
  [anon_sym_SLBackground] = anon_sym_SLBackground,
  [anon_sym_SOPlacer] = anon_sym_SOPlacer,
  [anon_sym_SceneObject] = anon_sym_SceneObject,
  [anon_sym_SceneLayer] = anon_sym_SceneLayer,
  [anon_sym_Area] = anon_sym_Area,
  [anon_sym_Scene] = anon_sym_Scene,
  [anon_sym_Round] = anon_sym_Round,
  [anon_sym_PieSlice] = anon_sym_PieSlice,
  [anon_sym_PEmitter] = anon_sym_PEmitter,
  [anon_sym_MovableObject] = anon_sym_MovableObject,
  [anon_sym_MOSRotating] = anon_sym_MOSRotating,
  [anon_sym_MOSprite] = anon_sym_MOSprite,
  [anon_sym_MOSParticle] = anon_sym_MOSParticle,
  [anon_sym_MOPixel] = anon_sym_MOPixel,
  [anon_sym_MetaSave] = anon_sym_MetaSave,
  [anon_sym_MetaPlayer] = anon_sym_MetaPlayer,
  [anon_sym_Material] = anon_sym_Material,
  [anon_sym_Magazine] = anon_sym_Magazine,
  [anon_sym_Loadout] = anon_sym_Loadout,
  [anon_sym_LimbPath] = anon_sym_LimbPath,
  [anon_sym_Leg] = anon_sym_Leg,
  [anon_sym_Icon] = anon_sym_Icon,
  [anon_sym_HeldDevice] = anon_sym_HeldDevice,
  [anon_sym_HDFirearm] = anon_sym_HDFirearm,
  [anon_sym_GlobalScript] = anon_sym_GlobalScript,
  [anon_sym_Gib] = anon_sym_Gib,
  [anon_sym_Emission] = anon_sym_Emission,
  [anon_sym_Deployment] = anon_sym_Deployment,
  [anon_sym_BunkerAssemblyScheme] = anon_sym_BunkerAssemblyScheme,
  [anon_sym_BunkerAssembly] = anon_sym_BunkerAssembly,
  [anon_sym_Attachable] = anon_sym_Attachable,
  [anon_sym_AtomGroup] = anon_sym_AtomGroup,
  [anon_sym_Arm] = anon_sym_Arm,
  [anon_sym_AHuman] = anon_sym_AHuman,
  [anon_sym_AEmitter] = anon_sym_AEmitter,
  [anon_sym_BuyMenuTheme] = anon_sym_BuyMenuTheme,
  [anon_sym_ADSensor] = anon_sym_ADSensor,
  [anon_sym_ADoor] = anon_sym_ADoor,
  [anon_sym_Actor] = anon_sym_Actor,
  [anon_sym_Activity] = anon_sym_Activity,
  [anon_sym_ACRocket] = anon_sym_ACRocket,
  [anon_sym_Exit] = anon_sym_Exit,
  [anon_sym_ACraft] = anon_sym_ACraft,
  [anon_sym_ACrab] = anon_sym_ACrab,
  [anon_sym_ACDropShip] = anon_sym_ACDropShip,
  [anon_sym_MultiplayerServerLobby] = anon_sym_MultiplayerServerLobby,
  [anon_sym_MultiplayerGame] = anon_sym_MultiplayerGame,
  [anon_sym_GATutorial] = anon_sym_GATutorial,
  [anon_sym_GAScripted] = anon_sym_GAScripted,
  [anon_sym_GameActivity] = anon_sym_GameActivity,
  [aux_sym_modulePath_token1] = aux_sym_modulePath_token1,
  [sym_fileExtension] = sym_fileExtension,
  [sym__integer] = sym__integer,
  [sym__float] = sym__float,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_includeFile] = sym_includeFile,
  [sym_dataModule] = sym_dataModule,
  [sym_settings] = sym_settings,
  [sym_presetDefinition] = sym_presetDefinition,
  [sym__block] = sym__block,
  [sym_statement] = sym_statement,
  [sym_property] = sym_property,
  [sym__value] = sym__value,
  [sym_classDefinition] = sym_classDefinition,
  [sym_className] = sym_className,
  [sym_modulePath] = sym_modulePath,
  [sym_number] = sym_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_IncludeFile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DataModule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SettingsMan] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_presetDefinition_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__assignment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Matrix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InputScheme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InputMapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GenericSavedData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ContentFile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Atom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Turret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ThrownDevice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TerrainObject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TerrainFrosting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TerrainDebris] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TDExplosive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SoundSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SoundContainer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLTerrain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLBackground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOPlacer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SceneObject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SceneLayer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Area] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scene] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Round] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PieSlice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PEmitter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MovableObject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOSRotating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOSprite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOSParticle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOPixel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MetaSave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MetaPlayer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Material] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Magazine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Loadout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LimbPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Leg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HeldDevice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HDFirearm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GlobalScript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Emission] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Deployment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BunkerAssemblyScheme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BunkerAssembly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Attachable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AtomGroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Arm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AHuman] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AEmitter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BuyMenuTheme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADSensor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADoor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Actor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Activity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACRocket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACraft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACrab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACDropShip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MultiplayerServerLobby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MultiplayerGame] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GATutorial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GAScripted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GameActivity] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_modulePath_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_fileExtension] = {
    .visible = true,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_includeFile] = {
    .visible = true,
    .named = true,
  },
  [sym_dataModule] = {
    .visible = true,
    .named = true,
  },
  [sym_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_presetDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_classDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_className] = {
    .visible = true,
    .named = true,
  },
  [sym_modulePath] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_property,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 11,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 16,
  [26] = 19,
  [27] = 15,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 29,
  [37] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(470);
      ADVANCE_MAP(
        '-', 466,
        '/', 20,
        'A', 480,
        'B', 784,
        'C', 781,
        'D', 520,
        'E', 739,
        'G', 476,
        'H', 482,
        'I', 569,
        'L', 617,
        'M', 501,
        'P', 490,
        'R', 786,
        'S', 495,
        'T', 483,
        'V', 596,
        'b', 744,
        'c', 657,
        'f', 721,
        'i', 762,
        'j', 807,
        'l', 906,
        'm', 808,
        'o', 663,
        'p', 761,
        't', 930,
        'w', 523,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '-') ADVANCE(1595);
      if (lookahead == '/') ADVANCE(1590);
      if (lookahead == 'A') ADVANCE(1164);
      if (lookahead == 'B') ADVANCE(1434);
      if (lookahead == 'C') ADVANCE(1435);
      if (lookahead == 'D') ADVANCE(1202);
      if (lookahead == 'E') ADVANCE(1398);
      if (lookahead == 'G') ADVANCE(1160);
      if (lookahead == 'H') ADVANCE(1166);
      if (lookahead == 'I') ADVANCE(1246);
      if (lookahead == 'L') ADVANCE(1270);
      if (lookahead == 'M') ADVANCE(1183);
      if (lookahead == 'P') ADVANCE(1175);
      if (lookahead == 'R') ADVANCE(1438);
      if (lookahead == 'S') ADVANCE(1179);
      if (lookahead == 'T') ADVANCE(1167);
      if (lookahead == 'U') ADVANCE(1509);
      if (lookahead == 'V') ADVANCE(1271);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1158);
      if (('F' <= lookahead && lookahead <= 'Z')) ADVANCE(1586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1155);
      if (lookahead != 0) ADVANCE(1597);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(1602);
      if (lookahead == '\\') ADVANCE(1600);
      if (lookahead != 0) ADVANCE(1601);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '-', 466,
        '/', 20,
        '=', 465,
        'A', 480,
        'B', 784,
        'C', 781,
        'D', 520,
        'E', 739,
        'G', 476,
        'H', 482,
        'I', 569,
        'L', 617,
        'M', 501,
        'P', 490,
        'R', 786,
        'S', 495,
        'T', 483,
        'V', 596,
        'b', 744,
        'c', 657,
        'f', 721,
        'i', 762,
        'j', 807,
        'l', 906,
        'm', 808,
        'o', 663,
        'p', 761,
        't', 930,
        'w', 523,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(1152);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'D') ADVANCE(7);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '/', 20,
        'A', 28,
        'B', 310,
        'C', 307,
        'D', 154,
        'E', 268,
        'G', 24,
        'H', 30,
        'I', 110,
        'L', 153,
        'M', 46,
        'P', 38,
        'R', 312,
        'S', 42,
        'T', 31,
        'V', 133,
        'b', 272,
        'c', 192,
        'f', 253,
        'i', 290,
        'j', 331,
        'l', 430,
        'm', 332,
        'o', 198,
        'p', 289,
        't', 452,
        'w', 66,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == 'D') ADVANCE(7);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'U') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(1601);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(1153);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(384);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(191);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead == 'H') ADVANCE(431);
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(324);
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'h') ADVANCE(362);
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(156);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'F') ADVANCE(369);
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(454);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 39:
      if (lookahead == 'F') ADVANCE(231);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(237);
      END_STATE();
    case 41:
      if (lookahead == 'G') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 43:
      if (lookahead == 'L') ADVANCE(320);
      END_STATE();
    case 44:
      if (lookahead == 'M') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 45:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 48:
      if (lookahead == 'P') ADVANCE(210);
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(80);
      if (lookahead == 'R') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(379);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(261);
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 52:
      if (lookahead == 'P') ADVANCE(266);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(438);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(202);
      END_STATE();
    case 55:
      if (lookahead == 'S') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 56:
      if (lookahead == 'S') ADVANCE(259);
      END_STATE();
    case 57:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'S') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(205);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(1153);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(1014);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(957);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(1077);
      END_STATE();
    case 94:
      if (lookahead == 'b') ADVANCE(1131);
      if (lookahead == 'f') ADVANCE(394);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 97:
      if (lookahead == 'b') ADVANCE(260);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(459);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(372);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 105:
      if (lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(1153);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 111:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 113:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(1146);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(1002);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(1018);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(1035);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(1053);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(1068);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(963);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(990);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(978);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(1140);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(1153);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(1098);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 192:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(1062);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(1153);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(1032);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(954);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(984);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(380);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(1059);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 205:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 206:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(1153);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 243:
      if (lookahead == 'j') ADVANCE(183);
      END_STATE();
    case 244:
      if (lookahead == 'j') ADVANCE(186);
      END_STATE();
    case 245:
      if (lookahead == 'j') ADVANCE(188);
      END_STATE();
    case 246:
      if (lookahead == 'k') ADVANCE(200);
      END_STATE();
    case 247:
      if (lookahead == 'k') ADVANCE(165);
      END_STATE();
    case 248:
      if (lookahead == 'k') ADVANCE(170);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(1041);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(1050);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(1143);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 268:
      if (lookahead == 'm') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 269:
      if (lookahead == 'm') ADVANCE(974);
      END_STATE();
    case 270:
      if (lookahead == 'm') ADVANCE(1071);
      END_STATE();
    case 271:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 272:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 273:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 274:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 275:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 276:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 281:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 282:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(1101);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(1080);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 331:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 332:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 333:
      if (lookahead == 'p') ADVANCE(1153);
      END_STATE();
    case 334:
      if (lookahead == 'p') ADVANCE(1095);
      END_STATE();
    case 335:
      if (lookahead == 'p') ADVANCE(1134);
      END_STATE();
    case 336:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 337:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 338:
      if (lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 339:
      if (lookahead == 'p') ADVANCE(415);
      END_STATE();
    case 340:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 341:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 342:
      if (lookahead == 'p') ADVANCE(435);
      END_STATE();
    case 343:
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 344:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(1113);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(1116);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(966);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(945);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(1110);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(1104);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(1026);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(1005);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(1047);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(1011);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(996);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 382:
      if (lookahead == 's') ADVANCE(987);
      END_STATE();
    case 383:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 384:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 385:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 386:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 387:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 388:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 389:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(1153);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(1125);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(975);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 397:
      if (lookahead == 't') ADVANCE(1122);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(993);
      END_STATE();
    case 399:
      if (lookahead == 't') ADVANCE(1083);
      END_STATE();
    case 400:
      if (lookahead == 't') ADVANCE(1008);
      END_STATE();
    case 401:
      if (lookahead == 't') ADVANCE(1074);
      END_STATE();
    case 402:
      if (lookahead == 't') ADVANCE(1029);
      END_STATE();
    case 403:
      if (lookahead == 't') ADVANCE(981);
      END_STATE();
    case 404:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 405:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 406:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 429:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 430:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 431:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 432:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 433:
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 434:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 435:
      if (lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 436:
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 437:
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 438:
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 439:
      if (lookahead == 'v') ADVANCE(1153);
      END_STATE();
    case 440:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 441:
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 442:
      if (lookahead == 'v') ADVANCE(178);
      END_STATE();
    case 443:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 444:
      if (lookahead == 'v') ADVANCE(233);
      END_STATE();
    case 445:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 446:
      if (lookahead == 'v') ADVANCE(223);
      END_STATE();
    case 447:
      if (lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 448:
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 449:
      if (lookahead == 'w') ADVANCE(306);
      END_STATE();
    case 450:
      if (lookahead == 'x') ADVANCE(969);
      END_STATE();
    case 451:
      if (lookahead == 'x') ADVANCE(948);
      END_STATE();
    case 452:
      if (lookahead == 'x') ADVANCE(391);
      END_STATE();
    case 453:
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 454:
      if (lookahead == 'x') ADVANCE(341);
      END_STATE();
    case 455:
      if (lookahead == 'y') ADVANCE(960);
      END_STATE();
    case 456:
      if (lookahead == 'y') ADVANCE(1119);
      END_STATE();
    case 457:
      if (lookahead == 'y') ADVANCE(1149);
      END_STATE();
    case 458:
      if (lookahead == 'y') ADVANCE(1091);
      END_STATE();
    case 459:
      if (lookahead == 'y') ADVANCE(1137);
      END_STATE();
    case 460:
      if (lookahead == 'y') ADVANCE(281);
      END_STATE();
    case 461:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 462:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 463:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 464:
      if (lookahead == 'z') ADVANCE(235);
      END_STATE();
    case 465:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(944);
      END_STATE();
    case 466:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1154);
      END_STATE();
    case 467:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1156);
      END_STATE();
    case 468:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      END_STATE();
    case 469:
      if (eof) ADVANCE(470);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == 'D') ADVANCE(521);
      if (lookahead == 'I') ADVANCE(774);
      if (lookahead == 'S') ADVANCE(619);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_IncludeFile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DataModule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_SettingsMan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == '.') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == '3') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'A') ADVANCE(508);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'e') ADVANCE(766);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'A') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'A') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'B') ADVANCE(531);
      if (lookahead == 'T') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'C') ADVANCE(487);
      if (lookahead == 'D') ADVANCE(511);
      if (lookahead == 'E') ADVANCE(750);
      if (lookahead == 'H') ADVANCE(907);
      if (lookahead == 'c') ADVANCE(865);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead == 't') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'C') ADVANCE(799);
      if (lookahead == 'S') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'D') ADVANCE(491);
      if (lookahead == 'e') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'D') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == 'h') ADVANCE(836);
      if (lookahead == 'u') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'D') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'D') ADVANCE(622);
      if (lookahead == 'F') ADVANCE(844);
      if (lookahead == 'O') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'D') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'D') ADVANCE(839);
      if (lookahead == 'R') ADVANCE(788);
      if (lookahead == 'r') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'D') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'E') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'E') ADVANCE(753);
      if (lookahead == 'i') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'F') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'F') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'F') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'G') ADVANCE(546);
      if (lookahead == 'S') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'L') ADVANCE(479);
      if (lookahead == 'O') ADVANCE(507);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead == 'e') ADVANCE(886);
      if (lookahead == 'o') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'L') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'M') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'M') ADVANCE(535);
      if (lookahead == 'S') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'M') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'M') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'O') ADVANCE(503);
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == 'o') ADVANCE(918);
      if (lookahead == 'u') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'O') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'P') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'P') ADVANCE(538);
      if (lookahead == 'R') ADVANCE(802);
      if (lookahead == 'p') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'P') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'P') ADVANCE(731);
      if (lookahead == 'S') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'P') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'S') ADVANCE(573);
      if (lookahead == 'T') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'S') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'S') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'S') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'S') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'T') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(882);
      if (lookahead == 'e') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'a') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(1133);
      if (lookahead == 'f') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'b') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(787);
      if (lookahead == 'n') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(723);
      if (lookahead == 'p') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'c') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'd') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead == 'o') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead == 'g') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == 'm') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == 'r') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'e') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'f') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(518);
      if (lookahead == 't') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'g') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'h') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'h') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'h') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'h') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'h') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'h') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(924);
      if (lookahead == 'o') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'i') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'j') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'j') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'j') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'k') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'k') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'k') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(796);
      if (lookahead == 'n') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'l') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(674);
      if (lookahead == 'n') ADVANCE(897);
      if (lookahead == 'x') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'm') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead == 'y') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'n') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(928);
      if (lookahead == 'u') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(740);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'o') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'p') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'r') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 's') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 't') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'u') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'v') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'w') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'x') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'x') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'x') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'x') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'x') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'y') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (lookahead == 'z') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(943);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_presetDefinition_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__assignment);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(944);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_Vector);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_Vector);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_Vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_Matrix);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_Matrix);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_Matrix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_InputScheme);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_InputScheme);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_InputScheme);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_InputMapping);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_InputMapping);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_InputMapping);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_GenericSavedData);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_GenericSavedData);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_GenericSavedData);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_Entity);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_Entity);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_Entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_ContentFile);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_ContentFile);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_ContentFile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_Color);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_Color);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_Color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_Box);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_Box);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_Atom);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'G') ADVANCE(1500);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_Atom);
      if (lookahead == 'G') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_Atom);
      if (lookahead == 'G') ADVANCE(376);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_Turret);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_Turret);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_Turret);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_ThrownDevice);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_ThrownDevice);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_ThrownDevice);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_TerrainObject);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_TerrainObject);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_TerrainObject);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_TerrainFrosting);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_TerrainFrosting);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_TerrainFrosting);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_TerrainDebris);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_TerrainDebris);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_TerrainDebris);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_TDExplosive);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_TDExplosive);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_TDExplosive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_SoundSet);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_SoundSet);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_SoundSet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_SoundContainer);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_SoundContainer);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_SoundContainer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_SLTerrain);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_SLTerrain);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_SLTerrain);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_SLBackground);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_SLBackground);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_SLBackground);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_SOPlacer);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_SOPlacer);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_SOPlacer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_SceneObject);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_SceneObject);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_SceneObject);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_SceneLayer);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_SceneLayer);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_SceneLayer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_Area);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_Area);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_Area);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_Scene);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'L') ADVANCE(1228);
      if (lookahead == 'O') ADVANCE(1232);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_Scene);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_Scene);
      if (lookahead == 'L') ADVANCE(549);
      if (lookahead == 'O') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_Round);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_Round);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_Round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_PieSlice);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_PieSlice);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_PieSlice);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_PEmitter);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_PEmitter);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_PEmitter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_MovableObject);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_MovableObject);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_MovableObject);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_MOSRotating);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_MOSRotating);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_MOSRotating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_MOSprite);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_MOSprite);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_MOSprite);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_MOSParticle);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_MOSParticle);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_MOSParticle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_MOPixel);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_MOPixel);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_MOPixel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_MetaSave);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_MetaSave);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_MetaSave);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_MetaPlayer);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_MetaPlayer);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_MetaPlayer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_Material);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_Material);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_Material);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_Magazine);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_Magazine);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_Magazine);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_Loadout);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_Loadout);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_Loadout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_LimbPath);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_LimbPath);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_LimbPath);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_Leg);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_Leg);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_Leg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_Icon);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_Icon);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_Icon);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_HeldDevice);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_HeldDevice);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_HeldDevice);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_HDFirearm);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_HDFirearm);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_HDFirearm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_GlobalScript);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_GlobalScript);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_GlobalScript);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_Gib);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_Gib);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_Gib);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_Emission);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_Emission);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_Emission);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_Deployment);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_Deployment);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_Deployment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_BunkerAssemblyScheme);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_BunkerAssemblyScheme);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_BunkerAssemblyScheme);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_BunkerAssembly);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'S') ADVANCE(1261);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_BunkerAssembly);
      if (lookahead == 'S') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_BunkerAssembly);
      if (lookahead == 'S') ADVANCE(125);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_Attachable);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_Attachable);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_Attachable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_AtomGroup);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_AtomGroup);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_AtomGroup);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_Arm);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_Arm);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_Arm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_AHuman);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_AHuman);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_AHuman);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_AEmitter);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_AEmitter);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_AEmitter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_BuyMenuTheme);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_BuyMenuTheme);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_BuyMenuTheme);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_ADSensor);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_ADSensor);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_ADSensor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_ADoor);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_ADoor);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_ADoor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_Actor);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_Actor);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_Actor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_Activity);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_Activity);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_Activity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_ACRocket);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_ACRocket);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_ACRocket);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_Exit);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_Exit);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_Exit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_ACraft);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_ACraft);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_ACraft);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_ACrab);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_ACrab);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_ACrab);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_ACDropShip);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_ACDropShip);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_ACDropShip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_MultiplayerServerLobby);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_MultiplayerServerLobby);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_MultiplayerServerLobby);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_MultiplayerGame);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_MultiplayerGame);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_MultiplayerGame);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_GATutorial);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_GATutorial);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_GATutorial);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_GAScripted);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_GAScripted);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_GAScripted);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_GameActivity);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_GameActivity);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_GameActivity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_modulePath_token1);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_fileExtension);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1154);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(1594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1155);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1156);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(1601);
      if (lookahead == '\r') ADVANCE(1599);
      if (lookahead == '\\') ADVANCE(1598);
      if (lookahead != 0) ADVANCE(1603);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '-') ADVANCE(1595);
      if (lookahead == '/') ADVANCE(1590);
      if (lookahead == 'A') ADVANCE(1164);
      if (lookahead == 'B') ADVANCE(1434);
      if (lookahead == 'C') ADVANCE(1435);
      if (lookahead == 'D') ADVANCE(1202);
      if (lookahead == 'E') ADVANCE(1398);
      if (lookahead == 'G') ADVANCE(1160);
      if (lookahead == 'H') ADVANCE(1166);
      if (lookahead == 'I') ADVANCE(1246);
      if (lookahead == 'L') ADVANCE(1270);
      if (lookahead == 'M') ADVANCE(1183);
      if (lookahead == 'P') ADVANCE(1175);
      if (lookahead == 'R') ADVANCE(1438);
      if (lookahead == 'S') ADVANCE(1179);
      if (lookahead == 'T') ADVANCE(1167);
      if (lookahead == 'U') ADVANCE(1509);
      if (lookahead == 'V') ADVANCE(1271);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1158);
      if (('F' <= lookahead && lookahead <= 'Z')) ADVANCE(1586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1155);
      if (lookahead != 0) ADVANCE(1597);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == '/') ADVANCE(1596);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'A') ADVANCE(1190);
      if (lookahead == 'a') ADVANCE(1402);
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == 'i') ADVANCE(1230);
      if (lookahead == 'l') ADVANCE(1440);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'A') ADVANCE(1513);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'A') ADVANCE(1258);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'B') ADVANCE(1212);
      if (lookahead == 'T') ADVANCE(1326);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_string);
      ADVANCE_MAP(
        '.', 1592,
        'C', 1171,
        'D', 1192,
        'E', 1408,
        'H', 1556,
        'c', 1516,
        'r', 1290,
        't', 1443,
      );
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'C') ADVANCE(1450);
      if (lookahead == 'S') ADVANCE(1304);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(1176);
      if (lookahead == 'e') ADVANCE(1380);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(1174);
      if (lookahead == 'e') ADVANCE(1484);
      if (lookahead == 'h') ADVANCE(1487);
      if (lookahead == 'u') ADVANCE(1485);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(1315);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(1203);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(1295);
      if (lookahead == 'F') ADVANCE(1495);
      if (lookahead == 'O') ADVANCE(1242);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(1488);
      if (lookahead == 'R') ADVANCE(1442);
      if (lookahead == 'r') ADVANCE(1197);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(1226);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'D') ADVANCE(1325);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'E') ADVANCE(1575);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'E') ADVANCE(1411);
      if (lookahead == 'i') ADVANCE(1272);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'F') ADVANCE(1365);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'F') ADVANCE(1369);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'G') ADVANCE(1225);
      if (lookahead == 'S') ADVANCE(1310);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'L') ADVANCE(1163);
      if (lookahead == 'O') ADVANCE(1186);
      if (lookahead == 'c') ADVANCE(1313);
      if (lookahead == 'o') ADVANCE(1560);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'L') ADVANCE(1447);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'M') ADVANCE(1294);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'M') ADVANCE(1210);
      if (lookahead == 'S') ADVANCE(1245);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'O') ADVANCE(1185);
      if (lookahead == 'a') ADVANCE(1331);
      if (lookahead == 'e') ADVANCE(1535);
      if (lookahead == 'o') ADVANCE(1267);
      if (lookahead == 'u') ADVANCE(1385);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'O') ADVANCE(1241);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'P') ADVANCE(1341);
      if (lookahead == 'S') ADVANCE(1187);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'P') ADVANCE(1396);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'P') ADVANCE(1218);
      if (lookahead == 'R') ADVANCE(1455);
      if (lookahead == 'p') ADVANCE(1503);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'P') ADVANCE(1219);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'P') ADVANCE(1391);
      if (lookahead == 'S') ADVANCE(1206);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'S') ADVANCE(1249);
      if (lookahead == 'T') ADVANCE(1562);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'S') ADVANCE(1334);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'S') ADVANCE(1291);
      if (lookahead == 'o') ADVANCE(1445);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'S') ADVANCE(1388);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'S') ADVANCE(1252);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'S') ADVANCE(1222);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'T') ADVANCE(1337);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1231);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1585);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(958);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1532);
      if (lookahead == 'e') ADVANCE(1461);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1532);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1189);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1268);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1563);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1234);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1243);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1582);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1462);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1414);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1384);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1260);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1382);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1383);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1351);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1501);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1531);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1355);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1486);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1564);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1371);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1542);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1406);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1546);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1240);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1583);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'a') ADVANCE(1584);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1078);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1132);
      if (lookahead == 'f') ADVANCE(1519);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1374);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1188);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1390);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1580);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1235);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1213);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1386);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1497);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1392);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1375);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'b') ADVANCE(1376);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1336);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1377);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1335);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1439);
      if (lookahead == 'n') ADVANCE(1465);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1195);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1549);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1489);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1279);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1525);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1496);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1527);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1281);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1528);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1287);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1378);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1538);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1394);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1306);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'c') ADVANCE(1338);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'd') ADVANCE(1168);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'd') ADVANCE(1021);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'd') ADVANCE(1165);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'd') ADVANCE(1147);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'd') ADVANCE(1003);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'd') ADVANCE(1506);
      if (lookahead == 'v') ADVANCE(1207);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'd') ADVANCE(1456);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'd') ADVANCE(1172);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1327);
      if (lookahead == 'i') ADVANCE(1401);
      if (lookahead == 'o') ADVANCE(1205);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1248);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1193);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1162);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1017);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1184);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1036);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1054);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1093);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1069);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(964);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(952);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1039);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1108);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1141);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1198);
      if (lookahead == 'm') ADVANCE(1099);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1423);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1483);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1265);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1239);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1427);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1381);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1490);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1492);
      if (lookahead == 'r') ADVANCE(1342);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1520);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1482);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1522);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1474);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1523);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1475);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1476);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1477);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1478);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1479);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1480);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1481);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1426);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1409);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1429);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1221);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1251);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1404);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1253);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1405);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1255);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1407);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1567);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'e') ADVANCE(1504);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'g') ADVANCE(1063);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'g') ADVANCE(1033);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'g') ADVANCE(955);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'g') ADVANCE(985);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'g') ADVANCE(1200);
      if (lookahead == 't') ADVANCE(1299);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'g') ADVANCE(1505);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'h') ADVANCE(1060);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'h') ADVANCE(1348);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'h') ADVANCE(1320);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'h') ADVANCE(1227);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'h') ADVANCE(1322);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'h') ADVANCE(1324);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1568);
      if (lookahead == 'o') ADVANCE(1470);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1508);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1574);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1573);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1467);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1517);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1247);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1507);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1537);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1459);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1529);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1464);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1415);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1250);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1259);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1449);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1417);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1418);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1530);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1421);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1424);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1216);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1533);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1468);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1540);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1493);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1254);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1428);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1565);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1393);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1256);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1432);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1569);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'i') ADVANCE(1553);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'j') ADVANCE(1319);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'j') ADVANCE(1321);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'j') ADVANCE(1323);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'k') ADVANCE(1332);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'k') ADVANCE(1302);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'k') ADVANCE(1301);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1262);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1042);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1051);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1144);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1194);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1534);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1579);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1437);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1352);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1453);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1275);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1209);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1280);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1282);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1284);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1448);
      if (lookahead == 'n') ADVANCE(1536);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1214);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'l') ADVANCE(1229);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1340);
      if (lookahead == 'n') ADVANCE(1548);
      if (lookahead == 'x') ADVANCE(1344);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(972);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1072);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1233);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1273);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1211);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1283);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1286);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1288);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1289);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1347);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1238);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1317);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'm') ADVANCE(1373);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1379);
      if (lookahead == 'y') ADVANCE(1181);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1066);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1102);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1170);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1081);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1000);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1328);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1263);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1554);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1329);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1264);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1514);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1330);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1266);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1274);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1547);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1277);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1524);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1298);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1544);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1311);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'n') ADVANCE(1173);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1572);
      if (lookahead == 'u') ADVANCE(1412);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1395);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1571);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1581);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1555);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1413);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1237);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1460);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1257);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1399);
      if (lookahead == 't') ADVANCE(1208);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1469);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1515);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1236);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1471);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1416);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1431);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1472);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1473);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1511);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1498);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1541);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1559);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'o') ADVANCE(1561);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1096);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1135);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1191);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1387);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1463);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1358);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1526);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1558);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1389);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1543);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'p') ADVANCE(1397);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1117);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(967);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(946);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1111);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1105);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1027);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1006);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1048);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1012);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1178);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(997);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1180);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1161);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1494);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1491);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1400);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1436);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1441);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1343);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1345);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1300);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1360);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1318);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1217);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1446);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1350);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1346);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1361);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1220);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1444);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1539);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1570);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1364);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1499);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'r') ADVANCE(1457);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1159);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(988);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1510);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1292);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1354);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1368);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1316);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1512);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1452);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 's') ADVANCE(1545);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1339);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1126);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1182);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1129);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(976);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1123);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(994);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1084);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1009);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1075);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1030);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(982);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1576);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1577);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1333);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1199);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1578);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1363);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1204);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1296);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1550);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1372);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1353);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1276);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1224);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1356);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1293);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1223);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1359);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1201);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1177);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1349);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1451);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1303);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1454);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1305);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 't') ADVANCE(1552);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1196);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1419);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1403);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1458);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1518);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1521);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1422);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1425);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'u') ADVANCE(1551);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'v') ADVANCE(1278);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'v') ADVANCE(1314);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'v') ADVANCE(1285);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'v') ADVANCE(1366);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'v') ADVANCE(1370);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'v') ADVANCE(1357);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'v') ADVANCE(1362);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'v') ADVANCE(1312);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'w') ADVANCE(1433);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'x') ADVANCE(970);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'x') ADVANCE(949);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'x') ADVANCE(1297);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'x') ADVANCE(1466);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(961);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(1120);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(1150);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(1089);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(1138);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(1410);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(1307);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(1308);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'y') ADVANCE(1309);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == 'z') ADVANCE(1367);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'y')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(1152);
      if (lookahead == '/') ADVANCE(1588);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(1588);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(1587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(1588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(1603);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(1593);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(1591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(sym_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(sym_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym_string);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1597);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1601);
      if (lookahead == '\r') ADVANCE(1599);
      if (lookahead == '\\') ADVANCE(1598);
      if (lookahead != 0) ADVANCE(1603);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1601);
      if (lookahead == '\\') ADVANCE(1157);
      if (lookahead != 0) ADVANCE(1603);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(1602);
      if (lookahead == '\\') ADVANCE(1600);
      if (lookahead != 0) ADVANCE(1601);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1601);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1601);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1603);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 469, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 17, .external_lex_state = 2},
  [4] = {.lex_state = 469, .external_lex_state = 2},
  [5] = {.lex_state = 469, .external_lex_state = 2},
  [6] = {.lex_state = 469, .external_lex_state = 3},
  [7] = {.lex_state = 469, .external_lex_state = 3},
  [8] = {.lex_state = 469, .external_lex_state = 2},
  [9] = {.lex_state = 19, .external_lex_state = 2},
  [10] = {.lex_state = 19, .external_lex_state = 2},
  [11] = {.lex_state = 19, .external_lex_state = 4},
  [12] = {.lex_state = 469, .external_lex_state = 2},
  [13] = {.lex_state = 469, .external_lex_state = 2},
  [14] = {.lex_state = 469, .external_lex_state = 2},
  [15] = {.lex_state = 469, .external_lex_state = 2},
  [16] = {.lex_state = 469, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 4},
  [19] = {.lex_state = 469, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 4},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 18, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 4},
  [24] = {.lex_state = 19, .external_lex_state = 4},
  [25] = {.lex_state = 19, .external_lex_state = 4},
  [26] = {.lex_state = 19, .external_lex_state = 4},
  [27] = {.lex_state = 19, .external_lex_state = 4},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 17, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 3},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_IncludeFile] = ACTIONS(1),
    [anon_sym_DataModule] = ACTIONS(1),
    [anon_sym_SettingsMan] = ACTIONS(1),
    [aux_sym_presetDefinition_token1] = ACTIONS(1),
    [sym__assignment] = ACTIONS(1),
    [anon_sym_Vector] = ACTIONS(1),
    [anon_sym_Matrix] = ACTIONS(1),
    [anon_sym_InputScheme] = ACTIONS(1),
    [anon_sym_InputMapping] = ACTIONS(1),
    [anon_sym_GenericSavedData] = ACTIONS(1),
    [anon_sym_Entity] = ACTIONS(1),
    [anon_sym_ContentFile] = ACTIONS(1),
    [anon_sym_Color] = ACTIONS(1),
    [anon_sym_Box] = ACTIONS(1),
    [anon_sym_Atom] = ACTIONS(1),
    [anon_sym_Turret] = ACTIONS(1),
    [anon_sym_ThrownDevice] = ACTIONS(1),
    [anon_sym_TerrainObject] = ACTIONS(1),
    [anon_sym_TerrainFrosting] = ACTIONS(1),
    [anon_sym_TerrainDebris] = ACTIONS(1),
    [anon_sym_TDExplosive] = ACTIONS(1),
    [anon_sym_SoundSet] = ACTIONS(1),
    [anon_sym_SoundContainer] = ACTIONS(1),
    [anon_sym_SLTerrain] = ACTIONS(1),
    [anon_sym_SLBackground] = ACTIONS(1),
    [anon_sym_SOPlacer] = ACTIONS(1),
    [anon_sym_SceneObject] = ACTIONS(1),
    [anon_sym_SceneLayer] = ACTIONS(1),
    [anon_sym_Area] = ACTIONS(1),
    [anon_sym_Scene] = ACTIONS(1),
    [anon_sym_Round] = ACTIONS(1),
    [anon_sym_PieSlice] = ACTIONS(1),
    [anon_sym_PEmitter] = ACTIONS(1),
    [anon_sym_MovableObject] = ACTIONS(1),
    [anon_sym_MOSRotating] = ACTIONS(1),
    [anon_sym_MOSprite] = ACTIONS(1),
    [anon_sym_MOSParticle] = ACTIONS(1),
    [anon_sym_MOPixel] = ACTIONS(1),
    [anon_sym_MetaSave] = ACTIONS(1),
    [anon_sym_MetaPlayer] = ACTIONS(1),
    [anon_sym_Material] = ACTIONS(1),
    [anon_sym_Magazine] = ACTIONS(1),
    [anon_sym_Loadout] = ACTIONS(1),
    [anon_sym_LimbPath] = ACTIONS(1),
    [anon_sym_Leg] = ACTIONS(1),
    [anon_sym_Icon] = ACTIONS(1),
    [anon_sym_HeldDevice] = ACTIONS(1),
    [anon_sym_HDFirearm] = ACTIONS(1),
    [anon_sym_GlobalScript] = ACTIONS(1),
    [anon_sym_Gib] = ACTIONS(1),
    [anon_sym_Emission] = ACTIONS(1),
    [anon_sym_Deployment] = ACTIONS(1),
    [anon_sym_BunkerAssemblyScheme] = ACTIONS(1),
    [anon_sym_BunkerAssembly] = ACTIONS(1),
    [anon_sym_Attachable] = ACTIONS(1),
    [anon_sym_AtomGroup] = ACTIONS(1),
    [anon_sym_Arm] = ACTIONS(1),
    [anon_sym_AHuman] = ACTIONS(1),
    [anon_sym_AEmitter] = ACTIONS(1),
    [anon_sym_BuyMenuTheme] = ACTIONS(1),
    [anon_sym_ADSensor] = ACTIONS(1),
    [anon_sym_ADoor] = ACTIONS(1),
    [anon_sym_Actor] = ACTIONS(1),
    [anon_sym_Activity] = ACTIONS(1),
    [anon_sym_ACRocket] = ACTIONS(1),
    [anon_sym_Exit] = ACTIONS(1),
    [anon_sym_ACraft] = ACTIONS(1),
    [anon_sym_ACrab] = ACTIONS(1),
    [anon_sym_ACDropShip] = ACTIONS(1),
    [anon_sym_MultiplayerServerLobby] = ACTIONS(1),
    [anon_sym_MultiplayerGame] = ACTIONS(1),
    [anon_sym_GATutorial] = ACTIONS(1),
    [anon_sym_GAScripted] = ACTIONS(1),
    [anon_sym_GameActivity] = ACTIONS(1),
    [sym_fileExtension] = ACTIONS(1),
    [sym__integer] = ACTIONS(1),
    [sym__float] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__definition] = STATE(4),
    [sym_includeFile] = STATE(4),
    [sym_dataModule] = STATE(4),
    [sym_settings] = STATE(4),
    [sym_presetDefinition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_IncludeFile] = ACTIONS(7),
    [anon_sym_DataModule] = ACTIONS(9),
    [anon_sym_SettingsMan] = ACTIONS(11),
    [aux_sym_presetDefinition_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(24),
    [sym_classDefinition] = STATE(24),
    [sym_className] = STATE(37),
    [sym_modulePath] = STATE(24),
    [sym_number] = STATE(24),
    [anon_sym_Vector] = ACTIONS(15),
    [anon_sym_Matrix] = ACTIONS(15),
    [anon_sym_InputScheme] = ACTIONS(15),
    [anon_sym_InputMapping] = ACTIONS(15),
    [anon_sym_GenericSavedData] = ACTIONS(15),
    [anon_sym_Entity] = ACTIONS(15),
    [anon_sym_ContentFile] = ACTIONS(15),
    [anon_sym_Color] = ACTIONS(15),
    [anon_sym_Box] = ACTIONS(15),
    [anon_sym_Atom] = ACTIONS(15),
    [anon_sym_Turret] = ACTIONS(15),
    [anon_sym_ThrownDevice] = ACTIONS(15),
    [anon_sym_TerrainObject] = ACTIONS(15),
    [anon_sym_TerrainFrosting] = ACTIONS(15),
    [anon_sym_TerrainDebris] = ACTIONS(15),
    [anon_sym_TDExplosive] = ACTIONS(15),
    [anon_sym_SoundSet] = ACTIONS(15),
    [anon_sym_SoundContainer] = ACTIONS(15),
    [anon_sym_SLTerrain] = ACTIONS(15),
    [anon_sym_SLBackground] = ACTIONS(15),
    [anon_sym_SOPlacer] = ACTIONS(15),
    [anon_sym_SceneObject] = ACTIONS(15),
    [anon_sym_SceneLayer] = ACTIONS(15),
    [anon_sym_Area] = ACTIONS(15),
    [anon_sym_Scene] = ACTIONS(15),
    [anon_sym_Round] = ACTIONS(15),
    [anon_sym_PieSlice] = ACTIONS(15),
    [anon_sym_PEmitter] = ACTIONS(15),
    [anon_sym_MovableObject] = ACTIONS(15),
    [anon_sym_MOSRotating] = ACTIONS(15),
    [anon_sym_MOSprite] = ACTIONS(15),
    [anon_sym_MOSParticle] = ACTIONS(15),
    [anon_sym_MOPixel] = ACTIONS(15),
    [anon_sym_MetaSave] = ACTIONS(15),
    [anon_sym_MetaPlayer] = ACTIONS(15),
    [anon_sym_Material] = ACTIONS(15),
    [anon_sym_Magazine] = ACTIONS(15),
    [anon_sym_Loadout] = ACTIONS(15),
    [anon_sym_LimbPath] = ACTIONS(15),
    [anon_sym_Leg] = ACTIONS(15),
    [anon_sym_Icon] = ACTIONS(15),
    [anon_sym_HeldDevice] = ACTIONS(15),
    [anon_sym_HDFirearm] = ACTIONS(15),
    [anon_sym_GlobalScript] = ACTIONS(15),
    [anon_sym_Gib] = ACTIONS(15),
    [anon_sym_Emission] = ACTIONS(15),
    [anon_sym_Deployment] = ACTIONS(15),
    [anon_sym_BunkerAssemblyScheme] = ACTIONS(15),
    [anon_sym_BunkerAssembly] = ACTIONS(15),
    [anon_sym_Attachable] = ACTIONS(15),
    [anon_sym_AtomGroup] = ACTIONS(15),
    [anon_sym_Arm] = ACTIONS(15),
    [anon_sym_AHuman] = ACTIONS(15),
    [anon_sym_AEmitter] = ACTIONS(15),
    [anon_sym_BuyMenuTheme] = ACTIONS(15),
    [anon_sym_ADSensor] = ACTIONS(15),
    [anon_sym_ADoor] = ACTIONS(15),
    [anon_sym_Actor] = ACTIONS(15),
    [anon_sym_Activity] = ACTIONS(15),
    [anon_sym_ACRocket] = ACTIONS(15),
    [anon_sym_Exit] = ACTIONS(15),
    [anon_sym_ACraft] = ACTIONS(15),
    [anon_sym_ACrab] = ACTIONS(15),
    [anon_sym_ACDropShip] = ACTIONS(15),
    [anon_sym_MultiplayerServerLobby] = ACTIONS(15),
    [anon_sym_MultiplayerGame] = ACTIONS(15),
    [anon_sym_GATutorial] = ACTIONS(15),
    [anon_sym_GAScripted] = ACTIONS(15),
    [anon_sym_GameActivity] = ACTIONS(15),
    [aux_sym_modulePath_token1] = ACTIONS(17),
    [sym__integer] = ACTIONS(19),
    [sym__float] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_classDefinition] = STATE(12),
    [sym_className] = STATE(35),
    [anon_sym_Vector] = ACTIONS(25),
    [anon_sym_Matrix] = ACTIONS(25),
    [anon_sym_InputScheme] = ACTIONS(25),
    [anon_sym_InputMapping] = ACTIONS(25),
    [anon_sym_GenericSavedData] = ACTIONS(25),
    [anon_sym_Entity] = ACTIONS(25),
    [anon_sym_ContentFile] = ACTIONS(25),
    [anon_sym_Color] = ACTIONS(25),
    [anon_sym_Box] = ACTIONS(25),
    [anon_sym_Atom] = ACTIONS(15),
    [anon_sym_Turret] = ACTIONS(25),
    [anon_sym_ThrownDevice] = ACTIONS(25),
    [anon_sym_TerrainObject] = ACTIONS(25),
    [anon_sym_TerrainFrosting] = ACTIONS(25),
    [anon_sym_TerrainDebris] = ACTIONS(25),
    [anon_sym_TDExplosive] = ACTIONS(25),
    [anon_sym_SoundSet] = ACTIONS(25),
    [anon_sym_SoundContainer] = ACTIONS(25),
    [anon_sym_SLTerrain] = ACTIONS(25),
    [anon_sym_SLBackground] = ACTIONS(25),
    [anon_sym_SOPlacer] = ACTIONS(25),
    [anon_sym_SceneObject] = ACTIONS(25),
    [anon_sym_SceneLayer] = ACTIONS(25),
    [anon_sym_Area] = ACTIONS(25),
    [anon_sym_Scene] = ACTIONS(15),
    [anon_sym_Round] = ACTIONS(25),
    [anon_sym_PieSlice] = ACTIONS(25),
    [anon_sym_PEmitter] = ACTIONS(25),
    [anon_sym_MovableObject] = ACTIONS(25),
    [anon_sym_MOSRotating] = ACTIONS(25),
    [anon_sym_MOSprite] = ACTIONS(25),
    [anon_sym_MOSParticle] = ACTIONS(25),
    [anon_sym_MOPixel] = ACTIONS(25),
    [anon_sym_MetaSave] = ACTIONS(25),
    [anon_sym_MetaPlayer] = ACTIONS(25),
    [anon_sym_Material] = ACTIONS(25),
    [anon_sym_Magazine] = ACTIONS(25),
    [anon_sym_Loadout] = ACTIONS(25),
    [anon_sym_LimbPath] = ACTIONS(25),
    [anon_sym_Leg] = ACTIONS(25),
    [anon_sym_Icon] = ACTIONS(25),
    [anon_sym_HeldDevice] = ACTIONS(25),
    [anon_sym_HDFirearm] = ACTIONS(25),
    [anon_sym_GlobalScript] = ACTIONS(25),
    [anon_sym_Gib] = ACTIONS(25),
    [anon_sym_Emission] = ACTIONS(25),
    [anon_sym_Deployment] = ACTIONS(25),
    [anon_sym_BunkerAssemblyScheme] = ACTIONS(25),
    [anon_sym_BunkerAssembly] = ACTIONS(15),
    [anon_sym_Attachable] = ACTIONS(25),
    [anon_sym_AtomGroup] = ACTIONS(25),
    [anon_sym_Arm] = ACTIONS(25),
    [anon_sym_AHuman] = ACTIONS(25),
    [anon_sym_AEmitter] = ACTIONS(25),
    [anon_sym_BuyMenuTheme] = ACTIONS(25),
    [anon_sym_ADSensor] = ACTIONS(25),
    [anon_sym_ADoor] = ACTIONS(25),
    [anon_sym_Actor] = ACTIONS(25),
    [anon_sym_Activity] = ACTIONS(25),
    [anon_sym_ACRocket] = ACTIONS(25),
    [anon_sym_Exit] = ACTIONS(25),
    [anon_sym_ACraft] = ACTIONS(25),
    [anon_sym_ACrab] = ACTIONS(25),
    [anon_sym_ACDropShip] = ACTIONS(25),
    [anon_sym_MultiplayerServerLobby] = ACTIONS(25),
    [anon_sym_MultiplayerGame] = ACTIONS(25),
    [anon_sym_GATutorial] = ACTIONS(25),
    [anon_sym_GAScripted] = ACTIONS(25),
    [anon_sym_GameActivity] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_IncludeFile,
    ACTIONS(9), 1,
      anon_sym_DataModule,
    ACTIONS(11), 1,
      anon_sym_SettingsMan,
    ACTIONS(13), 1,
      aux_sym_presetDefinition_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 6,
      sym__definition,
      sym_includeFile,
      sym_dataModule,
      sym_settings,
      sym_presetDefinition,
      aux_sym_source_file_repeat1,
  [28] = 7,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_IncludeFile,
    ACTIONS(34), 1,
      anon_sym_DataModule,
    ACTIONS(37), 1,
      anon_sym_SettingsMan,
    ACTIONS(40), 1,
      aux_sym_presetDefinition_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(5), 6,
      sym__definition,
      sym_includeFile,
      sym_dataModule,
      sym_settings,
      sym_presetDefinition,
      aux_sym_source_file_repeat1,
  [56] = 4,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(45), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [73] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(51), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [90] = 3,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(57), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [104] = 5,
    ACTIONS(59), 1,
      aux_sym_presetDefinition_token1,
    STATE(8), 1,
      sym__block,
    STATE(32), 1,
      sym_property,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(11), 2,
      sym_statement,
      aux_sym__block_repeat1,
  [122] = 5,
    ACTIONS(59), 1,
      aux_sym_presetDefinition_token1,
    STATE(13), 1,
      sym__block,
    STATE(32), 1,
      sym_property,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(11), 2,
      sym_statement,
      aux_sym__block_repeat1,
  [140] = 5,
    ACTIONS(59), 1,
      aux_sym_presetDefinition_token1,
    ACTIONS(61), 1,
      sym__dedent,
    STATE(32), 1,
      sym_property,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(18), 2,
      sym_statement,
      aux_sym__block_repeat1,
  [158] = 3,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(65), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [172] = 3,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [186] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(73), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [200] = 3,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [214] = 3,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(81), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [228] = 5,
    ACTIONS(59), 1,
      aux_sym_presetDefinition_token1,
    STATE(19), 1,
      sym__block,
    STATE(32), 1,
      sym_property,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(11), 2,
      sym_statement,
      aux_sym__block_repeat1,
  [246] = 5,
    ACTIONS(83), 1,
      aux_sym_presetDefinition_token1,
    ACTIONS(86), 1,
      sym__dedent,
    STATE(32), 1,
      sym_property,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(18), 2,
      sym_statement,
      aux_sym__block_repeat1,
  [264] = 3,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(90), 4,
      anon_sym_IncludeFile,
      anon_sym_DataModule,
      anon_sym_SettingsMan,
      aux_sym_presetDefinition_token1,
  [278] = 5,
    ACTIONS(59), 1,
      aux_sym_presetDefinition_token1,
    ACTIONS(92), 1,
      sym__dedent,
    STATE(32), 1,
      sym_property,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(18), 2,
      sym_statement,
      aux_sym__block_repeat1,
  [296] = 5,
    ACTIONS(59), 1,
      aux_sym_presetDefinition_token1,
    STATE(26), 1,
      sym__block,
    STATE(32), 1,
      sym_property,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    STATE(20), 2,
      sym_statement,
      aux_sym__block_repeat1,
  [314] = 3,
    ACTIONS(94), 1,
      aux_sym_modulePath_token1,
    STATE(14), 1,
      sym_modulePath,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [325] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(96), 2,
      sym__dedent,
      aux_sym_presetDefinition_token1,
  [334] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(98), 2,
      sym__dedent,
      aux_sym_presetDefinition_token1,
  [343] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(79), 2,
      sym__dedent,
      aux_sym_presetDefinition_token1,
  [352] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(88), 2,
      sym__dedent,
      aux_sym_presetDefinition_token1,
  [361] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
    ACTIONS(75), 2,
      sym__dedent,
      aux_sym_presetDefinition_token1,
  [370] = 2,
    ACTIONS(100), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [378] = 2,
    ACTIONS(102), 1,
      sym_fileExtension,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [386] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [394] = 2,
    ACTIONS(106), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [402] = 2,
    ACTIONS(108), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [410] = 2,
    ACTIONS(110), 1,
      sym__assignment,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [418] = 2,
    ACTIONS(112), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [426] = 2,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [434] = 2,
    ACTIONS(116), 1,
      sym_fileExtension,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
  [442] = 2,
    ACTIONS(118), 1,
      sym__indent,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 172,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 246,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 314,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 343,
  [SMALL_STATE(26)] = 352,
  [SMALL_STATE(27)] = 361,
  [SMALL_STATE(28)] = 370,
  [SMALL_STATE(29)] = 378,
  [SMALL_STATE(30)] = 386,
  [SMALL_STATE(31)] = 394,
  [SMALL_STATE(32)] = 402,
  [SMALL_STATE(33)] = 410,
  [SMALL_STATE(34)] = 418,
  [SMALL_STATE(35)] = 426,
  [SMALL_STATE(36)] = 434,
  [SMALL_STATE(37)] = 442,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataModule, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataModule, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataModule, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dataModule, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_presetDefinition, 3, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_presetDefinition, 3, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_includeFile, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_includeFile, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulePath, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulePath, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDefinition, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classDefinition, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_className, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token_block_comment = 3,
  ts_external_token_comment = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_block_comment] = sym_block_comment,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ccini_external_scanner_create(void);
void tree_sitter_ccini_external_scanner_destroy(void *);
bool tree_sitter_ccini_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ccini_external_scanner_serialize(void *, char *);
void tree_sitter_ccini_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ccini(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ccini_external_scanner_create,
      tree_sitter_ccini_external_scanner_destroy,
      tree_sitter_ccini_external_scanner_scan,
      tree_sitter_ccini_external_scanner_serialize,
      tree_sitter_ccini_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
