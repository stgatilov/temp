
#ifndef __GAMETYPEINFO_H__
#define __GAMETYPEINFO_H__

/*
===================================================================================

	This file has been generated with the Type Info Generator v1.0 (c) 2004 id Software

	1914 constants
	217 enums
	814 classes/structs/unions
	44 templates
	7 max inheritance level for 'CAIVehicle'

===================================================================================
*/

typedef struct {
	const char * name;
	const char * type;
	const char * value;
} constantInfo_t;

typedef struct {
	const char * name;
	int value;
} enumValueInfo_t;

typedef struct {
	const char * typeName;
	const enumValueInfo_t * values;
} enumTypeInfo_t;

typedef struct {
	const char * type;
	const char * name;
	ptrdiff_t offset;
	ptrdiff_t size;
} classVariableInfo_t;

typedef struct {
	const char * typeName;
	const char * superType;
	ptrdiff_t size;
	const classVariableInfo_t * variables;
} classTypeInfo_t;

static constantInfo_t constantInfo[] = {
	{ "const float", "MAX_ENTITY_COORDINATE", "64000.0" },
	{ "int", "CORE_ANY", "-1" },
	{ "int", "CORE_0A", "0" },
	{ "int", "CORE_0B", "1" },
	{ "int", "CORE_1A", "2" },
	{ "int", "CORE_1B", "3" },
	{ "int", "CORE_2A", "4" },
	{ "int", "CORE_2B", "5" },
	{ "int", "THREAD_LOWEST", "0" },
	{ "int", "THREAD_BELOW_NORMAL", "1" },
	{ "int", "THREAD_NORMAL", "2" },
	{ "int", "THREAD_ABOVE_NORMAL", "3" },
	{ "int", "THREAD_HIGHEST", "4" },
	{ "const int", "MAX_CRITICAL_SECTIONS", "4" },
	{ "int", "CRITICAL_SECTION_ZERO", "0" },
	{ "int", "CRITICAL_SECTION_ONE", "1" },
	{ "int", "CRITICAL_SECTION_TWO", "2" },
	{ "int", "CRITICAL_SECTION_THREE", "3" },
	{ "int", "CPUID_NONE", "0" },
	{ "int", "CPUID_UNSUPPORTED", "1" },
	{ "int", "CPUID_GENERIC", "2" },
	{ "int", "CPUID_INTEL", "4" },
	{ "int", "CPUID_AMD", "8" },
	{ "int", "CPUID_SSE", "32" },
	{ "int", "CPUID_SSE2", "64" },
	{ "int", "CPUID_SSE3", "128" },
	{ "int", "CPUID_SSSE3", "256" },
	{ "int", "CPUID_SSE41", "512" },
	{ "int", "CPUID_AVX", "1024" },
	{ "int", "CPUID_AVX2", "2048" },
	{ "int", "CPUID_FMA3", "4096" },
	{ "int", "CPUID_FTZ", "16384" },
	{ "int", "CPUID_DAZ", "32768" },
	{ "int", "FPU_ROUNDING_TO_NEAREST", "0" },
	{ "int", "FPU_ROUNDING_DOWN", "1" },
	{ "int", "FPU_ROUNDING_UP", "2" },
	{ "int", "FPU_ROUNDING_TO_ZERO", "3" },
	{ "int", "AXIS_SIDE", "0" },
	{ "int", "AXIS_FORWARD", "1" },
	{ "int", "AXIS_UP", "2" },
	{ "int", "AXIS_ROLL", "3" },
	{ "int", "AXIS_YAW", "4" },
	{ "int", "AXIS_PITCH", "5" },
	{ "int", "MAX_JOYSTICK_AXIS", "6" },
	{ "int", "SE_NONE", "0" },
	{ "int", "SE_KEY", "1" },
	{ "int", "SE_CHAR", "2" },
	{ "int", "SE_MOUSE", "3" },
	{ "int", "SE_PAD_BUTTON", "4" },
	{ "int", "SE_PAD_AXIS", "5" },
	{ "int", "SE_CONSOLE", "6" },
	{ "int", "M_ACTION1", "0" },
	{ "int", "M_ACTION2", "1" },
	{ "int", "M_ACTION3", "2" },
	{ "int", "M_ACTION4", "3" },
	{ "int", "M_ACTION5", "4" },
	{ "int", "M_ACTION6", "5" },
	{ "int", "M_ACTION7", "6" },
	{ "int", "M_ACTION8", "7" },
	{ "int", "M_DELTAX", "8" },
	{ "int", "M_DELTAY", "9" },
	{ "int", "M_DELTAZ", "10" },
	{ "static const int", "debugStackFrame_t::MAX_LEN", "88" },
	{ "int", "NA_BAD", "0" },
	{ "int", "NA_LOOPBACK", "1" },
	{ "int", "NA_BROADCAST", "2" },
	{ "int", "NA_IP", "3" },
	{ "const int", "MAX_TRIGGER_EVENTS", "4" },
	{ "int", "TRIGGER_EVENT_ZERO", "0" },
	{ "int", "TRIGGER_EVENT_ONE", "1" },
	{ "int", "TRIGGER_EVENT_TWO", "2" },
	{ "int", "TRIGGER_EVENT_THREE", "3" },
	{ "const int", "MIXBUFFER_SAMPLES", "4096" },
	{ "int", "SPEAKER_LEFT", "0" },
	{ "int", "SPEAKER_RIGHT", "1" },
	{ "int", "SPEAKER_CENTER", "2" },
	{ "int", "SPEAKER_LFE", "3" },
	{ "int", "SPEAKER_BACKLEFT", "4" },
	{ "int", "SPEAKER_BACKRIGHT", "5" },
	{ "int", "idMath::LOOKUP_BITS", "8" },
	{ "int", "idMath::EXP_POS", "23" },
	{ "int", "idMath::EXP_BIAS", "127" },
	{ "int", "idMath::LOOKUP_POS", "15" },
	{ "int", "idMath::SEED_POS", "15" },
	{ "int", "idMath::SQRT_TABLE_SIZE", "512" },
	{ "int", "idMath::LOOKUP_MASK", "511" },
	{ "static const int", "idRandom::MAX_RAND", "0x7fff" },
	{ "static const int", "idRandom2::MAX_RAND", "0x7fff" },
	{ "static const unsigned int", "idRandom2::IEEE_ONE", "0x3f800000" },
	{ "static const unsigned int", "idRandom2::IEEE_MASK", "0x007fffff" },
	{ "int", "EXTRAPOLATION_NONE", "1" },
	{ "int", "EXTRAPOLATION_LINEAR", "2" },
	{ "int", "EXTRAPOLATION_ACCELLINEAR", "4" },
	{ "int", "EXTRAPOLATION_DECELLINEAR", "8" },
	{ "int", "EXTRAPOLATION_ACCELSINE", "16" },
	{ "int", "EXTRAPOLATION_DECELSINE", "32" },
	{ "int", "EXTRAPOLATION_NOSTOP", "64" },
	{ "int", "idCurve_Spline< class type >::BT_FREE", "0" },
	{ "int", "idCurve_Spline< class type >::BT_CLAMPED", "1" },
	{ "int", "idCurve_Spline< class type >::BT_CLOSED", "2" },
	{ "static const int", "NUM_FRUSTUM_CORNERS", "8" },
	{ "int", "FRUSTUM_CULL_FRONT", "1" },
	{ "int", "FRUSTUM_CULL_BACK", "2" },
	{ "int", "FRUSTUM_CULL_CROSS", "3" },
	{ "int", "INCIDENT_PLANE_DELETE", "0" },
	{ "int", "INCIDENT_PLANE_RETAIN_CODIRECT", "1" },
	{ "int", "INCIDENT_PLANE_RETAIN_OPPOSITE", "2" },
	{ "int", "INCIDENT_PLANE_RETAIN", "3" },
	{ "int", "TRM_INVALID", "0" },
	{ "int", "TRM_BOX", "1" },
	{ "int", "TRM_OCTAHEDRON", "2" },
	{ "int", "TRM_DODECAHEDRON", "3" },
	{ "int", "TRM_CYLINDER", "4" },
	{ "int", "TRM_CONE", "5" },
	{ "int", "TRM_BONE", "6" },
	{ "int", "TRM_POLYGON", "7" },
	{ "int", "TRM_POLYGONVOLUME", "8" },
	{ "int", "TRM_CUSTOM", "9" },
	{ "const int", "C_COLOR_ESCAPE", "^" },
	{ "const int", "C_COLOR_DEFAULT", "0" },
	{ "const int", "C_COLOR_RED", "1" },
	{ "const int", "C_COLOR_GREEN", "2" },
	{ "const int", "C_COLOR_YELLOW", "3" },
	{ "const int", "C_COLOR_BLUE", "4" },
	{ "const int", "C_COLOR_CYAN", "5" },
	{ "const int", "C_COLOR_MAGENTA", "6" },
	{ "const int", "C_COLOR_WHITE", "7" },
	{ "const int", "C_COLOR_GRAY", "8" },
	{ "const int", "C_COLOR_BLACK", "9" },
	{ "const int", "STR_ALLOC_BASE", "16" },
	{ "const int", "STR_ALLOC_GRAN", "32" },
	{ "int", "MEASURE_SIZE", "0" },
	{ "int", "MEASURE_BANDWIDTH", "1" },
	{ "int", "LEXFL_NOERRORS", "10" },
	{ "int", "LEXFL_NOWARNINGS", "20" },
	{ "int", "LEXFL_NOFATALERRORS", "40" },
	{ "int", "LEXFL_NOSTRINGCONCAT", "80" },
	{ "int", "LEXFL_NOSTRINGESCAPECHARS", "160" },
	{ "int", "LEXFL_NODOLLARPRECOMPILE", "320" },
	{ "int", "LEXFL_NOBASEINCLUDES", "640" },
	{ "int", "LEXFL_ALLOWPATHNAMES", "1280" },
	{ "int", "LEXFL_ALLOWNUMBERNAMES", "2560" },
	{ "int", "LEXFL_ALLOWIPADDRESSES", "5120" },
	{ "int", "LEXFL_ALLOWFLOATEXCEPTIONS", "10240" },
	{ "int", "LEXFL_ALLOWMULTICHARLITERALS", "20480" },
	{ "int", "LEXFL_ALLOWBACKSLASHSTRINGCONCAT", "40960" },
	{ "int", "LEXFL_ONLYSTRINGS", "81920" },
	{ "static const int", "idCmdArgs::MAX_COMMAND_ARGS", "64" },
	{ "static const int", "idCmdArgs::MAX_COMMAND_STRING", "2*1024" },
	{ "const int", "OLD_MAP_VERSION", "1" },
	{ "const int", "CURRENT_MAP_VERSION", "2" },
	{ "const int", "DEFAULT_CURVE_SUBDIVISION", "4" },
	{ "const float", "DEFAULT_CURVE_MAX_ERROR", "4.0" },
	{ "const float", "DEFAULT_CURVE_MAX_ERROR_CD", "24.0" },
	{ "const float", "DEFAULT_CURVE_MAX_LENGTH", "-1.0" },
	{ "const float", "DEFAULT_CURVE_MAX_LENGTH_CD", "-1.0" },
	{ "int", "idMapPrimitive::TYPE_INVALID", "-1" },
	{ "int", "idMapPrimitive::TYPE_BRUSH", "0" },
	{ "int", "idMapPrimitive::TYPE_PATCH", "1" },
	{ "int", "idTimer::TS_STARTED", "0" },
	{ "int", "idTimer::TS_STOPPED", "1" },
	{ "static const int", "idSysSignal::WAIT_INFINITE", "-1" },
	{ "static const int", "idSysThreadSynchronizer::WAIT_INFINITE", "-1" },
	{ "int", "SYNC_NONE", "0" },
	{ "int", "SYNC_SIGNAL", "1" },
	{ "int", "SYNC_SYNCHRONIZE", "2" },
	{ "int", "JOBLIST_RENDERER_FRONTEND", "0" },
	{ "int", "JOBLIST_RENDERER_BACKEND", "1" },
	{ "int", "JOBLIST_UTILITY", "9" },
	{ "int", "MAX_JOBLISTS", "32" },
	{ "int", "JOBLIST_PRIORITY_NONE", "0" },
	{ "int", "JOBLIST_PRIORITY_LOW", "1" },
	{ "int", "JOBLIST_PRIORITY_MEDIUM", "2" },
	{ "int", "JOBLIST_PRIORITY_HIGH", "3" },
	{ "int", "JOBLIST_PARALLELISM_DEFAULT", "-1" },
	{ "int", "JOBLIST_PARALLELISM_MAX_CORES", "-2" },
	{ "int", "JOBLIST_PARALLELISM_MAX_THREADS", "-3" },
	{ "int", "CMD_FL_ALL", "-1" },
	{ "int", "CMD_FL_CHEAT", "10" },
	{ "int", "CMD_FL_SYSTEM", "20" },
	{ "int", "CMD_FL_RENDERER", "40" },
	{ "int", "CMD_FL_SOUND", "80" },
	{ "int", "CMD_FL_GAME", "160" },
	{ "int", "CMD_FL_TOOL", "320" },
	{ "int", "CMD_EXEC_NOW", "0" },
	{ "int", "CMD_EXEC_INSERT", "1" },
	{ "int", "CMD_EXEC_APPEND", "2" },
	{ "int", "CVAR_ALL", "-1" },
	{ "int", "CVAR_BOOL", "10" },
	{ "int", "CVAR_INTEGER", "20" },
	{ "int", "CVAR_FLOAT", "40" },
	{ "int", "CVAR_SYSTEM", "80" },
	{ "int", "CVAR_RENDERER", "160" },
	{ "int", "CVAR_SOUND", "320" },
	{ "int", "CVAR_GUI", "640" },
	{ "int", "CVAR_GAME", "1280" },
	{ "int", "CVAR_TOOL", "2560" },
	{ "int", "CVAR_USERINFO", "5120" },
	{ "int", "CVAR_SERVERINFO", "10240" },
	{ "int", "CVAR_NETWORKSYNC", "20480" },
	{ "int", "CVAR_STATIC", "40960" },
	{ "int", "CVAR_NOCHEAT", "163840" },
	{ "int", "CVAR_INIT", "327680" },
	{ "int", "CVAR_ROM", "655360" },
	{ "int", "CVAR_ARCHIVE", "1310720" },
	{ "int", "CVAR_MODIFIED", "2621440" },
	{ "int", "EDITOR_NONE", "0" },
	{ "int", "EDITOR_RADIANT", "20" },
	{ "int", "EDITOR_GUI", "40" },
	{ "int", "EDITOR_SCRIPT", "160" },
	{ "int", "EDITOR_LIGHT", "320" },
	{ "int", "EDITOR_SOUND", "640" },
	{ "int", "EDITOR_DECL", "1280" },
	{ "int", "EDITOR_AF", "2560" },
	{ "int", "EDITOR_PARTICLE", "5120" },
	{ "int", "EDITOR_AAS", "20480" },
	{ "int", "EDITOR_MATERIAL", "40960" },
	{ "int", "EDITOR_RUNPARTICLE", "81920" },
	{ "int", "LOAD_KEY_START", "1" },
	{ "int", "LOAD_KEY_COLLISION_START", "2" },
	{ "int", "LOAD_KEY_COLLISION_DONE", "3" },
	{ "int", "LOAD_KEY_SPAWN_ENTITIES_START", "4" },
	{ "int", "LOAD_KEY_SPAWN_ENTITIES_INTERIM", "5" },
	{ "int", "LOAD_KEY_ROUTING_START", "6" },
	{ "int", "LOAD_KEY_ROUTING_INTERIM", "7" },
	{ "int", "LOAD_KEY_ROUTING_DONE", "8" },
	{ "int", "LOAD_KEY_IMAGES_START", "9" },
	{ "int", "LOAD_KEY_IMAGES_INTERIM", "10" },
	{ "int", "LOAD_KEY_DONE", "11" },
	{ "int", "idCommon::eConfigExport_cvars", "0" },
	{ "int", "idCommon::eConfigExport_keybinds", "1" },
	{ "int", "idCommon::eConfigExport_padbinds", "2" },
	{ "int", "idCommon::eConfigExport_all", "3" },
	{ "int", "FS_SEEK_CUR", "0" },
	{ "int", "FS_SEEK_END", "1" },
	{ "int", "FS_SEEK_SET", "2" },
	{ "static const time_t", "idFile_InZip::fileLastMod", "0" },
	{ "static const time_t", "FILE_NOT_FOUND_TIMESTAMP", "-1" },
	{ "static const int", "MAX_PURE_PAKS", "128" },
	{ "static const int", "MAX_OSPATH", "256" },
	{ "int", "FS_READ", "0" },
	{ "int", "FS_WRITE", "1" },
	{ "int", "FS_APPEND", "2" },
	{ "int", "DLTYPE_URL", "0" },
	{ "int", "DLTYPE_FILE", "1" },
	{ "int", "DL_WAIT", "0" },
	{ "int", "DL_INPROGRESS", "1" },
	{ "int", "DL_DONE", "2" },
	{ "int", "DL_ABORTING", "3" },
	{ "int", "DL_FAILED", "4" },
	{ "int", "FILE_EXEC", "0" },
	{ "int", "FILE_OPEN", "1" },
	{ "int", "FIND_NO", "0" },
	{ "int", "FIND_YES", "1" },
	{ "int", "FIND_ADDON", "2" },
	{ "const int", "USERCMD_HZ", "60" },
	{ "const int", "USERCMD_MSEC", "1000/60" },
	{ "int", "UB_NONE", "0" },
	{ "int", "UB_UP", "1" },
	{ "int", "UB_DOWN", "2" },
	{ "int", "UB_LEFT", "3" },
	{ "int", "UB_RIGHT", "4" },
	{ "int", "UB_FORWARD", "5" },
	{ "int", "UB_BACK", "6" },
	{ "int", "UB_LOOKUP", "7" },
	{ "int", "UB_LOOKDOWN", "8" },
	{ "int", "UB_STRAFE", "9" },
	{ "int", "UB_MOVELEFT", "10" },
	{ "int", "UB_MOVERIGHT", "11" },
	{ "int", "UB_BUTTON0", "12" },
	{ "int", "UB_BUTTON1", "13" },
	{ "int", "UB_BUTTON2", "14" },
	{ "int", "UB_BUTTON3", "15" },
	{ "int", "UB_BUTTON4", "16" },
	{ "int", "UB_CREEP", "17" },
	{ "int", "UB_BUTTON6", "18" },
	{ "int", "UB_BUTTON7", "19" },
	{ "int", "UB_ATTACK", "20" },
	{ "int", "UB_SPEED", "21" },
	{ "int", "UB_PARRY_MANIPULATE", "22" },
	{ "int", "UB_SHOWSCORES", "23" },
	{ "int", "UB_MLOOK", "24" },
	{ "int", "UB_WEAPON0", "25" },
	{ "int", "UB_WEAPON1", "26" },
	{ "int", "UB_WEAPON2", "27" },
	{ "int", "UB_WEAPON3", "28" },
	{ "int", "UB_WEAPON4", "29" },
	{ "int", "UB_WEAPON5", "30" },
	{ "int", "UB_WEAPON6", "31" },
	{ "int", "UB_WEAPON7", "32" },
	{ "int", "UB_WEAPON8", "33" },
	{ "int", "UB_WEAPON9", "34" },
	{ "int", "UB_WEAPON10", "35" },
	{ "int", "UB_WEAPON11", "36" },
	{ "int", "UB_WEAPON12", "37" },
	{ "int", "UB_RELOAD", "38" },
	{ "int", "UB_WEAPON_NEXT", "39" },
	{ "int", "UB_WEAPON_PREV", "40" },
	{ "int", "UB_IMPULSE16", "41" },
	{ "int", "UB_READY", "42" },
	{ "int", "UB_CENTER_VIEW", "43" },
	{ "int", "UB_OBJECTIVES", "44" },
	{ "int", "UB_IMPULSE20", "45" },
	{ "int", "UB_IMPULSE21", "46" },
	{ "int", "UB_IMPULSE22", "47" },
	{ "int", "UB_CROUCH", "48" },
	{ "int", "UB_MANTLE", "49" },
	{ "int", "UB_IMPULSE25", "50" },
	{ "int", "UB_IMPULSE26", "51" },
	{ "int", "UB_IMPULSE27", "52" },
	{ "int", "UB_IMPULSE28", "53" },
	{ "int", "UB_IMPULSE29", "54" },
	{ "int", "UB_INVENTORY_GRID", "55" },
	{ "int", "UB_IMPULSE31", "56" },
	{ "int", "UB_IMPULSE32", "57" },
	{ "int", "UB_IMPULSE33", "58" },
	{ "int", "UB_IMPULSE34", "59" },
	{ "int", "UB_IMPULSE35", "60" },
	{ "int", "UB_IMPULSE36", "61" },
	{ "int", "UB_IMPULSE37", "62" },
	{ "int", "UB_IMPULSE38", "63" },
	{ "int", "UB_IMPULSE39", "64" },
	{ "int", "UB_IMPULSE40", "65" },
	{ "int", "UB_FROB", "66" },
	{ "int", "UB_IMPULSE42", "67" },
	{ "int", "UB_IMPULSE43", "68" },
	{ "int", "UB_LEAN_FORWARD", "69" },
	{ "int", "UB_LEAN_LEFT", "70" },
	{ "int", "UB_LEAN_RIGHT", "71" },
	{ "int", "UB_INVENTORY_PREV", "72" },
	{ "int", "UB_INVENTORY_NEXT", "73" },
	{ "int", "UB_INVENTORY_GROUP_PREV", "74" },
	{ "int", "UB_INVENTORY_GROUP_NEXT", "75" },
	{ "int", "UB_INVENTORY_USE", "76" },
	{ "int", "UB_INVENTORY_DROP", "77" },
	{ "int", "UB_IMPULSE53", "78" },
	{ "int", "UB_IMPULSE54", "79" },
	{ "int", "UB_IMPULSE55", "80" },
	{ "int", "UB_IMPULSE56", "81" },
	{ "int", "UB_IMPULSE57", "82" },
	{ "int", "UB_IMPULSE58", "83" },
	{ "int", "UB_IMPULSE59", "84" },
	{ "int", "UB_IMPULSE60", "85" },
	{ "int", "UB_IMPULSE61", "86" },
	{ "int", "UB_IMPULSE62", "87" },
	{ "int", "UB_IMPULSE63", "88" },
	{ "int", "UB_MAX_BUTTONS", "89" },
	{ "const int", "BUTTON_ATTACK", "(10<<(0))" },
	{ "const int", "BUTTON_RUN", "(10<<(1))" },
	{ "const int", "BUTTON_ZOOM", "(10<<(2))" },
	{ "const int", "BUTTON_SCORES", "(10<<(3))" },
	{ "const int", "BUTTON_MLOOK", "(10<<(4))" },
	{ "const int", "BUTTON_CREEP", "(10<<(5))" },
	{ "const int", "BUTTON_6", "(10<<(6))" },
	{ "const int", "BUTTON_7", "(10<<(7))" },
	{ "int", "IMPULSE_WEAPON0", "0" },
	{ "int", "IMPULSE_WEAPON1", "1" },
	{ "int", "IMPULSE_WEAPON2", "2" },
	{ "int", "IMPULSE_WEAPON3", "3" },
	{ "int", "IMPULSE_WEAPON4", "4" },
	{ "int", "IMPULSE_WEAPON5", "5" },
	{ "int", "IMPULSE_WEAPON6", "6" },
	{ "int", "IMPULSE_WEAPON7", "7" },
	{ "int", "IMPULSE_WEAPON8", "8" },
	{ "int", "IMPULSE_WEAPON9", "9" },
	{ "int", "IMPULSE_WEAPON10", "10" },
	{ "int", "IMPULSE_WEAPON11", "11" },
	{ "int", "IMPULSE_WEAPON12", "12" },
	{ "int", "IMPULSE_RELOAD", "13" },
	{ "int", "IMPULSE_WEAPON_NEXT", "14" },
	{ "int", "IMPULSE_WEAPON_PREV", "15" },
	{ "int", "IMPULSE_16", "16" },
	{ "int", "IMPULSE_READY", "17" },
	{ "int", "IMPULSE_CENTER_VIEW", "18" },
	{ "int", "IMPULSE_OBJECTIVES", "19" },
	{ "int", "IMPULSE_20", "20" },
	{ "int", "IMPULSE_21", "21" },
	{ "int", "IMPULSE_22", "22" },
	{ "int", "IMPULSE_CROUCH", "23" },
	{ "int", "IMPULSE_MANTLE", "24" },
	{ "int", "IMPULSE_25", "25" },
	{ "int", "IMPULSE_26", "26" },
	{ "int", "IMPULSE_27", "27" },
	{ "int", "IMPULSE_28", "28" },
	{ "int", "IMPULSE_29", "29" },
	{ "int", "IMPULSE_INVENTORY_GRID", "30" },
	{ "int", "IMPULSE_40", "40" },
	{ "int", "IMPULSE_FROB", "41" },
	{ "int", "IMPULSE_42", "42" },
	{ "int", "IMPULSE_43", "43" },
	{ "int", "IMPULSE_LEAN_FORWARD", "44" },
	{ "int", "IMPULSE_LEAN_LEFT", "45" },
	{ "int", "IMPULSE_LEAN_RIGHT", "46" },
	{ "int", "IMPULSE_INVENTORY_PREV", "47" },
	{ "int", "IMPULSE_INVENTORY_NEXT", "48" },
	{ "int", "IMPULSE_INVENTORY_GROUP_PREV", "49" },
	{ "int", "IMPULSE_INVENTORY_GROUP_NEXT", "50" },
	{ "int", "IMPULSE_INVENTORY_USE", "51" },
	{ "int", "IMPULSE_INVENTORY_DROP", "52" },
	{ "int", "IMPULSE_MAX", "53" },
	{ "const int", "IMPULSE_BUTTON_BASE", "25" },
	{ "const int", "UCF_IMPULSE_SEQUENCE", "0x0001" },
	{ "int", "INHIBIT_SESSION", "0" },
	{ "int", "INHIBIT_ASYNC", "1" },
	{ "const int", "MAX_BUFFERED_USERCMD", "64" },
	{ "int", "DECL_TABLE", "0" },
	{ "int", "DECL_MATERIAL", "1" },
	{ "int", "DECL_SKIN", "2" },
	{ "int", "DECL_SOUND", "3" },
	{ "int", "DECL_ENTITYDEF", "4" },
	{ "int", "DECL_MODELDEF", "5" },
	{ "int", "DECL_FX", "6" },
	{ "int", "DECL_PARTICLE", "7" },
	{ "int", "DECL_AF", "8" },
	{ "int", "DECL_MODELEXPORT", "9" },
	{ "int", "DECL_MAPDEF", "10" },
	{ "int", "DECL_SUBTITLES", "11" },
	{ "int", "DECL_XDATA", "12" },
	{ "int", "DECL_TDM_MATINFO", "13" },
	{ "int", "DECL_TDM_MISSIONINFO", "14" },
	{ "int", "DECL_MAX_TYPES", "32" },
	{ "int", "DS_UNPARSED", "0" },
	{ "int", "DS_DEFAULTED", "1" },
	{ "int", "DS_PARSED", "2" },
	{ "const int", "DECL_LEXER_FLAGS", "80|160|1280|20480|40960|40" },
	{ "int", "FX_LIGHT", "0" },
	{ "int", "FX_PARTICLE", "1" },
	{ "int", "FX_DECAL", "2" },
	{ "int", "FX_MODEL", "3" },
	{ "int", "FX_SOUND", "4" },
	{ "int", "FX_SHAKE", "5" },
	{ "int", "FX_ATTACHLIGHT", "6" },
	{ "int", "FX_ATTACHENTITY", "7" },
	{ "int", "FX_LAUNCH", "8" },
	{ "int", "FX_SHOCKWAVE", "9" },
	{ "int", "PDIST_RECT", "0" },
	{ "int", "PDIST_CYLINDER", "1" },
	{ "int", "PDIST_SPHERE", "2" },
	{ "int", "PDIR_CONE", "0" },
	{ "int", "PDIR_OUTWARD", "1" },
	{ "int", "PPATH_STANDARD", "0" },
	{ "int", "PPATH_HELIX", "1" },
	{ "int", "PPATH_FLIES", "2" },
	{ "int", "PPATH_ORBIT", "3" },
	{ "int", "PPATH_DRIP", "4" },
	{ "int", "POR_VIEW", "0" },
	{ "int", "POR_AIMED", "1" },
	{ "int", "POR_X", "2" },
	{ "int", "POR_Y", "3" },
	{ "int", "POR_Z", "4" },
	{ "int", "PML_LINEAR", "0" },
	{ "int", "PML_TEXTURE", "1" },
	{ "int", "DECLAF_CONSTRAINT_INVALID", "0" },
	{ "int", "DECLAF_CONSTRAINT_FIXED", "1" },
	{ "int", "DECLAF_CONSTRAINT_BALLANDSOCKETJOINT", "2" },
	{ "int", "DECLAF_CONSTRAINT_UNIVERSALJOINT", "3" },
	{ "int", "DECLAF_CONSTRAINT_HINGE", "4" },
	{ "int", "DECLAF_CONSTRAINT_SLIDER", "5" },
	{ "int", "DECLAF_CONSTRAINT_SPRING", "6" },
	{ "int", "DECLAF_JOINTMOD_AXIS", "0" },
	{ "int", "DECLAF_JOINTMOD_ORIGIN", "1" },
	{ "int", "DECLAF_JOINTMOD_BOTH", "2" },
	{ "int", "idAFVector::VEC_COORDS", "0" },
	{ "int", "idAFVector::VEC_JOINT", "1" },
	{ "int", "idAFVector::VEC_BONECENTER", "2" },
	{ "int", "idAFVector::VEC_BONEDIR", "3" },
	{ "int", "idDeclAF_Constraint::LIMIT_NONE", "-1" },
	{ "int", "idDeclAF_Constraint::LIMIT_CONE", "0" },
	{ "int", "idDeclAF_Constraint::LIMIT_PYRAMID", "1" },
	{ "const int", "MAX_EXPRESSION_OPS", "4096" },
	{ "const int", "MAX_EXPRESSION_REGISTERS", "4096" },
	{ "int", "FMV_IDLE", "0" },
	{ "int", "FMV_PLAY", "1" },
	{ "int", "FMV_EOF", "2" },
	{ "int", "FMV_ID_BLT", "3" },
	{ "int", "FMV_ID_IDLE", "4" },
	{ "int", "FMV_LOOPED", "5" },
	{ "int", "FMV_ID_WAIT", "6" },
	{ "int", "TF_LINEAR", "0" },
	{ "int", "TF_NEAREST", "1" },
	{ "int", "TF_DEFAULT", "2" },
	{ "int", "TR_REPEAT", "0" },
	{ "int", "TR_CLAMP", "1" },
	{ "int", "TR_CLAMP_TO_ZERO", "2" },
	{ "int", "TR_CLAMP_TO_ZERO_ALPHA", "3" },
	{ "int", "DFRM_NONE", "0" },
	{ "int", "DFRM_SPRITE", "1" },
	{ "int", "DFRM_TUBE", "2" },
	{ "int", "DFRM_FLARE", "3" },
	{ "int", "DFRM_EXPAND", "4" },
	{ "int", "DFRM_MOVE", "5" },
	{ "int", "DFRM_EYEBALL", "6" },
	{ "int", "DFRM_PARTICLE", "7" },
	{ "int", "DFRM_PARTICLE2", "8" },
	{ "int", "DFRM_TURB", "9" },
	{ "int", "DI_STATIC", "0" },
	{ "int", "DI_SCRATCH", "1" },
	{ "int", "DI_CUBE_RENDER", "2" },
	{ "int", "DI_MIRROR_RENDER", "3" },
	{ "int", "DI_XRAY_RENDER", "4" },
	{ "int", "DI_REMOTE_RENDER", "5" },
	{ "int", "DI_PORTAL_RENDER", "6" },
	{ "int", "OP_TYPE_ADD", "0" },
	{ "int", "OP_TYPE_SUBTRACT", "1" },
	{ "int", "OP_TYPE_MULTIPLY", "2" },
	{ "int", "OP_TYPE_DIVIDE", "3" },
	{ "int", "OP_TYPE_MOD", "4" },
	{ "int", "OP_TYPE_TABLE", "5" },
	{ "int", "OP_TYPE_GT", "6" },
	{ "int", "OP_TYPE_GE", "7" },
	{ "int", "OP_TYPE_LT", "8" },
	{ "int", "OP_TYPE_LE", "9" },
	{ "int", "OP_TYPE_EQ", "10" },
	{ "int", "OP_TYPE_NE", "11" },
	{ "int", "OP_TYPE_AND", "12" },
	{ "int", "OP_TYPE_OR", "13" },
	{ "int", "OP_TYPE_SOUND", "14" },
	{ "int", "EXP_REG_TIME", "0" },
	{ "int", "EXP_REG_PARM0", "1" },
	{ "int", "EXP_REG_PARM1", "2" },
	{ "int", "EXP_REG_PARM2", "3" },
	{ "int", "EXP_REG_PARM3", "4" },
	{ "int", "EXP_REG_PARM4", "5" },
	{ "int", "EXP_REG_PARM5", "6" },
	{ "int", "EXP_REG_PARM6", "7" },
	{ "int", "EXP_REG_PARM7", "8" },
	{ "int", "EXP_REG_PARM8", "9" },
	{ "int", "EXP_REG_PARM9", "10" },
	{ "int", "EXP_REG_PARM10", "11" },
	{ "int", "EXP_REG_PARM11", "12" },
	{ "int", "EXP_REG_GLOBAL0", "13" },
	{ "int", "EXP_REG_GLOBAL1", "14" },
	{ "int", "EXP_REG_GLOBAL2", "15" },
	{ "int", "EXP_REG_GLOBAL3", "16" },
	{ "int", "EXP_REG_GLOBAL4", "17" },
	{ "int", "EXP_REG_GLOBAL5", "18" },
	{ "int", "EXP_REG_GLOBAL6", "19" },
	{ "int", "EXP_REG_GLOBAL7", "20" },
	{ "int", "EXP_REG_NUM_PREDEFINED", "21" },
	{ "int", "TG_EXPLICIT", "0" },
	{ "int", "TG_REFLECT_CUBE", "1" },
	{ "int", "TG_SKYBOX_CUBE", "2" },
	{ "int", "TG_WOBBLESKY_CUBE", "3" },
	{ "int", "TG_SCREEN", "4" },
	{ "int", "SL_AMBIENT", "0" },
	{ "int", "SL_BUMP", "1" },
	{ "int", "SL_DIFFUSE", "2" },
	{ "int", "SL_SPECULAR", "3" },
	{ "int", "SVC_IGNORE", "0" },
	{ "int", "SVC_MODULATE", "1" },
	{ "int", "SVC_INVERSE_MODULATE", "2" },
	{ "static const int", "MAX_FRAGMENT_IMAGES", "8" },
	{ "static const int", "MAX_VERTEX_PARMS", "4" },
	{ "int", "MC_BAD", "0" },
	{ "int", "MC_OPAQUE", "1" },
	{ "int", "MC_PERFORATED", "2" },
	{ "int", "MC_TRANSLUCENT", "3" },
	{ "int", "SS_SUBVIEW", "-3" },
	{ "int", "SS_GUI", "-2" },
	{ "int", "SS_BAD", "-1" },
	{ "int", "SS_OPAQUE", "0" },
	{ "int", "SS_PORTAL_SKY", "1" },
	{ "int", "SS_DECAL", "2" },
	{ "int", "SS_FAR", "3" },
	{ "int", "SS_MEDIUM", "4" },
	{ "int", "SS_CLOSE", "5" },
	{ "int", "SS_ALMOST_NEAREST", "6" },
	{ "int", "SS_NEAREST", "7" },
	{ "int", "SS_AFTER_FOG", "90" },
	{ "int", "SS_POST_PROCESS", "100" },
	{ "int", "SS_LAST", "200" },
	{ "int", "CT_FRONT_SIDED", "0" },
	{ "int", "CT_BACK_SIDED", "1" },
	{ "int", "CT_TWO_SIDED", "2" },
	{ "const int", "MAX_SHADER_STAGES", "256" },
	{ "const int", "MAX_TEXGEN_REGISTERS", "4" },
	{ "const int", "MAX_ENTITY_SHADER_PARMS", "12" },
	{ "int", "MF_DEFAULTED", "10" },
	{ "int", "MF_POLYGONOFFSET", "20" },
	{ "int", "MF_NOSHADOWS", "40" },
	{ "int", "MF_FORCESHADOWS", "80" },
	{ "int", "MF_NOSELFSHADOW", "160" },
	{ "int", "MF_NOPORTALFOG", "320" },
	{ "int", "MF_EDITOR_VISIBLE", "640" },
	{ "int", "CONTENTS_SOLID", "10" },
	{ "int", "CONTENTS_OPAQUE", "20" },
	{ "int", "CONTENTS_WATER", "40" },
	{ "int", "CONTENTS_PLAYERCLIP", "80" },
	{ "int", "CONTENTS_MONSTERCLIP", "160" },
	{ "int", "CONTENTS_MOVEABLECLIP", "320" },
	{ "int", "CONTENTS_IKCLIP", "640" },
	{ "int", "CONTENTS_BLOOD", "1280" },
	{ "int", "CONTENTS_BODY", "2560" },
	{ "int", "CONTENTS_PROJECTILE", "5120" },
	{ "int", "CONTENTS_CORPSE", "10240" },
	{ "int", "CONTENTS_RENDERMODEL", "20480" },
	{ "int", "CONTENTS_TRIGGER", "40960" },
	{ "int", "CONTENTS_AAS_SOLID", "81920" },
	{ "int", "CONTENTS_AAS_OBSTACLE", "163840" },
	{ "int", "CONTENTS_FLASHLIGHT_TRIGGER", "327680" },
	{ "int", "CONTENTS_FROBABLE", "655360" },
	{ "int", "CONTENTS_RESPONSE", "1310720" },
	{ "int", "CONTENTS_MELEEWEAP", "2621440" },
	{ "int", "CONTENTS_AREAPORTAL", "10485760" },
	{ "int", "CONTENTS_NOCSG", "20971520" },
	{ "int", "CONTENTS_REMOVE_UTIL", "-31457281" },
	{ "const int", "NUM_SURFACE_BITS", "4" },
	{ "const int", "MAX_SURFACE_TYPES", "1<<4" },
	{ "int", "SURFTYPE_NONE", "0" },
	{ "int", "SURFTYPE_METAL", "1" },
	{ "int", "SURFTYPE_STONE", "2" },
	{ "int", "SURFTYPE_FLESH", "3" },
	{ "int", "SURFTYPE_WOOD", "4" },
	{ "int", "SURFTYPE_CARDBOARD", "5" },
	{ "int", "SURFTYPE_LIQUID", "6" },
	{ "int", "SURFTYPE_GLASS", "7" },
	{ "int", "SURFTYPE_PLASTIC", "8" },
	{ "int", "SURFTYPE_RICOCHET", "9" },
	{ "int", "SURFTYPE_10", "10" },
	{ "int", "SURFTYPE_11", "11" },
	{ "int", "SURFTYPE_12", "12" },
	{ "int", "SURFTYPE_13", "13" },
	{ "int", "SURFTYPE_14", "14" },
	{ "int", "SURFTYPE_15", "15" },
	{ "int", "SURF_TYPE_BIT0", "10" },
	{ "int", "SURF_TYPE_BIT1", "20" },
	{ "int", "SURF_TYPE_BIT2", "40" },
	{ "int", "SURF_TYPE_BIT3", "80" },
	{ "int", "SURF_TYPE_MASK", "15" },
	{ "int", "SURF_NODAMAGE", "160" },
	{ "int", "SURF_SLICK", "320" },
	{ "int", "SURF_COLLISION", "640" },
	{ "int", "SURF_LADDER", "1280" },
	{ "int", "SURF_NOIMPACT", "2560" },
	{ "int", "SURF_NOSTEPS", "5120" },
	{ "int", "SURF_DISCRETE", "10240" },
	{ "int", "SURF_NOFRAGMENT", "20480" },
	{ "int", "SURF_NULLNORMAL", "40960" },
	{ "const int", "SHADOW_CAP_INFINITE", "64" },
	{ "int", "DM_STATIC", "0" },
	{ "int", "DM_CACHED", "1" },
	{ "int", "DM_CONTINUOUS", "2" },
	{ "int", "INVALID_JOINT", "-1" },
	{ "int", "glvAny", "0" },
	{ "int", "glvAMD", "1" },
	{ "int", "glvIntel", "2" },
	{ "int", "glvNVIDIA", "3" },
	{ "int", "renderEntity_s::RAL_NONE", "0" },
	{ "int", "renderEntity_s::RAL_ORIGIN", "1" },
	{ "int", "renderEntity_s::RAL_CENTER", "2" },
	{ "int", "VID_LIGHTGEM", "-1" },
	{ "int", "VID_SUBVIEW", "0" },
	{ "int", "VID_PLAYER_VIEW", "1" },
	{ "int", "PS_BLOCK_NONE", "0" },
	{ "int", "PS_BLOCK_VIEW", "1" },
	{ "int", "PS_BLOCK_LOCATION", "2" },
	{ "int", "PS_BLOCK_AIR", "4" },
	{ "int", "PS_BLOCK_SOUND", "8" },
	{ "int", "PS_BLOCK_ALL", "15" },
	{ "const float", "DOOM_TO_METERS", "0.0254" },
	{ "const float", "METERS_TO_DOOM", "(1.0/0)" },
	{ "static const int", "SSF_PRIVATE_SOUND", "(10<<(0))" },
	{ "static const int", "SSF_ANTI_PRIVATE_SOUND", "(10<<(1))" },
	{ "static const int", "SSF_NO_OCCLUSION", "(10<<(2))" },
	{ "static const int", "SSF_GLOBAL", "(10<<(3))" },
	{ "static const int", "SSF_OMNIDIRECTIONAL", "(10<<(4))" },
	{ "static const int", "SSF_LOOPING", "(10<<(5))" },
	{ "static const int", "SSF_PLAY_ONCE", "(10<<(6))" },
	{ "static const int", "SSF_UNCLAMPED", "(10<<(7))" },
	{ "static const int", "SSF_NO_FLICKER", "(10<<(8))" },
	{ "static const int", "SSF_NO_DUPS", "(10<<(9))" },
	{ "static const int", "SSF_NO_EFX", "(10<<(10))" },
	{ "int", "SUBL_IGNORE", "0" },
	{ "int", "SUBL_STORY", "1" },
	{ "int", "SUBL_SPEECH", "2" },
	{ "int", "SUBL_EFFECT", "3" },
	{ "int", "SUBL_MISSING", "100" },
	{ "const int", "SOUND_MAX_LIST_WAVS", "32" },
	{ "const int", "SOUND_MAX_CLASSES", "4" },
	{ "static const int", "SCHANNEL_ANY", "0" },
	{ "static const int", "SCHANNEL_ONE", "1" },
	{ "int", "CONTACT_NONE", "0" },
	{ "int", "CONTACT_EDGE", "1" },
	{ "int", "CONTACT_MODELVERTEX", "2" },
	{ "int", "CONTACT_TRMVERTEX", "3" },
	{ "int", "ALLOW_YES", "0" },
	{ "int", "ALLOW_BADPASS", "1" },
	{ "int", "ALLOW_NOTYET", "2" },
	{ "int", "ALLOW_NO", "3" },
	{ "int", "ESC_IGNORE", "0" },
	{ "int", "ESC_MAIN", "1" },
	{ "int", "ESC_GUI", "2" },
	{ "int", "TEST_PARTICLE_MODEL", "0" },
	{ "int", "TEST_PARTICLE_IMPACT", "1" },
	{ "int", "TEST_PARTICLE_MUZZLE", "2" },
	{ "int", "TEST_PARTICLE_FLIGHT", "3" },
	{ "int", "TEST_PARTICLE_SELECTED", "4" },
	{ "int", "idGameEdit::sedRespectInhibit", "1" },
	{ "int", "idGameEdit::sedCacheMedia", "2" },
	{ "int", "idGameEdit::sedRespawn", "4" },
	{ "static const int", "CRawVector::INITIAL_CAPACITY", "16" },
	{ "const int", "INITIAL_RELEASE_BUILD_NUMBER", "1262" },
	{ "int", "ev_error", "-1" },
	{ "int", "ev_void", "0" },
	{ "int", "ev_scriptevent", "1" },
	{ "int", "ev_namespace", "2" },
	{ "int", "ev_string", "3" },
	{ "int", "ev_float", "4" },
	{ "int", "ev_vector", "5" },
	{ "int", "ev_entity", "6" },
	{ "int", "ev_field", "7" },
	{ "int", "ev_function", "8" },
	{ "int", "ev_virtualfunction", "9" },
	{ "int", "ev_pointer", "10" },
	{ "int", "ev_object", "11" },
	{ "int", "ev_jumpoffset", "12" },
	{ "int", "ev_argsize", "13" },
	{ "int", "ev_boolean", "14" },
	{ "int", "idVarDef::uninitialized", "0" },
	{ "int", "idVarDef::initializedVariable", "1" },
	{ "int", "idVarDef::initializedConstant", "2" },
	{ "int", "idVarDef::stackVariable", "3" },
	{ "int", "idProgram::FORMAT_D3_SCRIPT", "0" },
	{ "int", "idProgram::FORMAT_XML", "1" },
	{ "int", "idProgram::FORMAT_MEDIAWIKI", "2" },
	{ "const int", "ANIM_NumAnimChannels", "5" },
	{ "const int", "ANIM_MaxAnimsPerChannel", "3" },
	{ "const int", "ANIM_MaxSyncedAnims", "3" },
	{ "const int", "ANIMCHANNEL_ALL", "0" },
	{ "const int", "ANIMCHANNEL_TORSO", "1" },
	{ "const int", "ANIMCHANNEL_LEGS", "2" },
	{ "const int", "ANIMCHANNEL_HEAD", "3" },
	{ "const int", "ANIMCHANNEL_EYELIDS", "4" },
	{ "int", "JOINTMOD_NONE", "0" },
	{ "int", "JOINTMOD_LOCAL", "1" },
	{ "int", "JOINTMOD_LOCAL_OVERRIDE", "2" },
	{ "int", "JOINTMOD_WORLD", "3" },
	{ "int", "JOINTMOD_WORLD_OVERRIDE", "4" },
	{ "int", "FC_SCRIPTFUNCTION", "0" },
	{ "int", "FC_SCRIPTFUNCTIONOBJECT", "1" },
	{ "int", "FC_EVENTFUNCTION", "2" },
	{ "int", "FC_SOUND", "3" },
	{ "int", "FC_SOUND_VOICE", "4" },
	{ "int", "FC_SOUND_VOICE2", "5" },
	{ "int", "FC_SOUND_BODY", "6" },
	{ "int", "FC_SOUND_BODY2", "7" },
	{ "int", "FC_SOUND_BODY3", "8" },
	{ "int", "FC_SOUND_WEAPON", "9" },
	{ "int", "FC_SOUND_ITEM", "10" },
	{ "int", "FC_SOUND_GLOBAL", "11" },
	{ "int", "FC_SOUND_CHATTER", "12" },
	{ "int", "FC_SKIN", "13" },
	{ "int", "FC_TRIGGER", "14" },
	{ "int", "FC_TRIGGER_SMOKE_PARTICLE", "15" },
	{ "int", "FC_MELEE", "16" },
	{ "int", "FC_DIRECTDAMAGE", "17" },
	{ "int", "FC_BEGINATTACK", "18" },
	{ "int", "FC_ENDATTACK", "19" },
	{ "int", "FC_MUZZLEFLASH", "20" },
	{ "int", "FC_CREATEMISSILE", "21" },
	{ "int", "FC_LAUNCHMISSILE", "22" },
	{ "int", "FC_FIREMISSILEATTARGET", "23" },
	{ "int", "FC_FOOTSTEP", "24" },
	{ "int", "FC_LEFTFOOT", "25" },
	{ "int", "FC_RIGHTFOOT", "26" },
	{ "int", "FC_ENABLE_EYE_FOCUS", "27" },
	{ "int", "FC_DISABLE_EYE_FOCUS", "28" },
	{ "int", "FC_FX", "29" },
	{ "int", "FC_DISABLE_GRAVITY", "30" },
	{ "int", "FC_ENABLE_GRAVITY", "31" },
	{ "int", "FC_JUMP", "32" },
	{ "int", "FC_ENABLE_CLIP", "33" },
	{ "int", "FC_DISABLE_CLIP", "34" },
	{ "int", "FC_ENABLE_WALK_IK", "35" },
	{ "int", "FC_DISABLE_WALK_IK", "36" },
	{ "int", "FC_ENABLE_LEG_IK", "37" },
	{ "int", "FC_DISABLE_LEG_IK", "38" },
	{ "int", "FC_RECORDDEMO", "39" },
	{ "int", "FC_AVIGAME", "40" },
	{ "int", "FC_SETRATE", "41" },
	{ "int", "FC_REATTACH", "42" },
	{ "int", "FC_ATTACH", "43" },
	{ "int", "FC_DESTROY", "44" },
	{ "int", "FC_DROP", "45" },
	{ "int", "FC_PUTDOWN", "46" },
	{ "int", "FC_PICKUP", "47" },
	{ "int", "FC_ACTIVATE_AT_JOINT", "48" },
	{ "int", "FC_ACTIVATE_NEAR", "49" },
	{ "int", "FC_PAUSE", "50" },
	{ "int", "FC_MELEE_HOLD", "51" },
	{ "int", "FC_MELEE_ATTACK_START", "52" },
	{ "int", "FC_MELEE_ATTACK_STOP", "53" },
	{ "int", "FC_MELEE_PARRY_START", "54" },
	{ "int", "FC_MELEE_PARRY_STOP", "55" },
	{ "int", "FC_SET_ATTACK_FLAG", "56" },
	{ "int", "FC_CLEAR_ATTACK_FLAG", "57" },
	{ "int", "FC_CREATEMISSILE_FROM_DEF", "58" },
	{ "int", "AF_JOINTMOD_AXIS", "0" },
	{ "int", "AF_JOINTMOD_ORIGIN", "1" },
	{ "int", "AF_JOINTMOD_BOTH", "2" },
	{ "int", "AF_JOINTMOD_NONE", "3" },
	{ "int", "eas::ACTION_WALK", "0" },
	{ "int", "eas::ACTION_USE_ELEVATOR", "1" },
	{ "int", "eas::NUM_ACTIONS", "2" },
	{ "int", "eas::ROUTE_DUMMY", "0" },
	{ "int", "eas::ROUTE_TO_AREA", "1" },
	{ "int", "eas::ROUTE_TO_CLUSTER", "2" },
	{ "int", "eas::NUM_ROUTE_TYPES", "3" },
	{ "int", "PATHTYPE_WALK", "0" },
	{ "int", "PATHTYPE_WALKOFFLEDGE", "1" },
	{ "int", "PATHTYPE_BARRIERJUMP", "2" },
	{ "int", "PATHTYPE_JUMP", "3" },
	{ "int", "PATHTYPE_DOOR", "4" },
	{ "int", "PATHTYPE_ELEVATOR", "5" },
	{ "static const int", "idPush::PUSHED_AUTOSIZE", "128" },
	{ "int", "PVS_NORMAL", "0" },
	{ "int", "PVS_ALL_PORTALS_OPEN", "1" },
	{ "int", "PVS_CONNECTED_AREAS", "2" },
	{ "int", "MISSION_NOTEVENSTARTED", "0" },
	{ "int", "MISSION_INPROGRESS", "1" },
	{ "int", "MISSION_FAILED", "2" },
	{ "int", "MISSION_COMPLETE", "3" },
	{ "int", "difficulty::Setting::EAssign", "0" },
	{ "int", "difficulty::Setting::EAdd", "1" },
	{ "int", "difficulty::Setting::EMultiply", "2" },
	{ "int", "difficulty::Setting::EIgnore", "3" },
	{ "int", "SEED_MODEL_NOSHADOW", "1" },
	{ "int", "SEED_MODEL_NOCLIP", "2" },
	{ "const int", "MAX_GAME_MESSAGE_SIZE", "8192" },
	{ "const int", "MAX_ENTITY_STATE_SIZE", "512" },
	{ "const int", "NUM_RENDER_PORTAL_BITS", "0(15)" },
	{ "const float", "SMALL_AI_MASS", "5.0" },
	{ "const int", "MAX_EVENT_PARAM_SIZE", "128" },
	{ "int", "GAME_RELIABLE_MESSAGE_INIT_DECL_REMAP", "0" },
	{ "int", "GAME_RELIABLE_MESSAGE_REMAP_DECL", "1" },
	{ "int", "GAME_RELIABLE_MESSAGE_SPAWN_PLAYER", "2" },
	{ "int", "GAME_RELIABLE_MESSAGE_DELETE_ENT", "3" },
	{ "int", "GAME_RELIABLE_MESSAGE_CHAT", "4" },
	{ "int", "GAME_RELIABLE_MESSAGE_TCHAT", "5" },
	{ "int", "GAME_RELIABLE_MESSAGE_SOUND_EVENT", "6" },
	{ "int", "GAME_RELIABLE_MESSAGE_SOUND_INDEX", "7" },
	{ "int", "GAME_RELIABLE_MESSAGE_DB", "8" },
	{ "int", "GAME_RELIABLE_MESSAGE_KILL", "9" },
	{ "int", "GAME_RELIABLE_MESSAGE_DROPWEAPON", "10" },
	{ "int", "GAME_RELIABLE_MESSAGE_RESTART", "11" },
	{ "int", "GAME_RELIABLE_MESSAGE_SERVERINFO", "12" },
	{ "int", "GAME_RELIABLE_MESSAGE_TOURNEYLINE", "13" },
	{ "int", "GAME_RELIABLE_MESSAGE_CALLVOTE", "14" },
	{ "int", "GAME_RELIABLE_MESSAGE_CASTVOTE", "15" },
	{ "int", "GAME_RELIABLE_MESSAGE_STARTVOTE", "16" },
	{ "int", "GAME_RELIABLE_MESSAGE_UPDATEVOTE", "17" },
	{ "int", "GAME_RELIABLE_MESSAGE_PORTALSTATES", "18" },
	{ "int", "GAME_RELIABLE_MESSAGE_PORTAL", "19" },
	{ "int", "GAME_RELIABLE_MESSAGE_VCHAT", "20" },
	{ "int", "GAME_RELIABLE_MESSAGE_STARTSTATE", "21" },
	{ "int", "GAME_RELIABLE_MESSAGE_MENU", "22" },
	{ "int", "GAME_RELIABLE_MESSAGE_WARMUPTIME", "23" },
	{ "int", "GAME_RELIABLE_MESSAGE_EVENT", "24" },
	{ "int", "GAMESTATE_UNINITIALIZED", "0" },
	{ "int", "GAMESTATE_NOMAP", "1" },
	{ "int", "GAMESTATE_STARTUP", "2" },
	{ "int", "GAMESTATE_ACTIVE", "3" },
	{ "int", "GAMESTATE_COMPLETED", "4" },
	{ "int", "GAMESTATE_SHUTDOWN", "5" },
	{ "int", "GuiMessage::MSG_OK", "0" },
	{ "int", "GuiMessage::MSG_YES_NO", "1" },
	{ "int", "GuiMessage::MSG_OK_CANCEL", "2" },
	{ "int", "GuiMessage::MSG_CUSTOM", "3" },
	{ "int", "PORTALSKY_STANDARD", "0" },
	{ "int", "PORTALSKY_GLOBAL", "1" },
	{ "int", "PORTALSKY_LOCAL", "2" },
	{ "static const int", "DARKMOD_LG_MAX_RENDERPASSES", "2" },
	{ "static const int", "DARKMOD_LG_MAX_IMAGESPLIT", "4" },
	{ "static const char *", "DARKMOD_LG_RENDER_MODEL", "models/darkmod/misc/system/lightgem.lwo" },
	{ "static const char *", "DARKMOD_LG_ENTITY_NAME", "lightgem_surface" },
	{ "static const int", "DARKMOD_LG_RENDER_WIDTH", "64" },
	{ "static const float", "DARKMOD_LG_RENDER_FOV", "70.0" },
	{ "static const int", "DARKMOD_LG_BPP", "3" },
	{ "static const int", "DARKMOD_LG_MIN", "1" },
	{ "static const int", "DARKMOD_LG_MAX", "32" },
	{ "static const float", "DARKMOD_LG_FRACTION", "1.0/32.0" },
	{ "static const float", "DARKMOD_LG_RED", "0.29900" },
	{ "static const float", "DARKMOD_LG_GREEN", "0.58700" },
	{ "static const float", "DARKMOD_LG_BLUE", "0.11400" },
	{ "static const float", "DARKMOD_LG_SCALE", "1.0/255.0" },
	{ "static const float", "DARKMOD_LG_TRIRATIO", "1.0/(64*64/4.0)" },
	{ "int", "E_EventTypeEnemy", "1" },
	{ "int", "E_EventTypeDeadPerson", "2" },
	{ "int", "E_EventTypeMissingItem", "3" },
	{ "int", "E_EventTypeUnconsciousPerson", "4" },
	{ "int", "E_EventTypeNoisemaker", "5" },
	{ "int", "E_EventTypeMisc", "6" },
	{ "int", "E_EventTypeSound", "7" },
	{ "int", "E_ROLE_NONE", "0" },
	{ "int", "E_ROLE_SEARCHER", "1" },
	{ "int", "E_ROLE_GUARD", "2" },
	{ "int", "E_ROLE_OBSERVER", "3" },
	{ "int", "SEARCH_SEARCHER_MILL", "10" },
	{ "int", "SEARCH_SEARCH", "20" },
	{ "int", "SEARCH_GUARD_MILL", "40" },
	{ "int", "SEARCH_GUARD", "80" },
	{ "int", "SEARCH_OBSERVER_MILL", "160" },
	{ "int", "SEARCH_OBSERVE", "320" },
	{ "const static int", "idGameLocal::INITIAL_SPAWN_COUNT", "1" },
	{ "int", "SND_CHANNEL_ANY", "0" },
	{ "int", "SND_CHANNEL_VOICE", "1" },
	{ "int", "SND_CHANNEL_VOICE2", "2" },
	{ "int", "SND_CHANNEL_BODY", "3" },
	{ "int", "SND_CHANNEL_BODY2", "4" },
	{ "int", "SND_CHANNEL_BODY3", "5" },
	{ "int", "SND_CHANNEL_WEAPON", "6" },
	{ "int", "SND_CHANNEL_ITEM", "7" },
	{ "int", "SND_CHANNEL_HEART", "8" },
	{ "int", "SND_CHANNEL_UNUSED", "9" },
	{ "int", "SND_CHANNEL_DEMONIC", "10" },
	{ "int", "SND_CHANNEL_UNUSED_2", "11" },
	{ "int", "SND_CHANNEL_AMBIENT", "12" },
	{ "int", "SND_CHANNEL_DAMAGE", "13" },
	{ "const float", "DEFAULT_GRAVITY", "1066.0" },
	{ "const int", "CINEMATIC_SKIP_DELAY", "(0((2.0)*0))" },
	{ "int", "FORCEFIELD_UNIFORM", "0" },
	{ "int", "FORCEFIELD_EXPLOSION", "1" },
	{ "int", "FORCEFIELD_IMPLOSION", "2" },
	{ "int", "FORCEFIELD_APPLY_FORCE", "0" },
	{ "int", "FORCEFIELD_APPLY_VELOCITY", "1" },
	{ "int", "FORCEFIELD_APPLY_IMPULSE", "2" },
	{ "int", "WATERLEVEL_NONE", "0" },
	{ "int", "WATERLEVEL_FEET", "1" },
	{ "int", "WATERLEVEL_WAIST", "2" },
	{ "int", "WATERLEVEL_HEAD", "3" },
	{ "int", "MM_OK", "0" },
	{ "int", "MM_SLIDING", "1" },
	{ "int", "MM_BLOCKED", "2" },
	{ "int", "MM_STEPPED", "3" },
	{ "int", "MM_FALLING", "4" },
	{ "int", "PM_NORMAL", "0" },
	{ "int", "PM_DEAD", "1" },
	{ "int", "PM_SPECTATOR", "2" },
	{ "int", "PM_FREEZE", "3" },
	{ "int", "PM_NOCLIP", "4" },
	{ "int", "notMantling_DarkModMantlePhase", "0" },
	{ "int", "hang_DarkModMantlePhase", "1" },
	{ "int", "pull_DarkModMantlePhase", "2" },
	{ "int", "pullFast_DarkModMantlePhase", "3" },
	{ "int", "shiftHands_DarkModMantlePhase", "4" },
	{ "int", "push_DarkModMantlePhase", "5" },
	{ "int", "pushNonCrouched_DarkModMantlePhase", "6" },
	{ "int", "fixClipping_DarkModMantlePhase", "7" },
	{ "int", "canceling_DarkModMantlePhase", "8" },
	{ "int", "NumMantlePhases", "9" },
	{ "int", "idPhysics_Player::EMantleable_No", "0" },
	{ "int", "idPhysics_Player::EMantleable_YesCrouched", "1" },
	{ "int", "idPhysics_Player::EMantleable_YesUpstraight", "2" },
	{ "int", "idPhysics_Player::eShoulderingAnimation_NotStarted", "0" },
	{ "int", "idPhysics_Player::eShoulderingAnimation_Initialized", "1" },
	{ "int", "idPhysics_Player::eShoulderingAnimation_Scheduled", "2" },
	{ "int", "idPhysics_Player::eShoulderingAnimation_Active", "3" },
	{ "int", "CONSTRAINT_INVALID", "0" },
	{ "int", "CONSTRAINT_FIXED", "1" },
	{ "int", "CONSTRAINT_BALLANDSOCKETJOINT", "2" },
	{ "int", "CONSTRAINT_UNIVERSALJOINT", "3" },
	{ "int", "CONSTRAINT_HINGE", "4" },
	{ "int", "CONSTRAINT_HINGESTEERING", "5" },
	{ "int", "CONSTRAINT_SLIDER", "6" },
	{ "int", "CONSTRAINT_CYLINDRICALJOINT", "7" },
	{ "int", "CONSTRAINT_LINE", "8" },
	{ "int", "CONSTRAINT_PLANE", "9" },
	{ "int", "CONSTRAINT_SPRING", "10" },
	{ "int", "CONSTRAINT_CONTACT", "11" },
	{ "int", "CONSTRAINT_FRICTION", "12" },
	{ "int", "CONSTRAINT_CONELIMIT", "13" },
	{ "int", "CONSTRAINT_PYRAMIDLIMIT", "14" },
	{ "int", "CONSTRAINT_SUSPENSION", "15" },
	{ "static const int", "idSmokeParticles::MAX_SMOKE_PARTICLES", "10000" },
	{ "int", "ST_FROB", "0" },
	{ "int", "ST_FIRE", "1" },
	{ "int", "ST_WATER", "2" },
	{ "int", "ST_DAMAGE", "3" },
	{ "int", "ST_SHIELD", "4" },
	{ "int", "ST_HEALING", "5" },
	{ "int", "ST_HOLY", "6" },
	{ "int", "ST_MAGIC", "7" },
	{ "int", "ST_TOUCH", "8" },
	{ "int", "ST_KNOCKOUT", "9" },
	{ "int", "ST_KILL", "10" },
	{ "int", "ST_RESTORE", "11" },
	{ "int", "ST_LIGHT", "12" },
	{ "int", "ST_SOUND", "13" },
	{ "int", "ST_VISUAL", "14" },
	{ "int", "ST_INVITE", "15" },
	{ "int", "ST_READ", "16" },
	{ "int", "ST_RANDOM", "17" },
	{ "int", "ST_TIMER", "18" },
	{ "int", "ST_COMMUNICATION", "19" },
	{ "int", "ST_GAS", "20" },
	{ "int", "ST_TRIGGER", "21" },
	{ "int", "ST_TARGET_REACHED", "22" },
	{ "int", "ST_PLAYER", "23" },
	{ "int", "ST_FLASH", "24" },
	{ "int", "ST_BLIND", "25" },
	{ "int", "ST_USER", "1000" },
	{ "int", "ST_DEFAULT", "-1" },
	{ "const int", "OVERLAYS_MIN_HANDLE", "1" },
	{ "const int", "OVERLAYS_INVALID_HANDLE", "0" },
	{ "int", "LAYER_UNDERWATER", "0" },
	{ "int", "LAYER_MAIN_HUD", "1" },
	{ "int", "LAYER_INVENTORY", "2" },
	{ "int", "LAYER_INVGRID", "3" },
	{ "int", "LAYER_OBJECTIVES", "12" },
	{ "int", "LAYER_WAITUNTILREADY", "13" },
	{ "int", "LAYER_SUBTITLES", "20" },
	{ "static const int", "DELAY_DORMANT_TIME", "3000" },
	{ "static const float", "VISIBILTIY_LIGHTING_THRESHOLD", "0.2" },
	{ "int", "TH_ALL", "-1" },
	{ "int", "TH_THINK", "1" },
	{ "int", "TH_PHYSICS", "2" },
	{ "int", "TH_ANIMATE", "4" },
	{ "int", "TH_UPDATEVISUALS", "8" },
	{ "int", "TH_UPDATEPARTICLES", "16" },
	{ "int", "TH_DOUSING", "32" },
	{ "int", "TH_ARMED", "64" },
	{ "int", "EPressed", "0" },
	{ "int", "ERepeat", "1" },
	{ "int", "EReleased", "2" },
	{ "int", "ENumImpulseStates", "3" },
	{ "int", "SIG_TOUCH", "0" },
	{ "int", "SIG_USE", "1" },
	{ "int", "SIG_TRIGGER", "2" },
	{ "int", "SIG_REMOVED", "3" },
	{ "int", "SIG_DAMAGE", "4" },
	{ "int", "SIG_BLOCKED", "5" },
	{ "int", "SIG_MOVER_POS1", "6" },
	{ "int", "SIG_MOVER_POS2", "7" },
	{ "int", "SIG_MOVER_1TO2", "8" },
	{ "int", "SIG_MOVER_2TO1", "9" },
	{ "int", "NUM_SIGNALS", "10" },
	{ "int", "EINV_GROUP", "1" },
	{ "int", "EINV_PREV", "2" },
	{ "int", "EINV_FAST", "4" },
	{ "static const int", "idEntity::MAX_PVS_AREAS", "4" },
	{ "static const int", "idEntity::NOLOD", "-100000" },
	{ "int", "idEntity::EVENT_STARTSOUNDSHADER", "0" },
	{ "int", "idEntity::EVENT_STOPSOUNDSHADER", "1" },
	{ "int", "idEntity::EVENT_MAXEVENTS", "2" },
	{ "int", "idAnimatedEntity::EVENT_ADD_DAMAGE_EFFECT", "2" },
	{ "int", "idAnimatedEntity::EVENT_MAXEVENTS", "3" },
	{ "static const int", "idIK_Walk::MAX_LEGS", "8" },
	{ "static const int", "idIK_Reach::MAX_ARMS", "2" },
	{ "const int", "GIB_DELAY", "200" },
	{ "int", "idPlayerStart::EVENT_TELEPORTPLAYER", "2" },
	{ "int", "idPlayerStart::EVENT_MAXEVENTS", "3" },
	{ "int", "COMBAT_NONE", "0" },
	{ "int", "COMBAT_MELEE", "1" },
	{ "int", "COMBAT_RANGED", "2" },
	{ "int", "NUM_COMBAT_TYPES", "3" },
	{ "int", "MELEETYPE_OVER", "0" },
	{ "int", "MELEETYPE_LR", "1" },
	{ "int", "MELEETYPE_RL", "2" },
	{ "int", "MELEETYPE_THRUST", "3" },
	{ "int", "MELEETYPE_UNBLOCKABLE", "4" },
	{ "int", "MELEETYPE_BLOCKALL", "5" },
	{ "int", "NUM_MELEE_TYPES", "6" },
	{ "int", "MELEEACTION_READY", "0" },
	{ "int", "MELEEACTION_ATTACK", "1" },
	{ "int", "MELEEACTION_PARRY", "2" },
	{ "int", "MELEEPHASE_PREPARING", "0" },
	{ "int", "MELEEPHASE_HOLDING", "1" },
	{ "int", "MELEEPHASE_EXECUTING", "2" },
	{ "int", "MELEEPHASE_RECOVERING", "3" },
	{ "int", "MELEERESULT_IN_PROGRESS", "0" },
	{ "int", "MELEERESULT_AT_HIT", "1" },
	{ "int", "MELEERESULT_AT_MISSED", "2" },
	{ "int", "MELEERESULT_AT_PARRIED", "3" },
	{ "int", "MELEERESULT_PAR_BLOCKED", "4" },
	{ "int", "MELEERESULT_PAR_FAILED", "5" },
	{ "int", "MELEERESULT_PAR_ABORTED", "6" },
	{ "int", "NUM_MELEE_RESULTS", "7" },
	{ "const float", "MIN_MASS_FOR_KO", "50.0" },
	{ "int", "ECannotGreet", "0" },
	{ "int", "ECannotGreetYet", "1" },
	{ "int", "ENotGreetingAnybody", "2" },
	{ "int", "EWaitingForGreeting", "3" },
	{ "int", "EGoingToGreet", "4" },
	{ "int", "EIsGreeting", "5" },
	{ "int", "EAfterGreeting", "6" },
	{ "int", "ENumAIGreetingStates", "7" },
	{ "int", "PickableLock::UNLOCKED", "0" },
	{ "int", "PickableLock::LOCKED", "1" },
	{ "int", "PickableLock::LOCKPICKING_STARTED", "2" },
	{ "int", "PickableLock::ADVANCE_TO_NEXT_SAMPLE", "3" },
	{ "int", "PickableLock::PIN_SAMPLE", "4" },
	{ "int", "PickableLock::PIN_SAMPLE_SWEETSPOT", "5" },
	{ "int", "PickableLock::PIN_DELAY", "6" },
	{ "int", "PickableLock::AFTER_PIN_DELAY", "7" },
	{ "int", "PickableLock::WRONG_LOCKPICK_SOUND", "8" },
	{ "int", "PickableLock::PIN_SUCCESS", "9" },
	{ "int", "PickableLock::PIN_FAILED", "10" },
	{ "int", "PickableLock::LOCK_SUCCESS", "11" },
	{ "int", "PickableLock::PICKED", "12" },
	{ "int", "PickableLock::NUM_LPSTATES", "13" },
	{ "int", "LOOT_NONE", "0" },
	{ "int", "LOOT_JEWELS", "1" },
	{ "int", "LOOT_GOLD", "2" },
	{ "int", "LOOT_GOODS", "3" },
	{ "int", "LOOT_COUNT", "4" },
	{ "int", "CInventoryItem::IT_ITEM", "0" },
	{ "int", "CInventoryItem::IT_LOOT", "1" },
	{ "int", "CInventoryItem::IT_LOOT_INFO", "2" },
	{ "int", "CInventoryItem::IT_WEAPON", "3" },
	{ "int", "CInventoryItem::IT_DUMMY", "4" },
	{ "int", "CInventoryItem::IT_COUNT", "5" },
	{ "int", "idProjectile::EVENT_DAMAGE_EFFECT", "2" },
	{ "int", "idProjectile::EVENT_MAXEVENTS", "3" },
	{ "int", "idProjectile::SPAWNED", "0" },
	{ "int", "idProjectile::CREATED", "1" },
	{ "int", "idProjectile::LAUNCHED", "2" },
	{ "int", "idProjectile::FIZZLED", "3" },
	{ "int", "idProjectile::EXPLODED", "4" },
	{ "int", "idProjectile::INACTIVE", "5" },
	{ "int", "WP_READY", "0" },
	{ "int", "WP_OUTOFAMMO", "1" },
	{ "int", "WP_RELOAD", "2" },
	{ "int", "WP_HOLSTERED", "3" },
	{ "int", "WP_RISING", "4" },
	{ "int", "WP_LOWERING", "5" },
	{ "static const int", "LIGHTID_WORLD_MUZZLE_FLASH", "1" },
	{ "static const int", "LIGHTID_VIEW_MUZZLE_FLASH", "100" },
	{ "int", "idWeapon::EVENT_RELOAD", "2" },
	{ "int", "idWeapon::EVENT_ENDRELOAD", "3" },
	{ "int", "idWeapon::EVENT_CHANGESKIN", "4" },
	{ "int", "idWeapon::EVENT_MAXEVENTS", "5" },
	{ "int", "idLight::EVENT_BECOMEBROKEN", "2" },
	{ "int", "idLight::EVENT_MAXEVENTS", "3" },
	{ "int", "idItem::EVENT_PICKUP", "2" },
	{ "int", "idItem::EVENT_RESPAWN", "3" },
	{ "int", "idItem::EVENT_RESPAWNFX", "4" },
	{ "int", "idItem::EVENT_MAXEVENTS", "5" },
	{ "int", "ICON_LAG", "0" },
	{ "int", "ICON_CHAT", "1" },
	{ "int", "ICON_NONE", "2" },
	{ "const float", "THIRD_PERSON_FOCUS_DISTANCE", "512.0" },
	{ "const int", "LAND_DEFLECT_TIME", "150" },
	{ "const int", "LAND_RETURN_TIME", "300" },
	{ "const int", "FOCUS_TIME", "300" },
	{ "const int", "FOCUS_GUI_TIME", "500" },
	{ "const int", "ASYNC_PLAYER_INV_AMMO_BITS", "0(999)" },
	{ "const int", "ASYNC_PLAYER_INV_CLIP_BITS", "-7" },
	{ "int", "SPEED", "0" },
	{ "int", "PROJECTILE_DAMAGE", "1" },
	{ "int", "MELEE_DAMAGE", "2" },
	{ "int", "MELEE_DISTANCE", "3" },
	{ "int", "INFLUENCE_NONE", "0" },
	{ "int", "INFLUENCE_LEVEL1", "1" },
	{ "int", "INFLUENCE_LEVEL2", "2" },
	{ "int", "INFLUENCE_LEVEL3", "3" },
	{ "int", "MOUSEDIR_NONE", "0" },
	{ "int", "MOUSEDIR_LEFT", "1" },
	{ "int", "MOUSEDIR_UP_LEFT", "2" },
	{ "int", "MOUSEDIR_UP", "3" },
	{ "int", "MOUSEDIR_UP_RIGHT", "4" },
	{ "int", "MOUSEDIR_RIGHT", "5" },
	{ "int", "MOUSEDIR_DOWN_RIGHT", "6" },
	{ "int", "MOUSEDIR_DOWN", "7" },
	{ "int", "MOUSEDIR_DOWN_LEFT", "8" },
	{ "int", "MOUSETEST_UPDOWN", "0" },
	{ "int", "MOUSETEST_LEFTRIGHT", "1" },
	{ "int", "MOUSETEST_4DIR", "2" },
	{ "int", "MOUSETEST_8DIR", "3" },
	{ "int", "EIM_ALL", "-1" },
	{ "int", "EIM_UPDATE", "10" },
	{ "int", "EIM_VIEW_ANGLE", "20" },
	{ "int", "EIM_MOVEMENT", "40" },
	{ "int", "EIM_CROUCH", "80" },
	{ "int", "EIM_CROUCH_HOLD", "160" },
	{ "int", "EIM_JUMP", "320" },
	{ "int", "EIM_MANTLE", "640" },
	{ "int", "EIM_CLIMB", "1280" },
	{ "int", "EIM_FROB", "2560" },
	{ "int", "EIM_FROB_HILIGHT", "5120" },
	{ "int", "EIM_FROB_COMPLEX", "10240" },
	{ "int", "EIM_ATTACK", "20480" },
	{ "int", "EIM_ATTACK_RANGED", "40960" },
	{ "int", "EIM_WEAPON_SELECT", "81920" },
	{ "int", "EIM_ITEM_USE", "163840" },
	{ "int", "EIM_ITEM_SELECT", "327680" },
	{ "int", "EIM_ITEM_DROP", "655360" },
	{ "int", "EIM_LEAN", "1310720" },
	{ "int", "idPlayer::EVENT_IMPULSE", "2" },
	{ "int", "idPlayer::EVENT_EXIT_TELEPORTER", "3" },
	{ "int", "idPlayer::EVENT_ABORT_TELEPORTER", "4" },
	{ "int", "idPlayer::EVENT_SPECTATE", "5" },
	{ "int", "idPlayer::EVENT_MAXEVENTS", "6" },
	{ "static const int", "idPlayer::NUM_LOGGED_VIEW_ANGLES", "64" },
	{ "static const int", "idPlayer::NUM_LOGGED_ACCELS", "16" },
	{ "int", "idMover::ACCELERATION_STAGE", "0" },
	{ "int", "idMover::LINEAR_STAGE", "1" },
	{ "int", "idMover::DECELERATION_STAGE", "2" },
	{ "int", "idMover::FINISHED_STAGE", "3" },
	{ "int", "idMover::MOVER_NONE", "0" },
	{ "int", "idMover::MOVER_ROTATING", "1" },
	{ "int", "idMover::MOVER_MOVING", "2" },
	{ "int", "idMover::MOVER_SPLINE", "3" },
	{ "int", "idMover::DIR_UP", "-1" },
	{ "int", "idMover::DIR_DOWN", "-2" },
	{ "int", "idMover::DIR_LEFT", "-3" },
	{ "int", "idMover::DIR_RIGHT", "-4" },
	{ "int", "idMover::DIR_FORWARD", "-5" },
	{ "int", "idMover::DIR_BACK", "-6" },
	{ "int", "idMover::DIR_REL_UP", "-7" },
	{ "int", "idMover::DIR_REL_DOWN", "-8" },
	{ "int", "idMover::DIR_REL_LEFT", "-9" },
	{ "int", "idMover::DIR_REL_RIGHT", "-10" },
	{ "int", "idMover::DIR_REL_FORWARD", "-11" },
	{ "int", "idMover::DIR_REL_BACK", "-12" },
	{ "int", "MOVER_POS1", "0" },
	{ "int", "MOVER_POS2", "1" },
	{ "int", "MOVER_1TO2", "2" },
	{ "int", "MOVER_2TO1", "3" },
	{ "int", "idExplodingBarrel::EVENT_EXPLODE", "2" },
	{ "int", "idExplodingBarrel::EVENT_MAXEVENTS", "3" },
	{ "int", "idExplodingBarrel::NORMAL", "0" },
	{ "int", "idExplodingBarrel::BURNING", "1" },
	{ "int", "idExplodingBarrel::BURNEXPIRED", "2" },
	{ "int", "idExplodingBarrel::EXPLODING", "3" },
	{ "int", "idSecurityCamera::MODE_SCANNING", "0" },
	{ "int", "idSecurityCamera::MODE_LOSINGINTEREST", "1" },
	{ "int", "idSecurityCamera::MODE_SIGHTED", "2" },
	{ "int", "idSecurityCamera::MODE_ALERT", "3" },
	{ "int", "idSecurityCamera::STATE_SWEEPING", "0" },
	{ "int", "idSecurityCamera::STATE_PLAYERSIGHTED", "1" },
	{ "int", "idSecurityCamera::STATE_ALERTED", "2" },
	{ "int", "idSecurityCamera::STATE_LOSTINTEREST", "3" },
	{ "int", "idSecurityCamera::STATE_POWERRETURNS_SWEEPING", "4" },
	{ "int", "idSecurityCamera::STATE_POWERRETURNS_PAUSED", "5" },
	{ "int", "idSecurityCamera::STATE_PAUSED", "6" },
	{ "int", "idSecurityCamera::STATE_DEAD", "7" },
	{ "int", "idBrittleFracture::EVENT_PROJECT_DECAL", "2" },
	{ "int", "idBrittleFracture::EVENT_SHATTER", "3" },
	{ "int", "idBrittleFracture::EVENT_MAXEVENTS", "4" },
	{ "int", "EQUAL", "0" },
	{ "int", "OLDER", "1" },
	{ "int", "NEWER", "2" },
	{ "int", "LT_INIT", "0" },
	{ "int", "LT_FORCE", "1" },
	{ "int", "LT_ERROR", "2" },
	{ "int", "LT_BEGIN", "3" },
	{ "int", "LT_END", "4" },
	{ "int", "LT_WARNING", "5" },
	{ "int", "LT_INFO", "6" },
	{ "int", "LT_DEBUG", "7" },
	{ "int", "LT_COUNT", "8" },
	{ "int", "LC_INIT", "0" },
	{ "int", "LC_FORCE", "1" },
	{ "int", "LC_MISC", "2" },
	{ "int", "LC_SYSTEM", "3" },
	{ "int", "LC_FROBBING", "4" },
	{ "int", "LC_AI", "5" },
	{ "int", "LC_SOUND", "6" },
	{ "int", "LC_FUNCTION", "7" },
	{ "int", "LC_ENTITY", "8" },
	{ "int", "LC_INVENTORY", "9" },
	{ "int", "LC_LIGHT", "10" },
	{ "int", "LC_WEAPON", "11" },
	{ "int", "LC_MATH", "12" },
	{ "int", "LC_MOVEMENT", "13" },
	{ "int", "LC_LOCKPICK", "14" },
	{ "int", "LC_FRAME", "15" },
	{ "int", "LC_STIM_RESPONSE", "16" },
	{ "int", "LC_OBJECTIVES", "17" },
	{ "int", "LC_DIFFICULTY", "18" },
	{ "int", "LC_CONVERSATION", "19" },
	{ "int", "LC_MAINMENU", "20" },
	{ "int", "LC_AAS", "21" },
	{ "int", "LC_STATE", "22" },
	{ "int", "LC_COUNT", "23" },
	{ "int", "CRelations::E_ENEMY", "-1" },
	{ "int", "CRelations::E_NEUTRAL", "0" },
	{ "int", "CRelations::E_FRIEND", "1" },
	{ "int", "ai::EAlertNone", "0" },
	{ "int", "ai::EAlertVisual_1", "1" },
	{ "int", "ai::EAlertVisual_2", "2" },
	{ "int", "ai::EAlertVisual_4", "3" },
	{ "int", "ai::EAlertTactile", "4" },
	{ "int", "ai::EAlertAudio", "5" },
	{ "int", "ai::EAlertClassCount", "6" },
	{ "int", "ai::EAlertTypeNone", "0" },
	{ "int", "ai::EAlertTypeSuspicious", "1" },
	{ "int", "ai::EAlertTypeSuspiciousVisual", "2" },
	{ "int", "ai::EAlertTypeEnemy", "3" },
	{ "int", "ai::EAlertTypeFailedKO", "4" },
	{ "int", "ai::EAlertTypeWeapon", "5" },
	{ "int", "ai::EAlertTypeBlinded", "6" },
	{ "int", "ai::EAlertTypeDeadPerson", "7" },
	{ "int", "ai::EAlertTypeUnconsciousPerson", "8" },
	{ "int", "ai::EAlertTypeBlood", "9" },
	{ "int", "ai::EAlertTypeLightSource", "10" },
	{ "int", "ai::EAlertTypeMissingItem", "11" },
	{ "int", "ai::EAlertTypeBrokenItem", "12" },
	{ "int", "ai::EAlertTypeDoor", "13" },
	{ "int", "ai::EAlertTypeSuspiciousItem", "14" },
	{ "int", "ai::EAlertTypeRope", "15" },
	{ "int", "ai::EAlertTypeHitByProjectile", "16" },
	{ "int", "ai::EAlertTypeFoundEnemy", "17" },
	{ "int", "ai::EAlertTypeLostTrackOfEnemy", "18" },
	{ "int", "ai::EAlertTypeEncounter", "19" },
	{ "int", "ai::EAlertTypeRequestForHelp", "20" },
	{ "int", "ai::EAlertTypeDetectedEnemy", "21" },
	{ "int", "ai::EAlertTypeSomethingSuspicious", "22" },
	{ "int", "ai::EAlertTypeHitByMoveable", "23" },
	{ "int", "ai::EAlertTypePickedPocket", "24" },
	{ "int", "ai::EAlertTypeCount", "25" },
	{ "int", "ai::ERelaxed", "0" },
	{ "int", "ai::EObservant", "1" },
	{ "int", "ai::ESuspicious", "2" },
	{ "int", "ai::ESearching", "3" },
	{ "int", "ai::EAgitatedSearching", "4" },
	{ "int", "ai::ECombat", "5" },
	{ "int", "ai::EAlertStateNum", "6" },
	{ "int", "ai::EPC_None", "0" },
	{ "int", "ai::EPC_Projectile", "1" },
	{ "int", "ai::EPC_Melee", "2" },
	{ "int", "ai::EPC_Drown", "3" },
	{ "int", "ai::EPC_KO", "4" },
	{ "int", "ai::EPC_Fall", "5" },
	{ "int", "ai::EPC_Moveable", "6" },
	{ "int", "ai::EPC_Num", "7" },
	{ "int", "ai::ERBS_NULL", "0" },
	{ "int", "ai::ERBS_SEARCHER_SINGLE_NO_EVIDENCE", "1" },
	{ "int", "ai::ERBS_SEARCHER_MULTIPLE_NO_EVIDENCE", "2" },
	{ "int", "ai::ERBS_SEARCHER_SINGLE_EVIDENCE", "3" },
	{ "int", "ai::ERBS_SEARCHER_MULTIPLE_EVIDENCE", "4" },
	{ "int", "ai::ERBS_GUARD_OBSERVER", "5" },
	{ "int", "ai::ERBS_NUM", "6" },
	{ "const int", "ai::MINIMUM_TIME_BETWEEN_GREETING_SAME_ACTOR", "4*60" },
	{ "const int", "ai::EXTRA_DELAY_BETWEEN_GREETING_SAME_ACTOR", "3*60" },
	{ "int", "SS_DISABLED", "0" },
	{ "int", "SS_ENABLED", "1" },
	{ "int", "SS_DEFAULT", "2" },
	{ "int", "ai::CommMessage::Greeting_CommType", "1" },
	{ "int", "ai::CommMessage::FriendlyJoke_CommType", "2" },
	{ "int", "ai::CommMessage::Insult_CommType", "3" },
	{ "int", "ai::CommMessage::RequestForHelp_CommType", "4" },
	{ "int", "ai::CommMessage::RequestForMissileHelp_CommType", "5" },
	{ "int", "ai::CommMessage::RequestForMeleeHelp_CommType", "6" },
	{ "int", "ai::CommMessage::RequestForLight_CommType", "7" },
	{ "int", "ai::CommMessage::DetectedSomethingSuspicious_CommType", "8" },
	{ "int", "ai::CommMessage::DetectedEnemy_CommType", "9" },
	{ "int", "ai::CommMessage::FollowOrder_CommType", "10" },
	{ "int", "ai::CommMessage::GuardLocationOrder_CommType", "11" },
	{ "int", "ai::CommMessage::GuardEntityOrder_CommType", "12" },
	{ "int", "ai::CommMessage::PatrolOrder_CommType", "13" },
	{ "int", "ai::CommMessage::AttackOrder_CommType", "14" },
	{ "int", "ai::CommMessage::GetOutOfTheWayOrder_CommType", "15" },
	{ "int", "ai::CommMessage::ConveyWarning_EvidenceOfIntruders_CommType", "16" },
	{ "int", "ai::CommMessage::ConveyWarning_ItemsHaveBeenStolen_CommType", "17" },
	{ "int", "ai::CommMessage::ConveyWarning_EnemiesHaveBeenSeen_CommType", "18" },
	{ "int", "ai::CommMessage::ConveyWarning_CorpseHasBeenSeen_CommType", "19" },
	{ "int", "ai::CommMessage::ConveyWarning_UnconsciousPersonHasBeenSeen_CommType", "20" },
	{ "int", "ai::CommMessage::RaiseTheAlarm_ItemsHaveBeenStolen_CommType", "21" },
	{ "int", "ai::CommMessage::RaiseTheAlarm_CorpseHasBeenSeen_CommType", "22" },
	{ "int", "ai::CommMessage::RaiseTheAlarm_UnconsciousPersonHasBeenSeen_CommType", "23" },
	{ "int", "ai::CommMessage::NumCommTypes", "24" },
	{ "int", "ai::SubsysSenses", "0" },
	{ "int", "ai::SubsysMovement", "1" },
	{ "int", "ai::SubsysCommunication", "2" },
	{ "int", "ai::SubsysAction", "3" },
	{ "int", "ai::SubsysSearch", "4" },
	{ "int", "ai::SubsystemCount", "5" },
	{ "int", "ai::State::EAIuse_Default", "0" },
	{ "int", "ai::State::EAIuse_Person", "1" },
	{ "int", "ai::State::EAIuse_Weapon", "2" },
	{ "int", "ai::State::EAIuse_Blood_Evidence", "3" },
	{ "int", "ai::State::EAIuse_Lightsource", "4" },
	{ "int", "ai::State::EAIuse_Missing_Item_Marker", "5" },
	{ "int", "ai::State::EAIuse_Broken_Item", "6" },
	{ "int", "ai::State::EAIuse_Door", "7" },
	{ "int", "ai::State::EAIuse_Suspicious", "8" },
	{ "int", "ai::State::EAIuse_Rope", "9" },
	{ "int", "ai::State::EAIuse_Monster", "10" },
	{ "int", "ai::State::EAIuse_Undead", "11" },
	{ "int", "ai::State::ENumMarkers", "12" },
	{ "int", "ai::State::ESBO_0", "0" },
	{ "int", "ai::State::ESBO_1", "1" },
	{ "int", "ai::State::ESBO_2", "2" },
	{ "int", "ai::State::ENumSBOLevels", "3" },
	{ "int", "ai::CommunicationSubsystem::EDefault", "0" },
	{ "int", "ai::CommunicationSubsystem::EOverride", "1" },
	{ "int", "ai::CommunicationSubsystem::EQueue", "2" },
	{ "int", "ai::CommunicationSubsystem::EDiscard", "3" },
	{ "int", "ai::CommunicationSubsystem::EPush", "4" },
	{ "int", "ai::MovementSubsystem::ENotBlocked", "0" },
	{ "int", "ai::MovementSubsystem::EPossiblyBlocked", "1" },
	{ "int", "ai::MovementSubsystem::EBlocked", "2" },
	{ "int", "ai::MovementSubsystem::EResolvingBlock", "3" },
	{ "int", "ai::MovementSubsystem::EWaitingSolid", "4" },
	{ "int", "ai::MovementSubsystem::EWaitingNonSolid", "5" },
	{ "int", "ai::MovementSubsystem::ENumBlockedStates", "6" },
	{ "int", "NONE_HIDING_SPOT_TYPE", "0" },
	{ "int", "PVS_AREA_HIDING_SPOT_TYPE", "1" },
	{ "int", "DARKNESS_HIDING_SPOT_TYPE", "2" },
	{ "int", "VISUAL_OCCLUSION_HIDING_SPOT_TYPE", "4" },
	{ "int", "ANY_HIDING_SPOT_TYPE", "-1" },
	{ "int", "CDarkmodAASHidingSpotFinder::EBuildingPVSList", "0" },
	{ "int", "CDarkmodAASHidingSpotFinder::ENewPVSArea", "1" },
	{ "int", "CDarkmodAASHidingSpotFinder::EIteratingVisibleAASAreas", "2" },
	{ "int", "CDarkmodAASHidingSpotFinder::EIteratingNonVisibleAASAreas", "3" },
	{ "int", "CDarkmodAASHidingSpotFinder::ESubdivideVisibleAASArea", "4" },
	{ "int", "CDarkmodAASHidingSpotFinder::EDone", "5" },
	{ "int", "MOVETYPE_DEAD", "0" },
	{ "int", "MOVETYPE_ANIM", "1" },
	{ "int", "MOVETYPE_SLIDE", "2" },
	{ "int", "MOVETYPE_FLY", "3" },
	{ "int", "MOVETYPE_STATIC", "4" },
	{ "int", "MOVETYPE_SIT", "5" },
	{ "int", "MOVETYPE_SIT_DOWN", "6" },
	{ "int", "MOVETYPE_SLEEP", "7" },
	{ "int", "MOVETYPE_FALL_ASLEEP", "8" },
	{ "int", "MOVETYPE_GET_UP", "9" },
	{ "int", "MOVETYPE_WAKE_UP", "10" },
	{ "int", "NUM_MOVETYPES", "11" },
	{ "int", "MOVE_NONE", "0" },
	{ "int", "MOVE_FACE_ENEMY", "1" },
	{ "int", "MOVE_FACE_ENTITY", "2" },
	{ "int", "NUM_NONMOVING_COMMANDS", "3" },
	{ "int", "MOVE_TO_ENEMY", "3" },
	{ "int", "MOVE_TO_ENEMYHEIGHT", "4" },
	{ "int", "MOVE_TO_ENTITY", "5" },
	{ "int", "MOVE_OUT_OF_RANGE", "6" },
	{ "int", "MOVE_TO_ATTACK_POSITION", "7" },
	{ "int", "MOVE_TO_COVER", "8" },
	{ "int", "MOVE_TO_POSITION", "9" },
	{ "int", "MOVE_TO_POSITION_DIRECT", "10" },
	{ "int", "MOVE_SLIDE_TO_POSITION", "11" },
	{ "int", "MOVE_WANDER", "12" },
	{ "int", "MOVE_VECTOR", "13" },
	{ "int", "MOVE_FLEE", "14" },
	{ "int", "NUM_MOVE_COMMANDS", "15" },
	{ "int", "MOVE_STATUS_DONE", "0" },
	{ "int", "MOVE_STATUS_MOVING", "1" },
	{ "int", "MOVE_STATUS_WAITING", "2" },
	{ "int", "MOVE_STATUS_DEST_NOT_FOUND", "3" },
	{ "int", "MOVE_STATUS_DEST_UNREACHABLE", "4" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_WALL", "5" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_OBJECT", "6" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_ENEMY", "7" },
	{ "int", "MOVE_STATUS_BLOCKED_BY_MONSTER", "8" },
	{ "const float", "SQUARE_ROOT_OF_2", "1.414213562" },
	{ "const float", "AI_TURN_PREDICTION", "0.2" },
	{ "const float", "AI_TURN_SCALE", "60.0" },
	{ "const float", "AI_SEEK_PREDICTION", "0.3" },
	{ "const float", "AI_FLY_DAMPENING", "0.15" },
	{ "const float", "AI_HEARING_RANGE", "2048.0" },
	{ "const int", "DEFAULT_FLY_OFFSET", "68" },
	{ "const int", "TEMP_THINK_INTERLEAVE", "4" },
	{ "const int", "TEMP_THINK_DISTANCE", "200" },
	{ "const int", "TEMP_THINK_FACTOR", "8" },
	{ "static const int", "s_MAXACUITIES", "15" },
	{ "int", "TALK_NEVER", "0" },
	{ "int", "TALK_DEAD", "1" },
	{ "int", "TALK_OK", "2" },
	{ "int", "TALK_BUSY", "3" },
	{ "int", "NUM_TALK_STATES", "4" },
	{ "int", "KO_NOT", "0" },
	{ "int", "KO_BLACKJACK", "1" },
	{ "int", "KO_GAS", "2" },
	{ "int", "KO_FALL", "3" },
	{ "int", "NUM_KO_STATES", "4" },
	{ "int", "SE_BLOCKED", "10" },
	{ "int", "SE_ENTER_LEDGE_AREA", "20" },
	{ "int", "SE_ENTER_OBSTACLE", "40" },
	{ "int", "SE_FALL", "80" },
	{ "int", "SE_LAND", "160" },
	{ "const char * const", "RESULT_STRING", "<RESULT>" },
	{ "int", "OP_RETURN", "0" },
	{ "int", "OP_UINC_F", "1" },
	{ "int", "OP_UINCP_F", "2" },
	{ "int", "OP_UDEC_F", "3" },
	{ "int", "OP_UDECP_F", "4" },
	{ "int", "OP_COMP_F", "5" },
	{ "int", "OP_MUL_F", "6" },
	{ "int", "OP_MUL_V", "7" },
	{ "int", "OP_MUL_FV", "8" },
	{ "int", "OP_MUL_VF", "9" },
	{ "int", "OP_DIV_F", "10" },
	{ "int", "OP_MOD_F", "11" },
	{ "int", "OP_ADD_F", "12" },
	{ "int", "OP_ADD_V", "13" },
	{ "int", "OP_ADD_S", "14" },
	{ "int", "OP_ADD_FS", "15" },
	{ "int", "OP_ADD_SF", "16" },
	{ "int", "OP_ADD_VS", "17" },
	{ "int", "OP_ADD_SV", "18" },
	{ "int", "OP_SUB_F", "19" },
	{ "int", "OP_SUB_V", "20" },
	{ "int", "OP_EQ_F", "21" },
	{ "int", "OP_EQ_V", "22" },
	{ "int", "OP_EQ_S", "23" },
	{ "int", "OP_EQ_E", "24" },
	{ "int", "OP_EQ_EO", "25" },
	{ "int", "OP_EQ_OE", "26" },
	{ "int", "OP_EQ_OO", "27" },
	{ "int", "OP_NE_F", "28" },
	{ "int", "OP_NE_V", "29" },
	{ "int", "OP_NE_S", "30" },
	{ "int", "OP_NE_E", "31" },
	{ "int", "OP_NE_EO", "32" },
	{ "int", "OP_NE_OE", "33" },
	{ "int", "OP_NE_OO", "34" },
	{ "int", "OP_LE", "35" },
	{ "int", "OP_GE", "36" },
	{ "int", "OP_LT", "37" },
	{ "int", "OP_GT", "38" },
	{ "int", "OP_INDIRECT_F", "39" },
	{ "int", "OP_INDIRECT_V", "40" },
	{ "int", "OP_INDIRECT_S", "41" },
	{ "int", "OP_INDIRECT_ENT", "42" },
	{ "int", "OP_INDIRECT_BOOL", "43" },
	{ "int", "OP_INDIRECT_OBJ", "44" },
	{ "int", "OP_ADDRESS", "45" },
	{ "int", "OP_EVENTCALL", "46" },
	{ "int", "OP_OBJECTCALL", "47" },
	{ "int", "OP_SYSCALL", "48" },
	{ "int", "OP_STORE_F", "49" },
	{ "int", "OP_STORE_V", "50" },
	{ "int", "OP_STORE_S", "51" },
	{ "int", "OP_STORE_ENT", "52" },
	{ "int", "OP_STORE_BOOL", "53" },
	{ "int", "OP_STORE_OBJENT", "54" },
	{ "int", "OP_STORE_OBJ", "55" },
	{ "int", "OP_STORE_ENTOBJ", "56" },
	{ "int", "OP_STORE_FTOS", "57" },
	{ "int", "OP_STORE_BTOS", "58" },
	{ "int", "OP_STORE_VTOS", "59" },
	{ "int", "OP_STORE_FTOBOOL", "60" },
	{ "int", "OP_STORE_BOOLTOF", "61" },
	{ "int", "OP_STOREP_F", "62" },
	{ "int", "OP_STOREP_V", "63" },
	{ "int", "OP_STOREP_S", "64" },
	{ "int", "OP_STOREP_ENT", "65" },
	{ "int", "OP_STOREP_FLD", "66" },
	{ "int", "OP_STOREP_BOOL", "67" },
	{ "int", "OP_STOREP_OBJ", "68" },
	{ "int", "OP_STOREP_OBJENT", "69" },
	{ "int", "OP_STOREP_FTOS", "70" },
	{ "int", "OP_STOREP_BTOS", "71" },
	{ "int", "OP_STOREP_VTOS", "72" },
	{ "int", "OP_STOREP_FTOBOOL", "73" },
	{ "int", "OP_STOREP_BOOLTOF", "74" },
	{ "int", "OP_UMUL_F", "75" },
	{ "int", "OP_UMUL_V", "76" },
	{ "int", "OP_UDIV_F", "77" },
	{ "int", "OP_UDIV_V", "78" },
	{ "int", "OP_UMOD_F", "79" },
	{ "int", "OP_UADD_F", "80" },
	{ "int", "OP_UADD_V", "81" },
	{ "int", "OP_USUB_F", "82" },
	{ "int", "OP_USUB_V", "83" },
	{ "int", "OP_UAND_F", "84" },
	{ "int", "OP_UOR_F", "85" },
	{ "int", "OP_NOT_BOOL", "86" },
	{ "int", "OP_NOT_F", "87" },
	{ "int", "OP_NOT_V", "88" },
	{ "int", "OP_NOT_S", "89" },
	{ "int", "OP_NOT_ENT", "90" },
	{ "int", "OP_NEG_F", "91" },
	{ "int", "OP_NEG_V", "92" },
	{ "int", "OP_INT_F", "93" },
	{ "int", "OP_IF", "94" },
	{ "int", "OP_IFNOT", "95" },
	{ "int", "OP_CALL", "96" },
	{ "int", "OP_THREAD", "97" },
	{ "int", "OP_OBJTHREAD", "98" },
	{ "int", "OP_PUSH_F", "99" },
	{ "int", "OP_PUSH_V", "100" },
	{ "int", "OP_PUSH_S", "101" },
	{ "int", "OP_PUSH_ENT", "102" },
	{ "int", "OP_PUSH_OBJ", "103" },
	{ "int", "OP_PUSH_OBJENT", "104" },
	{ "int", "OP_PUSH_FTOS", "105" },
	{ "int", "OP_PUSH_BTOF", "106" },
	{ "int", "OP_PUSH_FTOB", "107" },
	{ "int", "OP_PUSH_VTOS", "108" },
	{ "int", "OP_PUSH_BTOS", "109" },
	{ "int", "OP_GOTO", "110" },
	{ "int", "OP_AND", "111" },
	{ "int", "OP_AND_BOOLF", "112" },
	{ "int", "OP_AND_FBOOL", "113" },
	{ "int", "OP_AND_BOOLBOOL", "114" },
	{ "int", "OP_OR", "115" },
	{ "int", "OP_OR_BOOLF", "116" },
	{ "int", "OP_OR_FBOOL", "117" },
	{ "int", "OP_OR_BOOLBOOL", "118" },
	{ "int", "OP_BITAND", "119" },
	{ "int", "OP_BITOR", "120" },
	{ "int", "OP_BREAK", "121" },
	{ "int", "OP_CONTINUE", "122" },
	{ "int", "NUM_OPCODES", "123" },
	{ "int", "GAME_SP", "0" },
	{ "int", "GAME_DM", "1" },
	{ "int", "GAME_TOURNEY", "2" },
	{ "int", "GAME_TDM", "3" },
	{ "int", "GAME_LASTMAN", "4" },
	{ "int", "PLAYER_VOTE_NONE", "0" },
	{ "int", "PLAYER_VOTE_NO", "1" },
	{ "int", "PLAYER_VOTE_YES", "2" },
	{ "int", "PLAYER_VOTE_WAIT", "3" },
	{ "const int", "NUM_CHAT_NOTIFY", "5" },
	{ "const int", "CHAT_FADE_TIME", "400" },
	{ "const int", "FRAGLIMIT_DELAY", "2000" },
	{ "const int", "MP_PLAYER_MINFRAGS", "-100" },
	{ "const int", "MP_PLAYER_MAXFRAGS", "100" },
	{ "const int", "MP_PLAYER_MAXWINS", "100" },
	{ "const int", "MP_PLAYER_MAXPING", "999" },
	{ "int", "SND_YOUWIN", "0" },
	{ "int", "SND_YOULOSE", "1" },
	{ "int", "SND_FIGHT", "2" },
	{ "int", "SND_VOTE", "3" },
	{ "int", "SND_VOTE_PASSED", "4" },
	{ "int", "SND_VOTE_FAILED", "5" },
	{ "int", "SND_THREE", "6" },
	{ "int", "SND_TWO", "7" },
	{ "int", "SND_ONE", "8" },
	{ "int", "SND_SUDDENDEATH", "9" },
	{ "int", "SND_COUNT", "10" },
	{ "int", "idMultiplayerGame::INACTIVE", "0" },
	{ "int", "idMultiplayerGame::WARMUP", "1" },
	{ "int", "idMultiplayerGame::COUNTDOWN", "2" },
	{ "int", "idMultiplayerGame::GAMEON", "3" },
	{ "int", "idMultiplayerGame::SUDDENDEATH", "4" },
	{ "int", "idMultiplayerGame::GAMEREVIEW", "5" },
	{ "int", "idMultiplayerGame::NEXTGAME", "6" },
	{ "int", "idMultiplayerGame::STATE_COUNT", "7" },
	{ "int", "idMultiplayerGame::MSG_SUICIDE", "0" },
	{ "int", "idMultiplayerGame::MSG_KILLED", "1" },
	{ "int", "idMultiplayerGame::MSG_KILLEDTEAM", "2" },
	{ "int", "idMultiplayerGame::MSG_DIED", "3" },
	{ "int", "idMultiplayerGame::MSG_VOTE", "4" },
	{ "int", "idMultiplayerGame::MSG_VOTEPASSED", "5" },
	{ "int", "idMultiplayerGame::MSG_VOTEFAILED", "6" },
	{ "int", "idMultiplayerGame::MSG_SUDDENDEATH", "7" },
	{ "int", "idMultiplayerGame::MSG_FORCEREADY", "8" },
	{ "int", "idMultiplayerGame::MSG_JOINEDSPEC", "9" },
	{ "int", "idMultiplayerGame::MSG_TIMELIMIT", "10" },
	{ "int", "idMultiplayerGame::MSG_FRAGLIMIT", "11" },
	{ "int", "idMultiplayerGame::MSG_TELEFRAGGED", "12" },
	{ "int", "idMultiplayerGame::MSG_JOINTEAM", "13" },
	{ "int", "idMultiplayerGame::MSG_HOLYSHIT", "14" },
	{ "int", "idMultiplayerGame::MSG_COUNT", "15" },
	{ "int", "idMultiplayerGame::VOTE_RESTART", "0" },
	{ "int", "idMultiplayerGame::VOTE_TIMELIMIT", "1" },
	{ "int", "idMultiplayerGame::VOTE_FRAGLIMIT", "2" },
	{ "int", "idMultiplayerGame::VOTE_GAMETYPE", "3" },
	{ "int", "idMultiplayerGame::VOTE_KICK", "4" },
	{ "int", "idMultiplayerGame::VOTE_MAP", "5" },
	{ "int", "idMultiplayerGame::VOTE_SPECTATORS", "6" },
	{ "int", "idMultiplayerGame::VOTE_NEXTMAP", "7" },
	{ "int", "idMultiplayerGame::VOTE_COUNT", "8" },
	{ "int", "idMultiplayerGame::VOTE_NONE", "9" },
	{ "int", "idMultiplayerGame::VOTE_UPDATE", "0" },
	{ "int", "idMultiplayerGame::VOTE_FAILED", "1" },
	{ "int", "idMultiplayerGame::VOTE_PASSED", "2" },
	{ "int", "idMultiplayerGame::VOTE_ABORTED", "3" },
	{ "int", "idMultiplayerGame::VOTE_RESET", "4" },
	{ "int", "BUTTON_TYPE_RIDE", "0" },
	{ "int", "BUTTON_TYPE_FETCH", "1" },
	{ "int", "NUM_BUTTON_TYPES", "2" },
	{ "int", "COMP_KILL", "0" },
	{ "int", "COMP_KO", "1" },
	{ "int", "COMP_AI_FIND_ITEM", "2" },
	{ "int", "COMP_AI_FIND_BODY", "3" },
	{ "int", "COMP_ALERT", "4" },
	{ "int", "COMP_DESTROY", "5" },
	{ "int", "COMP_ITEM", "6" },
	{ "int", "COMP_PICKPOCKET", "7" },
	{ "int", "COMP_LOCATION", "8" },
	{ "int", "COMP_CUSTOM_ASYNC", "9" },
	{ "int", "COMP_CUSTOM_CLOCKED", "10" },
	{ "int", "COMP_INFO_LOCATION", "11" },
	{ "int", "COMP_DISTANCE", "12" },
	{ "int", "COMP_READABLE_OPENED", "13" },
	{ "int", "COMP_READABLE_CLOSED", "14" },
	{ "int", "COMP_READABLE_PAGE_REACHED", "15" },
	{ "int", "COMP_COUNT", "16" },
	{ "int", "SPEC_NONE", "0" },
	{ "int", "SPEC_NAME", "1" },
	{ "int", "SPEC_OVERALL", "2" },
	{ "int", "SPEC_GROUP", "3" },
	{ "int", "SPEC_CLASSNAME", "4" },
	{ "int", "SPEC_SPAWNCLASS", "5" },
	{ "int", "SPEC_AI_TYPE", "6" },
	{ "int", "SPEC_AI_TEAM", "7" },
	{ "int", "SPEC_AI_INNOCENCE", "8" },
	{ "int", "SPEC_COUNT", "9" },
	{ "int", "STATE_INCOMPLETE", "0" },
	{ "int", "STATE_COMPLETE", "1" },
	{ "int", "STATE_INVALID", "2" },
	{ "int", "STATE_FAILED", "3" },
	{ "int", "EVENT_NOTHING", "0" },
	{ "int", "EVENT_READABLE_OPENED", "1" },
	{ "int", "EVENT_READABLE_CLOSED", "2" },
	{ "int", "EVENT_READABLE_PAGE_REACHED", "3" },
	{ "int", "EVENT_INVALID", "4" },
	{ "int", "ObjectiveCondition::CHANGE_STATE", "0" },
	{ "int", "ObjectiveCondition::CHANGE_VISIBILITY", "1" },
	{ "int", "ObjectiveCondition::CHANGE_MANDATORY", "2" },
	{ "int", "ObjectiveCondition::INVALID_TYPE", "3" },
	{ "int", "CStimResponseTimer::SRTT_SINGLESHOT", "0" },
	{ "int", "CStimResponseTimer::SRTT_RELOAD", "1" },
	{ "int", "CStimResponseTimer::SRTT_DEFAULT", "2" },
	{ "int", "CStimResponseTimer::SRTS_DISABLED", "0" },
	{ "int", "CStimResponseTimer::SRTS_TRIGGERED", "1" },
	{ "int", "CStimResponseTimer::SRTS_RUNNING", "2" },
	{ "int", "CStimResponseTimer::SRTS_EXPIRED", "3" },
	{ "int", "CStimResponseTimer::SRTS_DEFAULT", "4" },
	{ "int", "SEED_ENTITY_HIDDEN", "1" },
	{ "int", "SEED_ENTITY_EXISTS", "2" },
	{ "int", "SEED_ENTITY_WAS_SPAWNED", "4" },
	{ "int", "SEED_ENTITY_PSEUDO", "8" },
	{ "int", "SEED_ENTITY_WAITING", "16" },
	{ "int", "SEED_ENTITY_WATCHED", "32" },
	{ "int", "SEED_ENTITY_COMBINED", "64" },
	{ "static const unsigned int", "Seed::IEEE_ONE", "0x3f800000" },
	{ "static const unsigned int", "Seed::IEEE_MASK", "0x007fffff" },
	{ "static const unsigned int", "Seed::NOCOLLIDE_SAME", "0x01" },
	{ "static const unsigned int", "Seed::NOCOLLIDE_OTHER", "0x02" },
	{ "static const unsigned int", "Seed::NOCOLLIDE_STATIC", "0x04" },
	{ "static const unsigned int", "Seed::NOCOLLIDE_WORLD", "0x08" },
	{ "static const unsigned int", "Seed::NOCOLLIDE_ATALL", "8+4+2+1" },
	{ "static const unsigned int", "Seed::COLLIDE_WORLD", "4+2+1" },
	{ "static const unsigned int", "Seed::COLLIDE_ALL", "0x00" },
	{ "int", "ai::ConversationCommand::EWaitSeconds", "0" },
	{ "int", "ai::ConversationCommand::EWalkToActor", "1" },
	{ "int", "ai::ConversationCommand::EWalkToPosition", "2" },
	{ "int", "ai::ConversationCommand::EWalkToEntity", "3" },
	{ "int", "ai::ConversationCommand::EStopMove", "4" },
	{ "int", "ai::ConversationCommand::ETalk", "5" },
	{ "int", "ai::ConversationCommand::EPlayAnimOnce", "6" },
	{ "int", "ai::ConversationCommand::EPlayAnimCycle", "7" },
	{ "int", "ai::ConversationCommand::EActivateTarget", "8" },
	{ "int", "ai::ConversationCommand::ELookAtActor", "9" },
	{ "int", "ai::ConversationCommand::ELookAtPosition", "10" },
	{ "int", "ai::ConversationCommand::ELookAtEntity", "11" },
	{ "int", "ai::ConversationCommand::ETurnToActor", "12" },
	{ "int", "ai::ConversationCommand::ETurnToPosition", "13" },
	{ "int", "ai::ConversationCommand::ETurnToEntity", "14" },
	{ "int", "ai::ConversationCommand::EAttackActor", "15" },
	{ "int", "ai::ConversationCommand::EAttackEntity", "16" },
	{ "int", "ai::ConversationCommand::EInteractWithEntity", "17" },
	{ "int", "ai::ConversationCommand::ERunScript", "18" },
	{ "int", "ai::ConversationCommand::EWaitForActor", "19" },
	{ "int", "ai::ConversationCommand::EWaitForAllActors", "20" },
	{ "int", "ai::ConversationCommand::ENumCommands", "21" },
	{ "int", "ai::ConversationCommand::EReadyForExecution", "0" },
	{ "int", "ai::ConversationCommand::EExecuting", "1" },
	{ "int", "ai::ConversationCommand::EFinished", "2" },
	{ "int", "ai::ConversationCommand::EAborted", "3" },
	{ "int", "ai::ConversationCommand::ENumStates", "4" },
	{ "int", "ai::ConversationState::ENotReady", "0" },
	{ "int", "ai::ConversationState::EReady", "1" },
	{ "int", "ai::ConversationState::EExecuting", "2" },
	{ "int", "ai::ConversationState::EBusy", "3" },
	{ "int", "ai::ConversationState::ENumExecutionStates", "4" },
	{ "int", "ai::CombatState::EStateReaction", "0" },
	{ "int", "ai::CombatState::EStateDoOnce", "1" },
	{ "int", "ai::CombatState::EStateCheckWeaponState", "2" },
	{ "int", "ai::CombatState::EStateSheathingWeapon", "3" },
	{ "int", "ai::CombatState::EStateDrawWeapon", "4" },
	{ "int", "ai::CombatState::EStateDrawingWeapon", "5" },
	{ "int", "ai::CombatState::EStateCombatAndChecks", "6" },
	{ "int", "ai::CombatState::EStateVictor1", "7" },
	{ "int", "ai::CombatState::EStateVictor2", "8" },
	{ "int", "ai::CombatState::EStateVictor3", "9" },
	{ "int", "ai::CombatState::EStateVictor4", "10" },
	{ "int", "ai::CombatState::EStateVictor5", "11" },
	{ "int", "ai::CombatState::EStateVictor6", "12" },
	{ "int", "ai::CombatState::EStateVictor7", "13" },
	{ "int", "ai::CombatState::EStateVictor8", "14" },
	{ "int", "ai::CombatState::EStateVictor9", "15" },
	{ "int", "ai::ExamineRopeState::EStateSitting", "0" },
	{ "int", "ai::ExamineRopeState::EStateStarting", "1" },
	{ "int", "ai::ExamineRopeState::EStateApproaching", "2" },
	{ "int", "ai::ExamineRopeState::EStateTurningToward", "3" },
	{ "int", "ai::ExamineRopeState::EStateExamineTop", "4" },
	{ "int", "ai::ExamineRopeState::EStateExamineBottom", "5" },
	{ "int", "ai::ExamineRopeState::EStateFinal", "6" },
	{ "const int", "ai::HIT_DIST", "150" },
	{ "const int", "ai::HIT_FIND_THROWER_HORZ", "300" },
	{ "const int", "ai::HIT_FIND_THROWER_VERT", "150" },
	{ "int", "ai::HitByMoveableState::EStateSittingSleeping", "0" },
	{ "int", "ai::HitByMoveableState::EStateStarting", "1" },
	{ "int", "ai::HitByMoveableState::EStateTurnToward", "2" },
	{ "int", "ai::HitByMoveableState::EStateLookAt", "3" },
	{ "int", "ai::HitByMoveableState::EStateTurnBack", "4" },
	{ "int", "ai::HitByMoveableState::EStateLookBack", "5" },
	{ "int", "ai::HitByMoveableState::EStateFinal", "6" },
	{ "int", "ai::PocketPickedState::EStateReact", "0" },
	{ "int", "ai::PocketPickedState::EStateStopping", "1" },
	{ "int", "ai::PocketPickedState::EStateStartAnim", "2" },
	{ "int", "ai::PocketPickedState::EStatePlayAnim", "3" },
	{ "int", "ai::PocketPickedState::EStateTurnToward", "4" },
	{ "int", "ai::PocketPickedState::EStateLookAt", "5" },
	{ "int", "ai::SwitchOnLightState::EStateSitting", "0" },
	{ "int", "ai::SwitchOnLightState::EStateStarting", "1" },
	{ "int", "ai::SwitchOnLightState::EStateApproaching", "2" },
	{ "int", "ai::SwitchOnLightState::EStateTurningToward", "3" },
	{ "int", "ai::SwitchOnLightState::EStateRelight", "4" },
	{ "int", "ai::SwitchOnLightState::EStatePause", "5" },
	{ "int", "ai::SwitchOnLightState::EStateFinal", "6" },
	{ "int", "ai::AnimalPatrolTask::stateNone", "0" },
	{ "int", "ai::AnimalPatrolTask::stateMovingToNextSpot", "1" },
	{ "int", "ai::AnimalPatrolTask::stateMovingToNextPathCorner", "2" },
	{ "int", "ai::AnimalPatrolTask::stateDoingSomething", "3" },
	{ "int", "ai::AnimalPatrolTask::stateWaiting", "4" },
	{ "int", "ai::AnimalPatrolTask::statePreMovingToNextSpot", "5" },
	{ "int", "ai::AnimalPatrolTask::stateCount", "6" },
	{ "int", "FIND_ANY", "0" },
	{ "int", "FIND_GUARDED", "1" },
	{ "int", "FIND_FRIENDLY", "2" },
	{ "int", "FIND_FRIENDLY_GUARDED", "3" },
	{ "int", "FIND_AAS_AREA_FAR_FROM_THREAT", "4" },
	{ "int", "DIST_DONT_CARE", "0" },
	{ "int", "DIST_NEAREST", "1" },
	{ "int", "DIST_FARTHEST", "2" },
	{ "int", "ai::GuardSpotTask::EStateSetup", "0" },
	{ "int", "ai::GuardSpotTask::EStateMoving", "1" },
	{ "int", "ai::GuardSpotTask::EStateStanding", "2" },
	{ "int", "ai::HandleDoorTask::EStateNone", "0" },
	{ "int", "ai::HandleDoorTask::EStateApproachingDoor", "1" },
	{ "int", "ai::HandleDoorTask::EStateMovingToSafePos1", "2" },
	{ "int", "ai::HandleDoorTask::EStateMovingToSafePos2", "3" },
	{ "int", "ai::HandleDoorTask::EStateMovingToFrontPos", "4" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedOpen1", "5" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedOpen2", "6" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedOpen3", "7" },
	{ "int", "ai::HandleDoorTask::EStateWaitBeforeOpen", "8" },
	{ "int", "ai::HandleDoorTask::EStateStartOpen", "9" },
	{ "int", "ai::HandleDoorTask::EStateOpeningDoor", "10" },
	{ "int", "ai::HandleDoorTask::EStateMovingToMidPos", "11" },
	{ "int", "ai::HandleDoorTask::EStateMovingToBackPos", "12" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedClose1", "13" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedClose2", "14" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedClose3", "15" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedClose4", "16" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedClose5", "17" },
	{ "int", "ai::HandleDoorTask::EStateRetryInterruptedClose6", "18" },
	{ "int", "ai::HandleDoorTask::EStateWaitBeforeClose", "19" },
	{ "int", "ai::HandleDoorTask::EStateStartClose", "20" },
	{ "int", "ai::HandleDoorTask::EStateClosingDoor", "21" },
	{ "int", "ai::HandleElevatorTask::EMovingTowardsStation", "0" },
	{ "int", "ai::HandleElevatorTask::EInitiateMoveToFetchButton", "1" },
	{ "int", "ai::HandleElevatorTask::EMovingToFetchButton", "2" },
	{ "int", "ai::HandleElevatorTask::EPressFetchButton", "3" },
	{ "int", "ai::HandleElevatorTask::EWaitForElevator", "4" },
	{ "int", "ai::HandleElevatorTask::EMoveOntoElevator", "5" },
	{ "int", "ai::HandleElevatorTask::EPause", "6" },
	{ "int", "ai::HandleElevatorTask::EInitiateMoveToRideButton", "7" },
	{ "int", "ai::HandleElevatorTask::EMovingToRideButton", "8" },
	{ "int", "ai::HandleElevatorTask::EPressRideButton", "9" },
	{ "int", "ai::HandleElevatorTask::ERideOnElevator", "10" },
	{ "int", "ai::HandleElevatorTask::EGetOffElevator", "11" },
	{ "int", "ai::HandleElevatorTask::EWrapUp", "12" },
	{ "int", "ai::HandleElevatorTask::ENumStates", "13" },
	{ "int", "ai::InvestigateSpotTask::EStateInit", "0" },
	{ "int", "ai::InvestigateSpotTask::EStateMovingTo", "1" },
	{ "int", "ai::InvestigateSpotTask::EStateKneeling", "2" },
	{ "int", "ai::InvestigateSpotTask::EStateWaiting", "3" },
	{ "const int", "ai::PATH_PREDICTION_MOVES", "2" },
	{ "const float", "ai::PATH_PREDICTION_CONSTANT", "26.0" },
	{ "int", "ai::PathSitTask::EStateSitStart", "0" },
	{ "int", "ai::PathSitTask::EStateTurning", "1" },
	{ "int", "ai::PathSitTask::EStateWaiting", "2" },
	{ "int", "ai::PathSitTask::EStateGetUp", "3" },
	{ "int", "CHttpRequest::NOT_PERFORMED_YET", "0" },
	{ "int", "CHttpRequest::OK", "1" },
	{ "int", "CHttpRequest::IN_PROGRESS", "2" },
	{ "int", "CHttpRequest::FAILED", "3" },
	{ "int", "CHttpRequest::ABORTED", "4" },
	{ "int", "INTERSECT_NONE", "0" },
	{ "int", "INTERSECT_PARTIAL", "1" },
	{ "int", "INTERSECT_FULL", "2" },
	{ "int", "INTERSECT_OUTSIDE", "3" },
	{ "int", "INTERSECT_COUNT", "4" },
	{ "int", "ELL_ORIGIN", "0" },
	{ "int", "ELA_CENTER", "1" },
	{ "int", "ELA_AXIS", "2" },
	{ "int", "ELL_COUNT", "3" },
	{ "int", "ELC_ORIGIN", "0" },
	{ "int", "ELA_TARGET", "1" },
	{ "int", "ELA_RIGHT", "2" },
	{ "int", "ELA_UP", "3" },
	{ "int", "ELA_START", "4" },
	{ "int", "ELA_END", "5" },
	{ "int", "ELC_COUNT", "6" },
	{ "int", "LSG_ORIGIN", "0" },
	{ "int", "LSG_DIRECTION", "1" },
	{ "int", "LSG_COUNT", "2" },
	{ "int", "CDownload::NOT_STARTED_YET", "0" },
	{ "int", "CDownload::IN_PROGRESS", "1" },
	{ "int", "CDownload::FAILED", "2" },
	{ "int", "CDownload::SUCCESS", "3" },
	{ "int", "CDownload::CANCELED", "4" },
	{ "int", "CDownload::MALFORMED", "5" },
	{ "const char * const", "TMP_MISSION_SCREENSHOT_PREFIX", "previewshot_" },
	{ "const char * const", "TMP_MISSION_SCREENSHOT_FOLDER", "_missionshots" },
	{ "int", "DownloadableMod::Single", "0" },
	{ "int", "DownloadableMod::Multi", "1" },
	{ "int", "CMissionManager::INSTALLED_OK", "0" },
	{ "int", "CMissionManager::INDEX_OUT_OF_BOUNDS", "1" },
	{ "int", "CMissionManager::COPY_FAILURE", "2" },
	{ "int", "CMissionManager::NOT_IN_PROGRESS", "0" },
	{ "int", "CMissionManager::IN_PROGRESS", "1" },
	{ "int", "CMissionManager::FAILED", "2" },
	{ "int", "CMissionManager::SUCCESSFUL", "3" },
	{ "int", "CMissionManager::MALFORMED", "4" },
	{ NULL, NULL, NULL }
};

static enumValueInfo_t core_t_typeInfo[] = {
	{ "CORE_ANY", -1 },
	{ "CORE_0A", 0 },
	{ "CORE_0B", 1 },
	{ "CORE_1A", 2 },
	{ "CORE_1B", 3 },
	{ "CORE_2A", 4 },
	{ "CORE_2B", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t xthreadPriority_typeInfo[] = {
	{ "THREAD_LOWEST", 0 },
	{ "THREAD_BELOW_NORMAL", 1 },
	{ "THREAD_NORMAL", 2 },
	{ "THREAD_ABOVE_NORMAL", 3 },
	{ "THREAD_HIGHEST", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t criticalSection_t_typeInfo[] = {
	{ "CRITICAL_SECTION_ZERO", 0 },
	{ "CRITICAL_SECTION_ONE", 1 },
	{ "CRITICAL_SECTION_TWO", 2 },
	{ "CRITICAL_SECTION_THREE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t cpuid_t_typeInfo[] = {
	{ "CPUID_NONE", 0 },
	{ "CPUID_UNSUPPORTED", 1 },
	{ "CPUID_GENERIC", 2 },
	{ "CPUID_INTEL", 4 },
	{ "CPUID_AMD", 8 },
	{ "CPUID_SSE", 32 },
	{ "CPUID_SSE2", 64 },
	{ "CPUID_SSE3", 128 },
	{ "CPUID_SSSE3", 256 },
	{ "CPUID_SSE41", 512 },
	{ "CPUID_AVX", 1024 },
	{ "CPUID_AVX2", 2048 },
	{ "CPUID_FMA3", 4096 },
	{ "CPUID_FTZ", 16384 },
	{ "CPUID_DAZ", 32768 },
	{ NULL, 0 }
};

static enumValueInfo_t fpuRounding_t_typeInfo[] = {
	{ "FPU_ROUNDING_TO_NEAREST", 0 },
	{ "FPU_ROUNDING_DOWN", 1 },
	{ "FPU_ROUNDING_UP", 2 },
	{ "FPU_ROUNDING_TO_ZERO", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t joystickAxis_t_typeInfo[] = {
	{ "AXIS_SIDE", 0 },
	{ "AXIS_FORWARD", 1 },
	{ "AXIS_UP", 2 },
	{ "AXIS_ROLL", 3 },
	{ "AXIS_YAW", 4 },
	{ "AXIS_PITCH", 5 },
	{ "MAX_JOYSTICK_AXIS", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t sysEventType_t_typeInfo[] = {
	{ "SE_NONE", 0 },
	{ "SE_KEY", 1 },
	{ "SE_CHAR", 2 },
	{ "SE_MOUSE", 3 },
	{ "SE_PAD_BUTTON", 4 },
	{ "SE_PAD_AXIS", 5 },
	{ "SE_CONSOLE", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t sys_mEvents_typeInfo[] = {
	{ "M_ACTION1", 0 },
	{ "M_ACTION2", 1 },
	{ "M_ACTION3", 2 },
	{ "M_ACTION4", 3 },
	{ "M_ACTION5", 4 },
	{ "M_ACTION6", 5 },
	{ "M_ACTION7", 6 },
	{ "M_ACTION8", 7 },
	{ "M_DELTAX", 8 },
	{ "M_DELTAY", 9 },
	{ "M_DELTAZ", 10 },
	{ NULL, 0 }
};

static enumValueInfo_t netadrtype_t_typeInfo[] = {
	{ "NA_BAD", 0 },
	{ "NA_LOOPBACK", 1 },
	{ "NA_BROADCAST", 2 },
	{ "NA_IP", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_9_typeInfo[] = {
	{ "TRIGGER_EVENT_ZERO", 0 },
	{ "TRIGGER_EVENT_ONE", 1 },
	{ "TRIGGER_EVENT_TWO", 2 },
	{ "TRIGGER_EVENT_THREE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t speakerLabel_typeInfo[] = {
	{ "SPEAKER_LEFT", 0 },
	{ "SPEAKER_RIGHT", 1 },
	{ "SPEAKER_CENTER", 2 },
	{ "SPEAKER_LFE", 3 },
	{ "SPEAKER_BACKLEFT", 4 },
	{ "SPEAKER_BACKRIGHT", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idMath_enum_11_typeInfo[] = {
	{ "LOOKUP_BITS", 8 },
	{ "EXP_POS", 23 },
	{ "EXP_BIAS", 127 },
	{ "LOOKUP_POS", 15 },
	{ "SEED_POS", 15 },
	{ "SQRT_TABLE_SIZE", 512 },
	{ "LOOKUP_MASK", 511 },
	{ NULL, 0 }
};

static enumValueInfo_t extrapolation_t_typeInfo[] = {
	{ "EXTRAPOLATION_NONE", 1 },
	{ "EXTRAPOLATION_LINEAR", 2 },
	{ "EXTRAPOLATION_ACCELLINEAR", 4 },
	{ "EXTRAPOLATION_DECELLINEAR", 8 },
	{ "EXTRAPOLATION_ACCELSINE", 16 },
	{ "EXTRAPOLATION_DECELSINE", 32 },
	{ "EXTRAPOLATION_NOSTOP", 64 },
	{ NULL, 0 }
};

static enumValueInfo_t idCurve_Spline_class_type__boundary_t_typeInfo[] = {
//	{ "BT_FREE", 0 },
//	{ "BT_CLAMPED", 1 },
//	{ "BT_CLOSED", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t frustumCull_t_typeInfo[] = {
	{ "FRUSTUM_CULL_FRONT", 1 },
	{ "FRUSTUM_CULL_BACK", 2 },
	{ "FRUSTUM_CULL_CROSS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t IncidentPlaneMode_typeInfo[] = {
	{ "INCIDENT_PLANE_DELETE", 0 },
	{ "INCIDENT_PLANE_RETAIN_CODIRECT", 1 },
	{ "INCIDENT_PLANE_RETAIN_OPPOSITE", 2 },
	{ "INCIDENT_PLANE_RETAIN", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t traceModel_t_typeInfo[] = {
	{ "TRM_INVALID", 0 },
	{ "TRM_BOX", 1 },
	{ "TRM_OCTAHEDRON", 2 },
	{ "TRM_DODECAHEDRON", 3 },
	{ "TRM_CYLINDER", 4 },
	{ "TRM_CONE", 5 },
	{ "TRM_BONE", 6 },
	{ "TRM_POLYGON", 7 },
	{ "TRM_POLYGONVOLUME", 8 },
	{ "TRM_CUSTOM", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t Measure_t_typeInfo[] = {
	{ "MEASURE_SIZE", 0 },
	{ "MEASURE_BANDWIDTH", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t lexerFlags_t_typeInfo[] = {
	{ "LEXFL_NOERRORS", 10 },
	{ "LEXFL_NOWARNINGS", 20 },
	{ "LEXFL_NOFATALERRORS", 40 },
	{ "LEXFL_NOSTRINGCONCAT", 80 },
	{ "LEXFL_NOSTRINGESCAPECHARS", 160 },
	{ "LEXFL_NODOLLARPRECOMPILE", 320 },
	{ "LEXFL_NOBASEINCLUDES", 640 },
	{ "LEXFL_ALLOWPATHNAMES", 1280 },
	{ "LEXFL_ALLOWNUMBERNAMES", 2560 },
	{ "LEXFL_ALLOWIPADDRESSES", 5120 },
	{ "LEXFL_ALLOWFLOATEXCEPTIONS", 10240 },
	{ "LEXFL_ALLOWMULTICHARLITERALS", 20480 },
	{ "LEXFL_ALLOWBACKSLASHSTRINGCONCAT", 40960 },
	{ "LEXFL_ONLYSTRINGS", 81920 },
	{ NULL, 0 }
};

static enumValueInfo_t idMapPrimitive_enum_19_typeInfo[] = {
	{ "TYPE_INVALID", -1 },
	{ "TYPE_BRUSH", 0 },
	{ "TYPE_PATCH", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t idTimer_enum_20_typeInfo[] = {
	{ "TS_STARTED", 0 },
	{ "TS_STOPPED", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t jobSyncType_t_typeInfo[] = {
	{ "SYNC_NONE", 0 },
	{ "SYNC_SIGNAL", 1 },
	{ "SYNC_SYNCHRONIZE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t jobListId_t_typeInfo[] = {
	{ "JOBLIST_RENDERER_FRONTEND", 0 },
	{ "JOBLIST_RENDERER_BACKEND", 1 },
	{ "JOBLIST_UTILITY", 9 },
	{ "MAX_JOBLISTS", 32 },
	{ NULL, 0 }
};

static enumValueInfo_t jobListPriority_t_typeInfo[] = {
	{ "JOBLIST_PRIORITY_NONE", 0 },
	{ "JOBLIST_PRIORITY_LOW", 1 },
	{ "JOBLIST_PRIORITY_MEDIUM", 2 },
	{ "JOBLIST_PRIORITY_HIGH", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t jobListParallelism_t_typeInfo[] = {
	{ "JOBLIST_PARALLELISM_DEFAULT", -1 },
	{ "JOBLIST_PARALLELISM_MAX_CORES", -2 },
	{ "JOBLIST_PARALLELISM_MAX_THREADS", -3 },
	{ NULL, 0 }
};

static enumValueInfo_t cmdFlags_t_typeInfo[] = {
	{ "CMD_FL_ALL", -1 },
	{ "CMD_FL_CHEAT", 10 },
	{ "CMD_FL_SYSTEM", 20 },
	{ "CMD_FL_RENDERER", 40 },
	{ "CMD_FL_SOUND", 80 },
	{ "CMD_FL_GAME", 160 },
	{ "CMD_FL_TOOL", 320 },
	{ NULL, 0 }
};

static enumValueInfo_t cmdExecution_t_typeInfo[] = {
	{ "CMD_EXEC_NOW", 0 },
	{ "CMD_EXEC_INSERT", 1 },
	{ "CMD_EXEC_APPEND", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t cvarFlags_t_typeInfo[] = {
	{ "CVAR_ALL", -1 },
	{ "CVAR_BOOL", 10 },
	{ "CVAR_INTEGER", 20 },
	{ "CVAR_FLOAT", 40 },
	{ "CVAR_SYSTEM", 80 },
	{ "CVAR_RENDERER", 160 },
	{ "CVAR_SOUND", 320 },
	{ "CVAR_GUI", 640 },
	{ "CVAR_GAME", 1280 },
	{ "CVAR_TOOL", 2560 },
	{ "CVAR_USERINFO", 5120 },
	{ "CVAR_SERVERINFO", 10240 },
	{ "CVAR_NETWORKSYNC", 20480 },
	{ "CVAR_STATIC", 40960 },
	{ "CVAR_NOCHEAT", 163840 },
	{ "CVAR_INIT", 327680 },
	{ "CVAR_ROM", 655360 },
	{ "CVAR_ARCHIVE", 1310720 },
	{ "CVAR_MODIFIED", 2621440 },
	{ NULL, 0 }
};

static enumValueInfo_t toolFlag_t_typeInfo[] = {
	{ "EDITOR_NONE", 0 },
	{ "EDITOR_RADIANT", 20 },
	{ "EDITOR_GUI", 40 },
	{ "EDITOR_SCRIPT", 160 },
	{ "EDITOR_LIGHT", 320 },
	{ "EDITOR_SOUND", 640 },
	{ "EDITOR_DECL", 1280 },
	{ "EDITOR_AF", 2560 },
	{ "EDITOR_PARTICLE", 5120 },
	{ "EDITOR_AAS", 20480 },
	{ "EDITOR_MATERIAL", 40960 },
	{ "EDITOR_RUNPARTICLE", 81920 },
	{ NULL, 0 }
};

static enumValueInfo_t loadkey_t_typeInfo[] = {
	{ "LOAD_KEY_START", 1 },
	{ "LOAD_KEY_COLLISION_START", 2 },
	{ "LOAD_KEY_COLLISION_DONE", 3 },
	{ "LOAD_KEY_SPAWN_ENTITIES_START", 4 },
	{ "LOAD_KEY_SPAWN_ENTITIES_INTERIM", 5 },
	{ "LOAD_KEY_ROUTING_START", 6 },
	{ "LOAD_KEY_ROUTING_INTERIM", 7 },
	{ "LOAD_KEY_ROUTING_DONE", 8 },
	{ "LOAD_KEY_IMAGES_START", 9 },
	{ "LOAD_KEY_IMAGES_INTERIM", 10 },
	{ "LOAD_KEY_DONE", 11 },
	{ NULL, 0 }
};

static enumValueInfo_t idCommon_eConfigExport_typeInfo[] = {
	{ "eConfigExport_cvars", 0 },
	{ "eConfigExport_keybinds", 1 },
	{ "eConfigExport_padbinds", 2 },
	{ "eConfigExport_all", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t fsOrigin_t_typeInfo[] = {
	{ "FS_SEEK_CUR", 0 },
	{ "FS_SEEK_END", 1 },
	{ "FS_SEEK_SET", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t fsMode_t_typeInfo[] = {
	{ "FS_READ", 0 },
	{ "FS_WRITE", 1 },
	{ "FS_APPEND", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t dlType_t_typeInfo[] = {
	{ "DLTYPE_URL", 0 },
	{ "DLTYPE_FILE", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t dlStatus_t_typeInfo[] = {
	{ "DL_WAIT", 0 },
	{ "DL_INPROGRESS", 1 },
	{ "DL_DONE", 2 },
	{ "DL_ABORTING", 3 },
	{ "DL_FAILED", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t dlMime_t_typeInfo[] = {
	{ "FILE_EXEC", 0 },
	{ "FILE_OPEN", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t findFile_t_typeInfo[] = {
	{ "FIND_NO", 0 },
	{ "FIND_YES", 1 },
	{ "FIND_ADDON", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t UserCmdButton_typeInfo[] = {
	{ "UB_NONE", 0 },
	{ "UB_UP", 1 },
	{ "UB_DOWN", 2 },
	{ "UB_LEFT", 3 },
	{ "UB_RIGHT", 4 },
	{ "UB_FORWARD", 5 },
	{ "UB_BACK", 6 },
	{ "UB_LOOKUP", 7 },
	{ "UB_LOOKDOWN", 8 },
	{ "UB_STRAFE", 9 },
	{ "UB_MOVELEFT", 10 },
	{ "UB_MOVERIGHT", 11 },
	{ "UB_BUTTON0", 12 },
	{ "UB_BUTTON1", 13 },
	{ "UB_BUTTON2", 14 },
	{ "UB_BUTTON3", 15 },
	{ "UB_BUTTON4", 16 },
	{ "UB_CREEP", 17 },
	{ "UB_BUTTON6", 18 },
	{ "UB_BUTTON7", 19 },
	{ "UB_ATTACK", 20 },
	{ "UB_SPEED", 21 },
	{ "UB_PARRY_MANIPULATE", 22 },
	{ "UB_SHOWSCORES", 23 },
	{ "UB_MLOOK", 24 },
	{ "UB_WEAPON0", 25 },
	{ "UB_WEAPON1", 26 },
	{ "UB_WEAPON2", 27 },
	{ "UB_WEAPON3", 28 },
	{ "UB_WEAPON4", 29 },
	{ "UB_WEAPON5", 30 },
	{ "UB_WEAPON6", 31 },
	{ "UB_WEAPON7", 32 },
	{ "UB_WEAPON8", 33 },
	{ "UB_WEAPON9", 34 },
	{ "UB_WEAPON10", 35 },
	{ "UB_WEAPON11", 36 },
	{ "UB_WEAPON12", 37 },
	{ "UB_RELOAD", 38 },
	{ "UB_WEAPON_NEXT", 39 },
	{ "UB_WEAPON_PREV", 40 },
	{ "UB_IMPULSE16", 41 },
	{ "UB_READY", 42 },
	{ "UB_CENTER_VIEW", 43 },
	{ "UB_OBJECTIVES", 44 },
	{ "UB_IMPULSE20", 45 },
	{ "UB_IMPULSE21", 46 },
	{ "UB_IMPULSE22", 47 },
	{ "UB_CROUCH", 48 },
	{ "UB_MANTLE", 49 },
	{ "UB_IMPULSE25", 50 },
	{ "UB_IMPULSE26", 51 },
	{ "UB_IMPULSE27", 52 },
	{ "UB_IMPULSE28", 53 },
	{ "UB_IMPULSE29", 54 },
	{ "UB_INVENTORY_GRID", 55 },
	{ "UB_IMPULSE31", 56 },
	{ "UB_IMPULSE32", 57 },
	{ "UB_IMPULSE33", 58 },
	{ "UB_IMPULSE34", 59 },
	{ "UB_IMPULSE35", 60 },
	{ "UB_IMPULSE36", 61 },
	{ "UB_IMPULSE37", 62 },
	{ "UB_IMPULSE38", 63 },
	{ "UB_IMPULSE39", 64 },
	{ "UB_IMPULSE40", 65 },
	{ "UB_FROB", 66 },
	{ "UB_IMPULSE42", 67 },
	{ "UB_IMPULSE43", 68 },
	{ "UB_LEAN_FORWARD", 69 },
	{ "UB_LEAN_LEFT", 70 },
	{ "UB_LEAN_RIGHT", 71 },
	{ "UB_INVENTORY_PREV", 72 },
	{ "UB_INVENTORY_NEXT", 73 },
	{ "UB_INVENTORY_GROUP_PREV", 74 },
	{ "UB_INVENTORY_GROUP_NEXT", 75 },
	{ "UB_INVENTORY_USE", 76 },
	{ "UB_INVENTORY_DROP", 77 },
	{ "UB_IMPULSE53", 78 },
	{ "UB_IMPULSE54", 79 },
	{ "UB_IMPULSE55", 80 },
	{ "UB_IMPULSE56", 81 },
	{ "UB_IMPULSE57", 82 },
	{ "UB_IMPULSE58", 83 },
	{ "UB_IMPULSE59", 84 },
	{ "UB_IMPULSE60", 85 },
	{ "UB_IMPULSE61", 86 },
	{ "UB_IMPULSE62", 87 },
	{ "UB_IMPULSE63", 88 },
	{ "UB_MAX_BUTTONS", 89 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_38_typeInfo[] = {
	{ "IMPULSE_WEAPON0", 0 },
	{ "IMPULSE_WEAPON1", 1 },
	{ "IMPULSE_WEAPON2", 2 },
	{ "IMPULSE_WEAPON3", 3 },
	{ "IMPULSE_WEAPON4", 4 },
	{ "IMPULSE_WEAPON5", 5 },
	{ "IMPULSE_WEAPON6", 6 },
	{ "IMPULSE_WEAPON7", 7 },
	{ "IMPULSE_WEAPON8", 8 },
	{ "IMPULSE_WEAPON9", 9 },
	{ "IMPULSE_WEAPON10", 10 },
	{ "IMPULSE_WEAPON11", 11 },
	{ "IMPULSE_WEAPON12", 12 },
	{ "IMPULSE_RELOAD", 13 },
	{ "IMPULSE_WEAPON_NEXT", 14 },
	{ "IMPULSE_WEAPON_PREV", 15 },
	{ "IMPULSE_16", 16 },
	{ "IMPULSE_READY", 17 },
	{ "IMPULSE_CENTER_VIEW", 18 },
	{ "IMPULSE_OBJECTIVES", 19 },
	{ "IMPULSE_20", 20 },
	{ "IMPULSE_21", 21 },
	{ "IMPULSE_22", 22 },
	{ "IMPULSE_CROUCH", 23 },
	{ "IMPULSE_MANTLE", 24 },
	{ "IMPULSE_25", 25 },
	{ "IMPULSE_26", 26 },
	{ "IMPULSE_27", 27 },
	{ "IMPULSE_28", 28 },
	{ "IMPULSE_29", 29 },
	{ "IMPULSE_INVENTORY_GRID", 30 },
	{ "IMPULSE_40", 40 },
	{ "IMPULSE_FROB", 41 },
	{ "IMPULSE_42", 42 },
	{ "IMPULSE_43", 43 },
	{ "IMPULSE_LEAN_FORWARD", 44 },
	{ "IMPULSE_LEAN_LEFT", 45 },
	{ "IMPULSE_LEAN_RIGHT", 46 },
	{ "IMPULSE_INVENTORY_PREV", 47 },
	{ "IMPULSE_INVENTORY_NEXT", 48 },
	{ "IMPULSE_INVENTORY_GROUP_PREV", 49 },
	{ "IMPULSE_INVENTORY_GROUP_NEXT", 50 },
	{ "IMPULSE_INVENTORY_USE", 51 },
	{ "IMPULSE_INVENTORY_DROP", 52 },
	{ "IMPULSE_MAX", 53 },
	{ NULL, 0 }
};

static enumValueInfo_t inhibit_t_typeInfo[] = {
	{ "INHIBIT_SESSION", 0 },
	{ "INHIBIT_ASYNC", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t declType_t_typeInfo[] = {
	{ "DECL_TABLE", 0 },
	{ "DECL_MATERIAL", 1 },
	{ "DECL_SKIN", 2 },
	{ "DECL_SOUND", 3 },
	{ "DECL_ENTITYDEF", 4 },
	{ "DECL_MODELDEF", 5 },
	{ "DECL_FX", 6 },
	{ "DECL_PARTICLE", 7 },
	{ "DECL_AF", 8 },
	{ "DECL_MODELEXPORT", 9 },
	{ "DECL_MAPDEF", 10 },
	{ "DECL_SUBTITLES", 11 },
	{ "DECL_XDATA", 12 },
	{ "DECL_TDM_MATINFO", 13 },
	{ "DECL_TDM_MISSIONINFO", 14 },
	{ "DECL_MAX_TYPES", 32 },
	{ NULL, 0 }
};

static enumValueInfo_t declState_t_typeInfo[] = {
	{ "DS_UNPARSED", 0 },
	{ "DS_DEFAULTED", 1 },
	{ "DS_PARSED", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_42_typeInfo[] = {
	{ "FX_LIGHT", 0 },
	{ "FX_PARTICLE", 1 },
	{ "FX_DECAL", 2 },
	{ "FX_MODEL", 3 },
	{ "FX_SOUND", 4 },
	{ "FX_SHAKE", 5 },
	{ "FX_ATTACHLIGHT", 6 },
	{ "FX_ATTACHENTITY", 7 },
	{ "FX_LAUNCH", 8 },
	{ "FX_SHOCKWAVE", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t prtDistribution_t_typeInfo[] = {
	{ "PDIST_RECT", 0 },
	{ "PDIST_CYLINDER", 1 },
	{ "PDIST_SPHERE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t prtDirection_t_typeInfo[] = {
	{ "PDIR_CONE", 0 },
	{ "PDIR_OUTWARD", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t prtCustomPth_t_typeInfo[] = {
	{ "PPATH_STANDARD", 0 },
	{ "PPATH_HELIX", 1 },
	{ "PPATH_FLIES", 2 },
	{ "PPATH_ORBIT", 3 },
	{ "PPATH_DRIP", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t prtOrientation_t_typeInfo[] = {
	{ "POR_VIEW", 0 },
	{ "POR_AIMED", 1 },
	{ "POR_X", 2 },
	{ "POR_Y", 3 },
	{ "POR_Z", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t prtMapLayout_t_typeInfo[] = {
	{ "PML_LINEAR", 0 },
	{ "PML_TEXTURE", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t declAFConstraintType_t_typeInfo[] = {
	{ "DECLAF_CONSTRAINT_INVALID", 0 },
	{ "DECLAF_CONSTRAINT_FIXED", 1 },
	{ "DECLAF_CONSTRAINT_BALLANDSOCKETJOINT", 2 },
	{ "DECLAF_CONSTRAINT_UNIVERSALJOINT", 3 },
	{ "DECLAF_CONSTRAINT_HINGE", 4 },
	{ "DECLAF_CONSTRAINT_SLIDER", 5 },
	{ "DECLAF_CONSTRAINT_SPRING", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t declAFJointMod_t_typeInfo[] = {
	{ "DECLAF_JOINTMOD_AXIS", 0 },
	{ "DECLAF_JOINTMOD_ORIGIN", 1 },
	{ "DECLAF_JOINTMOD_BOTH", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idAFVector_enum_50_typeInfo[] = {
	{ "VEC_COORDS", 0 },
	{ "VEC_JOINT", 1 },
	{ "VEC_BONECENTER", 2 },
	{ "VEC_BONEDIR", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idDeclAF_Constraint_enum_51_typeInfo[] = {
	{ "LIMIT_NONE", -1 },
	{ "LIMIT_CONE", 0 },
	{ "LIMIT_PYRAMID", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t cinStatus_t_typeInfo[] = {
	{ "FMV_IDLE", 0 },
	{ "FMV_PLAY", 1 },
	{ "FMV_EOF", 2 },
	{ "FMV_ID_BLT", 3 },
	{ "FMV_ID_IDLE", 4 },
	{ "FMV_LOOPED", 5 },
	{ "FMV_ID_WAIT", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t textureFilter_t_typeInfo[] = {
	{ "TF_LINEAR", 0 },
	{ "TF_NEAREST", 1 },
	{ "TF_DEFAULT", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t textureRepeat_t_typeInfo[] = {
	{ "TR_REPEAT", 0 },
	{ "TR_CLAMP", 1 },
	{ "TR_CLAMP_TO_ZERO", 2 },
	{ "TR_CLAMP_TO_ZERO_ALPHA", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t deform_t_typeInfo[] = {
	{ "DFRM_NONE", 0 },
	{ "DFRM_SPRITE", 1 },
	{ "DFRM_TUBE", 2 },
	{ "DFRM_FLARE", 3 },
	{ "DFRM_EXPAND", 4 },
	{ "DFRM_MOVE", 5 },
	{ "DFRM_EYEBALL", 6 },
	{ "DFRM_PARTICLE", 7 },
	{ "DFRM_PARTICLE2", 8 },
	{ "DFRM_TURB", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t dynamicidImage_t_typeInfo[] = {
	{ "DI_STATIC", 0 },
	{ "DI_SCRATCH", 1 },
	{ "DI_CUBE_RENDER", 2 },
	{ "DI_MIRROR_RENDER", 3 },
	{ "DI_XRAY_RENDER", 4 },
	{ "DI_REMOTE_RENDER", 5 },
	{ "DI_PORTAL_RENDER", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t expOpType_t_typeInfo[] = {
	{ "OP_TYPE_ADD", 0 },
	{ "OP_TYPE_SUBTRACT", 1 },
	{ "OP_TYPE_MULTIPLY", 2 },
	{ "OP_TYPE_DIVIDE", 3 },
	{ "OP_TYPE_MOD", 4 },
	{ "OP_TYPE_TABLE", 5 },
	{ "OP_TYPE_GT", 6 },
	{ "OP_TYPE_GE", 7 },
	{ "OP_TYPE_LT", 8 },
	{ "OP_TYPE_LE", 9 },
	{ "OP_TYPE_EQ", 10 },
	{ "OP_TYPE_NE", 11 },
	{ "OP_TYPE_AND", 12 },
	{ "OP_TYPE_OR", 13 },
	{ "OP_TYPE_SOUND", 14 },
	{ NULL, 0 }
};

static enumValueInfo_t expRegister_t_typeInfo[] = {
	{ "EXP_REG_TIME", 0 },
	{ "EXP_REG_PARM0", 1 },
	{ "EXP_REG_PARM1", 2 },
	{ "EXP_REG_PARM2", 3 },
	{ "EXP_REG_PARM3", 4 },
	{ "EXP_REG_PARM4", 5 },
	{ "EXP_REG_PARM5", 6 },
	{ "EXP_REG_PARM6", 7 },
	{ "EXP_REG_PARM7", 8 },
	{ "EXP_REG_PARM8", 9 },
	{ "EXP_REG_PARM9", 10 },
	{ "EXP_REG_PARM10", 11 },
	{ "EXP_REG_PARM11", 12 },
	{ "EXP_REG_GLOBAL0", 13 },
	{ "EXP_REG_GLOBAL1", 14 },
	{ "EXP_REG_GLOBAL2", 15 },
	{ "EXP_REG_GLOBAL3", 16 },
	{ "EXP_REG_GLOBAL4", 17 },
	{ "EXP_REG_GLOBAL5", 18 },
	{ "EXP_REG_GLOBAL6", 19 },
	{ "EXP_REG_GLOBAL7", 20 },
	{ "EXP_REG_NUM_PREDEFINED", 21 },
	{ NULL, 0 }
};

static enumValueInfo_t texgen_t_typeInfo[] = {
	{ "TG_EXPLICIT", 0 },
	{ "TG_REFLECT_CUBE", 1 },
	{ "TG_SKYBOX_CUBE", 2 },
	{ "TG_WOBBLESKY_CUBE", 3 },
	{ "TG_SCREEN", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t stageLighting_t_typeInfo[] = {
	{ "SL_AMBIENT", 0 },
	{ "SL_BUMP", 1 },
	{ "SL_DIFFUSE", 2 },
	{ "SL_SPECULAR", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t stageVertexColor_t_typeInfo[] = {
	{ "SVC_IGNORE", 0 },
	{ "SVC_MODULATE", 1 },
	{ "SVC_INVERSE_MODULATE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t materialCoverage_t_typeInfo[] = {
	{ "MC_BAD", 0 },
	{ "MC_OPAQUE", 1 },
	{ "MC_PERFORATED", 2 },
	{ "MC_TRANSLUCENT", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t materialSort_t_typeInfo[] = {
	{ "SS_SUBVIEW", -3 },
	{ "SS_GUI", -2 },
	{ "SS_BAD", -1 },
	{ "SS_OPAQUE", 0 },
	{ "SS_PORTAL_SKY", 1 },
	{ "SS_DECAL", 2 },
	{ "SS_FAR", 3 },
	{ "SS_MEDIUM", 4 },
	{ "SS_CLOSE", 5 },
	{ "SS_ALMOST_NEAREST", 6 },
	{ "SS_NEAREST", 7 },
	{ "SS_AFTER_FOG", 90 },
	{ "SS_POST_PROCESS", 100 },
	{ "SS_LAST", 200 },
	{ NULL, 0 }
};

static enumValueInfo_t cullType_t_typeInfo[] = {
	{ "CT_FRONT_SIDED", 0 },
	{ "CT_BACK_SIDED", 1 },
	{ "CT_TWO_SIDED", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t materialFlags_t_typeInfo[] = {
	{ "MF_DEFAULTED", 10 },
	{ "MF_POLYGONOFFSET", 20 },
	{ "MF_NOSHADOWS", 40 },
	{ "MF_FORCESHADOWS", 80 },
	{ "MF_NOSELFSHADOW", 160 },
	{ "MF_NOPORTALFOG", 320 },
	{ "MF_EDITOR_VISIBLE", 640 },
	{ NULL, 0 }
};

static enumValueInfo_t contentsFlags_t_typeInfo[] = {
	{ "CONTENTS_SOLID", 10 },
	{ "CONTENTS_OPAQUE", 20 },
	{ "CONTENTS_WATER", 40 },
	{ "CONTENTS_PLAYERCLIP", 80 },
	{ "CONTENTS_MONSTERCLIP", 160 },
	{ "CONTENTS_MOVEABLECLIP", 320 },
	{ "CONTENTS_IKCLIP", 640 },
	{ "CONTENTS_BLOOD", 1280 },
	{ "CONTENTS_BODY", 2560 },
	{ "CONTENTS_PROJECTILE", 5120 },
	{ "CONTENTS_CORPSE", 10240 },
	{ "CONTENTS_RENDERMODEL", 20480 },
	{ "CONTENTS_TRIGGER", 40960 },
	{ "CONTENTS_AAS_SOLID", 81920 },
	{ "CONTENTS_AAS_OBSTACLE", 163840 },
	{ "CONTENTS_FLASHLIGHT_TRIGGER", 327680 },
	{ "CONTENTS_FROBABLE", 655360 },
	{ "CONTENTS_RESPONSE", 1310720 },
	{ "CONTENTS_MELEEWEAP", 2621440 },
	{ "CONTENTS_AREAPORTAL", 10485760 },
	{ "CONTENTS_NOCSG", 20971520 },
	{ "CONTENTS_REMOVE_UTIL", -31457281 },
	{ NULL, 0 }
};

static enumValueInfo_t surfTypes_t_typeInfo[] = {
	{ "SURFTYPE_NONE", 0 },
	{ "SURFTYPE_METAL", 1 },
	{ "SURFTYPE_STONE", 2 },
	{ "SURFTYPE_FLESH", 3 },
	{ "SURFTYPE_WOOD", 4 },
	{ "SURFTYPE_CARDBOARD", 5 },
	{ "SURFTYPE_LIQUID", 6 },
	{ "SURFTYPE_GLASS", 7 },
	{ "SURFTYPE_PLASTIC", 8 },
	{ "SURFTYPE_RICOCHET", 9 },
	{ "SURFTYPE_10", 10 },
	{ "SURFTYPE_11", 11 },
	{ "SURFTYPE_12", 12 },
	{ "SURFTYPE_13", 13 },
	{ "SURFTYPE_14", 14 },
	{ "SURFTYPE_15", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t surfaceFlags_t_typeInfo[] = {
	{ "SURF_TYPE_BIT0", 10 },
	{ "SURF_TYPE_BIT1", 20 },
	{ "SURF_TYPE_BIT2", 40 },
	{ "SURF_TYPE_BIT3", 80 },
	{ "SURF_TYPE_MASK", 15 },
	{ "SURF_NODAMAGE", 160 },
	{ "SURF_SLICK", 320 },
	{ "SURF_COLLISION", 640 },
	{ "SURF_LADDER", 1280 },
	{ "SURF_NOIMPACT", 2560 },
	{ "SURF_NOSTEPS", 5120 },
	{ "SURF_DISCRETE", 10240 },
	{ "SURF_NOFRAGMENT", 20480 },
	{ "SURF_NULLNORMAL", 40960 },
	{ NULL, 0 }
};

static enumValueInfo_t dynamicModel_t_typeInfo[] = {
	{ "DM_STATIC", 0 },
	{ "DM_CACHED", 1 },
	{ "DM_CONTINUOUS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t jointHandle_t_typeInfo[] = {
	{ "INVALID_JOINT", -1 },
	{ NULL, 0 }
};

static enumValueInfo_t glVendor_t_typeInfo[] = {
	{ "glvAny", 0 },
	{ "glvAMD", 1 },
	{ "glvIntel", 2 },
	{ "glvNVIDIA", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t renderEntity_s_areaLock_t_typeInfo[] = {
	{ "RAL_NONE", 0 },
	{ "RAL_ORIGIN", 1 },
	{ "RAL_CENTER", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t viewID_t_typeInfo[] = {
	{ "VID_LIGHTGEM", -1 },
	{ "VID_SUBVIEW", 0 },
	{ "VID_PLAYER_VIEW", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t portalConnection_t_typeInfo[] = {
	{ "PS_BLOCK_NONE", 0 },
	{ "PS_BLOCK_VIEW", 1 },
	{ "PS_BLOCK_LOCATION", 2 },
	{ "PS_BLOCK_AIR", 4 },
	{ "PS_BLOCK_SOUND", 8 },
	{ "PS_BLOCK_ALL", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t SubtitleLevel_typeInfo[] = {
	{ "SUBL_IGNORE", 0 },
	{ "SUBL_STORY", 1 },
	{ "SUBL_SPEECH", 2 },
	{ "SUBL_EFFECT", 3 },
	{ "SUBL_MISSING", 100 },
	{ NULL, 0 }
};

static enumValueInfo_t contactType_t_typeInfo[] = {
	{ "CONTACT_NONE", 0 },
	{ "CONTACT_EDGE", 1 },
	{ "CONTACT_MODELVERTEX", 2 },
	{ "CONTACT_TRMVERTEX", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t allowReply_t_typeInfo[] = {
	{ "ALLOW_YES", 0 },
	{ "ALLOW_BADPASS", 1 },
	{ "ALLOW_NOTYET", 2 },
	{ "ALLOW_NO", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t escReply_t_typeInfo[] = {
	{ "ESC_IGNORE", 0 },
	{ "ESC_MAIN", 1 },
	{ "ESC_GUI", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_79_typeInfo[] = {
	{ "TEST_PARTICLE_MODEL", 0 },
	{ "TEST_PARTICLE_IMPACT", 1 },
	{ "TEST_PARTICLE_MUZZLE", 2 },
	{ "TEST_PARTICLE_FLIGHT", 3 },
	{ "TEST_PARTICLE_SELECTED", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t idGameEdit_SpawnEntityDef_Flags_typeInfo[] = {
	{ "sedRespectInhibit", 1 },
	{ "sedCacheMedia", 2 },
	{ "sedRespawn", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t etype_t_typeInfo[] = {
	{ "ev_error", -1 },
	{ "ev_void", 0 },
	{ "ev_scriptevent", 1 },
	{ "ev_namespace", 2 },
	{ "ev_string", 3 },
	{ "ev_float", 4 },
	{ "ev_vector", 5 },
	{ "ev_entity", 6 },
	{ "ev_field", 7 },
	{ "ev_function", 8 },
	{ "ev_virtualfunction", 9 },
	{ "ev_pointer", 10 },
	{ "ev_object", 11 },
	{ "ev_jumpoffset", 12 },
	{ "ev_argsize", 13 },
	{ "ev_boolean", 14 },
	{ NULL, 0 }
};

static enumValueInfo_t idVarDef_initialized_t_typeInfo[] = {
	{ "uninitialized", 0 },
	{ "initializedVariable", 1 },
	{ "initializedConstant", 2 },
	{ "stackVariable", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idProgram_DocFileFormat_typeInfo[] = {
	{ "FORMAT_D3_SCRIPT", 0 },
	{ "FORMAT_XML", 1 },
	{ "FORMAT_MEDIAWIKI", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t jointModTransform_t_typeInfo[] = {
	{ "JOINTMOD_NONE", 0 },
	{ "JOINTMOD_LOCAL", 1 },
	{ "JOINTMOD_LOCAL_OVERRIDE", 2 },
	{ "JOINTMOD_WORLD", 3 },
	{ "JOINTMOD_WORLD_OVERRIDE", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t frameCommandType_t_typeInfo[] = {
	{ "FC_SCRIPTFUNCTION", 0 },
	{ "FC_SCRIPTFUNCTIONOBJECT", 1 },
	{ "FC_EVENTFUNCTION", 2 },
	{ "FC_SOUND", 3 },
	{ "FC_SOUND_VOICE", 4 },
	{ "FC_SOUND_VOICE2", 5 },
	{ "FC_SOUND_BODY", 6 },
	{ "FC_SOUND_BODY2", 7 },
	{ "FC_SOUND_BODY3", 8 },
	{ "FC_SOUND_WEAPON", 9 },
	{ "FC_SOUND_ITEM", 10 },
	{ "FC_SOUND_GLOBAL", 11 },
	{ "FC_SOUND_CHATTER", 12 },
	{ "FC_SKIN", 13 },
	{ "FC_TRIGGER", 14 },
	{ "FC_TRIGGER_SMOKE_PARTICLE", 15 },
	{ "FC_MELEE", 16 },
	{ "FC_DIRECTDAMAGE", 17 },
	{ "FC_BEGINATTACK", 18 },
	{ "FC_ENDATTACK", 19 },
	{ "FC_MUZZLEFLASH", 20 },
	{ "FC_CREATEMISSILE", 21 },
	{ "FC_LAUNCHMISSILE", 22 },
	{ "FC_FIREMISSILEATTARGET", 23 },
	{ "FC_FOOTSTEP", 24 },
	{ "FC_LEFTFOOT", 25 },
	{ "FC_RIGHTFOOT", 26 },
	{ "FC_ENABLE_EYE_FOCUS", 27 },
	{ "FC_DISABLE_EYE_FOCUS", 28 },
	{ "FC_FX", 29 },
	{ "FC_DISABLE_GRAVITY", 30 },
	{ "FC_ENABLE_GRAVITY", 31 },
	{ "FC_JUMP", 32 },
	{ "FC_ENABLE_CLIP", 33 },
	{ "FC_DISABLE_CLIP", 34 },
	{ "FC_ENABLE_WALK_IK", 35 },
	{ "FC_DISABLE_WALK_IK", 36 },
	{ "FC_ENABLE_LEG_IK", 37 },
	{ "FC_DISABLE_LEG_IK", 38 },
	{ "FC_RECORDDEMO", 39 },
	{ "FC_AVIGAME", 40 },
	{ "FC_SETRATE", 41 },
	{ "FC_REATTACH", 42 },
	{ "FC_ATTACH", 43 },
	{ "FC_DESTROY", 44 },
	{ "FC_DROP", 45 },
	{ "FC_PUTDOWN", 46 },
	{ "FC_PICKUP", 47 },
	{ "FC_ACTIVATE_AT_JOINT", 48 },
	{ "FC_ACTIVATE_NEAR", 49 },
	{ "FC_PAUSE", 50 },
	{ "FC_MELEE_HOLD", 51 },
	{ "FC_MELEE_ATTACK_START", 52 },
	{ "FC_MELEE_ATTACK_STOP", 53 },
	{ "FC_MELEE_PARRY_START", 54 },
	{ "FC_MELEE_PARRY_STOP", 55 },
	{ "FC_SET_ATTACK_FLAG", 56 },
	{ "FC_CLEAR_ATTACK_FLAG", 57 },
	{ "FC_CREATEMISSILE_FROM_DEF", 58 },
	{ NULL, 0 }
};

static enumValueInfo_t AFJointModType_t_typeInfo[] = {
	{ "AF_JOINTMOD_AXIS", 0 },
	{ "AF_JOINTMOD_ORIGIN", 1 },
	{ "AF_JOINTMOD_BOTH", 2 },
	{ "AF_JOINTMOD_NONE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t eas_ActionType_typeInfo[] = {
	{ "ACTION_WALK", 0 },
	{ "ACTION_USE_ELEVATOR", 1 },
	{ "NUM_ACTIONS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t eas_RouteType_typeInfo[] = {
	{ "ROUTE_DUMMY", 0 },
	{ "ROUTE_TO_AREA", 1 },
	{ "ROUTE_TO_CLUSTER", 2 },
	{ "NUM_ROUTE_TYPES", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_89_typeInfo[] = {
	{ "PATHTYPE_WALK", 0 },
	{ "PATHTYPE_WALKOFFLEDGE", 1 },
	{ "PATHTYPE_BARRIERJUMP", 2 },
	{ "PATHTYPE_JUMP", 3 },
	{ "PATHTYPE_DOOR", 4 },
	{ "PATHTYPE_ELEVATOR", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t pvsType_t_typeInfo[] = {
	{ "PVS_NORMAL", 0 },
	{ "PVS_ALL_PORTALS_OPEN", 1 },
	{ "PVS_CONNECTED_AREAS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t EMissionResult_typeInfo[] = {
	{ "MISSION_NOTEVENSTARTED", 0 },
	{ "MISSION_INPROGRESS", 1 },
	{ "MISSION_FAILED", 2 },
	{ "MISSION_COMPLETE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t difficulty_Setting_EApplicationType_typeInfo[] = {
	{ "EAssign", 0 },
	{ "EAdd", 1 },
	{ "EMultiply", 2 },
	{ "EIgnore", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t seed_model_flags_typeInfo[] = {
	{ "SEED_MODEL_NOSHADOW", 1 },
	{ "SEED_MODEL_NOCLIP", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_94_typeInfo[] = {
	{ "GAME_RELIABLE_MESSAGE_INIT_DECL_REMAP", 0 },
	{ "GAME_RELIABLE_MESSAGE_REMAP_DECL", 1 },
	{ "GAME_RELIABLE_MESSAGE_SPAWN_PLAYER", 2 },
	{ "GAME_RELIABLE_MESSAGE_DELETE_ENT", 3 },
	{ "GAME_RELIABLE_MESSAGE_CHAT", 4 },
	{ "GAME_RELIABLE_MESSAGE_TCHAT", 5 },
	{ "GAME_RELIABLE_MESSAGE_SOUND_EVENT", 6 },
	{ "GAME_RELIABLE_MESSAGE_SOUND_INDEX", 7 },
	{ "GAME_RELIABLE_MESSAGE_DB", 8 },
	{ "GAME_RELIABLE_MESSAGE_KILL", 9 },
	{ "GAME_RELIABLE_MESSAGE_DROPWEAPON", 10 },
	{ "GAME_RELIABLE_MESSAGE_RESTART", 11 },
	{ "GAME_RELIABLE_MESSAGE_SERVERINFO", 12 },
	{ "GAME_RELIABLE_MESSAGE_TOURNEYLINE", 13 },
	{ "GAME_RELIABLE_MESSAGE_CALLVOTE", 14 },
	{ "GAME_RELIABLE_MESSAGE_CASTVOTE", 15 },
	{ "GAME_RELIABLE_MESSAGE_STARTVOTE", 16 },
	{ "GAME_RELIABLE_MESSAGE_UPDATEVOTE", 17 },
	{ "GAME_RELIABLE_MESSAGE_PORTALSTATES", 18 },
	{ "GAME_RELIABLE_MESSAGE_PORTAL", 19 },
	{ "GAME_RELIABLE_MESSAGE_VCHAT", 20 },
	{ "GAME_RELIABLE_MESSAGE_STARTSTATE", 21 },
	{ "GAME_RELIABLE_MESSAGE_MENU", 22 },
	{ "GAME_RELIABLE_MESSAGE_WARMUPTIME", 23 },
	{ "GAME_RELIABLE_MESSAGE_EVENT", 24 },
	{ NULL, 0 }
};

static enumValueInfo_t gameState_t_typeInfo[] = {
	{ "GAMESTATE_UNINITIALIZED", 0 },
	{ "GAMESTATE_NOMAP", 1 },
	{ "GAMESTATE_STARTUP", 2 },
	{ "GAMESTATE_ACTIVE", 3 },
	{ "GAMESTATE_COMPLETED", 4 },
	{ "GAMESTATE_SHUTDOWN", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t GuiMessage_Type_typeInfo[] = {
	{ "MSG_OK", 0 },
	{ "MSG_YES_NO", 1 },
	{ "MSG_OK_CANCEL", 2 },
	{ "MSG_CUSTOM", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_97_typeInfo[] = {
	{ "PORTALSKY_STANDARD", 0 },
	{ "PORTALSKY_GLOBAL", 1 },
	{ "PORTALSKY_LOCAL", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t EventType_typeInfo[] = {
	{ "E_EventTypeEnemy", 1 },
	{ "E_EventTypeDeadPerson", 2 },
	{ "E_EventTypeMissingItem", 3 },
	{ "E_EventTypeUnconsciousPerson", 4 },
	{ "E_EventTypeNoisemaker", 5 },
	{ "E_EventTypeMisc", 6 },
	{ "E_EventTypeSound", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t smRole_t_typeInfo[] = {
	{ "E_ROLE_NONE", 0 },
	{ "E_ROLE_SEARCHER", 1 },
	{ "E_ROLE_GUARD", 2 },
	{ "E_ROLE_OBSERVER", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t searchFlags_t_typeInfo[] = {
	{ "SEARCH_SEARCHER_MILL", 10 },
	{ "SEARCH_SEARCH", 20 },
	{ "SEARCH_GUARD_MILL", 40 },
	{ "SEARCH_GUARD", 80 },
	{ "SEARCH_OBSERVER_MILL", 160 },
	{ "SEARCH_OBSERVE", 320 },
	{ NULL, 0 }
};

static enumValueInfo_t gameSoundChannel_t_typeInfo[] = {
	{ "SND_CHANNEL_ANY", 0 },
	{ "SND_CHANNEL_VOICE", 1 },
	{ "SND_CHANNEL_VOICE2", 2 },
	{ "SND_CHANNEL_BODY", 3 },
	{ "SND_CHANNEL_BODY2", 4 },
	{ "SND_CHANNEL_BODY3", 5 },
	{ "SND_CHANNEL_WEAPON", 6 },
	{ "SND_CHANNEL_ITEM", 7 },
	{ "SND_CHANNEL_HEART", 8 },
	{ "SND_CHANNEL_UNUSED", 9 },
	{ "SND_CHANNEL_DEMONIC", 10 },
	{ "SND_CHANNEL_UNUSED_2", 11 },
	{ "SND_CHANNEL_AMBIENT", 12 },
	{ "SND_CHANNEL_DAMAGE", 13 },
	{ NULL, 0 }
};

static enumValueInfo_t forceFieldType_typeInfo[] = {
	{ "FORCEFIELD_UNIFORM", 0 },
	{ "FORCEFIELD_EXPLOSION", 1 },
	{ "FORCEFIELD_IMPLOSION", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t forceFieldApplyType_typeInfo[] = {
	{ "FORCEFIELD_APPLY_FORCE", 0 },
	{ "FORCEFIELD_APPLY_VELOCITY", 1 },
	{ "FORCEFIELD_APPLY_IMPULSE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t waterLevel_t_typeInfo[] = {
	{ "WATERLEVEL_NONE", 0 },
	{ "WATERLEVEL_FEET", 1 },
	{ "WATERLEVEL_WAIST", 2 },
	{ "WATERLEVEL_HEAD", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t monsterMoveResult_t_typeInfo[] = {
	{ "MM_OK", 0 },
	{ "MM_SLIDING", 1 },
	{ "MM_BLOCKED", 2 },
	{ "MM_STEPPED", 3 },
	{ "MM_FALLING", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t pmtype_t_typeInfo[] = {
	{ "PM_NORMAL", 0 },
	{ "PM_DEAD", 1 },
	{ "PM_SPECTATOR", 2 },
	{ "PM_FREEZE", 3 },
	{ "PM_NOCLIP", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t EMantlePhase_typeInfo[] = {
	{ "notMantling_DarkModMantlePhase", 0 },
	{ "hang_DarkModMantlePhase", 1 },
	{ "pull_DarkModMantlePhase", 2 },
	{ "pullFast_DarkModMantlePhase", 3 },
	{ "shiftHands_DarkModMantlePhase", 4 },
	{ "push_DarkModMantlePhase", 5 },
	{ "pushNonCrouched_DarkModMantlePhase", 6 },
	{ "fixClipping_DarkModMantlePhase", 7 },
	{ "canceling_DarkModMantlePhase", 8 },
	{ "NumMantlePhases", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t idPhysics_Player_EMantleable_typeInfo[] = {
	{ "EMantleable_No", 0 },
	{ "EMantleable_YesCrouched", 1 },
	{ "EMantleable_YesUpstraight", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idPhysics_Player_eShoulderingAnimation_typeInfo[] = {
	{ "eShoulderingAnimation_NotStarted", 0 },
	{ "eShoulderingAnimation_Initialized", 1 },
	{ "eShoulderingAnimation_Scheduled", 2 },
	{ "eShoulderingAnimation_Active", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t constraintType_t_typeInfo[] = {
	{ "CONSTRAINT_INVALID", 0 },
	{ "CONSTRAINT_FIXED", 1 },
	{ "CONSTRAINT_BALLANDSOCKETJOINT", 2 },
	{ "CONSTRAINT_UNIVERSALJOINT", 3 },
	{ "CONSTRAINT_HINGE", 4 },
	{ "CONSTRAINT_HINGESTEERING", 5 },
	{ "CONSTRAINT_SLIDER", 6 },
	{ "CONSTRAINT_CYLINDRICALJOINT", 7 },
	{ "CONSTRAINT_LINE", 8 },
	{ "CONSTRAINT_PLANE", 9 },
	{ "CONSTRAINT_SPRING", 10 },
	{ "CONSTRAINT_CONTACT", 11 },
	{ "CONSTRAINT_FRICTION", 12 },
	{ "CONSTRAINT_CONELIMIT", 13 },
	{ "CONSTRAINT_PYRAMIDLIMIT", 14 },
	{ "CONSTRAINT_SUSPENSION", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t StimType_typeInfo[] = {
	{ "ST_FROB", 0 },
	{ "ST_FIRE", 1 },
	{ "ST_WATER", 2 },
	{ "ST_DAMAGE", 3 },
	{ "ST_SHIELD", 4 },
	{ "ST_HEALING", 5 },
	{ "ST_HOLY", 6 },
	{ "ST_MAGIC", 7 },
	{ "ST_TOUCH", 8 },
	{ "ST_KNOCKOUT", 9 },
	{ "ST_KILL", 10 },
	{ "ST_RESTORE", 11 },
	{ "ST_LIGHT", 12 },
	{ "ST_SOUND", 13 },
	{ "ST_VISUAL", 14 },
	{ "ST_INVITE", 15 },
	{ "ST_READ", 16 },
	{ "ST_RANDOM", 17 },
	{ "ST_TIMER", 18 },
	{ "ST_COMMUNICATION", 19 },
	{ "ST_GAS", 20 },
	{ "ST_TRIGGER", 21 },
	{ "ST_TARGET_REACHED", 22 },
	{ "ST_PLAYER", 23 },
	{ "ST_FLASH", 24 },
	{ "ST_BLIND", 25 },
	{ "ST_USER", 1000 },
	{ "ST_DEFAULT", -1 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_112_typeInfo[] = {
	{ "LAYER_UNDERWATER", 0 },
	{ "LAYER_MAIN_HUD", 1 },
	{ "LAYER_INVENTORY", 2 },
	{ "LAYER_INVGRID", 3 },
	{ "LAYER_OBJECTIVES", 12 },
	{ "LAYER_WAITUNTILREADY", 13 },
	{ "LAYER_SUBTITLES", 20 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_113_typeInfo[] = {
	{ "TH_ALL", -1 },
	{ "TH_THINK", 1 },
	{ "TH_PHYSICS", 2 },
	{ "TH_ANIMATE", 4 },
	{ "TH_UPDATEVISUALS", 8 },
	{ "TH_UPDATEPARTICLES", 16 },
	{ "TH_DOUSING", 32 },
	{ "TH_ARMED", 64 },
	{ NULL, 0 }
};

static enumValueInfo_t EImpulseState_typeInfo[] = {
	{ "EPressed", 0 },
	{ "ERepeat", 1 },
	{ "EReleased", 2 },
	{ "ENumImpulseStates", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t signalNum_t_typeInfo[] = {
	{ "SIG_TOUCH", 0 },
	{ "SIG_USE", 1 },
	{ "SIG_TRIGGER", 2 },
	{ "SIG_REMOVED", 3 },
	{ "SIG_DAMAGE", 4 },
	{ "SIG_BLOCKED", 5 },
	{ "SIG_MOVER_POS1", 6 },
	{ "SIG_MOVER_POS2", 7 },
	{ "SIG_MOVER_1TO2", 8 },
	{ "SIG_MOVER_2TO1", 9 },
	{ "NUM_SIGNALS", 10 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_116_typeInfo[] = {
	{ "EINV_GROUP", 1 },
	{ "EINV_PREV", 2 },
	{ "EINV_FAST", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t idEntity_enum_117_typeInfo[] = {
	{ "EVENT_STARTSOUNDSHADER", 0 },
	{ "EVENT_STOPSOUNDSHADER", 1 },
	{ "EVENT_MAXEVENTS", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t idAnimatedEntity_enum_118_typeInfo[] = {
	{ "EVENT_ADD_DAMAGE_EFFECT", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idPlayerStart_enum_119_typeInfo[] = {
	{ "EVENT_TELEPORTPLAYER", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t ECombatType_typeInfo[] = {
	{ "COMBAT_NONE", 0 },
	{ "COMBAT_MELEE", 1 },
	{ "COMBAT_RANGED", 2 },
	{ "NUM_COMBAT_TYPES", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t EMeleeType_typeInfo[] = {
	{ "MELEETYPE_OVER", 0 },
	{ "MELEETYPE_LR", 1 },
	{ "MELEETYPE_RL", 2 },
	{ "MELEETYPE_THRUST", 3 },
	{ "MELEETYPE_UNBLOCKABLE", 4 },
	{ "MELEETYPE_BLOCKALL", 5 },
	{ "NUM_MELEE_TYPES", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t EMeleeActState_typeInfo[] = {
	{ "MELEEACTION_READY", 0 },
	{ "MELEEACTION_ATTACK", 1 },
	{ "MELEEACTION_PARRY", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t EMeleeActPhase_typeInfo[] = {
	{ "MELEEPHASE_PREPARING", 0 },
	{ "MELEEPHASE_HOLDING", 1 },
	{ "MELEEPHASE_EXECUTING", 2 },
	{ "MELEEPHASE_RECOVERING", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t EMeleeResult_typeInfo[] = {
	{ "MELEERESULT_IN_PROGRESS", 0 },
	{ "MELEERESULT_AT_HIT", 1 },
	{ "MELEERESULT_AT_MISSED", 2 },
	{ "MELEERESULT_AT_PARRIED", 3 },
	{ "MELEERESULT_PAR_BLOCKED", 4 },
	{ "MELEERESULT_PAR_FAILED", 5 },
	{ "MELEERESULT_PAR_ABORTED", 6 },
	{ "NUM_MELEE_RESULTS", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t GreetingState_typeInfo[] = {
	{ "ECannotGreet", 0 },
	{ "ECannotGreetYet", 1 },
	{ "ENotGreetingAnybody", 2 },
	{ "EWaitingForGreeting", 3 },
	{ "EGoingToGreet", 4 },
	{ "EIsGreeting", 5 },
	{ "EAfterGreeting", 6 },
	{ "ENumAIGreetingStates", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t PickableLock_ELockpickState_typeInfo[] = {
	{ "UNLOCKED", 0 },
	{ "LOCKED", 1 },
	{ "LOCKPICKING_STARTED", 2 },
	{ "ADVANCE_TO_NEXT_SAMPLE", 3 },
	{ "PIN_SAMPLE", 4 },
	{ "PIN_SAMPLE_SWEETSPOT", 5 },
	{ "PIN_DELAY", 6 },
	{ "AFTER_PIN_DELAY", 7 },
	{ "WRONG_LOCKPICK_SOUND", 8 },
	{ "PIN_SUCCESS", 9 },
	{ "PIN_FAILED", 10 },
	{ "LOCK_SUCCESS", 11 },
	{ "PICKED", 12 },
	{ "NUM_LPSTATES", 13 },
	{ NULL, 0 }
};

static enumValueInfo_t LootType_typeInfo[] = {
	{ "LOOT_NONE", 0 },
	{ "LOOT_JEWELS", 1 },
	{ "LOOT_GOLD", 2 },
	{ "LOOT_GOODS", 3 },
	{ "LOOT_COUNT", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t CInventoryItem_ItemType_typeInfo[] = {
	{ "IT_ITEM", 0 },
	{ "IT_LOOT", 1 },
	{ "IT_LOOT_INFO", 2 },
	{ "IT_WEAPON", 3 },
	{ "IT_DUMMY", 4 },
	{ "IT_COUNT", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idProjectile_enum_129_typeInfo[] = {
	{ "EVENT_DAMAGE_EFFECT", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idProjectile_projectileState_t_typeInfo[] = {
	{ "SPAWNED", 0 },
	{ "CREATED", 1 },
	{ "LAUNCHED", 2 },
	{ "FIZZLED", 3 },
	{ "EXPLODED", 4 },
	{ "INACTIVE", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t weaponStatus_t_typeInfo[] = {
	{ "WP_READY", 0 },
	{ "WP_OUTOFAMMO", 1 },
	{ "WP_RELOAD", 2 },
	{ "WP_HOLSTERED", 3 },
	{ "WP_RISING", 4 },
	{ "WP_LOWERING", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idWeapon_enum_132_typeInfo[] = {
	{ "EVENT_RELOAD", 2 },
	{ "EVENT_ENDRELOAD", 3 },
	{ "EVENT_CHANGESKIN", 4 },
	{ "EVENT_MAXEVENTS", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t idLight_enum_133_typeInfo[] = {
	{ "EVENT_BECOMEBROKEN", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idItem_enum_134_typeInfo[] = {
	{ "EVENT_PICKUP", 2 },
	{ "EVENT_RESPAWN", 3 },
	{ "EVENT_RESPAWNFX", 4 },
	{ "EVENT_MAXEVENTS", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t playerIconType_t_typeInfo[] = {
	{ "ICON_LAG", 0 },
	{ "ICON_CHAT", 1 },
	{ "ICON_NONE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_136_typeInfo[] = {
	{ "SPEED", 0 },
	{ "PROJECTILE_DAMAGE", 1 },
	{ "MELEE_DAMAGE", 2 },
	{ "MELEE_DISTANCE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_137_typeInfo[] = {
	{ "INFLUENCE_NONE", 0 },
	{ "INFLUENCE_LEVEL1", 1 },
	{ "INFLUENCE_LEVEL2", 2 },
	{ "INFLUENCE_LEVEL3", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t EMouseDir_typeInfo[] = {
	{ "MOUSEDIR_NONE", 0 },
	{ "MOUSEDIR_LEFT", 1 },
	{ "MOUSEDIR_UP_LEFT", 2 },
	{ "MOUSEDIR_UP", 3 },
	{ "MOUSEDIR_UP_RIGHT", 4 },
	{ "MOUSEDIR_RIGHT", 5 },
	{ "MOUSEDIR_DOWN_RIGHT", 6 },
	{ "MOUSEDIR_DOWN", 7 },
	{ "MOUSEDIR_DOWN_LEFT", 8 },
	{ NULL, 0 }
};

static enumValueInfo_t EMouseTest_typeInfo[] = {
	{ "MOUSETEST_UPDOWN", 0 },
	{ "MOUSETEST_LEFTRIGHT", 1 },
	{ "MOUSETEST_4DIR", 2 },
	{ "MOUSETEST_8DIR", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_140_typeInfo[] = {
	{ "EIM_ALL", -1 },
	{ "EIM_UPDATE", 10 },
	{ "EIM_VIEW_ANGLE", 20 },
	{ "EIM_MOVEMENT", 40 },
	{ "EIM_CROUCH", 80 },
	{ "EIM_CROUCH_HOLD", 160 },
	{ "EIM_JUMP", 320 },
	{ "EIM_MANTLE", 640 },
	{ "EIM_CLIMB", 1280 },
	{ "EIM_FROB", 2560 },
	{ "EIM_FROB_HILIGHT", 5120 },
	{ "EIM_FROB_COMPLEX", 10240 },
	{ "EIM_ATTACK", 20480 },
	{ "EIM_ATTACK_RANGED", 40960 },
	{ "EIM_WEAPON_SELECT", 81920 },
	{ "EIM_ITEM_USE", 163840 },
	{ "EIM_ITEM_SELECT", 327680 },
	{ "EIM_ITEM_DROP", 655360 },
	{ "EIM_LEAN", 1310720 },
	{ NULL, 0 }
};

static enumValueInfo_t idPlayer_enum_141_typeInfo[] = {
	{ "EVENT_IMPULSE", 2 },
	{ "EVENT_EXIT_TELEPORTER", 3 },
	{ "EVENT_ABORT_TELEPORTER", 4 },
	{ "EVENT_SPECTATE", 5 },
	{ "EVENT_MAXEVENTS", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moveStage_t_typeInfo[] = {
	{ "ACCELERATION_STAGE", 0 },
	{ "LINEAR_STAGE", 1 },
	{ "DECELERATION_STAGE", 2 },
	{ "FINISHED_STAGE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moverCommand_t_typeInfo[] = {
	{ "MOVER_NONE", 0 },
	{ "MOVER_ROTATING", 1 },
	{ "MOVER_MOVING", 2 },
	{ "MOVER_SPLINE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idMover_moverDir_t_typeInfo[] = {
	{ "DIR_UP", -1 },
	{ "DIR_DOWN", -2 },
	{ "DIR_LEFT", -3 },
	{ "DIR_RIGHT", -4 },
	{ "DIR_FORWARD", -5 },
	{ "DIR_BACK", -6 },
	{ "DIR_REL_UP", -7 },
	{ "DIR_REL_DOWN", -8 },
	{ "DIR_REL_LEFT", -9 },
	{ "DIR_REL_RIGHT", -10 },
	{ "DIR_REL_FORWARD", -11 },
	{ "DIR_REL_BACK", -12 },
	{ NULL, 0 }
};

static enumValueInfo_t moverState_t_typeInfo[] = {
	{ "MOVER_POS1", 0 },
	{ "MOVER_POS2", 1 },
	{ "MOVER_1TO2", 2 },
	{ "MOVER_2TO1", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idExplodingBarrel_enum_146_typeInfo[] = {
	{ "EVENT_EXPLODE", 2 },
	{ "EVENT_MAXEVENTS", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idExplodingBarrel_explode_state_t_typeInfo[] = {
	{ "NORMAL", 0 },
	{ "BURNING", 1 },
	{ "BURNEXPIRED", 2 },
	{ "EXPLODING", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idSecurityCamera_enum_148_typeInfo[] = {
	{ "MODE_SCANNING", 0 },
	{ "MODE_LOSINGINTEREST", 1 },
	{ "MODE_SIGHTED", 2 },
	{ "MODE_ALERT", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t idSecurityCamera_enum_149_typeInfo[] = {
	{ "STATE_SWEEPING", 0 },
	{ "STATE_PLAYERSIGHTED", 1 },
	{ "STATE_ALERTED", 2 },
	{ "STATE_LOSTINTEREST", 3 },
	{ "STATE_POWERRETURNS_SWEEPING", 4 },
	{ "STATE_POWERRETURNS_PAUSED", 5 },
	{ "STATE_PAUSED", 6 },
	{ "STATE_DEAD", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t idBrittleFracture_enum_150_typeInfo[] = {
	{ "EVENT_PROJECT_DECAL", 2 },
	{ "EVENT_SHATTER", 3 },
	{ "EVENT_MAXEVENTS", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t VersionCheckResult_typeInfo[] = {
	{ "EQUAL", 0 },
	{ "OLDER", 1 },
	{ "NEWER", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t LT_LogType_typeInfo[] = {
	{ "LT_INIT", 0 },
	{ "LT_FORCE", 1 },
	{ "LT_ERROR", 2 },
	{ "LT_BEGIN", 3 },
	{ "LT_END", 4 },
	{ "LT_WARNING", 5 },
	{ "LT_INFO", 6 },
	{ "LT_DEBUG", 7 },
	{ "LT_COUNT", 8 },
	{ NULL, 0 }
};

static enumValueInfo_t LC_LogClass_typeInfo[] = {
	{ "LC_INIT", 0 },
	{ "LC_FORCE", 1 },
	{ "LC_MISC", 2 },
	{ "LC_SYSTEM", 3 },
	{ "LC_FROBBING", 4 },
	{ "LC_AI", 5 },
	{ "LC_SOUND", 6 },
	{ "LC_FUNCTION", 7 },
	{ "LC_ENTITY", 8 },
	{ "LC_INVENTORY", 9 },
	{ "LC_LIGHT", 10 },
	{ "LC_WEAPON", 11 },
	{ "LC_MATH", 12 },
	{ "LC_MOVEMENT", 13 },
	{ "LC_LOCKPICK", 14 },
	{ "LC_FRAME", 15 },
	{ "LC_STIM_RESPONSE", 16 },
	{ "LC_OBJECTIVES", 17 },
	{ "LC_DIFFICULTY", 18 },
	{ "LC_CONVERSATION", 19 },
	{ "LC_MAINMENU", 20 },
	{ "LC_AAS", 21 },
	{ "LC_STATE", 22 },
	{ "LC_COUNT", 23 },
	{ NULL, 0 }
};

static enumValueInfo_t CRelations_ERel_Type_typeInfo[] = {
	{ "E_ENEMY", -1 },
	{ "E_NEUTRAL", 0 },
	{ "E_FRIEND", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_EAlertClass_typeInfo[] = {
	{ "EAlertNone", 0 },
	{ "EAlertVisual_1", 1 },
	{ "EAlertVisual_2", 2 },
	{ "EAlertVisual_4", 3 },
	{ "EAlertTactile", 4 },
	{ "EAlertAudio", 5 },
	{ "EAlertClassCount", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_EAlertType_typeInfo[] = {
	{ "EAlertTypeNone", 0 },
	{ "EAlertTypeSuspicious", 1 },
	{ "EAlertTypeSuspiciousVisual", 2 },
	{ "EAlertTypeEnemy", 3 },
	{ "EAlertTypeFailedKO", 4 },
	{ "EAlertTypeWeapon", 5 },
	{ "EAlertTypeBlinded", 6 },
	{ "EAlertTypeDeadPerson", 7 },
	{ "EAlertTypeUnconsciousPerson", 8 },
	{ "EAlertTypeBlood", 9 },
	{ "EAlertTypeLightSource", 10 },
	{ "EAlertTypeMissingItem", 11 },
	{ "EAlertTypeBrokenItem", 12 },
	{ "EAlertTypeDoor", 13 },
	{ "EAlertTypeSuspiciousItem", 14 },
	{ "EAlertTypeRope", 15 },
	{ "EAlertTypeHitByProjectile", 16 },
	{ "EAlertTypeFoundEnemy", 17 },
	{ "EAlertTypeLostTrackOfEnemy", 18 },
	{ "EAlertTypeEncounter", 19 },
	{ "EAlertTypeRequestForHelp", 20 },
	{ "EAlertTypeDetectedEnemy", 21 },
	{ "EAlertTypeSomethingSuspicious", 22 },
	{ "EAlertTypeHitByMoveable", 23 },
	{ "EAlertTypePickedPocket", 24 },
	{ "EAlertTypeCount", 25 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_EAlertState_typeInfo[] = {
	{ "ERelaxed", 0 },
	{ "EObservant", 1 },
	{ "ESuspicious", 2 },
	{ "ESearching", 3 },
	{ "EAgitatedSearching", 4 },
	{ "ECombat", 5 },
	{ "EAlertStateNum", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_EPainCause_typeInfo[] = {
	{ "EPC_None", 0 },
	{ "EPC_Projectile", 1 },
	{ "EPC_Melee", 2 },
	{ "EPC_Drown", 3 },
	{ "EPC_KO", 4 },
	{ "EPC_Fall", 5 },
	{ "EPC_Moveable", 6 },
	{ "EPC_Num", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_ERepeatedBarkState_typeInfo[] = {
	{ "ERBS_NULL", 0 },
	{ "ERBS_SEARCHER_SINGLE_NO_EVIDENCE", 1 },
	{ "ERBS_SEARCHER_MULTIPLE_NO_EVIDENCE", 2 },
	{ "ERBS_SEARCHER_SINGLE_EVIDENCE", 3 },
	{ "ERBS_SEARCHER_MULTIPLE_EVIDENCE", 4 },
	{ "ERBS_GUARD_OBSERVER", 5 },
	{ "ERBS_NUM", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t StimState_typeInfo[] = {
	{ "SS_DISABLED", 0 },
	{ "SS_ENABLED", 1 },
	{ "SS_DEFAULT", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_CommMessage_TCommType_typeInfo[] = {
	{ "Greeting_CommType", 1 },
	{ "FriendlyJoke_CommType", 2 },
	{ "Insult_CommType", 3 },
	{ "RequestForHelp_CommType", 4 },
	{ "RequestForMissileHelp_CommType", 5 },
	{ "RequestForMeleeHelp_CommType", 6 },
	{ "RequestForLight_CommType", 7 },
	{ "DetectedSomethingSuspicious_CommType", 8 },
	{ "DetectedEnemy_CommType", 9 },
	{ "FollowOrder_CommType", 10 },
	{ "GuardLocationOrder_CommType", 11 },
	{ "GuardEntityOrder_CommType", 12 },
	{ "PatrolOrder_CommType", 13 },
	{ "AttackOrder_CommType", 14 },
	{ "GetOutOfTheWayOrder_CommType", 15 },
	{ "ConveyWarning_EvidenceOfIntruders_CommType", 16 },
	{ "ConveyWarning_ItemsHaveBeenStolen_CommType", 17 },
	{ "ConveyWarning_EnemiesHaveBeenSeen_CommType", 18 },
	{ "ConveyWarning_CorpseHasBeenSeen_CommType", 19 },
	{ "ConveyWarning_UnconsciousPersonHasBeenSeen_CommType", 20 },
	{ "RaiseTheAlarm_ItemsHaveBeenStolen_CommType", 21 },
	{ "RaiseTheAlarm_CorpseHasBeenSeen_CommType", 22 },
	{ "RaiseTheAlarm_UnconsciousPersonHasBeenSeen_CommType", 23 },
	{ "NumCommTypes", 24 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_SubsystemId_typeInfo[] = {
	{ "SubsysSenses", 0 },
	{ "SubsysMovement", 1 },
	{ "SubsysCommunication", 2 },
	{ "SubsysAction", 3 },
	{ "SubsysSearch", 4 },
	{ "SubsystemCount", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_State_StimMarker_typeInfo[] = {
	{ "EAIuse_Default", 0 },
	{ "EAIuse_Person", 1 },
	{ "EAIuse_Weapon", 2 },
	{ "EAIuse_Blood_Evidence", 3 },
	{ "EAIuse_Lightsource", 4 },
	{ "EAIuse_Missing_Item_Marker", 5 },
	{ "EAIuse_Broken_Item", 6 },
	{ "EAIuse_Door", 7 },
	{ "EAIuse_Suspicious", 8 },
	{ "EAIuse_Rope", 9 },
	{ "EAIuse_Monster", 10 },
	{ "EAIuse_Undead", 11 },
	{ "ENumMarkers", 12 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_State_SBO_Level_typeInfo[] = {
	{ "ESBO_0", 0 },
	{ "ESBO_1", 1 },
	{ "ESBO_2", 2 },
	{ "ENumSBOLevels", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_CommunicationSubsystem_EActionTypeOnConflict_typeInfo[] = {
	{ "EDefault", 0 },
	{ "EOverride", 1 },
	{ "EQueue", 2 },
	{ "EDiscard", 3 },
	{ "EPush", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_MovementSubsystem_BlockedState_typeInfo[] = {
	{ "ENotBlocked", 0 },
	{ "EPossiblyBlocked", 1 },
	{ "EBlocked", 2 },
	{ "EResolvingBlock", 3 },
	{ "EWaitingSolid", 4 },
	{ "EWaitingNonSolid", 5 },
	{ "ENumBlockedStates", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t darkModHidingSpotType_typeInfo[] = {
	{ "NONE_HIDING_SPOT_TYPE", 0 },
	{ "PVS_AREA_HIDING_SPOT_TYPE", 1 },
	{ "DARKNESS_HIDING_SPOT_TYPE", 2 },
	{ "VISUAL_OCCLUSION_HIDING_SPOT_TYPE", 4 },
	{ "ANY_HIDING_SPOT_TYPE", -1 },
	{ NULL, 0 }
};

static enumValueInfo_t CDarkmodAASHidingSpotFinder_ESearchState_typeInfo[] = {
	{ "EBuildingPVSList", 0 },
	{ "ENewPVSArea", 1 },
	{ "EIteratingVisibleAASAreas", 2 },
	{ "EIteratingNonVisibleAASAreas", 3 },
	{ "ESubdivideVisibleAASArea", 4 },
	{ "EDone", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t moveType_t_typeInfo[] = {
	{ "MOVETYPE_DEAD", 0 },
	{ "MOVETYPE_ANIM", 1 },
	{ "MOVETYPE_SLIDE", 2 },
	{ "MOVETYPE_FLY", 3 },
	{ "MOVETYPE_STATIC", 4 },
	{ "MOVETYPE_SIT", 5 },
	{ "MOVETYPE_SIT_DOWN", 6 },
	{ "MOVETYPE_SLEEP", 7 },
	{ "MOVETYPE_FALL_ASLEEP", 8 },
	{ "MOVETYPE_GET_UP", 9 },
	{ "MOVETYPE_WAKE_UP", 10 },
	{ "NUM_MOVETYPES", 11 },
	{ NULL, 0 }
};

static enumValueInfo_t moveCommand_t_typeInfo[] = {
	{ "MOVE_NONE", 0 },
	{ "MOVE_FACE_ENEMY", 1 },
	{ "MOVE_FACE_ENTITY", 2 },
	{ "NUM_NONMOVING_COMMANDS", 3 },
	{ "MOVE_TO_ENEMY", 3 },
	{ "MOVE_TO_ENEMYHEIGHT", 4 },
	{ "MOVE_TO_ENTITY", 5 },
	{ "MOVE_OUT_OF_RANGE", 6 },
	{ "MOVE_TO_ATTACK_POSITION", 7 },
	{ "MOVE_TO_COVER", 8 },
	{ "MOVE_TO_POSITION", 9 },
	{ "MOVE_TO_POSITION_DIRECT", 10 },
	{ "MOVE_SLIDE_TO_POSITION", 11 },
	{ "MOVE_WANDER", 12 },
	{ "MOVE_VECTOR", 13 },
	{ "MOVE_FLEE", 14 },
	{ "NUM_MOVE_COMMANDS", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t moveStatus_t_typeInfo[] = {
	{ "MOVE_STATUS_DONE", 0 },
	{ "MOVE_STATUS_MOVING", 1 },
	{ "MOVE_STATUS_WAITING", 2 },
	{ "MOVE_STATUS_DEST_NOT_FOUND", 3 },
	{ "MOVE_STATUS_DEST_UNREACHABLE", 4 },
	{ "MOVE_STATUS_BLOCKED_BY_WALL", 5 },
	{ "MOVE_STATUS_BLOCKED_BY_OBJECT", 6 },
	{ "MOVE_STATUS_BLOCKED_BY_ENEMY", 7 },
	{ "MOVE_STATUS_BLOCKED_BY_MONSTER", 8 },
	{ NULL, 0 }
};

static enumValueInfo_t talkState_t_typeInfo[] = {
	{ "TALK_NEVER", 0 },
	{ "TALK_DEAD", 1 },
	{ "TALK_OK", 2 },
	{ "TALK_BUSY", 3 },
	{ "NUM_TALK_STATES", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t koState_t_typeInfo[] = {
	{ "KO_NOT", 0 },
	{ "KO_BLACKJACK", 1 },
	{ "KO_GAS", 2 },
	{ "KO_FALL", 3 },
	{ "NUM_KO_STATES", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t stopEvent_t_typeInfo[] = {
	{ "SE_BLOCKED", 10 },
	{ "SE_ENTER_LEDGE_AREA", 20 },
	{ "SE_ENTER_OBSTACLE", 40 },
	{ "SE_FALL", 80 },
	{ "SE_LAND", 160 },
	{ NULL, 0 }
};

static enumValueInfo_t enum_175_typeInfo[] = {
	{ "OP_RETURN", 0 },
	{ "OP_UINC_F", 1 },
	{ "OP_UINCP_F", 2 },
	{ "OP_UDEC_F", 3 },
	{ "OP_UDECP_F", 4 },
	{ "OP_COMP_F", 5 },
	{ "OP_MUL_F", 6 },
	{ "OP_MUL_V", 7 },
	{ "OP_MUL_FV", 8 },
	{ "OP_MUL_VF", 9 },
	{ "OP_DIV_F", 10 },
	{ "OP_MOD_F", 11 },
	{ "OP_ADD_F", 12 },
	{ "OP_ADD_V", 13 },
	{ "OP_ADD_S", 14 },
	{ "OP_ADD_FS", 15 },
	{ "OP_ADD_SF", 16 },
	{ "OP_ADD_VS", 17 },
	{ "OP_ADD_SV", 18 },
	{ "OP_SUB_F", 19 },
	{ "OP_SUB_V", 20 },
	{ "OP_EQ_F", 21 },
	{ "OP_EQ_V", 22 },
	{ "OP_EQ_S", 23 },
	{ "OP_EQ_E", 24 },
	{ "OP_EQ_EO", 25 },
	{ "OP_EQ_OE", 26 },
	{ "OP_EQ_OO", 27 },
	{ "OP_NE_F", 28 },
	{ "OP_NE_V", 29 },
	{ "OP_NE_S", 30 },
	{ "OP_NE_E", 31 },
	{ "OP_NE_EO", 32 },
	{ "OP_NE_OE", 33 },
	{ "OP_NE_OO", 34 },
	{ "OP_LE", 35 },
	{ "OP_GE", 36 },
	{ "OP_LT", 37 },
	{ "OP_GT", 38 },
	{ "OP_INDIRECT_F", 39 },
	{ "OP_INDIRECT_V", 40 },
	{ "OP_INDIRECT_S", 41 },
	{ "OP_INDIRECT_ENT", 42 },
	{ "OP_INDIRECT_BOOL", 43 },
	{ "OP_INDIRECT_OBJ", 44 },
	{ "OP_ADDRESS", 45 },
	{ "OP_EVENTCALL", 46 },
	{ "OP_OBJECTCALL", 47 },
	{ "OP_SYSCALL", 48 },
	{ "OP_STORE_F", 49 },
	{ "OP_STORE_V", 50 },
	{ "OP_STORE_S", 51 },
	{ "OP_STORE_ENT", 52 },
	{ "OP_STORE_BOOL", 53 },
	{ "OP_STORE_OBJENT", 54 },
	{ "OP_STORE_OBJ", 55 },
	{ "OP_STORE_ENTOBJ", 56 },
	{ "OP_STORE_FTOS", 57 },
	{ "OP_STORE_BTOS", 58 },
	{ "OP_STORE_VTOS", 59 },
	{ "OP_STORE_FTOBOOL", 60 },
	{ "OP_STORE_BOOLTOF", 61 },
	{ "OP_STOREP_F", 62 },
	{ "OP_STOREP_V", 63 },
	{ "OP_STOREP_S", 64 },
	{ "OP_STOREP_ENT", 65 },
	{ "OP_STOREP_FLD", 66 },
	{ "OP_STOREP_BOOL", 67 },
	{ "OP_STOREP_OBJ", 68 },
	{ "OP_STOREP_OBJENT", 69 },
	{ "OP_STOREP_FTOS", 70 },
	{ "OP_STOREP_BTOS", 71 },
	{ "OP_STOREP_VTOS", 72 },
	{ "OP_STOREP_FTOBOOL", 73 },
	{ "OP_STOREP_BOOLTOF", 74 },
	{ "OP_UMUL_F", 75 },
	{ "OP_UMUL_V", 76 },
	{ "OP_UDIV_F", 77 },
	{ "OP_UDIV_V", 78 },
	{ "OP_UMOD_F", 79 },
	{ "OP_UADD_F", 80 },
	{ "OP_UADD_V", 81 },
	{ "OP_USUB_F", 82 },
	{ "OP_USUB_V", 83 },
	{ "OP_UAND_F", 84 },
	{ "OP_UOR_F", 85 },
	{ "OP_NOT_BOOL", 86 },
	{ "OP_NOT_F", 87 },
	{ "OP_NOT_V", 88 },
	{ "OP_NOT_S", 89 },
	{ "OP_NOT_ENT", 90 },
	{ "OP_NEG_F", 91 },
	{ "OP_NEG_V", 92 },
	{ "OP_INT_F", 93 },
	{ "OP_IF", 94 },
	{ "OP_IFNOT", 95 },
	{ "OP_CALL", 96 },
	{ "OP_THREAD", 97 },
	{ "OP_OBJTHREAD", 98 },
	{ "OP_PUSH_F", 99 },
	{ "OP_PUSH_V", 100 },
	{ "OP_PUSH_S", 101 },
	{ "OP_PUSH_ENT", 102 },
	{ "OP_PUSH_OBJ", 103 },
	{ "OP_PUSH_OBJENT", 104 },
	{ "OP_PUSH_FTOS", 105 },
	{ "OP_PUSH_BTOF", 106 },
	{ "OP_PUSH_FTOB", 107 },
	{ "OP_PUSH_VTOS", 108 },
	{ "OP_PUSH_BTOS", 109 },
	{ "OP_GOTO", 110 },
	{ "OP_AND", 111 },
	{ "OP_AND_BOOLF", 112 },
	{ "OP_AND_FBOOL", 113 },
	{ "OP_AND_BOOLBOOL", 114 },
	{ "OP_OR", 115 },
	{ "OP_OR_BOOLF", 116 },
	{ "OP_OR_FBOOL", 117 },
	{ "OP_OR_BOOLBOOL", 118 },
	{ "OP_BITAND", 119 },
	{ "OP_BITOR", 120 },
	{ "OP_BREAK", 121 },
	{ "OP_CONTINUE", 122 },
	{ "NUM_OPCODES", 123 },
	{ NULL, 0 }
};

static enumValueInfo_t gameType_t_typeInfo[] = {
	{ "GAME_SP", 0 },
	{ "GAME_DM", 1 },
	{ "GAME_TOURNEY", 2 },
	{ "GAME_TDM", 3 },
	{ "GAME_LASTMAN", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t playerVote_t_typeInfo[] = {
	{ "PLAYER_VOTE_NONE", 0 },
	{ "PLAYER_VOTE_NO", 1 },
	{ "PLAYER_VOTE_YES", 2 },
	{ "PLAYER_VOTE_WAIT", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t snd_evt_t_typeInfo[] = {
	{ "SND_YOUWIN", 0 },
	{ "SND_YOULOSE", 1 },
	{ "SND_FIGHT", 2 },
	{ "SND_VOTE", 3 },
	{ "SND_VOTE_PASSED", 4 },
	{ "SND_VOTE_FAILED", 5 },
	{ "SND_THREE", 6 },
	{ "SND_TWO", 7 },
	{ "SND_ONE", 8 },
	{ "SND_SUDDENDEATH", 9 },
	{ "SND_COUNT", 10 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_gameState_t_typeInfo[] = {
	{ "INACTIVE", 0 },
	{ "WARMUP", 1 },
	{ "COUNTDOWN", 2 },
	{ "GAMEON", 3 },
	{ "SUDDENDEATH", 4 },
	{ "GAMEREVIEW", 5 },
	{ "NEXTGAME", 6 },
	{ "STATE_COUNT", 7 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_msg_evt_t_typeInfo[] = {
	{ "MSG_SUICIDE", 0 },
	{ "MSG_KILLED", 1 },
	{ "MSG_KILLEDTEAM", 2 },
	{ "MSG_DIED", 3 },
	{ "MSG_VOTE", 4 },
	{ "MSG_VOTEPASSED", 5 },
	{ "MSG_VOTEFAILED", 6 },
	{ "MSG_SUDDENDEATH", 7 },
	{ "MSG_FORCEREADY", 8 },
	{ "MSG_JOINEDSPEC", 9 },
	{ "MSG_TIMELIMIT", 10 },
	{ "MSG_FRAGLIMIT", 11 },
	{ "MSG_TELEFRAGGED", 12 },
	{ "MSG_JOINTEAM", 13 },
	{ "MSG_HOLYSHIT", 14 },
	{ "MSG_COUNT", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_vote_flags_t_typeInfo[] = {
	{ "VOTE_RESTART", 0 },
	{ "VOTE_TIMELIMIT", 1 },
	{ "VOTE_FRAGLIMIT", 2 },
	{ "VOTE_GAMETYPE", 3 },
	{ "VOTE_KICK", 4 },
	{ "VOTE_MAP", 5 },
	{ "VOTE_SPECTATORS", 6 },
	{ "VOTE_NEXTMAP", 7 },
	{ "VOTE_COUNT", 8 },
	{ "VOTE_NONE", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t idMultiplayerGame_vote_result_t_typeInfo[] = {
	{ "VOTE_UPDATE", 0 },
	{ "VOTE_FAILED", 1 },
	{ "VOTE_PASSED", 2 },
	{ "VOTE_ABORTED", 3 },
	{ "VOTE_RESET", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t EMMButtonType_typeInfo[] = {
	{ "BUTTON_TYPE_RIDE", 0 },
	{ "BUTTON_TYPE_FETCH", 1 },
	{ "NUM_BUTTON_TYPES", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t EComponentType_typeInfo[] = {
	{ "COMP_KILL", 0 },
	{ "COMP_KO", 1 },
	{ "COMP_AI_FIND_ITEM", 2 },
	{ "COMP_AI_FIND_BODY", 3 },
	{ "COMP_ALERT", 4 },
	{ "COMP_DESTROY", 5 },
	{ "COMP_ITEM", 6 },
	{ "COMP_PICKPOCKET", 7 },
	{ "COMP_LOCATION", 8 },
	{ "COMP_CUSTOM_ASYNC", 9 },
	{ "COMP_CUSTOM_CLOCKED", 10 },
	{ "COMP_INFO_LOCATION", 11 },
	{ "COMP_DISTANCE", 12 },
	{ "COMP_READABLE_OPENED", 13 },
	{ "COMP_READABLE_CLOSED", 14 },
	{ "COMP_READABLE_PAGE_REACHED", 15 },
	{ "COMP_COUNT", 16 },
	{ NULL, 0 }
};

static enumValueInfo_t ESpecificationMethod_typeInfo[] = {
	{ "SPEC_NONE", 0 },
	{ "SPEC_NAME", 1 },
	{ "SPEC_OVERALL", 2 },
	{ "SPEC_GROUP", 3 },
	{ "SPEC_CLASSNAME", 4 },
	{ "SPEC_SPAWNCLASS", 5 },
	{ "SPEC_AI_TYPE", 6 },
	{ "SPEC_AI_TEAM", 7 },
	{ "SPEC_AI_INNOCENCE", 8 },
	{ "SPEC_COUNT", 9 },
	{ NULL, 0 }
};

static enumValueInfo_t EObjCompletionState_typeInfo[] = {
	{ "STATE_INCOMPLETE", 0 },
	{ "STATE_COMPLETE", 1 },
	{ "STATE_INVALID", 2 },
	{ "STATE_FAILED", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t EMissionEventType_typeInfo[] = {
	{ "EVENT_NOTHING", 0 },
	{ "EVENT_READABLE_OPENED", 1 },
	{ "EVENT_READABLE_CLOSED", 2 },
	{ "EVENT_READABLE_PAGE_REACHED", 3 },
	{ "EVENT_INVALID", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t ObjectiveCondition_Type_typeInfo[] = {
	{ "CHANGE_STATE", 0 },
	{ "CHANGE_VISIBILITY", 1 },
	{ "CHANGE_MANDATORY", 2 },
	{ "INVALID_TYPE", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t CStimResponseTimer_TimerType_typeInfo[] = {
	{ "SRTT_SINGLESHOT", 0 },
	{ "SRTT_RELOAD", 1 },
	{ "SRTT_DEFAULT", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t CStimResponseTimer_TimerState_typeInfo[] = {
	{ "SRTS_DISABLED", 0 },
	{ "SRTS_TRIGGERED", 1 },
	{ "SRTS_RUNNING", 2 },
	{ "SRTS_EXPIRED", 3 },
	{ "SRTS_DEFAULT", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t seed_entity_flags_typeInfo[] = {
	{ "SEED_ENTITY_HIDDEN", 1 },
	{ "SEED_ENTITY_EXISTS", 2 },
	{ "SEED_ENTITY_WAS_SPAWNED", 4 },
	{ "SEED_ENTITY_PSEUDO", 8 },
	{ "SEED_ENTITY_WAITING", 16 },
	{ "SEED_ENTITY_WATCHED", 32 },
	{ "SEED_ENTITY_COMBINED", 64 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_ConversationCommand_Type_typeInfo[] = {
	{ "EWaitSeconds", 0 },
	{ "EWalkToActor", 1 },
	{ "EWalkToPosition", 2 },
	{ "EWalkToEntity", 3 },
	{ "EStopMove", 4 },
	{ "ETalk", 5 },
	{ "EPlayAnimOnce", 6 },
	{ "EPlayAnimCycle", 7 },
	{ "EActivateTarget", 8 },
	{ "ELookAtActor", 9 },
	{ "ELookAtPosition", 10 },
	{ "ELookAtEntity", 11 },
	{ "ETurnToActor", 12 },
	{ "ETurnToPosition", 13 },
	{ "ETurnToEntity", 14 },
	{ "EAttackActor", 15 },
	{ "EAttackEntity", 16 },
	{ "EInteractWithEntity", 17 },
	{ "ERunScript", 18 },
	{ "EWaitForActor", 19 },
	{ "EWaitForAllActors", 20 },
	{ "ENumCommands", 21 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_ConversationCommand_State_typeInfo[] = {
	{ "EReadyForExecution", 0 },
	{ "EExecuting", 1 },
	{ "EFinished", 2 },
	{ "EAborted", 3 },
	{ "ENumStates", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_ConversationState_ExecutionState_typeInfo[] = {
	{ "ENotReady", 0 },
	{ "EReady", 1 },
	{ "EExecuting", 2 },
	{ "EBusy", 3 },
	{ "ENumExecutionStates", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_CombatState_ECombatSubState_typeInfo[] = {
	{ "EStateReaction", 0 },
	{ "EStateDoOnce", 1 },
	{ "EStateCheckWeaponState", 2 },
	{ "EStateSheathingWeapon", 3 },
	{ "EStateDrawWeapon", 4 },
	{ "EStateDrawingWeapon", 5 },
	{ "EStateCombatAndChecks", 6 },
	{ "EStateVictor1", 7 },
	{ "EStateVictor2", 8 },
	{ "EStateVictor3", 9 },
	{ "EStateVictor4", 10 },
	{ "EStateVictor5", 11 },
	{ "EStateVictor6", 12 },
	{ "EStateVictor7", 13 },
	{ "EStateVictor8", 14 },
	{ "EStateVictor9", 15 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_ExamineRopeState_EExamineRopeState_typeInfo[] = {
	{ "EStateSitting", 0 },
	{ "EStateStarting", 1 },
	{ "EStateApproaching", 2 },
	{ "EStateTurningToward", 3 },
	{ "EStateExamineTop", 4 },
	{ "EStateExamineBottom", 5 },
	{ "EStateFinal", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_HitByMoveableState_EHitByMoveableState_typeInfo[] = {
	{ "EStateSittingSleeping", 0 },
	{ "EStateStarting", 1 },
	{ "EStateTurnToward", 2 },
	{ "EStateLookAt", 3 },
	{ "EStateTurnBack", 4 },
	{ "EStateLookBack", 5 },
	{ "EStateFinal", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_PocketPickedState_EPocketPickedState_typeInfo[] = {
	{ "EStateReact", 0 },
	{ "EStateStopping", 1 },
	{ "EStateStartAnim", 2 },
	{ "EStatePlayAnim", 3 },
	{ "EStateTurnToward", 4 },
	{ "EStateLookAt", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_SwitchOnLightState_ERelightState_typeInfo[] = {
	{ "EStateSitting", 0 },
	{ "EStateStarting", 1 },
	{ "EStateApproaching", 2 },
	{ "EStateTurningToward", 3 },
	{ "EStateRelight", 4 },
	{ "EStatePause", 5 },
	{ "EStateFinal", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_AnimalPatrolTask_EState_typeInfo[] = {
	{ "stateNone", 0 },
	{ "stateMovingToNextSpot", 1 },
	{ "stateMovingToNextPathCorner", 2 },
	{ "stateDoingSomething", 3 },
	{ "stateWaiting", 4 },
	{ "statePreMovingToNextSpot", 5 },
	{ "stateCount", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t EscapePointAlgorithm_typeInfo[] = {
	{ "FIND_ANY", 0 },
	{ "FIND_GUARDED", 1 },
	{ "FIND_FRIENDLY", 2 },
	{ "FIND_FRIENDLY_GUARDED", 3 },
	{ "FIND_AAS_AREA_FAR_FROM_THREAT", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t EscapeDistanceOption_typeInfo[] = {
	{ "DIST_DONT_CARE", 0 },
	{ "DIST_NEAREST", 1 },
	{ "DIST_FARTHEST", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_GuardSpotTask_EGuardSpotState_typeInfo[] = {
	{ "EStateSetup", 0 },
	{ "EStateMoving", 1 },
	{ "EStateStanding", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_HandleDoorTask_EDoorHandlingState_typeInfo[] = {
	{ "EStateNone", 0 },
	{ "EStateApproachingDoor", 1 },
	{ "EStateMovingToSafePos1", 2 },
	{ "EStateMovingToSafePos2", 3 },
	{ "EStateMovingToFrontPos", 4 },
	{ "EStateRetryInterruptedOpen1", 5 },
	{ "EStateRetryInterruptedOpen2", 6 },
	{ "EStateRetryInterruptedOpen3", 7 },
	{ "EStateWaitBeforeOpen", 8 },
	{ "EStateStartOpen", 9 },
	{ "EStateOpeningDoor", 10 },
	{ "EStateMovingToMidPos", 11 },
	{ "EStateMovingToBackPos", 12 },
	{ "EStateRetryInterruptedClose1", 13 },
	{ "EStateRetryInterruptedClose2", 14 },
	{ "EStateRetryInterruptedClose3", 15 },
	{ "EStateRetryInterruptedClose4", 16 },
	{ "EStateRetryInterruptedClose5", 17 },
	{ "EStateRetryInterruptedClose6", 18 },
	{ "EStateWaitBeforeClose", 19 },
	{ "EStateStartClose", 20 },
	{ "EStateClosingDoor", 21 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_HandleElevatorTask_State_typeInfo[] = {
	{ "EMovingTowardsStation", 0 },
	{ "EInitiateMoveToFetchButton", 1 },
	{ "EMovingToFetchButton", 2 },
	{ "EPressFetchButton", 3 },
	{ "EWaitForElevator", 4 },
	{ "EMoveOntoElevator", 5 },
	{ "EPause", 6 },
	{ "EInitiateMoveToRideButton", 7 },
	{ "EMovingToRideButton", 8 },
	{ "EPressRideButton", 9 },
	{ "ERideOnElevator", 10 },
	{ "EGetOffElevator", 11 },
	{ "EWrapUp", 12 },
	{ "ENumStates", 13 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_InvestigateSpotTask_EInvestigateState_typeInfo[] = {
	{ "EStateInit", 0 },
	{ "EStateMovingTo", 1 },
	{ "EStateKneeling", 2 },
	{ "EStateWaiting", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t ai_PathSitTask_ESitState_typeInfo[] = {
	{ "EStateSitStart", 0 },
	{ "EStateTurning", 1 },
	{ "EStateWaiting", 2 },
	{ "EStateGetUp", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t CHttpRequest_RequestStatus_typeInfo[] = {
	{ "NOT_PERFORMED_YET", 0 },
	{ "OK", 1 },
	{ "IN_PROGRESS", 2 },
	{ "FAILED", 3 },
	{ "ABORTED", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t EIntersection_typeInfo[] = {
	{ "INTERSECT_NONE", 0 },
	{ "INTERSECT_PARTIAL", 1 },
	{ "INTERSECT_FULL", 2 },
	{ "INTERSECT_OUTSIDE", 3 },
	{ "INTERSECT_COUNT", 4 },
	{ NULL, 0 }
};

static enumValueInfo_t ELLIPSOID_AREA_typeInfo[] = {
	{ "ELL_ORIGIN", 0 },
	{ "ELA_CENTER", 1 },
	{ "ELA_AXIS", 2 },
	{ "ELL_COUNT", 3 },
	{ NULL, 0 }
};

static enumValueInfo_t ECONE_AREA_typeInfo[] = {
	{ "ELC_ORIGIN", 0 },
	{ "ELA_TARGET", 1 },
	{ "ELA_RIGHT", 2 },
	{ "ELA_UP", 3 },
	{ "ELA_START", 4 },
	{ "ELA_END", 5 },
	{ "ELC_COUNT", 6 },
	{ NULL, 0 }
};

static enumValueInfo_t ELINESEGMENT_typeInfo[] = {
	{ "LSG_ORIGIN", 0 },
	{ "LSG_DIRECTION", 1 },
	{ "LSG_COUNT", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t CDownload_DownloadStatus_typeInfo[] = {
	{ "NOT_STARTED_YET", 0 },
	{ "IN_PROGRESS", 1 },
	{ "FAILED", 2 },
	{ "SUCCESS", 3 },
	{ "CANCELED", 4 },
	{ "MALFORMED", 5 },
	{ NULL, 0 }
};

static enumValueInfo_t DownloadableMod_Type_typeInfo[] = {
	{ "Single", 0 },
	{ "Multi", 1 },
	{ NULL, 0 }
};

static enumValueInfo_t CMissionManager_InstallResult_typeInfo[] = {
	{ "INSTALLED_OK", 0 },
	{ "INDEX_OUT_OF_BOUNDS", 1 },
	{ "COPY_FAILURE", 2 },
	{ NULL, 0 }
};

static enumValueInfo_t CMissionManager_RequestStatus_typeInfo[] = {
	{ "NOT_IN_PROGRESS", 0 },
	{ "IN_PROGRESS", 1 },
	{ "FAILED", 2 },
	{ "SUCCESSFUL", 3 },
	{ "MALFORMED", 4 },
	{ NULL, 0 }
};

static enumTypeInfo_t enumTypeInfo[] = {
	{ "core_t", core_t_typeInfo },
	{ "xthreadPriority", xthreadPriority_typeInfo },
	{ "criticalSection_t", criticalSection_t_typeInfo },
	{ "cpuid_t", cpuid_t_typeInfo },
	{ "fpuRounding_t", fpuRounding_t_typeInfo },
	{ "joystickAxis_t", joystickAxis_t_typeInfo },
	{ "sysEventType_t", sysEventType_t_typeInfo },
	{ "sys_mEvents", sys_mEvents_typeInfo },
	{ "netadrtype_t", netadrtype_t_typeInfo },
	{ "enum_9", enum_9_typeInfo },
	{ "speakerLabel", speakerLabel_typeInfo },
	{ "idMath::enum_11", idMath_enum_11_typeInfo },
	{ "extrapolation_t", extrapolation_t_typeInfo },
//	{ "idCurve_Spline< class type >::boundary_t", idCurve_Spline_class_type__boundary_t_typeInfo },
	{ "frustumCull_t", frustumCull_t_typeInfo },
	{ "IncidentPlaneMode", IncidentPlaneMode_typeInfo },
	{ "traceModel_t", traceModel_t_typeInfo },
	{ "Measure_t", Measure_t_typeInfo },
	{ "lexerFlags_t", lexerFlags_t_typeInfo },
	{ "idMapPrimitive::enum_19", idMapPrimitive_enum_19_typeInfo },
	{ "idTimer::enum_20", idTimer_enum_20_typeInfo },
	{ "jobSyncType_t", jobSyncType_t_typeInfo },
	{ "jobListId_t", jobListId_t_typeInfo },
	{ "jobListPriority_t", jobListPriority_t_typeInfo },
	{ "jobListParallelism_t", jobListParallelism_t_typeInfo },
	{ "cmdFlags_t", cmdFlags_t_typeInfo },
	{ "cmdExecution_t", cmdExecution_t_typeInfo },
	{ "cvarFlags_t", cvarFlags_t_typeInfo },
	{ "toolFlag_t", toolFlag_t_typeInfo },
	{ "loadkey_t", loadkey_t_typeInfo },
	{ "idCommon::eConfigExport", idCommon_eConfigExport_typeInfo },
	{ "fsOrigin_t", fsOrigin_t_typeInfo },
	{ "fsMode_t", fsMode_t_typeInfo },
	{ "dlType_t", dlType_t_typeInfo },
	{ "dlStatus_t", dlStatus_t_typeInfo },
	{ "dlMime_t", dlMime_t_typeInfo },
	{ "findFile_t", findFile_t_typeInfo },
	{ "UserCmdButton", UserCmdButton_typeInfo },
	{ "enum_38", enum_38_typeInfo },
	{ "inhibit_t", inhibit_t_typeInfo },
	{ "declType_t", declType_t_typeInfo },
	{ "declState_t", declState_t_typeInfo },
	{ "enum_42", enum_42_typeInfo },
	{ "prtDistribution_t", prtDistribution_t_typeInfo },
	{ "prtDirection_t", prtDirection_t_typeInfo },
	{ "prtCustomPth_t", prtCustomPth_t_typeInfo },
	{ "prtOrientation_t", prtOrientation_t_typeInfo },
	{ "prtMapLayout_t", prtMapLayout_t_typeInfo },
	{ "declAFConstraintType_t", declAFConstraintType_t_typeInfo },
	{ "declAFJointMod_t", declAFJointMod_t_typeInfo },
	{ "idAFVector::enum_50", idAFVector_enum_50_typeInfo },
	{ "idDeclAF_Constraint::enum_51", idDeclAF_Constraint_enum_51_typeInfo },
	{ "cinStatus_t", cinStatus_t_typeInfo },
	{ "textureFilter_t", textureFilter_t_typeInfo },
	{ "textureRepeat_t", textureRepeat_t_typeInfo },
	{ "deform_t", deform_t_typeInfo },
	{ "dynamicidImage_t", dynamicidImage_t_typeInfo },
	{ "expOpType_t", expOpType_t_typeInfo },
	{ "expRegister_t", expRegister_t_typeInfo },
	{ "texgen_t", texgen_t_typeInfo },
	{ "stageLighting_t", stageLighting_t_typeInfo },
	{ "stageVertexColor_t", stageVertexColor_t_typeInfo },
	{ "materialCoverage_t", materialCoverage_t_typeInfo },
	{ "materialSort_t", materialSort_t_typeInfo },
	{ "cullType_t", cullType_t_typeInfo },
	{ "materialFlags_t", materialFlags_t_typeInfo },
	{ "contentsFlags_t", contentsFlags_t_typeInfo },
	{ "surfTypes_t", surfTypes_t_typeInfo },
	{ "surfaceFlags_t", surfaceFlags_t_typeInfo },
	{ "dynamicModel_t", dynamicModel_t_typeInfo },
	{ "jointHandle_t", jointHandle_t_typeInfo },
	{ "glVendor_t", glVendor_t_typeInfo },
	{ "renderEntity_s::areaLock_t", renderEntity_s_areaLock_t_typeInfo },
	{ "viewID_t", viewID_t_typeInfo },
	{ "portalConnection_t", portalConnection_t_typeInfo },
	{ "SubtitleLevel", SubtitleLevel_typeInfo },
	{ "contactType_t", contactType_t_typeInfo },
	{ "allowReply_t", allowReply_t_typeInfo },
	{ "escReply_t", escReply_t_typeInfo },
	{ "enum_79", enum_79_typeInfo },
	{ "idGameEdit::SpawnEntityDef_Flags", idGameEdit_SpawnEntityDef_Flags_typeInfo },
	{ "etype_t", etype_t_typeInfo },
	{ "idVarDef::initialized_t", idVarDef_initialized_t_typeInfo },
	{ "idProgram::DocFileFormat", idProgram_DocFileFormat_typeInfo },
	{ "jointModTransform_t", jointModTransform_t_typeInfo },
	{ "frameCommandType_t", frameCommandType_t_typeInfo },
	{ "AFJointModType_t", AFJointModType_t_typeInfo },
	{ "eas::ActionType", eas_ActionType_typeInfo },
	{ "eas::RouteType", eas_RouteType_typeInfo },
	{ "enum_89", enum_89_typeInfo },
	{ "pvsType_t", pvsType_t_typeInfo },
	{ "EMissionResult", EMissionResult_typeInfo },
	{ "difficulty::Setting::EApplicationType", difficulty_Setting_EApplicationType_typeInfo },
	{ "seed_model_flags", seed_model_flags_typeInfo },
	{ "enum_94", enum_94_typeInfo },
	{ "gameState_t", gameState_t_typeInfo },
	{ "GuiMessage::Type", GuiMessage_Type_typeInfo },
	{ "enum_97", enum_97_typeInfo },
	{ "EventType", EventType_typeInfo },
	{ "smRole_t", smRole_t_typeInfo },
	{ "searchFlags_t", searchFlags_t_typeInfo },
	{ "gameSoundChannel_t", gameSoundChannel_t_typeInfo },
	{ "forceFieldType", forceFieldType_typeInfo },
	{ "forceFieldApplyType", forceFieldApplyType_typeInfo },
	{ "waterLevel_t", waterLevel_t_typeInfo },
	{ "monsterMoveResult_t", monsterMoveResult_t_typeInfo },
	{ "pmtype_t", pmtype_t_typeInfo },
	{ "EMantlePhase", EMantlePhase_typeInfo },
	{ "idPhysics_Player::EMantleable", idPhysics_Player_EMantleable_typeInfo },
	{ "idPhysics_Player::eShoulderingAnimation", idPhysics_Player_eShoulderingAnimation_typeInfo },
	{ "constraintType_t", constraintType_t_typeInfo },
	{ "StimType", StimType_typeInfo },
	{ "enum_112", enum_112_typeInfo },
	{ "enum_113", enum_113_typeInfo },
	{ "EImpulseState", EImpulseState_typeInfo },
	{ "signalNum_t", signalNum_t_typeInfo },
	{ "enum_116", enum_116_typeInfo },
	{ "idEntity::enum_117", idEntity_enum_117_typeInfo },
	{ "idAnimatedEntity::enum_118", idAnimatedEntity_enum_118_typeInfo },
	{ "idPlayerStart::enum_119", idPlayerStart_enum_119_typeInfo },
	{ "ECombatType", ECombatType_typeInfo },
	{ "EMeleeType", EMeleeType_typeInfo },
	{ "EMeleeActState", EMeleeActState_typeInfo },
	{ "EMeleeActPhase", EMeleeActPhase_typeInfo },
	{ "EMeleeResult", EMeleeResult_typeInfo },
	{ "GreetingState", GreetingState_typeInfo },
	{ "PickableLock::ELockpickState", PickableLock_ELockpickState_typeInfo },
	{ "LootType", LootType_typeInfo },
	{ "CInventoryItem::ItemType", CInventoryItem_ItemType_typeInfo },
	{ "idProjectile::enum_129", idProjectile_enum_129_typeInfo },
	{ "idProjectile::projectileState_t", idProjectile_projectileState_t_typeInfo },
	{ "weaponStatus_t", weaponStatus_t_typeInfo },
	{ "idWeapon::enum_132", idWeapon_enum_132_typeInfo },
	{ "idLight::enum_133", idLight_enum_133_typeInfo },
	{ "idItem::enum_134", idItem_enum_134_typeInfo },
	{ "playerIconType_t", playerIconType_t_typeInfo },
	{ "enum_136", enum_136_typeInfo },
	{ "enum_137", enum_137_typeInfo },
	{ "EMouseDir", EMouseDir_typeInfo },
	{ "EMouseTest", EMouseTest_typeInfo },
	{ "enum_140", enum_140_typeInfo },
	{ "idPlayer::enum_141", idPlayer_enum_141_typeInfo },
	{ "idMover::moveStage_t", idMover_moveStage_t_typeInfo },
	{ "idMover::moverCommand_t", idMover_moverCommand_t_typeInfo },
	{ "idMover::moverDir_t", idMover_moverDir_t_typeInfo },
	{ "moverState_t", moverState_t_typeInfo },
	{ "idExplodingBarrel::enum_146", idExplodingBarrel_enum_146_typeInfo },
	{ "idExplodingBarrel::explode_state_t", idExplodingBarrel_explode_state_t_typeInfo },
	{ "idSecurityCamera::enum_148", idSecurityCamera_enum_148_typeInfo },
	{ "idSecurityCamera::enum_149", idSecurityCamera_enum_149_typeInfo },
	{ "idBrittleFracture::enum_150", idBrittleFracture_enum_150_typeInfo },
	{ "VersionCheckResult", VersionCheckResult_typeInfo },
	{ "LT_LogType", LT_LogType_typeInfo },
	{ "LC_LogClass", LC_LogClass_typeInfo },
	{ "CRelations::ERel_Type", CRelations_ERel_Type_typeInfo },
	{ "ai::EAlertClass", ai_EAlertClass_typeInfo },
	{ "ai::EAlertType", ai_EAlertType_typeInfo },
	{ "ai::EAlertState", ai_EAlertState_typeInfo },
	{ "ai::EPainCause", ai_EPainCause_typeInfo },
	{ "ai::ERepeatedBarkState", ai_ERepeatedBarkState_typeInfo },
	{ "StimState", StimState_typeInfo },
	{ "ai::CommMessage::TCommType", ai_CommMessage_TCommType_typeInfo },
	{ "ai::SubsystemId", ai_SubsystemId_typeInfo },
	{ "ai::State::StimMarker", ai_State_StimMarker_typeInfo },
	{ "ai::State::SBO_Level", ai_State_SBO_Level_typeInfo },
	{ "ai::CommunicationSubsystem::EActionTypeOnConflict", ai_CommunicationSubsystem_EActionTypeOnConflict_typeInfo },
	{ "ai::MovementSubsystem::BlockedState", ai_MovementSubsystem_BlockedState_typeInfo },
	{ "darkModHidingSpotType", darkModHidingSpotType_typeInfo },
	{ "CDarkmodAASHidingSpotFinder::ESearchState", CDarkmodAASHidingSpotFinder_ESearchState_typeInfo },
	{ "moveType_t", moveType_t_typeInfo },
	{ "moveCommand_t", moveCommand_t_typeInfo },
	{ "moveStatus_t", moveStatus_t_typeInfo },
	{ "talkState_t", talkState_t_typeInfo },
	{ "koState_t", koState_t_typeInfo },
	{ "stopEvent_t", stopEvent_t_typeInfo },
	{ "enum_175", enum_175_typeInfo },
	{ "gameType_t", gameType_t_typeInfo },
	{ "playerVote_t", playerVote_t_typeInfo },
	{ "snd_evt_t", snd_evt_t_typeInfo },
	{ "idMultiplayerGame::gameState_t", idMultiplayerGame_gameState_t_typeInfo },
	{ "idMultiplayerGame::msg_evt_t", idMultiplayerGame_msg_evt_t_typeInfo },
	{ "idMultiplayerGame::vote_flags_t", idMultiplayerGame_vote_flags_t_typeInfo },
	{ "idMultiplayerGame::vote_result_t", idMultiplayerGame_vote_result_t_typeInfo },
	{ "EMMButtonType", EMMButtonType_typeInfo },
	{ "EComponentType", EComponentType_typeInfo },
	{ "ESpecificationMethod", ESpecificationMethod_typeInfo },
	{ "EObjCompletionState", EObjCompletionState_typeInfo },
	{ "EMissionEventType", EMissionEventType_typeInfo },
	{ "ObjectiveCondition::Type", ObjectiveCondition_Type_typeInfo },
	{ "CStimResponseTimer::TimerType", CStimResponseTimer_TimerType_typeInfo },
	{ "CStimResponseTimer::TimerState", CStimResponseTimer_TimerState_typeInfo },
	{ "seed_entity_flags", seed_entity_flags_typeInfo },
	{ "ai::ConversationCommand::Type", ai_ConversationCommand_Type_typeInfo },
	{ "ai::ConversationCommand::State", ai_ConversationCommand_State_typeInfo },
	{ "ai::ConversationState::ExecutionState", ai_ConversationState_ExecutionState_typeInfo },
	{ "ai::CombatState::ECombatSubState", ai_CombatState_ECombatSubState_typeInfo },
	{ "ai::ExamineRopeState::EExamineRopeState", ai_ExamineRopeState_EExamineRopeState_typeInfo },
	{ "ai::HitByMoveableState::EHitByMoveableState", ai_HitByMoveableState_EHitByMoveableState_typeInfo },
	{ "ai::PocketPickedState::EPocketPickedState", ai_PocketPickedState_EPocketPickedState_typeInfo },
	{ "ai::SwitchOnLightState::ERelightState", ai_SwitchOnLightState_ERelightState_typeInfo },
	{ "ai::AnimalPatrolTask::EState", ai_AnimalPatrolTask_EState_typeInfo },
	{ "EscapePointAlgorithm", EscapePointAlgorithm_typeInfo },
	{ "EscapeDistanceOption", EscapeDistanceOption_typeInfo },
	{ "ai::GuardSpotTask::EGuardSpotState", ai_GuardSpotTask_EGuardSpotState_typeInfo },
	{ "ai::HandleDoorTask::EDoorHandlingState", ai_HandleDoorTask_EDoorHandlingState_typeInfo },
	{ "ai::HandleElevatorTask::State", ai_HandleElevatorTask_State_typeInfo },
	{ "ai::InvestigateSpotTask::EInvestigateState", ai_InvestigateSpotTask_EInvestigateState_typeInfo },
	{ "ai::PathSitTask::ESitState", ai_PathSitTask_ESitState_typeInfo },
	{ "CHttpRequest::RequestStatus", CHttpRequest_RequestStatus_typeInfo },
	{ "EIntersection", EIntersection_typeInfo },
	{ "ELLIPSOID_AREA", ELLIPSOID_AREA_typeInfo },
	{ "ECONE_AREA", ECONE_AREA_typeInfo },
	{ "ELINESEGMENT", ELINESEGMENT_typeInfo },
	{ "CDownload::DownloadStatus", CDownload_DownloadStatus_typeInfo },
	{ "DownloadableMod::Type", DownloadableMod_Type_typeInfo },
	{ "CMissionManager::InstallResult", CMissionManager_InstallResult_typeInfo },
	{ "CMissionManager::RequestStatus", CMissionManager_RequestStatus_typeInfo },
	{ NULL, NULL }
};

static classVariableInfo_t idScopedGlobalHeap_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t signalHandle_t_typeInfo[] = {
	{ "pthread_cond_t", "cond", (ptrdiff_t)(&((signalHandle_t *)0)->cond), sizeof( ((signalHandle_t *)0)->cond ) },
	{ "pthread_mutex_t", "mutex", (ptrdiff_t)(&((signalHandle_t *)0)->mutex), sizeof( ((signalHandle_t *)0)->mutex ) },
	{ "int", "waiting", (ptrdiff_t)(&((signalHandle_t *)0)->waiting), sizeof( ((signalHandle_t *)0)->waiting ) },
	{ "bool", "manualReset", (ptrdiff_t)(&((signalHandle_t *)0)->manualReset), sizeof( ((signalHandle_t *)0)->manualReset ) },
	{ "bool", "signaled", (ptrdiff_t)(&((signalHandle_t *)0)->signaled), sizeof( ((signalHandle_t *)0)->signaled ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSysThreadLocalStorage_typeInfo[] = {
	{ "pthread_key_t", "key", (ptrdiff_t)(&((idSysThreadLocalStorage *)0)->key), sizeof( ((idSysThreadLocalStorage *)0)->key ) },
	{ NULL, 0 }
};

static classVariableInfo_t sysEvent_t_typeInfo[] = {
	{ "sysEventType_t", "evType", (ptrdiff_t)(&((sysEvent_t *)0)->evType), sizeof( ((sysEvent_t *)0)->evType ) },
	{ "int", "evValue", (ptrdiff_t)(&((sysEvent_t *)0)->evValue), sizeof( ((sysEvent_t *)0)->evValue ) },
	{ "int", "evValue2", (ptrdiff_t)(&((sysEvent_t *)0)->evValue2), sizeof( ((sysEvent_t *)0)->evValue2 ) },
	{ "int", "evPtrLength", (ptrdiff_t)(&((sysEvent_t *)0)->evPtrLength), sizeof( ((sysEvent_t *)0)->evPtrLength ) },
	{ "void *", "evPtr", (ptrdiff_t)(&((sysEvent_t *)0)->evPtr), sizeof( ((sysEvent_t *)0)->evPtr ) },
	{ NULL, 0 }
};

static classVariableInfo_t debugStackFrame_t_typeInfo[] = {
	{ "void *", "pointer", (ptrdiff_t)(&((debugStackFrame_t *)0)->pointer), sizeof( ((debugStackFrame_t *)0)->pointer ) },
	{ "char[88]", "functionName", (ptrdiff_t)(&((debugStackFrame_t *)0)->functionName), sizeof( ((debugStackFrame_t *)0)->functionName ) },
	{ "char[88]", "fileName", (ptrdiff_t)(&((debugStackFrame_t *)0)->fileName), sizeof( ((debugStackFrame_t *)0)->fileName ) },
	{ "int", "lineNumber", (ptrdiff_t)(&((debugStackFrame_t *)0)->lineNumber), sizeof( ((debugStackFrame_t *)0)->lineNumber ) },
	{ NULL, 0 }
};

static classVariableInfo_t netadr_t_typeInfo[] = {
	{ "netadrtype_t", "type", (ptrdiff_t)(&((netadr_t *)0)->type), sizeof( ((netadr_t *)0)->type ) },
	{ "unsigned char[4]", "ip", (ptrdiff_t)(&((netadr_t *)0)->ip), sizeof( ((netadr_t *)0)->ip ) },
	{ "unsigned short", "port", (ptrdiff_t)(&((netadr_t *)0)->port), sizeof( ((netadr_t *)0)->port ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPort_typeInfo[] = {
	{ "int", "packetsRead", (ptrdiff_t)(&((idPort *)0)->packetsRead), sizeof( ((idPort *)0)->packetsRead ) },
	{ "int", "bytesRead", (ptrdiff_t)(&((idPort *)0)->bytesRead), sizeof( ((idPort *)0)->bytesRead ) },
	{ "int", "packetsWritten", (ptrdiff_t)(&((idPort *)0)->packetsWritten), sizeof( ((idPort *)0)->packetsWritten ) },
	{ "int", "bytesWritten", (ptrdiff_t)(&((idPort *)0)->bytesWritten), sizeof( ((idPort *)0)->bytesWritten ) },
	{ "netadr_t", "bound_to", (ptrdiff_t)(&((idPort *)0)->bound_to), sizeof( ((idPort *)0)->bound_to ) },
	{ "int", "netSocket", (ptrdiff_t)(&((idPort *)0)->netSocket), sizeof( ((idPort *)0)->netSocket ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTCP_typeInfo[] = {
	{ "netadr_t", "address", (ptrdiff_t)(&((idTCP *)0)->address), sizeof( ((idTCP *)0)->address ) },
	{ "size_t", "fd", (ptrdiff_t)(&((idTCP *)0)->fd), sizeof( ((idTCP *)0)->fd ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSys_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idLib_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idException_typeInfo[] = {
	{ "char[1024]", "error", (ptrdiff_t)(&((idException *)0)->error), sizeof( ((idException *)0)->error ) },
	{ NULL, 0 }
};

static classVariableInfo_t memoryStats_t_typeInfo[] = {
	{ "int", "num", (ptrdiff_t)(&((memoryStats_t *)0)->num), sizeof( ((memoryStats_t *)0)->num ) },
	{ "size_t", "minSize", (ptrdiff_t)(&((memoryStats_t *)0)->minSize), sizeof( ((memoryStats_t *)0)->minSize ) },
	{ "size_t", "maxSize", (ptrdiff_t)(&((memoryStats_t *)0)->maxSize), sizeof( ((memoryStats_t *)0)->maxSize ) },
	{ "size_t", "totalSize", (ptrdiff_t)(&((memoryStats_t *)0)->totalSize), sizeof( ((memoryStats_t *)0)->totalSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBlockAlloc_class_type_int_blockSize__element_t_typeInfo[] = {
//	{ "element_s *", "next", (ptrdiff_t)(&((idBlockAlloc< class type , int blockSize >::element_t *)0)->next), sizeof( ((idBlockAlloc< class type , int blockSize >::element_t *)0)->next ) },
//	{ "type", "t", (ptrdiff_t)(&((idBlockAlloc< class type , int blockSize >::element_t *)0)->t), sizeof( ((idBlockAlloc< class type , int blockSize >::element_t *)0)->t ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBlockAlloc_class_type_int_blockSize__block_t_typeInfo[] = {
//	{ "element_t[1]", "elements", (ptrdiff_t)(&((idBlockAlloc< class type , int blockSize >::block_t *)0)->elements), sizeof( ((idBlockAlloc< class type , int blockSize >::block_t *)0)->elements ) },
//	{ "block_s *", "next", (ptrdiff_t)(&((idBlockAlloc< class type , int blockSize >::block_t *)0)->next), sizeof( ((idBlockAlloc< class type , int blockSize >::block_t *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBlockAlloc_class_type_int_blockSize__typeInfo[] = {
//	{ "block_t *", "blocks", (ptrdiff_t)(&((idBlockAlloc< class type , int blockSize > *)0)->blocks), sizeof( ((idBlockAlloc< class type , int blockSize > *)0)->blocks ) },
//	{ "element_t *", "free", (ptrdiff_t)(&((idBlockAlloc< class type , int blockSize > *)0)->free), sizeof( ((idBlockAlloc< class type , int blockSize > *)0)->free ) },
//	{ "int", "total", (ptrdiff_t)(&((idBlockAlloc< class type , int blockSize > *)0)->total), sizeof( ((idBlockAlloc< class type , int blockSize > *)0)->total ) },
//	{ "int", "active", (ptrdiff_t)(&((idBlockAlloc< class type , int blockSize > *)0)->active), sizeof( ((idBlockAlloc< class type , int blockSize > *)0)->active ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDynamicAlloc_class_type_int_baseBlockSize_int_minBlockSize__typeInfo[] = {
//	{ "int", "numUsedBlocks", (ptrdiff_t)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numUsedBlocks), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numUsedBlocks ) },
//	{ "int", "usedBlockMemory", (ptrdiff_t)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->usedBlockMemory), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->usedBlockMemory ) },
//	{ "int", "numAllocs", (ptrdiff_t)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numAllocs), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numAllocs ) },
//	{ "int", "numResizes", (ptrdiff_t)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numResizes), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numResizes ) },
//	{ "int", "numFrees", (ptrdiff_t)(&((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFrees), sizeof( ((idDynamicAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFrees ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBTreeNode_class_objType_class_keyType__typeInfo[] = {
//	{ "keyType", "key", (ptrdiff_t)(&((idBTreeNode< class objType , class keyType > *)0)->key), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->key ) },
//	{ "objType *", "object", (ptrdiff_t)(&((idBTreeNode< class objType , class keyType > *)0)->object), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->object ) },
//	{ "idBTreeNode *", "parent", (ptrdiff_t)(&((idBTreeNode< class objType , class keyType > *)0)->parent), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->parent ) },
//	{ "idBTreeNode *", "next", (ptrdiff_t)(&((idBTreeNode< class objType , class keyType > *)0)->next), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->next ) },
//	{ "idBTreeNode *", "prev", (ptrdiff_t)(&((idBTreeNode< class objType , class keyType > *)0)->prev), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->prev ) },
//	{ "int", "numChildren", (ptrdiff_t)(&((idBTreeNode< class objType , class keyType > *)0)->numChildren), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->numChildren ) },
//	{ "idBTreeNode *", "firstChild", (ptrdiff_t)(&((idBTreeNode< class objType , class keyType > *)0)->firstChild), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->firstChild ) },
//	{ "idBTreeNode *", "lastChild", (ptrdiff_t)(&((idBTreeNode< class objType , class keyType > *)0)->lastChild), sizeof( ((idBTreeNode< class objType , class keyType > *)0)->lastChild ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBTree_class_objType_class_keyType_int_maxChildrenPerNode__typeInfo[] = {
//	{ "idBTreeNode < objType , keyType > *", "root", (ptrdiff_t)(&((idBTree< class objType , class keyType , int maxChildrenPerNode > *)0)->root), sizeof( ((idBTree< class objType , class keyType , int maxChildrenPerNode > *)0)->root ) },
//	{ "idBlockAlloc < idBTreeNode < objType , keyType > , 128 >", "nodeAllocator", (ptrdiff_t)(&((idBTree< class objType , class keyType , int maxChildrenPerNode > *)0)->nodeAllocator), sizeof( ((idBTree< class objType , class keyType , int maxChildrenPerNode > *)0)->nodeAllocator ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDynamicBlock_class_type__typeInfo[] = {
//	{ "int", "size", (ptrdiff_t)(&((idDynamicBlock< class type > *)0)->size), sizeof( ((idDynamicBlock< class type > *)0)->size ) },
//	{ "idDynamicBlock < type > *", "prev", (ptrdiff_t)(&((idDynamicBlock< class type > *)0)->prev), sizeof( ((idDynamicBlock< class type > *)0)->prev ) },
//	{ "idDynamicBlock < type > *", "next", (ptrdiff_t)(&((idDynamicBlock< class type > *)0)->next), sizeof( ((idDynamicBlock< class type > *)0)->next ) },
//	{ "idBTreeNode < idDynamicBlock < type > , int > *", "node", (ptrdiff_t)(&((idDynamicBlock< class type > *)0)->node), sizeof( ((idDynamicBlock< class type > *)0)->node ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDynamicBlockAlloc_class_type_int_baseBlockSize_int_minBlockSize__typeInfo[] = {
//	{ "idDynamicBlock < type > *", "firstBlock", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->firstBlock), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->firstBlock ) },
//	{ "idDynamicBlock < type > *", "lastBlock", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->lastBlock), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->lastBlock ) },
//	{ "idBTree < idDynamicBlock < type > , int , 4 >", "freeTree", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->freeTree), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->freeTree ) },
//	{ "bool", "allowAllocs", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->allowAllocs), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->allowAllocs ) },
//	{ "bool", "lockMemory", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->lockMemory), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->lockMemory ) },
//	{ "int", "numBaseBlocks", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numBaseBlocks), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numBaseBlocks ) },
//	{ "int", "baseBlockMemory", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->baseBlockMemory), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->baseBlockMemory ) },
//	{ "int", "numUsedBlocks", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numUsedBlocks), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numUsedBlocks ) },
//	{ "int", "usedBlockMemory", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->usedBlockMemory), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->usedBlockMemory ) },
//	{ "int", "numFreeBlocks", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFreeBlocks), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFreeBlocks ) },
//	{ "int", "freeBlockMemory", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->freeBlockMemory), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->freeBlockMemory ) },
//	{ "int", "numAllocs", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numAllocs), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numAllocs ) },
//	{ "int", "numResizes", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numResizes), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numResizes ) },
//	{ "int", "numFrees", (ptrdiff_t)(&((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFrees), sizeof( ((idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize > *)0)->numFrees ) },
	{ NULL, 0 }
};

static classVariableInfo_t idList_class_type__typeInfo[] = {
//	{ "int", "num", (ptrdiff_t)(&((idList< class type > *)0)->num), sizeof( ((idList< class type > *)0)->num ) },
//	{ "int", "size", (ptrdiff_t)(&((idList< class type > *)0)->size), sizeof( ((idList< class type > *)0)->size ) },
//	{ "int", "granularity", (ptrdiff_t)(&((idList< class type > *)0)->granularity), sizeof( ((idList< class type > *)0)->granularity ) },
//	{ "type *", "list", (ptrdiff_t)(&((idList< class type > *)0)->list), sizeof( ((idList< class type > *)0)->list ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSIMD_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSIMDProcessor_typeInfo[] = {
	{ "cpuid_t cpuid =", "CPUID_NONE", (ptrdiff_t)(&((idSIMDProcessor *)0)->CPUID_NONE), sizeof( ((idSIMDProcessor *)0)->CPUID_NONE ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMath__flint_typeInfo[] = {
	{ "dword", "i", (ptrdiff_t)(&((idMath::_flint *)0)->i), sizeof( ((idMath::_flint *)0)->i ) },
	{ "float", "f", (ptrdiff_t)(&((idMath::_flint *)0)->f), sizeof( ((idMath::_flint *)0)->f ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMath_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idIgnoreFpExceptions_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idRandom_typeInfo[] = {
	{ "int", "seed", (ptrdiff_t)(&((idRandom *)0)->seed), sizeof( ((idRandom *)0)->seed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRandom2_typeInfo[] = {
	{ "unsigned int", "seed", (ptrdiff_t)(&((idRandom2 *)0)->seed), sizeof( ((idRandom2 *)0)->seed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idComplex_typeInfo[] = {
	{ "float", "r", (ptrdiff_t)(&((idComplex *)0)->r), sizeof( ((idComplex *)0)->r ) },
	{ "float", "i", (ptrdiff_t)(&((idComplex *)0)->i), sizeof( ((idComplex *)0)->i ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec2_typeInfo[] = {
	{ "float", "x", (ptrdiff_t)(&((idVec2 *)0)->x), sizeof( ((idVec2 *)0)->x ) },
	{ "float", "y", (ptrdiff_t)(&((idVec2 *)0)->y), sizeof( ((idVec2 *)0)->y ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec3_typeInfo[] = {
	{ "float", "x", (ptrdiff_t)(&((idVec3 *)0)->x), sizeof( ((idVec3 *)0)->x ) },
	{ "float", "y", (ptrdiff_t)(&((idVec3 *)0)->y), sizeof( ((idVec3 *)0)->y ) },
	{ "float", "z", (ptrdiff_t)(&((idVec3 *)0)->z), sizeof( ((idVec3 *)0)->z ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec4_typeInfo[] = {
	{ "float", "x", (ptrdiff_t)(&((idVec4 *)0)->x), sizeof( ((idVec4 *)0)->x ) },
	{ "float", "y", (ptrdiff_t)(&((idVec4 *)0)->y), sizeof( ((idVec4 *)0)->y ) },
	{ "float", "z", (ptrdiff_t)(&((idVec4 *)0)->z), sizeof( ((idVec4 *)0)->z ) },
	{ "float", "w", (ptrdiff_t)(&((idVec4 *)0)->w), sizeof( ((idVec4 *)0)->w ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec5_typeInfo[] = {
	{ "float", "x", (ptrdiff_t)(&((idVec5 *)0)->x), sizeof( ((idVec5 *)0)->x ) },
	{ "float", "y", (ptrdiff_t)(&((idVec5 *)0)->y), sizeof( ((idVec5 *)0)->y ) },
	{ "float", "z", (ptrdiff_t)(&((idVec5 *)0)->z), sizeof( ((idVec5 *)0)->z ) },
	{ "float", "s", (ptrdiff_t)(&((idVec5 *)0)->s), sizeof( ((idVec5 *)0)->s ) },
	{ "float", "t", (ptrdiff_t)(&((idVec5 *)0)->t), sizeof( ((idVec5 *)0)->t ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec6_typeInfo[] = {
	{ "float[6]", "p", (ptrdiff_t)(&((idVec6 *)0)->p), sizeof( ((idVec6 *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVecX_typeInfo[] = {
	{ "int", "size", (ptrdiff_t)(&((idVecX *)0)->size), sizeof( ((idVecX *)0)->size ) },
	{ "int", "alloced", (ptrdiff_t)(&((idVecX *)0)->alloced), sizeof( ((idVecX *)0)->alloced ) },
	{ "float *", "p", (ptrdiff_t)(&((idVecX *)0)->p), sizeof( ((idVecX *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPolar3_typeInfo[] = {
	{ "float", "radius", (ptrdiff_t)(&((idPolar3 *)0)->radius), sizeof( ((idPolar3 *)0)->radius ) },
	{ "float", "theta", (ptrdiff_t)(&((idPolar3 *)0)->theta), sizeof( ((idPolar3 *)0)->theta ) },
	{ "float", "phi", (ptrdiff_t)(&((idPolar3 *)0)->phi), sizeof( ((idPolar3 *)0)->phi ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec3d_typeInfo[] = {
	{ "double", "x", (ptrdiff_t)(&((idVec3d *)0)->x), sizeof( ((idVec3d *)0)->x ) },
	{ "double", "y", (ptrdiff_t)(&((idVec3d *)0)->y), sizeof( ((idVec3d *)0)->y ) },
	{ "double", "z", (ptrdiff_t)(&((idVec3d *)0)->z), sizeof( ((idVec3d *)0)->z ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVec2d_typeInfo[] = {
	{ "double", "x", (ptrdiff_t)(&((idVec2d *)0)->x), sizeof( ((idVec2d *)0)->x ) },
	{ "double", "y", (ptrdiff_t)(&((idVec2d *)0)->y), sizeof( ((idVec2d *)0)->y ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat2_typeInfo[] = {
	{ "idVec2[2]", "mat", (ptrdiff_t)(&((idMat2 *)0)->mat), sizeof( ((idMat2 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat3_typeInfo[] = {
	{ "idVec3[3]", "mat", (ptrdiff_t)(&((idMat3 *)0)->mat), sizeof( ((idMat3 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat4_typeInfo[] = {
	{ "idVec4[4]", "mat", (ptrdiff_t)(&((idMat4 *)0)->mat), sizeof( ((idMat4 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat5_typeInfo[] = {
	{ "idVec5[5]", "mat", (ptrdiff_t)(&((idMat5 *)0)->mat), sizeof( ((idMat5 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMat6_typeInfo[] = {
	{ "idVec6[6]", "mat", (ptrdiff_t)(&((idMat6 *)0)->mat), sizeof( ((idMat6 *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMatX_typeInfo[] = {
	{ "int", "numRows", (ptrdiff_t)(&((idMatX *)0)->numRows), sizeof( ((idMatX *)0)->numRows ) },
	{ "int", "numColumns", (ptrdiff_t)(&((idMatX *)0)->numColumns), sizeof( ((idMatX *)0)->numColumns ) },
	{ "int", "alloced", (ptrdiff_t)(&((idMatX *)0)->alloced), sizeof( ((idMatX *)0)->alloced ) },
	{ "float *", "mat", (ptrdiff_t)(&((idMatX *)0)->mat), sizeof( ((idMatX *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAngles_typeInfo[] = {
	{ "float", "pitch", (ptrdiff_t)(&((idAngles *)0)->pitch), sizeof( ((idAngles *)0)->pitch ) },
	{ "float", "yaw", (ptrdiff_t)(&((idAngles *)0)->yaw), sizeof( ((idAngles *)0)->yaw ) },
	{ "float", "roll", (ptrdiff_t)(&((idAngles *)0)->roll), sizeof( ((idAngles *)0)->roll ) },
	{ NULL, 0 }
};

static classVariableInfo_t idQuat_typeInfo[] = {
	{ "float", "x", (ptrdiff_t)(&((idQuat *)0)->x), sizeof( ((idQuat *)0)->x ) },
	{ "float", "y", (ptrdiff_t)(&((idQuat *)0)->y), sizeof( ((idQuat *)0)->y ) },
	{ "float", "z", (ptrdiff_t)(&((idQuat *)0)->z), sizeof( ((idQuat *)0)->z ) },
	{ "float", "w", (ptrdiff_t)(&((idQuat *)0)->w), sizeof( ((idQuat *)0)->w ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCQuat_typeInfo[] = {
	{ "float", "x", (ptrdiff_t)(&((idCQuat *)0)->x), sizeof( ((idCQuat *)0)->x ) },
	{ "float", "y", (ptrdiff_t)(&((idCQuat *)0)->y), sizeof( ((idCQuat *)0)->y ) },
	{ "float", "z", (ptrdiff_t)(&((idCQuat *)0)->z), sizeof( ((idCQuat *)0)->z ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRotation_typeInfo[] = {
	{ "idVec3", "origin", (ptrdiff_t)(&((idRotation *)0)->origin), sizeof( ((idRotation *)0)->origin ) },
	{ "idVec3", "vec", (ptrdiff_t)(&((idRotation *)0)->vec), sizeof( ((idRotation *)0)->vec ) },
	{ "float", "angle", (ptrdiff_t)(&((idRotation *)0)->angle), sizeof( ((idRotation *)0)->angle ) },
	{ "mutable idMat3", "axis", (ptrdiff_t)(&((idRotation *)0)->axis), sizeof( ((idRotation *)0)->axis ) },
	{ "mutable bool", "axisValid", (ptrdiff_t)(&((idRotation *)0)->axisValid), sizeof( ((idRotation *)0)->axisValid ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlane_typeInfo[] = {
	{ "float", "a", (ptrdiff_t)(&((idPlane *)0)->a), sizeof( ((idPlane *)0)->a ) },
	{ "float", "b", (ptrdiff_t)(&((idPlane *)0)->b), sizeof( ((idPlane *)0)->b ) },
	{ "float", "c", (ptrdiff_t)(&((idPlane *)0)->c), sizeof( ((idPlane *)0)->c ) },
	{ "float", "d", (ptrdiff_t)(&((idPlane *)0)->d), sizeof( ((idPlane *)0)->d ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPluecker_typeInfo[] = {
	{ "float[6]", "p", (ptrdiff_t)(&((idPluecker *)0)->p), sizeof( ((idPluecker *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPolynomial_typeInfo[] = {
	{ "int", "degree", (ptrdiff_t)(&((idPolynomial *)0)->degree), sizeof( ((idPolynomial *)0)->degree ) },
	{ "int", "allocated", (ptrdiff_t)(&((idPolynomial *)0)->allocated), sizeof( ((idPolynomial *)0)->allocated ) },
	{ "float *", "coefficient", (ptrdiff_t)(&((idPolynomial *)0)->coefficient), sizeof( ((idPolynomial *)0)->coefficient ) },
	{ NULL, 0 }
};

static classVariableInfo_t idExtrapolate_class_type__typeInfo[] = {
//	{ "extrapolation_t", "extrapolationType", (ptrdiff_t)(&((idExtrapolate< class type > *)0)->extrapolationType), sizeof( ((idExtrapolate< class type > *)0)->extrapolationType ) },
//	{ "double", "startTime", (ptrdiff_t)(&((idExtrapolate< class type > *)0)->startTime), sizeof( ((idExtrapolate< class type > *)0)->startTime ) },
//	{ "float", "duration", (ptrdiff_t)(&((idExtrapolate< class type > *)0)->duration), sizeof( ((idExtrapolate< class type > *)0)->duration ) },
//	{ "type", "startValue", (ptrdiff_t)(&((idExtrapolate< class type > *)0)->startValue), sizeof( ((idExtrapolate< class type > *)0)->startValue ) },
//	{ "type", "baseSpeed", (ptrdiff_t)(&((idExtrapolate< class type > *)0)->baseSpeed), sizeof( ((idExtrapolate< class type > *)0)->baseSpeed ) },
//	{ "type", "speed", (ptrdiff_t)(&((idExtrapolate< class type > *)0)->speed), sizeof( ((idExtrapolate< class type > *)0)->speed ) },
//	{ "mutable double", "currentTime", (ptrdiff_t)(&((idExtrapolate< class type > *)0)->currentTime), sizeof( ((idExtrapolate< class type > *)0)->currentTime ) },
//	{ "mutable type", "currentValue", (ptrdiff_t)(&((idExtrapolate< class type > *)0)->currentValue), sizeof( ((idExtrapolate< class type > *)0)->currentValue ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpolate_class_type__typeInfo[] = {
//	{ "bool", "enabled", (ptrdiff_t)(&((idInterpolate< class type > *)0)->enabled), sizeof( ((idInterpolate< class type > *)0)->enabled ) },
//	{ "double", "startTime", (ptrdiff_t)(&((idInterpolate< class type > *)0)->startTime), sizeof( ((idInterpolate< class type > *)0)->startTime ) },
//	{ "float", "duration", (ptrdiff_t)(&((idInterpolate< class type > *)0)->duration), sizeof( ((idInterpolate< class type > *)0)->duration ) },
//	{ "type", "startValue", (ptrdiff_t)(&((idInterpolate< class type > *)0)->startValue), sizeof( ((idInterpolate< class type > *)0)->startValue ) },
//	{ "type", "endValue", (ptrdiff_t)(&((idInterpolate< class type > *)0)->endValue), sizeof( ((idInterpolate< class type > *)0)->endValue ) },
//	{ "mutable double", "currentTime", (ptrdiff_t)(&((idInterpolate< class type > *)0)->currentTime), sizeof( ((idInterpolate< class type > *)0)->currentTime ) },
//	{ "mutable type", "currentValue", (ptrdiff_t)(&((idInterpolate< class type > *)0)->currentValue), sizeof( ((idInterpolate< class type > *)0)->currentValue ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpolateAccelDecelLinear_class_type__typeInfo[] = {
//	{ "double", "startTime", (ptrdiff_t)(&((idInterpolateAccelDecelLinear< class type > *)0)->startTime), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->startTime ) },
//	{ "float", "accelTime", (ptrdiff_t)(&((idInterpolateAccelDecelLinear< class type > *)0)->accelTime), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->accelTime ) },
//	{ "float", "linearTime", (ptrdiff_t)(&((idInterpolateAccelDecelLinear< class type > *)0)->linearTime), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->linearTime ) },
//	{ "float", "decelTime", (ptrdiff_t)(&((idInterpolateAccelDecelLinear< class type > *)0)->decelTime), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->decelTime ) },
//	{ "type", "startValue", (ptrdiff_t)(&((idInterpolateAccelDecelLinear< class type > *)0)->startValue), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->startValue ) },
//	{ "type", "endValue", (ptrdiff_t)(&((idInterpolateAccelDecelLinear< class type > *)0)->endValue), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->endValue ) },
//	{ "mutable idExtrapolate < type >", "extrapolate", (ptrdiff_t)(&((idInterpolateAccelDecelLinear< class type > *)0)->extrapolate), sizeof( ((idInterpolateAccelDecelLinear< class type > *)0)->extrapolate ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpolateAccelDecelSine_class_type__typeInfo[] = {
//	{ "double", "startTime", (ptrdiff_t)(&((idInterpolateAccelDecelSine< class type > *)0)->startTime), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->startTime ) },
//	{ "float", "accelTime", (ptrdiff_t)(&((idInterpolateAccelDecelSine< class type > *)0)->accelTime), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->accelTime ) },
//	{ "float", "linearTime", (ptrdiff_t)(&((idInterpolateAccelDecelSine< class type > *)0)->linearTime), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->linearTime ) },
//	{ "float", "decelTime", (ptrdiff_t)(&((idInterpolateAccelDecelSine< class type > *)0)->decelTime), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->decelTime ) },
//	{ "type", "startValue", (ptrdiff_t)(&((idInterpolateAccelDecelSine< class type > *)0)->startValue), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->startValue ) },
//	{ "type", "endValue", (ptrdiff_t)(&((idInterpolateAccelDecelSine< class type > *)0)->endValue), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->endValue ) },
//	{ "mutable idExtrapolate < type >", "extrapolate", (ptrdiff_t)(&((idInterpolateAccelDecelSine< class type > *)0)->extrapolate), sizeof( ((idInterpolateAccelDecelSine< class type > *)0)->extrapolate ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_class_type__typeInfo[] = {
//	{ "idList < float >", "times", (ptrdiff_t)(&((idCurve< class type > *)0)->times), sizeof( ((idCurve< class type > *)0)->times ) },
//	{ "idList < type >", "values", (ptrdiff_t)(&((idCurve< class type > *)0)->values), sizeof( ((idCurve< class type > *)0)->values ) },
//	{ "mutable int", "currentIndex", (ptrdiff_t)(&((idCurve< class type > *)0)->currentIndex), sizeof( ((idCurve< class type > *)0)->currentIndex ) },
//	{ "mutable bool", "changed", (ptrdiff_t)(&((idCurve< class type > *)0)->changed), sizeof( ((idCurve< class type > *)0)->changed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_Bezier_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_QuadraticBezier_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_CubicBezier_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_Spline_class_type__typeInfo[] = {
//	{ "boundary_t", "boundaryType", (ptrdiff_t)(&((idCurve_Spline< class type > *)0)->boundaryType), sizeof( ((idCurve_Spline< class type > *)0)->boundaryType ) },
//	{ "float", "closeTime", (ptrdiff_t)(&((idCurve_Spline< class type > *)0)->closeTime), sizeof( ((idCurve_Spline< class type > *)0)->closeTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_NaturalCubicSpline_class_type__typeInfo[] = {
//	{ "mutable idList < type >", "b", (ptrdiff_t)(&((idCurve_NaturalCubicSpline< class type > *)0)->b), sizeof( ((idCurve_NaturalCubicSpline< class type > *)0)->b ) },
//	{ "mutable idList < type >", "c", (ptrdiff_t)(&((idCurve_NaturalCubicSpline< class type > *)0)->c), sizeof( ((idCurve_NaturalCubicSpline< class type > *)0)->c ) },
//	{ "mutable idList < type >", "d", (ptrdiff_t)(&((idCurve_NaturalCubicSpline< class type > *)0)->d), sizeof( ((idCurve_NaturalCubicSpline< class type > *)0)->d ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_CatmullRomSpline_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_KochanekBartelsSpline_class_type__typeInfo[] = {
//	{ "idList < float >", "tension", (ptrdiff_t)(&((idCurve_KochanekBartelsSpline< class type > *)0)->tension), sizeof( ((idCurve_KochanekBartelsSpline< class type > *)0)->tension ) },
//	{ "idList < float >", "continuity", (ptrdiff_t)(&((idCurve_KochanekBartelsSpline< class type > *)0)->continuity), sizeof( ((idCurve_KochanekBartelsSpline< class type > *)0)->continuity ) },
//	{ "idList < float >", "bias", (ptrdiff_t)(&((idCurve_KochanekBartelsSpline< class type > *)0)->bias), sizeof( ((idCurve_KochanekBartelsSpline< class type > *)0)->bias ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_BSpline_class_type__typeInfo[] = {
//	{ "int", "order", (ptrdiff_t)(&((idCurve_BSpline< class type > *)0)->order), sizeof( ((idCurve_BSpline< class type > *)0)->order ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_UniformCubicBSpline_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_NonUniformBSpline_class_type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCurve_NURBS_class_type__typeInfo[] = {
//	{ "idList < float >", "weights", (ptrdiff_t)(&((idCurve_NURBS< class type > *)0)->weights), sizeof( ((idCurve_NURBS< class type > *)0)->weights ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_typeInfo[] = {
	{ "int", "dimension", (ptrdiff_t)(&((idODE *)0)->dimension), sizeof( ((idODE *)0)->dimension ) },
	{ "deriveFunction_t", "derive", (ptrdiff_t)(&((idODE *)0)->derive), sizeof( ((idODE *)0)->derive ) },
	{ "const void *", "userData", (ptrdiff_t)(&((idODE *)0)->userData), sizeof( ((idODE *)0)->userData ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_Euler_typeInfo[] = {
	{ "float *", "derivatives", (ptrdiff_t)(&((idODE_Euler *)0)->derivatives), sizeof( ((idODE_Euler *)0)->derivatives ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_Midpoint_typeInfo[] = {
	{ "float *", "tmpState", (ptrdiff_t)(&((idODE_Midpoint *)0)->tmpState), sizeof( ((idODE_Midpoint *)0)->tmpState ) },
	{ "float *", "derivatives", (ptrdiff_t)(&((idODE_Midpoint *)0)->derivatives), sizeof( ((idODE_Midpoint *)0)->derivatives ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_RK4_typeInfo[] = {
	{ "float *", "tmpState", (ptrdiff_t)(&((idODE_RK4 *)0)->tmpState), sizeof( ((idODE_RK4 *)0)->tmpState ) },
	{ "float *", "d1", (ptrdiff_t)(&((idODE_RK4 *)0)->d1), sizeof( ((idODE_RK4 *)0)->d1 ) },
	{ "float *", "d2", (ptrdiff_t)(&((idODE_RK4 *)0)->d2), sizeof( ((idODE_RK4 *)0)->d2 ) },
	{ "float *", "d3", (ptrdiff_t)(&((idODE_RK4 *)0)->d3), sizeof( ((idODE_RK4 *)0)->d3 ) },
	{ "float *", "d4", (ptrdiff_t)(&((idODE_RK4 *)0)->d4), sizeof( ((idODE_RK4 *)0)->d4 ) },
	{ NULL, 0 }
};

static classVariableInfo_t idODE_RK4Adaptive_typeInfo[] = {
	{ "float", "maxError", (ptrdiff_t)(&((idODE_RK4Adaptive *)0)->maxError), sizeof( ((idODE_RK4Adaptive *)0)->maxError ) },
	{ "float *", "tmpState", (ptrdiff_t)(&((idODE_RK4Adaptive *)0)->tmpState), sizeof( ((idODE_RK4Adaptive *)0)->tmpState ) },
	{ "float *", "d1", (ptrdiff_t)(&((idODE_RK4Adaptive *)0)->d1), sizeof( ((idODE_RK4Adaptive *)0)->d1 ) },
	{ "float *", "d1half", (ptrdiff_t)(&((idODE_RK4Adaptive *)0)->d1half), sizeof( ((idODE_RK4Adaptive *)0)->d1half ) },
	{ "float *", "d2", (ptrdiff_t)(&((idODE_RK4Adaptive *)0)->d2), sizeof( ((idODE_RK4Adaptive *)0)->d2 ) },
	{ "float *", "d3", (ptrdiff_t)(&((idODE_RK4Adaptive *)0)->d3), sizeof( ((idODE_RK4Adaptive *)0)->d3 ) },
	{ "float *", "d4", (ptrdiff_t)(&((idODE_RK4Adaptive *)0)->d4), sizeof( ((idODE_RK4Adaptive *)0)->d4 ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLCP_typeInfo[] = {
	{ "int", "maxIterations", (ptrdiff_t)(&((idLCP *)0)->maxIterations), sizeof( ((idLCP *)0)->maxIterations ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSphere_typeInfo[] = {
	{ "idVec3", "origin", (ptrdiff_t)(&((idSphere *)0)->origin), sizeof( ((idSphere *)0)->origin ) },
	{ "float", "radius", (ptrdiff_t)(&((idSphere *)0)->radius), sizeof( ((idSphere *)0)->radius ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBounds_typeInfo[] = {
	{ "idVec3[2]", "b", (ptrdiff_t)(&((idBounds *)0)->b), sizeof( ((idBounds *)0)->b ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBox_typeInfo[] = {
	{ "idVec3", "center", (ptrdiff_t)(&((idBox *)0)->center), sizeof( ((idBox *)0)->center ) },
	{ "idVec3", "extents", (ptrdiff_t)(&((idBox *)0)->extents), sizeof( ((idBox *)0)->extents ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((idBox *)0)->axis), sizeof( ((idBox *)0)->axis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFrustum_typeInfo[] = {
	{ "idVec3", "origin", (ptrdiff_t)(&((idFrustum *)0)->origin), sizeof( ((idFrustum *)0)->origin ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((idFrustum *)0)->axis), sizeof( ((idFrustum *)0)->axis ) },
	{ "float", "dNear", (ptrdiff_t)(&((idFrustum *)0)->dNear), sizeof( ((idFrustum *)0)->dNear ) },
	{ "float", "dFar", (ptrdiff_t)(&((idFrustum *)0)->dFar), sizeof( ((idFrustum *)0)->dFar ) },
	{ "float", "dLeft", (ptrdiff_t)(&((idFrustum *)0)->dLeft), sizeof( ((idFrustum *)0)->dLeft ) },
	{ "float", "dUp", (ptrdiff_t)(&((idFrustum *)0)->dUp), sizeof( ((idFrustum *)0)->dUp ) },
	{ "float", "invFar", (ptrdiff_t)(&((idFrustum *)0)->invFar), sizeof( ((idFrustum *)0)->invFar ) },
	{ NULL, 0 }
};

static classVariableInfo_t frustumCorners_t_typeInfo[] = {
	{ "float[8]", "x", (ptrdiff_t)(&((frustumCorners_t *)0)->x), sizeof( ((frustumCorners_t *)0)->x ) },
	{ "float[8]", "y", (ptrdiff_t)(&((frustumCorners_t *)0)->y), sizeof( ((frustumCorners_t *)0)->y ) },
	{ "float[8]", "z", (ptrdiff_t)(&((frustumCorners_t *)0)->z), sizeof( ((frustumCorners_t *)0)->z ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRenderMatrix_typeInfo[] = {
	{ "float[16]", "m", (ptrdiff_t)(&((idRenderMatrix *)0)->m), sizeof( ((idRenderMatrix *)0)->m ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDrawVert_typeInfo[] = {
	{ "idVec3", "xyz", (ptrdiff_t)(&((idDrawVert *)0)->xyz), sizeof( ((idDrawVert *)0)->xyz ) },
	{ "idVec2", "st", (ptrdiff_t)(&((idDrawVert *)0)->st), sizeof( ((idDrawVert *)0)->st ) },
	{ "idVec3", "normal", (ptrdiff_t)(&((idDrawVert *)0)->normal), sizeof( ((idDrawVert *)0)->normal ) },
	{ "idVec3[2]", "tangents", (ptrdiff_t)(&((idDrawVert *)0)->tangents), sizeof( ((idDrawVert *)0)->tangents ) },
	{ "byte[4]", "color", (ptrdiff_t)(&((idDrawVert *)0)->color), sizeof( ((idDrawVert *)0)->color ) },
	{ NULL, 0 }
};

static classVariableInfo_t idJointQuat_typeInfo[] = {
	{ "idQuat", "q", (ptrdiff_t)(&((idJointQuat *)0)->q), sizeof( ((idJointQuat *)0)->q ) },
	{ "idVec3", "t", (ptrdiff_t)(&((idJointQuat *)0)->t), sizeof( ((idJointQuat *)0)->t ) },
	{ NULL, 0 }
};

static classVariableInfo_t idJointMat_typeInfo[] = {
	{ "float[12]", "mat", (ptrdiff_t)(&((idJointMat *)0)->mat), sizeof( ((idJointMat *)0)->mat ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWinding_typeInfo[] = {
	{ "int", "numPoints", (ptrdiff_t)(&((idWinding *)0)->numPoints), sizeof( ((idWinding *)0)->numPoints ) },
	{ "int", "allocedSize", (ptrdiff_t)(&((idWinding *)0)->allocedSize), sizeof( ((idWinding *)0)->allocedSize ) },
	{ "idVec5 *", "p", (ptrdiff_t)(&((idWinding *)0)->p), sizeof( ((idWinding *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFixedWinding_typeInfo[] = {
	{ "", "override", (ptrdiff_t)(&((idFixedWinding *)0)->override), sizeof( ((idFixedWinding *)0)->override ) },
	{ "idVec5[64]", "data", (ptrdiff_t)(&((idFixedWinding *)0)->data), sizeof( ((idFixedWinding *)0)->data ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWinding2D_typeInfo[] = {
	{ "int", "numPoints", (ptrdiff_t)(&((idWinding2D *)0)->numPoints), sizeof( ((idWinding2D *)0)->numPoints ) },
	{ "idVec2[16]", "p", (ptrdiff_t)(&((idWinding2D *)0)->p), sizeof( ((idWinding2D *)0)->p ) },
	{ NULL, 0 }
};

static classVariableInfo_t surfaceEdge_t_typeInfo[] = {
	{ "int[2]", "verts", (ptrdiff_t)(&((surfaceEdge_t *)0)->verts), sizeof( ((surfaceEdge_t *)0)->verts ) },
	{ "int[2]", "tris", (ptrdiff_t)(&((surfaceEdge_t *)0)->tris), sizeof( ((surfaceEdge_t *)0)->tris ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSurface_typeInfo[] = {
	{ "idList < idDrawVert >", "verts", (ptrdiff_t)(&((idSurface *)0)->verts), sizeof( ((idSurface *)0)->verts ) },
	{ "idList < int >", "indexes", (ptrdiff_t)(&((idSurface *)0)->indexes), sizeof( ((idSurface *)0)->indexes ) },
	{ "idList < surfaceEdge_t >", "edges", (ptrdiff_t)(&((idSurface *)0)->edges), sizeof( ((idSurface *)0)->edges ) },
	{ "idList < int >", "edgeIndexes", (ptrdiff_t)(&((idSurface *)0)->edgeIndexes), sizeof( ((idSurface *)0)->edgeIndexes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSurface_Patch_typeInfo[] = {
	{ "int", "width", (ptrdiff_t)(&((idSurface_Patch *)0)->width), sizeof( ((idSurface_Patch *)0)->width ) },
	{ "int", "height", (ptrdiff_t)(&((idSurface_Patch *)0)->height), sizeof( ((idSurface_Patch *)0)->height ) },
	{ "int", "maxWidth", (ptrdiff_t)(&((idSurface_Patch *)0)->maxWidth), sizeof( ((idSurface_Patch *)0)->maxWidth ) },
	{ "int", "maxHeight", (ptrdiff_t)(&((idSurface_Patch *)0)->maxHeight), sizeof( ((idSurface_Patch *)0)->maxHeight ) },
	{ "bool", "expanded", (ptrdiff_t)(&((idSurface_Patch *)0)->expanded), sizeof( ((idSurface_Patch *)0)->expanded ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSurface_Polytope_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSurface_SweptSpline_typeInfo[] = {
	{ "idCurve_Spline < idVec4 > *", "spline", (ptrdiff_t)(&((idSurface_SweptSpline *)0)->spline), sizeof( ((idSurface_SweptSpline *)0)->spline ) },
	{ "idCurve_Spline < idVec4 > *", "sweptSpline", (ptrdiff_t)(&((idSurface_SweptSpline *)0)->sweptSpline), sizeof( ((idSurface_SweptSpline *)0)->sweptSpline ) },
	{ NULL, 0 }
};

static classVariableInfo_t traceModelEdge_t_typeInfo[] = {
	{ "int[2]", "v", (ptrdiff_t)(&((traceModelEdge_t *)0)->v), sizeof( ((traceModelEdge_t *)0)->v ) },
	{ "idVec3", "normal", (ptrdiff_t)(&((traceModelEdge_t *)0)->normal), sizeof( ((traceModelEdge_t *)0)->normal ) },
	{ NULL, 0 }
};

static classVariableInfo_t traceModelPoly_t_typeInfo[] = {
	{ "idVec3", "normal", (ptrdiff_t)(&((traceModelPoly_t *)0)->normal), sizeof( ((traceModelPoly_t *)0)->normal ) },
	{ "float", "dist", (ptrdiff_t)(&((traceModelPoly_t *)0)->dist), sizeof( ((traceModelPoly_t *)0)->dist ) },
	{ "idBounds", "bounds", (ptrdiff_t)(&((traceModelPoly_t *)0)->bounds), sizeof( ((traceModelPoly_t *)0)->bounds ) },
	{ "int", "numEdges", (ptrdiff_t)(&((traceModelPoly_t *)0)->numEdges), sizeof( ((traceModelPoly_t *)0)->numEdges ) },
	{ "int[16]", "edges", (ptrdiff_t)(&((traceModelPoly_t *)0)->edges), sizeof( ((traceModelPoly_t *)0)->edges ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTraceModel_typeInfo[] = {
	{ "traceModel_t", "type", (ptrdiff_t)(&((idTraceModel *)0)->type), sizeof( ((idTraceModel *)0)->type ) },
	{ "int", "numVerts", (ptrdiff_t)(&((idTraceModel *)0)->numVerts), sizeof( ((idTraceModel *)0)->numVerts ) },
	{ "traceModelVert_t[32]", "verts", (ptrdiff_t)(&((idTraceModel *)0)->verts), sizeof( ((idTraceModel *)0)->verts ) },
	{ "int", "numEdges", (ptrdiff_t)(&((idTraceModel *)0)->numEdges), sizeof( ((idTraceModel *)0)->numEdges ) },
	{ "traceModelEdge_t[33]", "edges", (ptrdiff_t)(&((idTraceModel *)0)->edges), sizeof( ((idTraceModel *)0)->edges ) },
	{ "int", "numPolys", (ptrdiff_t)(&((idTraceModel *)0)->numPolys), sizeof( ((idTraceModel *)0)->numPolys ) },
	{ "traceModelPoly_t[16]", "polys", (ptrdiff_t)(&((idTraceModel *)0)->polys), sizeof( ((idTraceModel *)0)->polys ) },
	{ "idVec3", "offset", (ptrdiff_t)(&((idTraceModel *)0)->offset), sizeof( ((idTraceModel *)0)->offset ) },
	{ "idBounds", "bounds", (ptrdiff_t)(&((idTraceModel *)0)->bounds), sizeof( ((idTraceModel *)0)->bounds ) },
	{ "bool", "isConvex", (ptrdiff_t)(&((idTraceModel *)0)->isConvex), sizeof( ((idTraceModel *)0)->isConvex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStr_typeInfo[] = {
	{ "int", "len", (ptrdiff_t)(&((idStr *)0)->len), sizeof( ((idStr *)0)->len ) },
	{ "int", "alloced", (ptrdiff_t)(&((idStr *)0)->alloced), sizeof( ((idStr *)0)->alloced ) },
	{ "char *", "data", (ptrdiff_t)(&((idStr *)0)->data), sizeof( ((idStr *)0)->data ) },
	{ "char[16]", "baseBuffer", (ptrdiff_t)(&((idStr *)0)->baseBuffer), sizeof( ((idStr *)0)->baseBuffer ) },
	{ NULL, 0 }
};

static classVariableInfo_t idToken_typeInfo[] = {
	{ "int", "type", (ptrdiff_t)(&((idToken *)0)->type), sizeof( ((idToken *)0)->type ) },
	{ "int", "subtype", (ptrdiff_t)(&((idToken *)0)->subtype), sizeof( ((idToken *)0)->subtype ) },
	{ "int", "line", (ptrdiff_t)(&((idToken *)0)->line), sizeof( ((idToken *)0)->line ) },
	{ "int", "linesCrossed", (ptrdiff_t)(&((idToken *)0)->linesCrossed), sizeof( ((idToken *)0)->linesCrossed ) },
	{ "int", "flags", (ptrdiff_t)(&((idToken *)0)->flags), sizeof( ((idToken *)0)->flags ) },
	{ "unsigned int", "intvalue", (ptrdiff_t)(&((idToken *)0)->intvalue), sizeof( ((idToken *)0)->intvalue ) },
	{ "double", "floatvalue", (ptrdiff_t)(&((idToken *)0)->floatvalue), sizeof( ((idToken *)0)->floatvalue ) },
	{ "const char *", "whiteSpaceStart_p", (ptrdiff_t)(&((idToken *)0)->whiteSpaceStart_p), sizeof( ((idToken *)0)->whiteSpaceStart_p ) },
	{ "const char *", "whiteSpaceEnd_p", (ptrdiff_t)(&((idToken *)0)->whiteSpaceEnd_p), sizeof( ((idToken *)0)->whiteSpaceEnd_p ) },
	{ "idToken *", "next", (ptrdiff_t)(&((idToken *)0)->next), sizeof( ((idToken *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t punctuation_t_typeInfo[] = {
	{ "const char *", "p", (ptrdiff_t)(&((punctuation_t *)0)->p), sizeof( ((punctuation_t *)0)->p ) },
	{ "int", "n", (ptrdiff_t)(&((punctuation_t *)0)->n), sizeof( ((punctuation_t *)0)->n ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLexer_typeInfo[] = {
	{ "int", "loaded", (ptrdiff_t)(&((idLexer *)0)->loaded), sizeof( ((idLexer *)0)->loaded ) },
	{ "idStr", "filename", (ptrdiff_t)(&((idLexer *)0)->filename), sizeof( ((idLexer *)0)->filename ) },
	{ "int", "allocated", (ptrdiff_t)(&((idLexer *)0)->allocated), sizeof( ((idLexer *)0)->allocated ) },
	{ "const char *", "buffer", (ptrdiff_t)(&((idLexer *)0)->buffer), sizeof( ((idLexer *)0)->buffer ) },
	{ "const char *", "script_p", (ptrdiff_t)(&((idLexer *)0)->script_p), sizeof( ((idLexer *)0)->script_p ) },
	{ "const char *", "end_p", (ptrdiff_t)(&((idLexer *)0)->end_p), sizeof( ((idLexer *)0)->end_p ) },
	{ "const char *", "lastScript_p", (ptrdiff_t)(&((idLexer *)0)->lastScript_p), sizeof( ((idLexer *)0)->lastScript_p ) },
	{ "const char *", "whiteSpaceStart_p", (ptrdiff_t)(&((idLexer *)0)->whiteSpaceStart_p), sizeof( ((idLexer *)0)->whiteSpaceStart_p ) },
	{ "const char *", "whiteSpaceEnd_p", (ptrdiff_t)(&((idLexer *)0)->whiteSpaceEnd_p), sizeof( ((idLexer *)0)->whiteSpaceEnd_p ) },
	{ "unsigned int", "fileTime", (ptrdiff_t)(&((idLexer *)0)->fileTime), sizeof( ((idLexer *)0)->fileTime ) },
	{ "int", "length", (ptrdiff_t)(&((idLexer *)0)->length), sizeof( ((idLexer *)0)->length ) },
	{ "int", "line", (ptrdiff_t)(&((idLexer *)0)->line), sizeof( ((idLexer *)0)->line ) },
	{ "int", "lastline", (ptrdiff_t)(&((idLexer *)0)->lastline), sizeof( ((idLexer *)0)->lastline ) },
	{ "int", "tokenavailable", (ptrdiff_t)(&((idLexer *)0)->tokenavailable), sizeof( ((idLexer *)0)->tokenavailable ) },
	{ "int", "flags", (ptrdiff_t)(&((idLexer *)0)->flags), sizeof( ((idLexer *)0)->flags ) },
	{ "const punctuation_t *", "punctuations", (ptrdiff_t)(&((idLexer *)0)->punctuations), sizeof( ((idLexer *)0)->punctuations ) },
	{ "int *", "punctuationtable", (ptrdiff_t)(&((idLexer *)0)->punctuationtable), sizeof( ((idLexer *)0)->punctuationtable ) },
	{ "int *", "nextpunctuation", (ptrdiff_t)(&((idLexer *)0)->nextpunctuation), sizeof( ((idLexer *)0)->nextpunctuation ) },
	{ "idToken", "token", (ptrdiff_t)(&((idLexer *)0)->token), sizeof( ((idLexer *)0)->token ) },
	{ "idLexer *", "next", (ptrdiff_t)(&((idLexer *)0)->next), sizeof( ((idLexer *)0)->next ) },
	{ "bool", "hadError", (ptrdiff_t)(&((idLexer *)0)->hadError), sizeof( ((idLexer *)0)->hadError ) },
	{ NULL, 0 }
};

static classVariableInfo_t define_t_typeInfo[] = {
	{ "char *", "name", (ptrdiff_t)(&((define_t *)0)->name), sizeof( ((define_t *)0)->name ) },
	{ "int", "flags", (ptrdiff_t)(&((define_t *)0)->flags), sizeof( ((define_t *)0)->flags ) },
	{ "int", "builtin", (ptrdiff_t)(&((define_t *)0)->builtin), sizeof( ((define_t *)0)->builtin ) },
	{ "int", "numparms", (ptrdiff_t)(&((define_t *)0)->numparms), sizeof( ((define_t *)0)->numparms ) },
	{ "idToken *", "parms", (ptrdiff_t)(&((define_t *)0)->parms), sizeof( ((define_t *)0)->parms ) },
	{ "idToken *", "tokens", (ptrdiff_t)(&((define_t *)0)->tokens), sizeof( ((define_t *)0)->tokens ) },
	{ "define_s *", "next", (ptrdiff_t)(&((define_t *)0)->next), sizeof( ((define_t *)0)->next ) },
	{ "define_s *", "hashnext", (ptrdiff_t)(&((define_t *)0)->hashnext), sizeof( ((define_t *)0)->hashnext ) },
	{ NULL, 0 }
};

static classVariableInfo_t indent_t_typeInfo[] = {
	{ "int", "type", (ptrdiff_t)(&((indent_t *)0)->type), sizeof( ((indent_t *)0)->type ) },
	{ "int", "skip", (ptrdiff_t)(&((indent_t *)0)->skip), sizeof( ((indent_t *)0)->skip ) },
	{ "idLexer *", "script", (ptrdiff_t)(&((indent_t *)0)->script), sizeof( ((indent_t *)0)->script ) },
	{ "indent_s *", "next", (ptrdiff_t)(&((indent_t *)0)->next), sizeof( ((indent_t *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParser_typeInfo[] = {
	{ "int", "loaded", (ptrdiff_t)(&((idParser *)0)->loaded), sizeof( ((idParser *)0)->loaded ) },
	{ "idStr", "filename", (ptrdiff_t)(&((idParser *)0)->filename), sizeof( ((idParser *)0)->filename ) },
	{ "idStr", "includepath", (ptrdiff_t)(&((idParser *)0)->includepath), sizeof( ((idParser *)0)->includepath ) },
	{ "bool", "OSPath", (ptrdiff_t)(&((idParser *)0)->OSPath), sizeof( ((idParser *)0)->OSPath ) },
	{ "const punctuation_t *", "punctuations", (ptrdiff_t)(&((idParser *)0)->punctuations), sizeof( ((idParser *)0)->punctuations ) },
	{ "int", "flags", (ptrdiff_t)(&((idParser *)0)->flags), sizeof( ((idParser *)0)->flags ) },
	{ "idLexer *", "scriptstack", (ptrdiff_t)(&((idParser *)0)->scriptstack), sizeof( ((idParser *)0)->scriptstack ) },
	{ "idToken *", "tokens", (ptrdiff_t)(&((idParser *)0)->tokens), sizeof( ((idParser *)0)->tokens ) },
	{ "define_t *", "defines", (ptrdiff_t)(&((idParser *)0)->defines), sizeof( ((idParser *)0)->defines ) },
	{ "define_t * *", "definehash", (ptrdiff_t)(&((idParser *)0)->definehash), sizeof( ((idParser *)0)->definehash ) },
	{ "indent_t *", "indentstack", (ptrdiff_t)(&((idParser *)0)->indentstack), sizeof( ((idParser *)0)->indentstack ) },
	{ "int", "skip", (ptrdiff_t)(&((idParser *)0)->skip), sizeof( ((idParser *)0)->skip ) },
	{ "const char *", "marker_p", (ptrdiff_t)(&((idParser *)0)->marker_p), sizeof( ((idParser *)0)->marker_p ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCmdArgs_typeInfo[] = {
	{ "int", "argc", (ptrdiff_t)(&((idCmdArgs *)0)->argc), sizeof( ((idCmdArgs *)0)->argc ) },
	{ "char *[64]", "argv", (ptrdiff_t)(&((idCmdArgs *)0)->argv), sizeof( ((idCmdArgs *)0)->argv ) },
	{ "char[2048]", "tokenized", (ptrdiff_t)(&((idCmdArgs *)0)->tokenized), sizeof( ((idCmdArgs *)0)->tokenized ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLess_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idHashIndex_typeInfo[] = {
	{ "int", "hashSize", (ptrdiff_t)(&((idHashIndex *)0)->hashSize), sizeof( ((idHashIndex *)0)->hashSize ) },
	{ "int *", "hash", (ptrdiff_t)(&((idHashIndex *)0)->hash), sizeof( ((idHashIndex *)0)->hash ) },
	{ "int", "indexSize", (ptrdiff_t)(&((idHashIndex *)0)->indexSize), sizeof( ((idHashIndex *)0)->indexSize ) },
	{ "int *", "indexChain", (ptrdiff_t)(&((idHashIndex *)0)->indexChain), sizeof( ((idHashIndex *)0)->indexChain ) },
	{ "int", "granularity", (ptrdiff_t)(&((idHashIndex *)0)->granularity), sizeof( ((idHashIndex *)0)->granularity ) },
	{ "int", "hashMask", (ptrdiff_t)(&((idHashIndex *)0)->hashMask), sizeof( ((idHashIndex *)0)->hashMask ) },
	{ "int", "lookupMask", (ptrdiff_t)(&((idHashIndex *)0)->lookupMask), sizeof( ((idHashIndex *)0)->lookupMask ) },
	{ NULL, 0 }
};

static classVariableInfo_t _idHashIndex_showarray_helper_typeInfo[] = {
	{ "int", "size", (ptrdiff_t)(&((_idHashIndex_showarray_helper *)0)->size), sizeof( ((_idHashIndex_showarray_helper *)0)->size ) },
	{ "int *", "ptr", (ptrdiff_t)(&((_idHashIndex_showarray_helper *)0)->ptr), sizeof( ((_idHashIndex_showarray_helper *)0)->ptr ) },
	{ NULL, 0 }
};

static classVariableInfo_t idHashTable_class_Type__hashnode_s_typeInfo[] = {
//	{ "idStr", "key", (ptrdiff_t)(&((idHashTable< class Type >::hashnode_s *)0)->key), sizeof( ((idHashTable< class Type >::hashnode_s *)0)->key ) },
//	{ "Type", "value", (ptrdiff_t)(&((idHashTable< class Type >::hashnode_s *)0)->value), sizeof( ((idHashTable< class Type >::hashnode_s *)0)->value ) },
//	{ "hashnode_s *", "next", (ptrdiff_t)(&((idHashTable< class Type >::hashnode_s *)0)->next), sizeof( ((idHashTable< class Type >::hashnode_s *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idHashTable_class_Type__typeInfo[] = {
//	{ "hashnode_s * *", "heads", (ptrdiff_t)(&((idHashTable< class Type > *)0)->heads), sizeof( ((idHashTable< class Type > *)0)->heads ) },
//	{ "int", "tablesize", (ptrdiff_t)(&((idHashTable< class Type > *)0)->tablesize), sizeof( ((idHashTable< class Type > *)0)->tablesize ) },
//	{ "int", "numentries", (ptrdiff_t)(&((idHashTable< class Type > *)0)->numentries), sizeof( ((idHashTable< class Type > *)0)->numentries ) },
//	{ "int", "tablesizemask", (ptrdiff_t)(&((idHashTable< class Type > *)0)->tablesizemask), sizeof( ((idHashTable< class Type > *)0)->tablesizemask ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEquality_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idEqualityStrI_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idHashFunctionStrI_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idHashMap_class_Key_class_Value_class_HashFunction_=_idHashFunction__Key__class_EqualFunction_=_idEquality__typeInfo[] = {
//	{ "Elem *", "table", (ptrdiff_t)(&((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->table), sizeof( ((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->table ) },
//	{ "int", "size", (ptrdiff_t)(&((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->size), sizeof( ((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->size ) },
//	{ "int", "count", (ptrdiff_t)(&((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->count), sizeof( ((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->count ) },
//	{ "Key", "empty", (ptrdiff_t)(&((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->empty), sizeof( ((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->empty ) },
//	{ "byte", "maxLoad", (ptrdiff_t)(&((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->maxLoad), sizeof( ((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->maxLoad ) },
//	{ "byte", "shift", (ptrdiff_t)(&((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->shift), sizeof( ((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->shift ) },
//	{ "HashFunction", "hashFunc", (ptrdiff_t)(&((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->hashFunc), sizeof( ((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->hashFunc ) },
//	{ "EqualFunction", "equalFunc", (ptrdiff_t)(&((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->equalFunc), sizeof( ((idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality > *)0)->equalFunc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStaticList_class_type_int_size__typeInfo[] = {
//	{ "int", "num", (ptrdiff_t)(&((idStaticList< class type , int size > *)0)->num), sizeof( ((idStaticList< class type , int size > *)0)->num ) },
//	{ "type[1]", "list", (ptrdiff_t)(&((idStaticList< class type , int size > *)0)->list), sizeof( ((idStaticList< class type , int size > *)0)->list ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLinkList_class_type__typeInfo[] = {
//	{ "idLinkList *", "head", (ptrdiff_t)(&((idLinkList< class type > *)0)->head), sizeof( ((idLinkList< class type > *)0)->head ) },
//	{ "idLinkList *", "next", (ptrdiff_t)(&((idLinkList< class type > *)0)->next), sizeof( ((idLinkList< class type > *)0)->next ) },
//	{ "idLinkList *", "prev", (ptrdiff_t)(&((idLinkList< class type > *)0)->prev), sizeof( ((idLinkList< class type > *)0)->prev ) },
//	{ "type *", "owner", (ptrdiff_t)(&((idLinkList< class type > *)0)->owner), sizeof( ((idLinkList< class type > *)0)->owner ) },
	{ NULL, 0 }
};

static classVariableInfo_t idHierarchy_class_type__typeInfo[] = {
//	{ "idHierarchy *", "parent", (ptrdiff_t)(&((idHierarchy< class type > *)0)->parent), sizeof( ((idHierarchy< class type > *)0)->parent ) },
//	{ "idHierarchy *", "sibling", (ptrdiff_t)(&((idHierarchy< class type > *)0)->sibling), sizeof( ((idHierarchy< class type > *)0)->sibling ) },
//	{ "idHierarchy *", "child", (ptrdiff_t)(&((idHierarchy< class type > *)0)->child), sizeof( ((idHierarchy< class type > *)0)->child ) },
//	{ "type *", "owner", (ptrdiff_t)(&((idHierarchy< class type > *)0)->owner), sizeof( ((idHierarchy< class type > *)0)->owner ) },
	{ NULL, 0 }
};

static classVariableInfo_t idQueueTemplate_class_type_int_nextOffset__typeInfo[] = {
//	{ "type *", "first", (ptrdiff_t)(&((idQueueTemplate< class type , int nextOffset > *)0)->first), sizeof( ((idQueueTemplate< class type , int nextOffset > *)0)->first ) },
//	{ "type *", "last", (ptrdiff_t)(&((idQueueTemplate< class type , int nextOffset > *)0)->last), sizeof( ((idQueueTemplate< class type , int nextOffset > *)0)->last ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStackTemplate_class_type_int_nextOffset__typeInfo[] = {
//	{ "type *", "top", (ptrdiff_t)(&((idStackTemplate< class type , int nextOffset > *)0)->top), sizeof( ((idStackTemplate< class type , int nextOffset > *)0)->top ) },
//	{ "type *", "bottom", (ptrdiff_t)(&((idStackTemplate< class type , int nextOffset > *)0)->bottom), sizeof( ((idStackTemplate< class type , int nextOffset > *)0)->bottom ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPoolStr_typeInfo[] = {
	{ "idStrPool *", "pool", (ptrdiff_t)(&((idPoolStr *)0)->pool), sizeof( ((idPoolStr *)0)->pool ) },
	{ "mutable int", "numUsers", (ptrdiff_t)(&((idPoolStr *)0)->numUsers), sizeof( ((idPoolStr *)0)->numUsers ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStrPool_typeInfo[] = {
	{ "bool", "caseSensitive", (ptrdiff_t)(&((idStrPool *)0)->caseSensitive), sizeof( ((idStrPool *)0)->caseSensitive ) },
	{ "idList < int >", "freeList", (ptrdiff_t)(&((idStrPool *)0)->freeList), sizeof( ((idStrPool *)0)->freeList ) },
	{ "idList < idPoolStr * >", "pool", (ptrdiff_t)(&((idStrPool *)0)->pool), sizeof( ((idStrPool *)0)->pool ) },
	{ "idHashIndex", "poolHash", (ptrdiff_t)(&((idStrPool *)0)->poolHash), sizeof( ((idStrPool *)0)->poolHash ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVectorSet_class_type_int_dimension__typeInfo[] = {
//	{ "idHashIndex", "hash", (ptrdiff_t)(&((idVectorSet< class type , int dimension > *)0)->hash), sizeof( ((idVectorSet< class type , int dimension > *)0)->hash ) },
//	{ "type", "mins", (ptrdiff_t)(&((idVectorSet< class type , int dimension > *)0)->mins), sizeof( ((idVectorSet< class type , int dimension > *)0)->mins ) },
//	{ "type", "maxs", (ptrdiff_t)(&((idVectorSet< class type , int dimension > *)0)->maxs), sizeof( ((idVectorSet< class type , int dimension > *)0)->maxs ) },
//	{ "int", "boxHashSize", (ptrdiff_t)(&((idVectorSet< class type , int dimension > *)0)->boxHashSize), sizeof( ((idVectorSet< class type , int dimension > *)0)->boxHashSize ) },
//	{ "float[1]", "boxInvSize", (ptrdiff_t)(&((idVectorSet< class type , int dimension > *)0)->boxInvSize), sizeof( ((idVectorSet< class type , int dimension > *)0)->boxInvSize ) },
//	{ "float[1]", "boxHalfSize", (ptrdiff_t)(&((idVectorSet< class type , int dimension > *)0)->boxHalfSize), sizeof( ((idVectorSet< class type , int dimension > *)0)->boxHalfSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVectorSubset_class_type_int_dimension__typeInfo[] = {
//	{ "idHashIndex", "hash", (ptrdiff_t)(&((idVectorSubset< class type , int dimension > *)0)->hash), sizeof( ((idVectorSubset< class type , int dimension > *)0)->hash ) },
//	{ "type", "mins", (ptrdiff_t)(&((idVectorSubset< class type , int dimension > *)0)->mins), sizeof( ((idVectorSubset< class type , int dimension > *)0)->mins ) },
//	{ "type", "maxs", (ptrdiff_t)(&((idVectorSubset< class type , int dimension > *)0)->maxs), sizeof( ((idVectorSubset< class type , int dimension > *)0)->maxs ) },
//	{ "int", "boxHashSize", (ptrdiff_t)(&((idVectorSubset< class type , int dimension > *)0)->boxHashSize), sizeof( ((idVectorSubset< class type , int dimension > *)0)->boxHashSize ) },
//	{ "float[1]", "boxInvSize", (ptrdiff_t)(&((idVectorSubset< class type , int dimension > *)0)->boxInvSize), sizeof( ((idVectorSubset< class type , int dimension > *)0)->boxInvSize ) },
//	{ "float[1]", "boxHalfSize", (ptrdiff_t)(&((idVectorSubset< class type , int dimension > *)0)->boxHalfSize), sizeof( ((idVectorSubset< class type , int dimension > *)0)->boxHalfSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlaneSet_typeInfo[] = {
	{ "idHashIndex", "hash", (ptrdiff_t)(&((idPlaneSet *)0)->hash), sizeof( ((idPlaneSet *)0)->hash ) },
	{ NULL, 0 }
};

static classVariableInfo_t MD4_CTX_typeInfo[] = {
	{ "MD4_u32plus", "lo", (ptrdiff_t)(&((MD4_CTX *)0)->lo), sizeof( ((MD4_CTX *)0)->lo ) },
	{ "MD4_u32plus", "hi", (ptrdiff_t)(&((MD4_CTX *)0)->hi), sizeof( ((MD4_CTX *)0)->hi ) },
	{ "MD4_u32plus", "a", (ptrdiff_t)(&((MD4_CTX *)0)->a), sizeof( ((MD4_CTX *)0)->a ) },
	{ "MD4_u32plus", "b", (ptrdiff_t)(&((MD4_CTX *)0)->b), sizeof( ((MD4_CTX *)0)->b ) },
	{ "MD4_u32plus", "c", (ptrdiff_t)(&((MD4_CTX *)0)->c), sizeof( ((MD4_CTX *)0)->c ) },
	{ "MD4_u32plus", "d", (ptrdiff_t)(&((MD4_CTX *)0)->d), sizeof( ((MD4_CTX *)0)->d ) },
	{ "unsigned char[64]", "buffer", (ptrdiff_t)(&((MD4_CTX *)0)->buffer), sizeof( ((MD4_CTX *)0)->buffer ) },
	{ "MD4_u32plus[16]", "block", (ptrdiff_t)(&((MD4_CTX *)0)->block), sizeof( ((MD4_CTX *)0)->block ) },
	{ NULL, 0 }
};

static classVariableInfo_t idKeyValue_typeInfo[] = {
	{ "const idPoolStr *", "key", (ptrdiff_t)(&((idKeyValue *)0)->key), sizeof( ((idKeyValue *)0)->key ) },
	{ "const idPoolStr *", "value", (ptrdiff_t)(&((idKeyValue *)0)->value), sizeof( ((idKeyValue *)0)->value ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDict_typeInfo[] = {
	{ "idList < idKeyValue >", "args", (ptrdiff_t)(&((idDict *)0)->args), sizeof( ((idDict *)0)->args ) },
	{ "idHashIndex", "argHash", (ptrdiff_t)(&((idDict *)0)->argHash), sizeof( ((idDict *)0)->argHash ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLangKeyValue_typeInfo[] = {
	{ "idStr", "key", (ptrdiff_t)(&((idLangKeyValue *)0)->key), sizeof( ((idLangKeyValue *)0)->key ) },
	{ "idStr", "value", (ptrdiff_t)(&((idLangKeyValue *)0)->value), sizeof( ((idLangKeyValue *)0)->value ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLangDict_typeInfo[] = {
	{ "idList < idLangKeyValue >", "args", (ptrdiff_t)(&((idLangDict *)0)->args), sizeof( ((idLangDict *)0)->args ) },
	{ "idHashIndex", "hash", (ptrdiff_t)(&((idLangDict *)0)->hash), sizeof( ((idLangDict *)0)->hash ) },
	{ "int", "baseID", (ptrdiff_t)(&((idLangDict *)0)->baseID), sizeof( ((idLangDict *)0)->baseID ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBitMsg_typeInfo[] = {
	{ "byte *", "writeData", (ptrdiff_t)(&((idBitMsg *)0)->writeData), sizeof( ((idBitMsg *)0)->writeData ) },
	{ "const byte *", "readData", (ptrdiff_t)(&((idBitMsg *)0)->readData), sizeof( ((idBitMsg *)0)->readData ) },
	{ "int", "maxSize", (ptrdiff_t)(&((idBitMsg *)0)->maxSize), sizeof( ((idBitMsg *)0)->maxSize ) },
	{ "int", "curSize", (ptrdiff_t)(&((idBitMsg *)0)->curSize), sizeof( ((idBitMsg *)0)->curSize ) },
	{ "int", "writeBit", (ptrdiff_t)(&((idBitMsg *)0)->writeBit), sizeof( ((idBitMsg *)0)->writeBit ) },
	{ "mutable int", "readCount", (ptrdiff_t)(&((idBitMsg *)0)->readCount), sizeof( ((idBitMsg *)0)->readCount ) },
	{ "mutable int", "readBit", (ptrdiff_t)(&((idBitMsg *)0)->readBit), sizeof( ((idBitMsg *)0)->readBit ) },
	{ "bool", "allowOverflow", (ptrdiff_t)(&((idBitMsg *)0)->allowOverflow), sizeof( ((idBitMsg *)0)->allowOverflow ) },
	{ "bool", "overflowed", (ptrdiff_t)(&((idBitMsg *)0)->overflowed), sizeof( ((idBitMsg *)0)->overflowed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBitMsgDelta_typeInfo[] = {
	{ "const idBitMsg *", "base", (ptrdiff_t)(&((idBitMsgDelta *)0)->base), sizeof( ((idBitMsgDelta *)0)->base ) },
	{ "idBitMsg *", "newBase", (ptrdiff_t)(&((idBitMsgDelta *)0)->newBase), sizeof( ((idBitMsgDelta *)0)->newBase ) },
	{ "idBitMsg *", "writeDelta", (ptrdiff_t)(&((idBitMsgDelta *)0)->writeDelta), sizeof( ((idBitMsgDelta *)0)->writeDelta ) },
	{ "const idBitMsg *", "readDelta", (ptrdiff_t)(&((idBitMsgDelta *)0)->readDelta), sizeof( ((idBitMsgDelta *)0)->readDelta ) },
	{ "mutable bool", "changed", (ptrdiff_t)(&((idBitMsgDelta *)0)->changed), sizeof( ((idBitMsgDelta *)0)->changed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapPrimitive_typeInfo[] = {
	{ "idDict", "epairs", (ptrdiff_t)(&((idMapPrimitive *)0)->epairs), sizeof( ((idMapPrimitive *)0)->epairs ) },
	{ "int", "type", (ptrdiff_t)(&((idMapPrimitive *)0)->type), sizeof( ((idMapPrimitive *)0)->type ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapBrushSide_typeInfo[] = {
	{ "idStr", "material", (ptrdiff_t)(&((idMapBrushSide *)0)->material), sizeof( ((idMapBrushSide *)0)->material ) },
	{ "idPlane", "plane", (ptrdiff_t)(&((idMapBrushSide *)0)->plane), sizeof( ((idMapBrushSide *)0)->plane ) },
	{ "idVec3[2]", "texMat", (ptrdiff_t)(&((idMapBrushSide *)0)->texMat), sizeof( ((idMapBrushSide *)0)->texMat ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((idMapBrushSide *)0)->origin), sizeof( ((idMapBrushSide *)0)->origin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapBrush_typeInfo[] = {
	{ "int", "numSides", (ptrdiff_t)(&((idMapBrush *)0)->numSides), sizeof( ((idMapBrush *)0)->numSides ) },
	{ "idList < idMapBrushSide * >", "sides", (ptrdiff_t)(&((idMapBrush *)0)->sides), sizeof( ((idMapBrush *)0)->sides ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapPatch_typeInfo[] = {
	{ "idStr", "material", (ptrdiff_t)(&((idMapPatch *)0)->material), sizeof( ((idMapPatch *)0)->material ) },
	{ "int", "horzSubdivisions", (ptrdiff_t)(&((idMapPatch *)0)->horzSubdivisions), sizeof( ((idMapPatch *)0)->horzSubdivisions ) },
	{ "int", "vertSubdivisions", (ptrdiff_t)(&((idMapPatch *)0)->vertSubdivisions), sizeof( ((idMapPatch *)0)->vertSubdivisions ) },
	{ "bool", "explicitSubdivisions", (ptrdiff_t)(&((idMapPatch *)0)->explicitSubdivisions), sizeof( ((idMapPatch *)0)->explicitSubdivisions ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapEntity_typeInfo[] = {
	{ "idDict", "epairs", (ptrdiff_t)(&((idMapEntity *)0)->epairs), sizeof( ((idMapEntity *)0)->epairs ) },
	{ "idList < idMapPrimitive * >", "primitives", (ptrdiff_t)(&((idMapEntity *)0)->primitives), sizeof( ((idMapEntity *)0)->primitives ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapFile_typeInfo[] = {
	{ "float", "version", (ptrdiff_t)(&((idMapFile *)0)->version), sizeof( ((idMapFile *)0)->version ) },
	{ "time_t", "fileTime", (ptrdiff_t)(&((idMapFile *)0)->fileTime), sizeof( ((idMapFile *)0)->fileTime ) },
	{ "unsigned int", "geometryCRC", (ptrdiff_t)(&((idMapFile *)0)->geometryCRC), sizeof( ((idMapFile *)0)->geometryCRC ) },
	{ "idList < idMapEntity * >", "entities", (ptrdiff_t)(&((idMapFile *)0)->entities), sizeof( ((idMapFile *)0)->entities ) },
	{ "idStr", "name", (ptrdiff_t)(&((idMapFile *)0)->name), sizeof( ((idMapFile *)0)->name ) },
	{ "idStr", "fileName", (ptrdiff_t)(&((idMapFile *)0)->fileName), sizeof( ((idMapFile *)0)->fileName ) },
	{ "bool", "hasPrimitiveData", (ptrdiff_t)(&((idMapFile *)0)->hasPrimitiveData), sizeof( ((idMapFile *)0)->hasPrimitiveData ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapReloadInfo_NameAndIdx_typeInfo[] = {
	{ "const char *", "name", (ptrdiff_t)(&((idMapReloadInfo::NameAndIdx *)0)->name), sizeof( ((idMapReloadInfo::NameAndIdx *)0)->name ) },
	{ "int", "idx", (ptrdiff_t)(&((idMapReloadInfo::NameAndIdx *)0)->idx), sizeof( ((idMapReloadInfo::NameAndIdx *)0)->idx ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMapReloadInfo_typeInfo[] = {
	{ "bool mapInvalid =", "false", (ptrdiff_t)(&((idMapReloadInfo *)0)->false), sizeof( ((idMapReloadInfo *)0)->false ) },
	{ "bool cannotReload =", "true", (ptrdiff_t)(&((idMapReloadInfo *)0)->true), sizeof( ((idMapReloadInfo *)0)->true ) },
	{ "idList < NameAndIdx >", "modifiedEntities", (ptrdiff_t)(&((idMapReloadInfo *)0)->modifiedEntities), sizeof( ((idMapReloadInfo *)0)->modifiedEntities ) },
	{ "idList < NameAndIdx >", "respawnEntities", (ptrdiff_t)(&((idMapReloadInfo *)0)->respawnEntities), sizeof( ((idMapReloadInfo *)0)->respawnEntities ) },
	{ "idList < NameAndIdx >", "addedEntities", (ptrdiff_t)(&((idMapReloadInfo *)0)->addedEntities), sizeof( ((idMapReloadInfo *)0)->addedEntities ) },
	{ "idList < NameAndIdx >", "removedEntities", (ptrdiff_t)(&((idMapReloadInfo *)0)->removedEntities), sizeof( ((idMapReloadInfo *)0)->removedEntities ) },
	{ "std :: unique_ptr < idMapFile >", "oldMap", (ptrdiff_t)(&((idMapReloadInfo *)0)->oldMap), sizeof( ((idMapReloadInfo *)0)->oldMap ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTimer_typeInfo[] = {
	{ "idTimer::enum_20", "state", (ptrdiff_t)(&((idTimer *)0)->state), sizeof( ((idTimer *)0)->state ) },
	{ "double", "start", (ptrdiff_t)(&((idTimer *)0)->start), sizeof( ((idTimer *)0)->start ) },
	{ "double", "clockTicks", (ptrdiff_t)(&((idTimer *)0)->clockTicks), sizeof( ((idTimer *)0)->clockTicks ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTimerReport_typeInfo[] = {
	{ "idList < idTimer * >", "timers", (ptrdiff_t)(&((idTimerReport *)0)->timers), sizeof( ((idTimerReport *)0)->timers ) },
	{ "idStrList", "names", (ptrdiff_t)(&((idTimerReport *)0)->names), sizeof( ((idTimerReport *)0)->names ) },
	{ "idStr", "reportName", (ptrdiff_t)(&((idTimerReport *)0)->reportName), sizeof( ((idTimerReport *)0)->reportName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSysMutex_typeInfo[] = {
	{ "mutexHandle_t", "handle", (ptrdiff_t)(&((idSysMutex *)0)->handle), sizeof( ((idSysMutex *)0)->handle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idScopedCriticalSection_typeInfo[] = {
	{ "idSysMutex *", "mutex", (ptrdiff_t)(&((idScopedCriticalSection *)0)->mutex), sizeof( ((idScopedCriticalSection *)0)->mutex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSysSignal_typeInfo[] = {
	{ "signalHandle_t", "handle", (ptrdiff_t)(&((idSysSignal *)0)->handle), sizeof( ((idSysSignal *)0)->handle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSysInterlockedInteger_typeInfo[] = {
	{ "interlockedInt_t", "value", (ptrdiff_t)(&((idSysInterlockedInteger *)0)->value), sizeof( ((idSysInterlockedInteger *)0)->value ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSysInterlockedPointer_typename_T__typeInfo[] = {
//	{ "T *", "ptr", (ptrdiff_t)(&((idSysInterlockedPointer< typename T > *)0)->ptr), sizeof( ((idSysInterlockedPointer< typename T > *)0)->ptr ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSysThread_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idSysThread *)0)->name), sizeof( ((idSysThread *)0)->name ) },
	{ "uintptr_t", "threadHandle", (ptrdiff_t)(&((idSysThread *)0)->threadHandle), sizeof( ((idSysThread *)0)->threadHandle ) },
	{ "bool", "isWorker", (ptrdiff_t)(&((idSysThread *)0)->isWorker), sizeof( ((idSysThread *)0)->isWorker ) },
	{ "bool", "isRunning", (ptrdiff_t)(&((idSysThread *)0)->isRunning), sizeof( ((idSysThread *)0)->isRunning ) },
	{ "volatile bool", "isTerminating", (ptrdiff_t)(&((idSysThread *)0)->isTerminating), sizeof( ((idSysThread *)0)->isTerminating ) },
	{ "volatile bool", "moreWorkToDo", (ptrdiff_t)(&((idSysThread *)0)->moreWorkToDo), sizeof( ((idSysThread *)0)->moreWorkToDo ) },
	{ "idSysSignal", "signalWorkerDone", (ptrdiff_t)(&((idSysThread *)0)->signalWorkerDone), sizeof( ((idSysThread *)0)->signalWorkerDone ) },
	{ "idSysSignal", "signalMoreWorkToDo", (ptrdiff_t)(&((idSysThread *)0)->signalMoreWorkToDo), sizeof( ((idSysThread *)0)->signalMoreWorkToDo ) },
	{ "idSysMutex", "signalMutex", (ptrdiff_t)(&((idSysThread *)0)->signalMutex), sizeof( ((idSysThread *)0)->signalMutex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSysWorkerThreadGroup_class_threadType__typeInfo[] = {
//	{ "idList < threadType * >", "threadList", (ptrdiff_t)(&((idSysWorkerThreadGroup< class threadType > *)0)->threadList), sizeof( ((idSysWorkerThreadGroup< class threadType > *)0)->threadList ) },
//	{ "bool", "runOneThreadInline", (ptrdiff_t)(&((idSysWorkerThreadGroup< class threadType > *)0)->runOneThreadInline), sizeof( ((idSysWorkerThreadGroup< class threadType > *)0)->runOneThreadInline ) },
//	{ "bool", "singleThreaded", (ptrdiff_t)(&((idSysWorkerThreadGroup< class threadType > *)0)->singleThreaded), sizeof( ((idSysWorkerThreadGroup< class threadType > *)0)->singleThreaded ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSysThreadSynchronizer_typeInfo[] = {
	{ "idList < idSysSignal * >", "signals", (ptrdiff_t)(&((idSysThreadSynchronizer *)0)->signals), sizeof( ((idSysThreadSynchronizer *)0)->signals ) },
	{ "idSysInterlockedInteger", "busyCount", (ptrdiff_t)(&((idSysThreadSynchronizer *)0)->busyCount), sizeof( ((idSysThreadSynchronizer *)0)->busyCount ) },
	{ NULL, 0 }
};

static classVariableInfo_t RevisionTracker_typeInfo[] = {
	{ "int", "_highestRevision", (ptrdiff_t)(&((RevisionTracker *)0)->_highestRevision), sizeof( ((RevisionTracker *)0)->_highestRevision ) },
	{ "int", "_lowestRevision", (ptrdiff_t)(&((RevisionTracker *)0)->_lowestRevision), sizeof( ((RevisionTracker *)0)->_lowestRevision ) },
	{ "idStr", "_version", (ptrdiff_t)(&((RevisionTracker *)0)->_version), sizeof( ((RevisionTracker *)0)->_version ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParallelJobList_typeInfo[] = {
	{ "idParallelJobList_Threads *", "jobListThreads", (ptrdiff_t)(&((idParallelJobList *)0)->jobListThreads), sizeof( ((idParallelJobList *)0)->jobListThreads ) },
	{ "const idColor *", "color", (ptrdiff_t)(&((idParallelJobList *)0)->color), sizeof( ((idParallelJobList *)0)->color ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParallelJobManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idParallelJobRegistration_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCmdSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCVar_typeInfo[] = {
	{ "const char *", "name", (ptrdiff_t)(&((idCVar *)0)->name), sizeof( ((idCVar *)0)->name ) },
	{ "const char *", "value", (ptrdiff_t)(&((idCVar *)0)->value), sizeof( ((idCVar *)0)->value ) },
	{ "const char *", "description", (ptrdiff_t)(&((idCVar *)0)->description), sizeof( ((idCVar *)0)->description ) },
	{ "int", "flags", (ptrdiff_t)(&((idCVar *)0)->flags), sizeof( ((idCVar *)0)->flags ) },
	{ "float", "valueMin", (ptrdiff_t)(&((idCVar *)0)->valueMin), sizeof( ((idCVar *)0)->valueMin ) },
	{ "float", "valueMax", (ptrdiff_t)(&((idCVar *)0)->valueMax), sizeof( ((idCVar *)0)->valueMax ) },
	{ "const char * *", "valueStrings", (ptrdiff_t)(&((idCVar *)0)->valueStrings), sizeof( ((idCVar *)0)->valueStrings ) },
	{ "argCompletion_t", "valueCompletion", (ptrdiff_t)(&((idCVar *)0)->valueCompletion), sizeof( ((idCVar *)0)->valueCompletion ) },
	{ "int", "integerValue", (ptrdiff_t)(&((idCVar *)0)->integerValue), sizeof( ((idCVar *)0)->integerValue ) },
	{ "float", "floatValue", (ptrdiff_t)(&((idCVar *)0)->floatValue), sizeof( ((idCVar *)0)->floatValue ) },
	{ "idCVar *", "internalVar", (ptrdiff_t)(&((idCVar *)0)->internalVar), sizeof( ((idCVar *)0)->internalVar ) },
	{ "idCVar *", "next", (ptrdiff_t)(&((idCVar *)0)->next), sizeof( ((idCVar *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCVarInt_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCVarBool_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCVarSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t MemInfo_t_typeInfo[] = {
	{ "idStr", "filebase", (ptrdiff_t)(&((MemInfo_t *)0)->filebase), sizeof( ((MemInfo_t *)0)->filebase ) },
	{ "int", "total", (ptrdiff_t)(&((MemInfo_t *)0)->total), sizeof( ((MemInfo_t *)0)->total ) },
	{ "int", "assetTotals", (ptrdiff_t)(&((MemInfo_t *)0)->assetTotals), sizeof( ((MemInfo_t *)0)->assetTotals ) },
	{ "int", "memoryManagerTotal", (ptrdiff_t)(&((MemInfo_t *)0)->memoryManagerTotal), sizeof( ((MemInfo_t *)0)->memoryManagerTotal ) },
	{ "int", "gameSubsystemTotal", (ptrdiff_t)(&((MemInfo_t *)0)->gameSubsystemTotal), sizeof( ((MemInfo_t *)0)->gameSubsystemTotal ) },
	{ "int", "renderSubsystemTotal", (ptrdiff_t)(&((MemInfo_t *)0)->renderSubsystemTotal), sizeof( ((MemInfo_t *)0)->renderSubsystemTotal ) },
	{ "int", "imageAssetsTotal", (ptrdiff_t)(&((MemInfo_t *)0)->imageAssetsTotal), sizeof( ((MemInfo_t *)0)->imageAssetsTotal ) },
	{ "int", "modelAssetsTotal", (ptrdiff_t)(&((MemInfo_t *)0)->modelAssetsTotal), sizeof( ((MemInfo_t *)0)->modelAssetsTotal ) },
	{ "int", "soundAssetsTotal", (ptrdiff_t)(&((MemInfo_t *)0)->soundAssetsTotal), sizeof( ((MemInfo_t *)0)->soundAssetsTotal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCommon_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ErrorReportedException_typeInfo[] = {
	{ "idStr", "msg", (ptrdiff_t)(&((ErrorReportedException *)0)->msg), sizeof( ((ErrorReportedException *)0)->msg ) },
	{ "int", "code", (ptrdiff_t)(&((ErrorReportedException *)0)->code), sizeof( ((ErrorReportedException *)0)->code ) },
	{ "bool", "fatal", (ptrdiff_t)(&((ErrorReportedException *)0)->fatal), sizeof( ((ErrorReportedException *)0)->fatal ) },
	{ NULL, 0 }
};

static classVariableInfo_t I18N_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idFile_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idFile_Memory_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idFile_Memory *)0)->name), sizeof( ((idFile_Memory *)0)->name ) },
	{ "int", "mode", (ptrdiff_t)(&((idFile_Memory *)0)->mode), sizeof( ((idFile_Memory *)0)->mode ) },
	{ "int", "fileSize", (ptrdiff_t)(&((idFile_Memory *)0)->fileSize), sizeof( ((idFile_Memory *)0)->fileSize ) },
	{ "int", "allocated", (ptrdiff_t)(&((idFile_Memory *)0)->allocated), sizeof( ((idFile_Memory *)0)->allocated ) },
	{ "int", "granularity", (ptrdiff_t)(&((idFile_Memory *)0)->granularity), sizeof( ((idFile_Memory *)0)->granularity ) },
	{ "char *", "filePtr", (ptrdiff_t)(&((idFile_Memory *)0)->filePtr), sizeof( ((idFile_Memory *)0)->filePtr ) },
	{ "bool", "owned", (ptrdiff_t)(&((idFile_Memory *)0)->owned), sizeof( ((idFile_Memory *)0)->owned ) },
	{ "int", "timestamp", (ptrdiff_t)(&((idFile_Memory *)0)->timestamp), sizeof( ((idFile_Memory *)0)->timestamp ) },
	{ "char *", "curPtr", (ptrdiff_t)(&((idFile_Memory *)0)->curPtr), sizeof( ((idFile_Memory *)0)->curPtr ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFile_BitMsg_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idFile_BitMsg *)0)->name), sizeof( ((idFile_BitMsg *)0)->name ) },
	{ "int", "mode", (ptrdiff_t)(&((idFile_BitMsg *)0)->mode), sizeof( ((idFile_BitMsg *)0)->mode ) },
	{ "idBitMsg *", "msg", (ptrdiff_t)(&((idFile_BitMsg *)0)->msg), sizeof( ((idFile_BitMsg *)0)->msg ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFile_Permanent_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idFile_Permanent *)0)->name), sizeof( ((idFile_Permanent *)0)->name ) },
	{ "idStr", "fullPath", (ptrdiff_t)(&((idFile_Permanent *)0)->fullPath), sizeof( ((idFile_Permanent *)0)->fullPath ) },
	{ "int", "mode", (ptrdiff_t)(&((idFile_Permanent *)0)->mode), sizeof( ((idFile_Permanent *)0)->mode ) },
	{ "int", "fileSize", (ptrdiff_t)(&((idFile_Permanent *)0)->fileSize), sizeof( ((idFile_Permanent *)0)->fileSize ) },
	{ "FILE *", "o", (ptrdiff_t)(&((idFile_Permanent *)0)->o), sizeof( ((idFile_Permanent *)0)->o ) },
	{ "bool", "handleSync", (ptrdiff_t)(&((idFile_Permanent *)0)->handleSync), sizeof( ((idFile_Permanent *)0)->handleSync ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFile_InZip_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idFile_InZip *)0)->name), sizeof( ((idFile_InZip *)0)->name ) },
	{ "idStr", "fullPath", (ptrdiff_t)(&((idFile_InZip *)0)->fullPath), sizeof( ((idFile_InZip *)0)->fullPath ) },
	{ "bool", "compressed", (ptrdiff_t)(&((idFile_InZip *)0)->compressed), sizeof( ((idFile_InZip *)0)->compressed ) },
	{ "uint64_t", "zipFilePos", (ptrdiff_t)(&((idFile_InZip *)0)->zipFilePos), sizeof( ((idFile_InZip *)0)->zipFilePos ) },
	{ "int", "fileSize", (ptrdiff_t)(&((idFile_InZip *)0)->fileSize), sizeof( ((idFile_InZip *)0)->fileSize ) },
	{ "void *", "z", (ptrdiff_t)(&((idFile_InZip *)0)->z), sizeof( ((idFile_InZip *)0)->z ) },
	{ NULL, 0 }
};

static classVariableInfo_t urlDownload_t_typeInfo[] = {
	{ "idStr", "url", (ptrdiff_t)(&((urlDownload_t *)0)->url), sizeof( ((urlDownload_t *)0)->url ) },
	{ "char[1024]", "dlerror", (ptrdiff_t)(&((urlDownload_t *)0)->dlerror), sizeof( ((urlDownload_t *)0)->dlerror ) },
	{ "int", "dltotal", (ptrdiff_t)(&((urlDownload_t *)0)->dltotal), sizeof( ((urlDownload_t *)0)->dltotal ) },
	{ "int", "dlnow", (ptrdiff_t)(&((urlDownload_t *)0)->dlnow), sizeof( ((urlDownload_t *)0)->dlnow ) },
	{ "int", "dlstatus", (ptrdiff_t)(&((urlDownload_t *)0)->dlstatus), sizeof( ((urlDownload_t *)0)->dlstatus ) },
	{ "dlStatus_t", "status", (ptrdiff_t)(&((urlDownload_t *)0)->status), sizeof( ((urlDownload_t *)0)->status ) },
	{ NULL, 0 }
};

static classVariableInfo_t fileDownload_t_typeInfo[] = {
	{ "int", "position", (ptrdiff_t)(&((fileDownload_t *)0)->position), sizeof( ((fileDownload_t *)0)->position ) },
	{ "int", "length", (ptrdiff_t)(&((fileDownload_t *)0)->length), sizeof( ((fileDownload_t *)0)->length ) },
	{ "void *", "buffer", (ptrdiff_t)(&((fileDownload_t *)0)->buffer), sizeof( ((fileDownload_t *)0)->buffer ) },
	{ NULL, 0 }
};

static classVariableInfo_t backgroundDownload_t_typeInfo[] = {
	{ "backgroundDownload_s *", "next", (ptrdiff_t)(&((backgroundDownload_t *)0)->next), sizeof( ((backgroundDownload_t *)0)->next ) },
	{ "dlType_t", "opcode", (ptrdiff_t)(&((backgroundDownload_t *)0)->opcode), sizeof( ((backgroundDownload_t *)0)->opcode ) },
	{ "idFile *", "f", (ptrdiff_t)(&((backgroundDownload_t *)0)->f), sizeof( ((backgroundDownload_t *)0)->f ) },
	{ "fileDownload_t", "file", (ptrdiff_t)(&((backgroundDownload_t *)0)->file), sizeof( ((backgroundDownload_t *)0)->file ) },
	{ "urlDownload_t", "url", (ptrdiff_t)(&((backgroundDownload_t *)0)->url), sizeof( ((backgroundDownload_t *)0)->url ) },
	{ "volatile bool", "completed", (ptrdiff_t)(&((backgroundDownload_t *)0)->completed), sizeof( ((backgroundDownload_t *)0)->completed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFileList_typeInfo[] = {
	{ "idStr", "basePath", (ptrdiff_t)(&((idFileList *)0)->basePath), sizeof( ((idFileList *)0)->basePath ) },
	{ "idStrList", "list", (ptrdiff_t)(&((idFileList *)0)->list), sizeof( ((idFileList *)0)->list ) },
	{ NULL, 0 }
};

static classVariableInfo_t idModList_typeInfo[] = {
	{ "idStrList", "mods", (ptrdiff_t)(&((idModList *)0)->mods), sizeof( ((idModList *)0)->mods ) },
	{ "idStrList", "descriptions", (ptrdiff_t)(&((idModList *)0)->descriptions), sizeof( ((idModList *)0)->descriptions ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFileSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t usercmd_t_typeInfo[] = {
	{ "int", "gameFrame", (ptrdiff_t)(&((usercmd_t *)0)->gameFrame), sizeof( ((usercmd_t *)0)->gameFrame ) },
	{ "int", "gameTime", (ptrdiff_t)(&((usercmd_t *)0)->gameTime), sizeof( ((usercmd_t *)0)->gameTime ) },
	{ "int", "duplicateCount", (ptrdiff_t)(&((usercmd_t *)0)->duplicateCount), sizeof( ((usercmd_t *)0)->duplicateCount ) },
	{ "byte", "buttons", (ptrdiff_t)(&((usercmd_t *)0)->buttons), sizeof( ((usercmd_t *)0)->buttons ) },
	{ "signed char", "forwardmove", (ptrdiff_t)(&((usercmd_t *)0)->forwardmove), sizeof( ((usercmd_t *)0)->forwardmove ) },
	{ "signed char", "rightmove", (ptrdiff_t)(&((usercmd_t *)0)->rightmove), sizeof( ((usercmd_t *)0)->rightmove ) },
	{ "signed char", "upmove", (ptrdiff_t)(&((usercmd_t *)0)->upmove), sizeof( ((usercmd_t *)0)->upmove ) },
	{ "short[3]", "angles", (ptrdiff_t)(&((usercmd_t *)0)->angles), sizeof( ((usercmd_t *)0)->angles ) },
	{ "short", "mx", (ptrdiff_t)(&((usercmd_t *)0)->mx), sizeof( ((usercmd_t *)0)->mx ) },
	{ "short", "my", (ptrdiff_t)(&((usercmd_t *)0)->my), sizeof( ((usercmd_t *)0)->my ) },
	{ "signed char", "impulse", (ptrdiff_t)(&((usercmd_t *)0)->impulse), sizeof( ((usercmd_t *)0)->impulse ) },
	{ "byte", "flags", (ptrdiff_t)(&((usercmd_t *)0)->flags), sizeof( ((usercmd_t *)0)->flags ) },
	{ "int", "sequence", (ptrdiff_t)(&((usercmd_t *)0)->sequence), sizeof( ((usercmd_t *)0)->sequence ) },
	{ "short", "jx", (ptrdiff_t)(&((usercmd_t *)0)->jx), sizeof( ((usercmd_t *)0)->jx ) },
	{ "short", "jy", (ptrdiff_t)(&((usercmd_t *)0)->jy), sizeof( ((usercmd_t *)0)->jy ) },
	{ NULL, 0 }
};

static classVariableInfo_t idUsercmdGen_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idDeclBase_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idDecl_typeInfo[] = {
	{ "idDeclBase *", "base", (ptrdiff_t)(&((idDecl *)0)->base), sizeof( ((idDecl *)0)->base ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idDeclTable_typeInfo[] = {
	{ "bool", "clamp", (ptrdiff_t)(&((idDeclTable *)0)->clamp), sizeof( ((idDeclTable *)0)->clamp ) },
	{ "bool", "snap", (ptrdiff_t)(&((idDeclTable *)0)->snap), sizeof( ((idDeclTable *)0)->snap ) },
	{ "idList < float >", "values", (ptrdiff_t)(&((idDeclTable *)0)->values), sizeof( ((idDeclTable *)0)->values ) },
	{ NULL, 0 }
};

static classVariableInfo_t skinMapping_t_typeInfo[] = {
	{ "const idMaterial *", "from", (ptrdiff_t)(&((skinMapping_t *)0)->from), sizeof( ((skinMapping_t *)0)->from ) },
	{ "const idMaterial *", "to", (ptrdiff_t)(&((skinMapping_t *)0)->to), sizeof( ((skinMapping_t *)0)->to ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclSkin_typeInfo[] = {
	{ "idList < skinMapping_t >", "mappings", (ptrdiff_t)(&((idDeclSkin *)0)->mappings), sizeof( ((idDeclSkin *)0)->mappings ) },
	{ "idStrList", "associatedModels", (ptrdiff_t)(&((idDeclSkin *)0)->associatedModels), sizeof( ((idDeclSkin *)0)->associatedModels ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclEntityDef_typeInfo[] = {
	{ "idDict", "dict", (ptrdiff_t)(&((idDeclEntityDef *)0)->dict), sizeof( ((idDeclEntityDef *)0)->dict ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFXSingleAction_typeInfo[] = {
	{ "int", "type", (ptrdiff_t)(&((idFXSingleAction *)0)->type), sizeof( ((idFXSingleAction *)0)->type ) },
	{ "int", "sibling", (ptrdiff_t)(&((idFXSingleAction *)0)->sibling), sizeof( ((idFXSingleAction *)0)->sibling ) },
	{ "idStr", "data", (ptrdiff_t)(&((idFXSingleAction *)0)->data), sizeof( ((idFXSingleAction *)0)->data ) },
	{ "idStr", "name", (ptrdiff_t)(&((idFXSingleAction *)0)->name), sizeof( ((idFXSingleAction *)0)->name ) },
	{ "idStr", "fire", (ptrdiff_t)(&((idFXSingleAction *)0)->fire), sizeof( ((idFXSingleAction *)0)->fire ) },
	{ "float", "delay", (ptrdiff_t)(&((idFXSingleAction *)0)->delay), sizeof( ((idFXSingleAction *)0)->delay ) },
	{ "float", "duration", (ptrdiff_t)(&((idFXSingleAction *)0)->duration), sizeof( ((idFXSingleAction *)0)->duration ) },
	{ "float", "restart", (ptrdiff_t)(&((idFXSingleAction *)0)->restart), sizeof( ((idFXSingleAction *)0)->restart ) },
	{ "float", "size", (ptrdiff_t)(&((idFXSingleAction *)0)->size), sizeof( ((idFXSingleAction *)0)->size ) },
	{ "float", "fadeInTime", (ptrdiff_t)(&((idFXSingleAction *)0)->fadeInTime), sizeof( ((idFXSingleAction *)0)->fadeInTime ) },
	{ "float", "fadeOutTime", (ptrdiff_t)(&((idFXSingleAction *)0)->fadeOutTime), sizeof( ((idFXSingleAction *)0)->fadeOutTime ) },
	{ "float", "shakeTime", (ptrdiff_t)(&((idFXSingleAction *)0)->shakeTime), sizeof( ((idFXSingleAction *)0)->shakeTime ) },
	{ "float", "shakeAmplitude", (ptrdiff_t)(&((idFXSingleAction *)0)->shakeAmplitude), sizeof( ((idFXSingleAction *)0)->shakeAmplitude ) },
	{ "float", "shakeDistance", (ptrdiff_t)(&((idFXSingleAction *)0)->shakeDistance), sizeof( ((idFXSingleAction *)0)->shakeDistance ) },
	{ "float", "shakeImpulse", (ptrdiff_t)(&((idFXSingleAction *)0)->shakeImpulse), sizeof( ((idFXSingleAction *)0)->shakeImpulse ) },
	{ "float", "lightRadius", (ptrdiff_t)(&((idFXSingleAction *)0)->lightRadius), sizeof( ((idFXSingleAction *)0)->lightRadius ) },
	{ "float", "rotate", (ptrdiff_t)(&((idFXSingleAction *)0)->rotate), sizeof( ((idFXSingleAction *)0)->rotate ) },
	{ "float", "random1", (ptrdiff_t)(&((idFXSingleAction *)0)->random1), sizeof( ((idFXSingleAction *)0)->random1 ) },
	{ "float", "random2", (ptrdiff_t)(&((idFXSingleAction *)0)->random2), sizeof( ((idFXSingleAction *)0)->random2 ) },
	{ "idVec3", "lightColor", (ptrdiff_t)(&((idFXSingleAction *)0)->lightColor), sizeof( ((idFXSingleAction *)0)->lightColor ) },
	{ "idVec3", "offset", (ptrdiff_t)(&((idFXSingleAction *)0)->offset), sizeof( ((idFXSingleAction *)0)->offset ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((idFXSingleAction *)0)->axis), sizeof( ((idFXSingleAction *)0)->axis ) },
	{ "bool", "soundStarted", (ptrdiff_t)(&((idFXSingleAction *)0)->soundStarted), sizeof( ((idFXSingleAction *)0)->soundStarted ) },
	{ "bool", "shakeStarted", (ptrdiff_t)(&((idFXSingleAction *)0)->shakeStarted), sizeof( ((idFXSingleAction *)0)->shakeStarted ) },
	{ "bool", "shakeFalloff", (ptrdiff_t)(&((idFXSingleAction *)0)->shakeFalloff), sizeof( ((idFXSingleAction *)0)->shakeFalloff ) },
	{ "bool", "shakeIgnoreMaster", (ptrdiff_t)(&((idFXSingleAction *)0)->shakeIgnoreMaster), sizeof( ((idFXSingleAction *)0)->shakeIgnoreMaster ) },
	{ "bool", "bindParticles", (ptrdiff_t)(&((idFXSingleAction *)0)->bindParticles), sizeof( ((idFXSingleAction *)0)->bindParticles ) },
	{ "bool", "explicitAxis", (ptrdiff_t)(&((idFXSingleAction *)0)->explicitAxis), sizeof( ((idFXSingleAction *)0)->explicitAxis ) },
	{ "bool", "noshadows", (ptrdiff_t)(&((idFXSingleAction *)0)->noshadows), sizeof( ((idFXSingleAction *)0)->noshadows ) },
	{ "bool", "particleTrackVelocity", (ptrdiff_t)(&((idFXSingleAction *)0)->particleTrackVelocity), sizeof( ((idFXSingleAction *)0)->particleTrackVelocity ) },
	{ "bool", "trackOrigin", (ptrdiff_t)(&((idFXSingleAction *)0)->trackOrigin), sizeof( ((idFXSingleAction *)0)->trackOrigin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclFX_typeInfo[] = {
	{ "idList < idFXSingleAction >", "events", (ptrdiff_t)(&((idDeclFX *)0)->events), sizeof( ((idDeclFX *)0)->events ) },
	{ "idStr", "joint", (ptrdiff_t)(&((idDeclFX *)0)->joint), sizeof( ((idDeclFX *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParticleParm_typeInfo[] = {
	{ "const idDeclTable *", "table", (ptrdiff_t)(&((idParticleParm *)0)->table), sizeof( ((idParticleParm *)0)->table ) },
	{ "float", "from", (ptrdiff_t)(&((idParticleParm *)0)->from), sizeof( ((idParticleParm *)0)->from ) },
	{ "float", "to", (ptrdiff_t)(&((idParticleParm *)0)->to), sizeof( ((idParticleParm *)0)->to ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPartStageData_typeInfo[] = {
	{ "int", "totalParticles", (ptrdiff_t)(&((idPartStageData *)0)->totalParticles), sizeof( ((idPartStageData *)0)->totalParticles ) },
	{ "float", "cycles", (ptrdiff_t)(&((idPartStageData *)0)->cycles), sizeof( ((idPartStageData *)0)->cycles ) },
	{ "int", "diversityPeriod", (ptrdiff_t)(&((idPartStageData *)0)->diversityPeriod), sizeof( ((idPartStageData *)0)->diversityPeriod ) },
	{ "int", "cycleMsec", (ptrdiff_t)(&((idPartStageData *)0)->cycleMsec), sizeof( ((idPartStageData *)0)->cycleMsec ) },
	{ "float", "spawnBunching", (ptrdiff_t)(&((idPartStageData *)0)->spawnBunching), sizeof( ((idPartStageData *)0)->spawnBunching ) },
	{ "float", "particleLife", (ptrdiff_t)(&((idPartStageData *)0)->particleLife), sizeof( ((idPartStageData *)0)->particleLife ) },
	{ "float", "timeOffset", (ptrdiff_t)(&((idPartStageData *)0)->timeOffset), sizeof( ((idPartStageData *)0)->timeOffset ) },
	{ "float", "deadTime", (ptrdiff_t)(&((idPartStageData *)0)->deadTime), sizeof( ((idPartStageData *)0)->deadTime ) },
	{ "prtDistribution_t", "distributionType", (ptrdiff_t)(&((idPartStageData *)0)->distributionType), sizeof( ((idPartStageData *)0)->distributionType ) },
	{ "float[4]", "distributionParms", (ptrdiff_t)(&((idPartStageData *)0)->distributionParms), sizeof( ((idPartStageData *)0)->distributionParms ) },
	{ "prtDirection_t", "directionType", (ptrdiff_t)(&((idPartStageData *)0)->directionType), sizeof( ((idPartStageData *)0)->directionType ) },
	{ "float[4]", "directionParms", (ptrdiff_t)(&((idPartStageData *)0)->directionParms), sizeof( ((idPartStageData *)0)->directionParms ) },
	{ "idParticleParm", "speed", (ptrdiff_t)(&((idPartStageData *)0)->speed), sizeof( ((idPartStageData *)0)->speed ) },
	{ "float", "gravity", (ptrdiff_t)(&((idPartStageData *)0)->gravity), sizeof( ((idPartStageData *)0)->gravity ) },
	{ "bool", "worldGravity", (ptrdiff_t)(&((idPartStageData *)0)->worldGravity), sizeof( ((idPartStageData *)0)->worldGravity ) },
	{ "bool", "worldAxis", (ptrdiff_t)(&((idPartStageData *)0)->worldAxis), sizeof( ((idPartStageData *)0)->worldAxis ) },
	{ "bool", "randomDistribution", (ptrdiff_t)(&((idPartStageData *)0)->randomDistribution), sizeof( ((idPartStageData *)0)->randomDistribution ) },
	{ "bool", "entityColor", (ptrdiff_t)(&((idPartStageData *)0)->entityColor), sizeof( ((idPartStageData *)0)->entityColor ) },
	{ "prtCustomPth_t", "customPathType", (ptrdiff_t)(&((idPartStageData *)0)->customPathType), sizeof( ((idPartStageData *)0)->customPathType ) },
	{ "float[8]", "customPathParms", (ptrdiff_t)(&((idPartStageData *)0)->customPathParms), sizeof( ((idPartStageData *)0)->customPathParms ) },
	{ "idVec3", "offset", (ptrdiff_t)(&((idPartStageData *)0)->offset), sizeof( ((idPartStageData *)0)->offset ) },
	{ "int", "animationFrames", (ptrdiff_t)(&((idPartStageData *)0)->animationFrames), sizeof( ((idPartStageData *)0)->animationFrames ) },
	{ "float", "animationRate", (ptrdiff_t)(&((idPartStageData *)0)->animationRate), sizeof( ((idPartStageData *)0)->animationRate ) },
	{ "float", "initialAngle", (ptrdiff_t)(&((idPartStageData *)0)->initialAngle), sizeof( ((idPartStageData *)0)->initialAngle ) },
	{ "idParticleParm", "rotationSpeed", (ptrdiff_t)(&((idPartStageData *)0)->rotationSpeed), sizeof( ((idPartStageData *)0)->rotationSpeed ) },
	{ "prtOrientation_t", "orientation", (ptrdiff_t)(&((idPartStageData *)0)->orientation), sizeof( ((idPartStageData *)0)->orientation ) },
	{ "float[4]", "orientationParms", (ptrdiff_t)(&((idPartStageData *)0)->orientationParms), sizeof( ((idPartStageData *)0)->orientationParms ) },
	{ "idParticleParm", "size", (ptrdiff_t)(&((idPartStageData *)0)->size), sizeof( ((idPartStageData *)0)->size ) },
	{ "idParticleParm", "aspect", (ptrdiff_t)(&((idPartStageData *)0)->aspect), sizeof( ((idPartStageData *)0)->aspect ) },
	{ "idVec4", "color", (ptrdiff_t)(&((idPartStageData *)0)->color), sizeof( ((idPartStageData *)0)->color ) },
	{ "idVec4", "fadeColor", (ptrdiff_t)(&((idPartStageData *)0)->fadeColor), sizeof( ((idPartStageData *)0)->fadeColor ) },
	{ "float", "fadeInFraction", (ptrdiff_t)(&((idPartStageData *)0)->fadeInFraction), sizeof( ((idPartStageData *)0)->fadeInFraction ) },
	{ "float", "fadeOutFraction", (ptrdiff_t)(&((idPartStageData *)0)->fadeOutFraction), sizeof( ((idPartStageData *)0)->fadeOutFraction ) },
	{ "float", "fadeIndexFraction", (ptrdiff_t)(&((idPartStageData *)0)->fadeIndexFraction), sizeof( ((idPartStageData *)0)->fadeIndexFraction ) },
	{ "float", "boundsExpansion", (ptrdiff_t)(&((idPartStageData *)0)->boundsExpansion), sizeof( ((idPartStageData *)0)->boundsExpansion ) },
	{ "bool", "useCutoffTimeMap", (ptrdiff_t)(&((idPartStageData *)0)->useCutoffTimeMap), sizeof( ((idPartStageData *)0)->useCutoffTimeMap ) },
	{ "bool", "collisionStatic", (ptrdiff_t)(&((idPartStageData *)0)->collisionStatic), sizeof( ((idPartStageData *)0)->collisionStatic ) },
	{ "bool", "collisionStaticWorldOnly", (ptrdiff_t)(&((idPartStageData *)0)->collisionStaticWorldOnly), sizeof( ((idPartStageData *)0)->collisionStaticWorldOnly ) },
	{ "prtMapLayout_t", "mapLayoutType", (ptrdiff_t)(&((idPartStageData *)0)->mapLayoutType), sizeof( ((idPartStageData *)0)->mapLayoutType ) },
	{ "int[2]", "mapLayoutSizes", (ptrdiff_t)(&((idPartStageData *)0)->mapLayoutSizes), sizeof( ((idPartStageData *)0)->mapLayoutSizes ) },
	{ "int", "collisionStaticTimeSteps", (ptrdiff_t)(&((idPartStageData *)0)->collisionStaticTimeSteps), sizeof( ((idPartStageData *)0)->collisionStaticTimeSteps ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPartSysData_typeInfo[] = {
	{ "idMat3", "entityAxis", (ptrdiff_t)(&((idPartSysData *)0)->entityAxis), sizeof( ((idPartSysData *)0)->entityAxis ) },
	{ "idMat3", "viewAxis", (ptrdiff_t)(&((idPartSysData *)0)->viewAxis), sizeof( ((idPartSysData *)0)->viewAxis ) },
	{ "idVec4", "entityParmsColor", (ptrdiff_t)(&((idPartSysData *)0)->entityParmsColor), sizeof( ((idPartSysData *)0)->entityParmsColor ) },
	{ "int", "totalParticles", (ptrdiff_t)(&((idPartSysData *)0)->totalParticles), sizeof( ((idPartSysData *)0)->totalParticles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParticleData_typeInfo[] = {
	{ "int", "index", (ptrdiff_t)(&((idParticleData *)0)->index), sizeof( ((idParticleData *)0)->index ) },
	{ "float", "frac", (ptrdiff_t)(&((idParticleData *)0)->frac), sizeof( ((idParticleData *)0)->frac ) },
	{ "int", "randomSeed", (ptrdiff_t)(&((idParticleData *)0)->randomSeed), sizeof( ((idParticleData *)0)->randomSeed ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((idParticleData *)0)->origin), sizeof( ((idParticleData *)0)->origin ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((idParticleData *)0)->axis), sizeof( ((idParticleData *)0)->axis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPartSysEmit_typeInfo[] = {
	{ "int", "viewTimeMs", (ptrdiff_t)(&((idPartSysEmit *)0)->viewTimeMs), sizeof( ((idPartSysEmit *)0)->viewTimeMs ) },
	{ "float", "entityParmsTimeOffset", (ptrdiff_t)(&((idPartSysEmit *)0)->entityParmsTimeOffset), sizeof( ((idPartSysEmit *)0)->entityParmsTimeOffset ) },
	{ "float", "entityParmsStopTime", (ptrdiff_t)(&((idPartSysEmit *)0)->entityParmsStopTime), sizeof( ((idPartSysEmit *)0)->entityParmsStopTime ) },
	{ "int", "totalParticles", (ptrdiff_t)(&((idPartSysEmit *)0)->totalParticles), sizeof( ((idPartSysEmit *)0)->totalParticles ) },
	{ "float", "randomizer", (ptrdiff_t)(&((idPartSysEmit *)0)->randomizer), sizeof( ((idPartSysEmit *)0)->randomizer ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPartSysCutoffTextureInfo_typeInfo[] = {
	{ "int", "resX", (ptrdiff_t)(&((idPartSysCutoffTextureInfo *)0)->resX), sizeof( ((idPartSysCutoffTextureInfo *)0)->resX ) },
	{ "int", "resY", (ptrdiff_t)(&((idPartSysCutoffTextureInfo *)0)->resY), sizeof( ((idPartSysCutoffTextureInfo *)0)->resY ) },
	{ "int", "baseX", (ptrdiff_t)(&((idPartSysCutoffTextureInfo *)0)->baseX), sizeof( ((idPartSysCutoffTextureInfo *)0)->baseX ) },
	{ "int", "baseY", (ptrdiff_t)(&((idPartSysCutoffTextureInfo *)0)->baseY), sizeof( ((idPartSysCutoffTextureInfo *)0)->baseY ) },
	{ "int", "sizeX", (ptrdiff_t)(&((idPartSysCutoffTextureInfo *)0)->sizeX), sizeof( ((idPartSysCutoffTextureInfo *)0)->sizeX ) },
	{ "int", "sizeY", (ptrdiff_t)(&((idPartSysCutoffTextureInfo *)0)->sizeY), sizeof( ((idPartSysCutoffTextureInfo *)0)->sizeY ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPartSysEmitterSignature_typeInfo[] = {
	{ "idStr", "mainName", (ptrdiff_t)(&((idPartSysEmitterSignature *)0)->mainName), sizeof( ((idPartSysEmitterSignature *)0)->mainName ) },
	{ "idStr", "modelSuffix", (ptrdiff_t)(&((idPartSysEmitterSignature *)0)->modelSuffix), sizeof( ((idPartSysEmitterSignature *)0)->modelSuffix ) },
	{ NULL, 0 }
};

static classVariableInfo_t idParticleStage_typeInfo[] = {
	{ "const idMaterial *", "material", (ptrdiff_t)(&((idParticleStage *)0)->material), sizeof( ((idParticleStage *)0)->material ) },
	{ "bool", "hidden", (ptrdiff_t)(&((idParticleStage *)0)->hidden), sizeof( ((idParticleStage *)0)->hidden ) },
	{ "idBounds", "stdBounds", (ptrdiff_t)(&((idParticleStage *)0)->stdBounds), sizeof( ((idParticleStage *)0)->stdBounds ) },
	{ "float", "softeningRadius", (ptrdiff_t)(&((idParticleStage *)0)->softeningRadius), sizeof( ((idParticleStage *)0)->softeningRadius ) },
	{ "idImage *", "cutoffTimeMap", (ptrdiff_t)(&((idParticleStage *)0)->cutoffTimeMap), sizeof( ((idParticleStage *)0)->cutoffTimeMap ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclParticle_typeInfo[] = {
	{ "idList < idParticleStage * >", "stages", (ptrdiff_t)(&((idDeclParticle *)0)->stages), sizeof( ((idDeclParticle *)0)->stages ) },
	{ "float", "depthHack", (ptrdiff_t)(&((idDeclParticle *)0)->depthHack), sizeof( ((idDeclParticle *)0)->depthHack ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFVector_typeInfo[] = {
	{ "idAFVector::enum_50", "type", (ptrdiff_t)(&((idAFVector *)0)->type), sizeof( ((idAFVector *)0)->type ) },
	{ "idStr", "joint1", (ptrdiff_t)(&((idAFVector *)0)->joint1), sizeof( ((idAFVector *)0)->joint1 ) },
	{ "idStr", "joint2", (ptrdiff_t)(&((idAFVector *)0)->joint2), sizeof( ((idAFVector *)0)->joint2 ) },
	{ "mutable idVec3", "vec", (ptrdiff_t)(&((idAFVector *)0)->vec), sizeof( ((idAFVector *)0)->vec ) },
	{ "bool", "negate", (ptrdiff_t)(&((idAFVector *)0)->negate), sizeof( ((idAFVector *)0)->negate ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclAF_Body_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idDeclAF_Body *)0)->name), sizeof( ((idDeclAF_Body *)0)->name ) },
	{ "idStr", "jointName", (ptrdiff_t)(&((idDeclAF_Body *)0)->jointName), sizeof( ((idDeclAF_Body *)0)->jointName ) },
	{ "declAFJointMod_t", "jointMod", (ptrdiff_t)(&((idDeclAF_Body *)0)->jointMod), sizeof( ((idDeclAF_Body *)0)->jointMod ) },
	{ "int", "modelType", (ptrdiff_t)(&((idDeclAF_Body *)0)->modelType), sizeof( ((idDeclAF_Body *)0)->modelType ) },
	{ "idAFVector", "v1", (ptrdiff_t)(&((idDeclAF_Body *)0)->v1), sizeof( ((idDeclAF_Body *)0)->v1 ) },
	{ "idAFVector", "v2", (ptrdiff_t)(&((idDeclAF_Body *)0)->v2), sizeof( ((idDeclAF_Body *)0)->v2 ) },
	{ "int", "numSides", (ptrdiff_t)(&((idDeclAF_Body *)0)->numSides), sizeof( ((idDeclAF_Body *)0)->numSides ) },
	{ "float", "width", (ptrdiff_t)(&((idDeclAF_Body *)0)->width), sizeof( ((idDeclAF_Body *)0)->width ) },
	{ "float", "density", (ptrdiff_t)(&((idDeclAF_Body *)0)->density), sizeof( ((idDeclAF_Body *)0)->density ) },
	{ "idAFVector", "origin", (ptrdiff_t)(&((idDeclAF_Body *)0)->origin), sizeof( ((idDeclAF_Body *)0)->origin ) },
	{ "idAngles", "angles", (ptrdiff_t)(&((idDeclAF_Body *)0)->angles), sizeof( ((idDeclAF_Body *)0)->angles ) },
	{ "int", "contents", (ptrdiff_t)(&((idDeclAF_Body *)0)->contents), sizeof( ((idDeclAF_Body *)0)->contents ) },
	{ "int", "clipMask", (ptrdiff_t)(&((idDeclAF_Body *)0)->clipMask), sizeof( ((idDeclAF_Body *)0)->clipMask ) },
	{ "bool", "selfCollision", (ptrdiff_t)(&((idDeclAF_Body *)0)->selfCollision), sizeof( ((idDeclAF_Body *)0)->selfCollision ) },
	{ "idMat3", "inertiaScale", (ptrdiff_t)(&((idDeclAF_Body *)0)->inertiaScale), sizeof( ((idDeclAF_Body *)0)->inertiaScale ) },
	{ "float", "linearFriction", (ptrdiff_t)(&((idDeclAF_Body *)0)->linearFriction), sizeof( ((idDeclAF_Body *)0)->linearFriction ) },
	{ "float", "angularFriction", (ptrdiff_t)(&((idDeclAF_Body *)0)->angularFriction), sizeof( ((idDeclAF_Body *)0)->angularFriction ) },
	{ "float", "contactFriction", (ptrdiff_t)(&((idDeclAF_Body *)0)->contactFriction), sizeof( ((idDeclAF_Body *)0)->contactFriction ) },
	{ "idStr", "containedJoints", (ptrdiff_t)(&((idDeclAF_Body *)0)->containedJoints), sizeof( ((idDeclAF_Body *)0)->containedJoints ) },
	{ "idAFVector", "frictionDirection", (ptrdiff_t)(&((idDeclAF_Body *)0)->frictionDirection), sizeof( ((idDeclAF_Body *)0)->frictionDirection ) },
	{ "idAFVector", "contactMotorDirection", (ptrdiff_t)(&((idDeclAF_Body *)0)->contactMotorDirection), sizeof( ((idDeclAF_Body *)0)->contactMotorDirection ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclAF_Constraint_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->name), sizeof( ((idDeclAF_Constraint *)0)->name ) },
	{ "idStr", "body1", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->body1), sizeof( ((idDeclAF_Constraint *)0)->body1 ) },
	{ "idStr", "body2", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->body2), sizeof( ((idDeclAF_Constraint *)0)->body2 ) },
	{ "declAFConstraintType_t", "type", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->type), sizeof( ((idDeclAF_Constraint *)0)->type ) },
	{ "float", "friction", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->friction), sizeof( ((idDeclAF_Constraint *)0)->friction ) },
	{ "float", "stretch", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->stretch), sizeof( ((idDeclAF_Constraint *)0)->stretch ) },
	{ "float", "compress", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->compress), sizeof( ((idDeclAF_Constraint *)0)->compress ) },
	{ "float", "damping", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->damping), sizeof( ((idDeclAF_Constraint *)0)->damping ) },
	{ "float", "restLength", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->restLength), sizeof( ((idDeclAF_Constraint *)0)->restLength ) },
	{ "float", "minLength", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->minLength), sizeof( ((idDeclAF_Constraint *)0)->minLength ) },
	{ "float", "maxLength", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->maxLength), sizeof( ((idDeclAF_Constraint *)0)->maxLength ) },
	{ "idAFVector", "anchor", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->anchor), sizeof( ((idDeclAF_Constraint *)0)->anchor ) },
	{ "idAFVector", "anchor2", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->anchor2), sizeof( ((idDeclAF_Constraint *)0)->anchor2 ) },
	{ "idAFVector[2]", "shaft", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->shaft), sizeof( ((idDeclAF_Constraint *)0)->shaft ) },
	{ "idAFVector", "axis", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->axis), sizeof( ((idDeclAF_Constraint *)0)->axis ) },
	{ "idDeclAF_Constraint::enum_51", "limit", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->limit), sizeof( ((idDeclAF_Constraint *)0)->limit ) },
	{ "idAFVector", "limitAxis", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->limitAxis), sizeof( ((idDeclAF_Constraint *)0)->limitAxis ) },
	{ "float[3]", "limitAngles", (ptrdiff_t)(&((idDeclAF_Constraint *)0)->limitAngles), sizeof( ((idDeclAF_Constraint *)0)->limitAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclAF_typeInfo[] = {
	{ "bool", "modified", (ptrdiff_t)(&((idDeclAF *)0)->modified), sizeof( ((idDeclAF *)0)->modified ) },
	{ "idStr", "model", (ptrdiff_t)(&((idDeclAF *)0)->model), sizeof( ((idDeclAF *)0)->model ) },
	{ "idStr", "skin", (ptrdiff_t)(&((idDeclAF *)0)->skin), sizeof( ((idDeclAF *)0)->skin ) },
	{ "float", "defaultLinearFriction", (ptrdiff_t)(&((idDeclAF *)0)->defaultLinearFriction), sizeof( ((idDeclAF *)0)->defaultLinearFriction ) },
	{ "float", "defaultAngularFriction", (ptrdiff_t)(&((idDeclAF *)0)->defaultAngularFriction), sizeof( ((idDeclAF *)0)->defaultAngularFriction ) },
	{ "float", "defaultContactFriction", (ptrdiff_t)(&((idDeclAF *)0)->defaultContactFriction), sizeof( ((idDeclAF *)0)->defaultContactFriction ) },
	{ "float", "defaultConstraintFriction", (ptrdiff_t)(&((idDeclAF *)0)->defaultConstraintFriction), sizeof( ((idDeclAF *)0)->defaultConstraintFriction ) },
	{ "float", "totalMass", (ptrdiff_t)(&((idDeclAF *)0)->totalMass), sizeof( ((idDeclAF *)0)->totalMass ) },
	{ "idVec2", "suspendVelocity", (ptrdiff_t)(&((idDeclAF *)0)->suspendVelocity), sizeof( ((idDeclAF *)0)->suspendVelocity ) },
	{ "idVec2", "suspendAcceleration", (ptrdiff_t)(&((idDeclAF *)0)->suspendAcceleration), sizeof( ((idDeclAF *)0)->suspendAcceleration ) },
	{ "float", "noMoveTime", (ptrdiff_t)(&((idDeclAF *)0)->noMoveTime), sizeof( ((idDeclAF *)0)->noMoveTime ) },
	{ "float", "noMoveTranslation", (ptrdiff_t)(&((idDeclAF *)0)->noMoveTranslation), sizeof( ((idDeclAF *)0)->noMoveTranslation ) },
	{ "float", "noMoveRotation", (ptrdiff_t)(&((idDeclAF *)0)->noMoveRotation), sizeof( ((idDeclAF *)0)->noMoveRotation ) },
	{ "float", "minMoveTime", (ptrdiff_t)(&((idDeclAF *)0)->minMoveTime), sizeof( ((idDeclAF *)0)->minMoveTime ) },
	{ "float", "maxMoveTime", (ptrdiff_t)(&((idDeclAF *)0)->maxMoveTime), sizeof( ((idDeclAF *)0)->maxMoveTime ) },
	{ "int", "contents", (ptrdiff_t)(&((idDeclAF *)0)->contents), sizeof( ((idDeclAF *)0)->contents ) },
	{ "int", "clipMask", (ptrdiff_t)(&((idDeclAF *)0)->clipMask), sizeof( ((idDeclAF *)0)->clipMask ) },
	{ "bool", "selfCollision", (ptrdiff_t)(&((idDeclAF *)0)->selfCollision), sizeof( ((idDeclAF *)0)->selfCollision ) },
	{ "idList < idDeclAF_Body * >", "bodies", (ptrdiff_t)(&((idDeclAF *)0)->bodies), sizeof( ((idDeclAF *)0)->bodies ) },
	{ "idList < idDeclAF_Constraint * >", "constraints", (ptrdiff_t)(&((idDeclAF *)0)->constraints), sizeof( ((idDeclAF *)0)->constraints ) },
	{ NULL, 0 }
};

static classVariableInfo_t cinData_t_typeInfo[] = {
	{ "int", "imageWidth", (ptrdiff_t)(&((cinData_t *)0)->imageWidth), sizeof( ((cinData_t *)0)->imageWidth ) },
	{ "int", "imageHeight", (ptrdiff_t)(&((cinData_t *)0)->imageHeight), sizeof( ((cinData_t *)0)->imageHeight ) },
	{ "const byte *", "image", (ptrdiff_t)(&((cinData_t *)0)->image), sizeof( ((cinData_t *)0)->image ) },
	{ "int", "status", (ptrdiff_t)(&((cinData_t *)0)->status), sizeof( ((cinData_t *)0)->status ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCinematic_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSndWindow_typeInfo[] = {
	{ "bool", "showWaveform", (ptrdiff_t)(&((idSndWindow *)0)->showWaveform), sizeof( ((idSndWindow *)0)->showWaveform ) },
	{ NULL, 0 }
};

static classVariableInfo_t decalInfo_t_typeInfo[] = {
	{ "int", "stayTime", (ptrdiff_t)(&((decalInfo_t *)0)->stayTime), sizeof( ((decalInfo_t *)0)->stayTime ) },
	{ "int", "fadeTime", (ptrdiff_t)(&((decalInfo_t *)0)->fadeTime), sizeof( ((decalInfo_t *)0)->fadeTime ) },
	{ "float[4]", "start", (ptrdiff_t)(&((decalInfo_t *)0)->start), sizeof( ((decalInfo_t *)0)->start ) },
	{ "float[4]", "end", (ptrdiff_t)(&((decalInfo_t *)0)->end), sizeof( ((decalInfo_t *)0)->end ) },
	{ NULL, 0 }
};

static classVariableInfo_t expOp_t_typeInfo[] = {
	{ "expOpType_t", "opType", (ptrdiff_t)(&((expOp_t *)0)->opType), sizeof( ((expOp_t *)0)->opType ) },
	{ "int", "a", (ptrdiff_t)(&((expOp_t *)0)->a), sizeof( ((expOp_t *)0)->a ) },
	{ "int", "b", (ptrdiff_t)(&((expOp_t *)0)->b), sizeof( ((expOp_t *)0)->b ) },
	{ "int", "c", (ptrdiff_t)(&((expOp_t *)0)->c), sizeof( ((expOp_t *)0)->c ) },
	{ NULL, 0 }
};

static classVariableInfo_t colorStage_t_typeInfo[] = {
	{ "int[4]", "registers", (ptrdiff_t)(&((colorStage_t *)0)->registers), sizeof( ((colorStage_t *)0)->registers ) },
	{ NULL, 0 }
};

static classVariableInfo_t textureStage_t_typeInfo[] = {
	{ "idCinematic *", "cinematic", (ptrdiff_t)(&((textureStage_t *)0)->cinematic), sizeof( ((textureStage_t *)0)->cinematic ) },
	{ "idImage *", "image", (ptrdiff_t)(&((textureStage_t *)0)->image), sizeof( ((textureStage_t *)0)->image ) },
	{ "texgen_t", "texgen", (ptrdiff_t)(&((textureStage_t *)0)->texgen), sizeof( ((textureStage_t *)0)->texgen ) },
	{ "bool", "hasMatrix", (ptrdiff_t)(&((textureStage_t *)0)->hasMatrix), sizeof( ((textureStage_t *)0)->hasMatrix ) },
	{ "int[6]", "matrix", (ptrdiff_t)(&((textureStage_t *)0)->matrix), sizeof( ((textureStage_t *)0)->matrix ) },
	{ "dynamicidImage_t", "dynamic", (ptrdiff_t)(&((textureStage_t *)0)->dynamic), sizeof( ((textureStage_t *)0)->dynamic ) },
	{ "int", "width", (ptrdiff_t)(&((textureStage_t *)0)->width), sizeof( ((textureStage_t *)0)->width ) },
	{ "int", "height", (ptrdiff_t)(&((textureStage_t *)0)->height), sizeof( ((textureStage_t *)0)->height ) },
	{ "int", "dynamicFrameCount", (ptrdiff_t)(&((textureStage_t *)0)->dynamicFrameCount), sizeof( ((textureStage_t *)0)->dynamicFrameCount ) },
	{ NULL, 0 }
};

static classVariableInfo_t newShaderStage_t_typeInfo[] = {
	{ "int", "numVertexParms", (ptrdiff_t)(&((newShaderStage_t *)0)->numVertexParms), sizeof( ((newShaderStage_t *)0)->numVertexParms ) },
	{ "int[16]", "vertexParms", (ptrdiff_t)(&((newShaderStage_t *)0)->vertexParms), sizeof( ((newShaderStage_t *)0)->vertexParms ) },
	{ "int", "numFragmentProgramImages", (ptrdiff_t)(&((newShaderStage_t *)0)->numFragmentProgramImages), sizeof( ((newShaderStage_t *)0)->numFragmentProgramImages ) },
	{ "idImage *[8]", "fragmentProgramImages", (ptrdiff_t)(&((newShaderStage_t *)0)->fragmentProgramImages), sizeof( ((newShaderStage_t *)0)->fragmentProgramImages ) },
	{ "GLSLProgram *", "glslProgram", (ptrdiff_t)(&((newShaderStage_t *)0)->glslProgram), sizeof( ((newShaderStage_t *)0)->glslProgram ) },
	{ NULL, 0 }
};

static classVariableInfo_t shaderStage_t_typeInfo[] = {
	{ "int", "conditionRegister", (ptrdiff_t)(&((shaderStage_t *)0)->conditionRegister), sizeof( ((shaderStage_t *)0)->conditionRegister ) },
	{ "stageLighting_t", "lighting", (ptrdiff_t)(&((shaderStage_t *)0)->lighting), sizeof( ((shaderStage_t *)0)->lighting ) },
	{ "int", "drawStateBits", (ptrdiff_t)(&((shaderStage_t *)0)->drawStateBits), sizeof( ((shaderStage_t *)0)->drawStateBits ) },
	{ "colorStage_t", "color", (ptrdiff_t)(&((shaderStage_t *)0)->color), sizeof( ((shaderStage_t *)0)->color ) },
	{ "bool", "hasAlphaTest", (ptrdiff_t)(&((shaderStage_t *)0)->hasAlphaTest), sizeof( ((shaderStage_t *)0)->hasAlphaTest ) },
	{ "int", "alphaTestRegister", (ptrdiff_t)(&((shaderStage_t *)0)->alphaTestRegister), sizeof( ((shaderStage_t *)0)->alphaTestRegister ) },
	{ "textureStage_t", "texture", (ptrdiff_t)(&((shaderStage_t *)0)->texture), sizeof( ((shaderStage_t *)0)->texture ) },
	{ "stageVertexColor_t", "vertexColor", (ptrdiff_t)(&((shaderStage_t *)0)->vertexColor), sizeof( ((shaderStage_t *)0)->vertexColor ) },
	{ "bool", "ignoreAlphaTest", (ptrdiff_t)(&((shaderStage_t *)0)->ignoreAlphaTest), sizeof( ((shaderStage_t *)0)->ignoreAlphaTest ) },
	{ "float", "privatePolygonOffset", (ptrdiff_t)(&((shaderStage_t *)0)->privatePolygonOffset), sizeof( ((shaderStage_t *)0)->privatePolygonOffset ) },
	{ "newShaderStage_t *", "newStage", (ptrdiff_t)(&((shaderStage_t *)0)->newStage), sizeof( ((shaderStage_t *)0)->newStage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMaterial_typeInfo[] = {
	{ "idStr", "desc", (ptrdiff_t)(&((idMaterial *)0)->desc), sizeof( ((idMaterial *)0)->desc ) },
	{ "idStr", "renderBump", (ptrdiff_t)(&((idMaterial *)0)->renderBump), sizeof( ((idMaterial *)0)->renderBump ) },
	{ "idImage *", "lightFalloffImage", (ptrdiff_t)(&((idMaterial *)0)->lightFalloffImage), sizeof( ((idMaterial *)0)->lightFalloffImage ) },
	{ "int", "entityGui", (ptrdiff_t)(&((idMaterial *)0)->entityGui), sizeof( ((idMaterial *)0)->entityGui ) },
	{ "mutable idUserInterface *", "gui", (ptrdiff_t)(&((idMaterial *)0)->gui), sizeof( ((idMaterial *)0)->gui ) },
	{ "bool", "noFog", (ptrdiff_t)(&((idMaterial *)0)->noFog), sizeof( ((idMaterial *)0)->noFog ) },
	{ "float", "fogAlpha", (ptrdiff_t)(&((idMaterial *)0)->fogAlpha), sizeof( ((idMaterial *)0)->fogAlpha ) },
	{ "int", "spectrum", (ptrdiff_t)(&((idMaterial *)0)->spectrum), sizeof( ((idMaterial *)0)->spectrum ) },
	{ "float", "polygonOffset", (ptrdiff_t)(&((idMaterial *)0)->polygonOffset), sizeof( ((idMaterial *)0)->polygonOffset ) },
	{ "float", "shadowmapOffset", (ptrdiff_t)(&((idMaterial *)0)->shadowmapOffset), sizeof( ((idMaterial *)0)->shadowmapOffset ) },
	{ "int", "contentFlags", (ptrdiff_t)(&((idMaterial *)0)->contentFlags), sizeof( ((idMaterial *)0)->contentFlags ) },
	{ "int", "surfaceFlags", (ptrdiff_t)(&((idMaterial *)0)->surfaceFlags), sizeof( ((idMaterial *)0)->surfaceFlags ) },
	{ "mutable int", "materialFlags", (ptrdiff_t)(&((idMaterial *)0)->materialFlags), sizeof( ((idMaterial *)0)->materialFlags ) },
	{ "idStr", "materialImage", (ptrdiff_t)(&((idMaterial *)0)->materialImage), sizeof( ((idMaterial *)0)->materialImage ) },
	{ "decalInfo_t", "decalInfo", (ptrdiff_t)(&((idMaterial *)0)->decalInfo), sizeof( ((idMaterial *)0)->decalInfo ) },
	{ "colorStage_t", "ambientRimColor", (ptrdiff_t)(&((idMaterial *)0)->ambientRimColor), sizeof( ((idMaterial *)0)->ambientRimColor ) },
	{ "mutable float", "sort", (ptrdiff_t)(&((idMaterial *)0)->sort), sizeof( ((idMaterial *)0)->sort ) },
	{ "deform_t", "deform", (ptrdiff_t)(&((idMaterial *)0)->deform), sizeof( ((idMaterial *)0)->deform ) },
	{ "int[4]", "deformRegisters", (ptrdiff_t)(&((idMaterial *)0)->deformRegisters), sizeof( ((idMaterial *)0)->deformRegisters ) },
	{ "const idDecl *", "deformDecl", (ptrdiff_t)(&((idMaterial *)0)->deformDecl), sizeof( ((idMaterial *)0)->deformDecl ) },
	{ "int[4]", "texGenRegisters", (ptrdiff_t)(&((idMaterial *)0)->texGenRegisters), sizeof( ((idMaterial *)0)->texGenRegisters ) },
	{ "materialCoverage_t", "coverage", (ptrdiff_t)(&((idMaterial *)0)->coverage), sizeof( ((idMaterial *)0)->coverage ) },
	{ "cullType_t", "cullType", (ptrdiff_t)(&((idMaterial *)0)->cullType), sizeof( ((idMaterial *)0)->cullType ) },
	{ "bool", "shouldCreateBackSides", (ptrdiff_t)(&((idMaterial *)0)->shouldCreateBackSides), sizeof( ((idMaterial *)0)->shouldCreateBackSides ) },
	{ "bool", "fogLight", (ptrdiff_t)(&((idMaterial *)0)->fogLight), sizeof( ((idMaterial *)0)->fogLight ) },
	{ "bool", "blendLight", (ptrdiff_t)(&((idMaterial *)0)->blendLight), sizeof( ((idMaterial *)0)->blendLight ) },
	{ "bool", "ambientLight", (ptrdiff_t)(&((idMaterial *)0)->ambientLight), sizeof( ((idMaterial *)0)->ambientLight ) },
	{ "bool", "cubicLight", (ptrdiff_t)(&((idMaterial *)0)->cubicLight), sizeof( ((idMaterial *)0)->cubicLight ) },
	{ "bool", "volumetricLight", (ptrdiff_t)(&((idMaterial *)0)->volumetricLight), sizeof( ((idMaterial *)0)->volumetricLight ) },
	{ "bool", "unsmoothedTangents", (ptrdiff_t)(&((idMaterial *)0)->unsmoothedTangents), sizeof( ((idMaterial *)0)->unsmoothedTangents ) },
	{ "bool", "hasSubview", (ptrdiff_t)(&((idMaterial *)0)->hasSubview), sizeof( ((idMaterial *)0)->hasSubview ) },
	{ "bool", "allowOverlays", (ptrdiff_t)(&((idMaterial *)0)->allowOverlays), sizeof( ((idMaterial *)0)->allowOverlays ) },
	{ "bool", "isLightgemSurf", (ptrdiff_t)(&((idMaterial *)0)->isLightgemSurf), sizeof( ((idMaterial *)0)->isLightgemSurf ) },
	{ "int", "numOps", (ptrdiff_t)(&((idMaterial *)0)->numOps), sizeof( ((idMaterial *)0)->numOps ) },
	{ "expOp_t *", "ops", (ptrdiff_t)(&((idMaterial *)0)->ops), sizeof( ((idMaterial *)0)->ops ) },
	{ "int", "numRegisters", (ptrdiff_t)(&((idMaterial *)0)->numRegisters), sizeof( ((idMaterial *)0)->numRegisters ) },
	{ "float *", "expressionRegisters", (ptrdiff_t)(&((idMaterial *)0)->expressionRegisters), sizeof( ((idMaterial *)0)->expressionRegisters ) },
	{ "float *", "constantRegisters", (ptrdiff_t)(&((idMaterial *)0)->constantRegisters), sizeof( ((idMaterial *)0)->constantRegisters ) },
	{ "int", "numStages", (ptrdiff_t)(&((idMaterial *)0)->numStages), sizeof( ((idMaterial *)0)->numStages ) },
	{ "int", "numAmbientStages", (ptrdiff_t)(&((idMaterial *)0)->numAmbientStages), sizeof( ((idMaterial *)0)->numAmbientStages ) },
	{ "shaderStage_t *", "stages", (ptrdiff_t)(&((idMaterial *)0)->stages), sizeof( ((idMaterial *)0)->stages ) },
	{ "mtrParsingData_s *", "pd", (ptrdiff_t)(&((idMaterial *)0)->pd), sizeof( ((idMaterial *)0)->pd ) },
	{ "float", "surfaceArea", (ptrdiff_t)(&((idMaterial *)0)->surfaceArea), sizeof( ((idMaterial *)0)->surfaceArea ) },
	{ "idStr", "editorImageName", (ptrdiff_t)(&((idMaterial *)0)->editorImageName), sizeof( ((idMaterial *)0)->editorImageName ) },
	{ "mutable idImage *", "editorImage", (ptrdiff_t)(&((idMaterial *)0)->editorImage), sizeof( ((idMaterial *)0)->editorImage ) },
	{ "float", "editorAlpha", (ptrdiff_t)(&((idMaterial *)0)->editorAlpha), sizeof( ((idMaterial *)0)->editorAlpha ) },
	{ "bool", "suppressInSubview", (ptrdiff_t)(&((idMaterial *)0)->suppressInSubview), sizeof( ((idMaterial *)0)->suppressInSubview ) },
	{ "bool", "portalSky", (ptrdiff_t)(&((idMaterial *)0)->portalSky), sizeof( ((idMaterial *)0)->portalSky ) },
	{ "int", "refCount", (ptrdiff_t)(&((idMaterial *)0)->refCount), sizeof( ((idMaterial *)0)->refCount ) },
	{ NULL, 0 }
};

static classVariableInfo_t vertCacheHandle_t_typeInfo[] = {
	{ "uint32_t", "size", (ptrdiff_t)(&((vertCacheHandle_t *)0)->size), sizeof( ((vertCacheHandle_t *)0)->size ) },
	{ "uint32_t", "offset", (ptrdiff_t)(&((vertCacheHandle_t *)0)->offset), sizeof( ((vertCacheHandle_t *)0)->offset ) },
//	{ "uint16_t", "frameNumber", (ptrdiff_t)(&((vertCacheHandle_t *)0)->frameNumber), sizeof( ((vertCacheHandle_t *)0)->frameNumber ) },
//	{ "bool", "isStatic", (ptrdiff_t)(&((vertCacheHandle_t *)0)->isStatic), sizeof( ((vertCacheHandle_t *)0)->isStatic ) },
	{ NULL, 0 }
};

static classVariableInfo_t silEdge_t_typeInfo[] = {
	{ "glIndex_t", "p1", (ptrdiff_t)(&((silEdge_t *)0)->p1), sizeof( ((silEdge_t *)0)->p1 ) },
	{ "glIndex_t", "p2", (ptrdiff_t)(&((silEdge_t *)0)->p2), sizeof( ((silEdge_t *)0)->p2 ) },
	{ "glIndex_t", "v1", (ptrdiff_t)(&((silEdge_t *)0)->v1), sizeof( ((silEdge_t *)0)->v1 ) },
	{ "glIndex_t", "v2", (ptrdiff_t)(&((silEdge_t *)0)->v2), sizeof( ((silEdge_t *)0)->v2 ) },
	{ NULL, 0 }
};

static classVariableInfo_t dominantTri_t_typeInfo[] = {
	{ "glIndex_t", "v2", (ptrdiff_t)(&((dominantTri_t *)0)->v2), sizeof( ((dominantTri_t *)0)->v2 ) },
	{ "glIndex_t", "v3", (ptrdiff_t)(&((dominantTri_t *)0)->v3), sizeof( ((dominantTri_t *)0)->v3 ) },
	{ "float[3]", "normalizationScale", (ptrdiff_t)(&((dominantTri_t *)0)->normalizationScale), sizeof( ((dominantTri_t *)0)->normalizationScale ) },
	{ NULL, 0 }
};

static classVariableInfo_t shadowCache_t_typeInfo[] = {
	{ "idVec4", "xyz", (ptrdiff_t)(&((shadowCache_t *)0)->xyz), sizeof( ((shadowCache_t *)0)->xyz ) },
	{ NULL, 0 }
};

static classVariableInfo_t srfTriangles_t_typeInfo[] = {
	{ "idBounds", "bounds", (ptrdiff_t)(&((srfTriangles_t *)0)->bounds), sizeof( ((srfTriangles_t *)0)->bounds ) },
	{ "int", "ambientViewCount", (ptrdiff_t)(&((srfTriangles_t *)0)->ambientViewCount), sizeof( ((srfTriangles_t *)0)->ambientViewCount ) },
	{ "bool", "generateNormals", (ptrdiff_t)(&((srfTriangles_t *)0)->generateNormals), sizeof( ((srfTriangles_t *)0)->generateNormals ) },
	{ "bool", "tangentsCalculated", (ptrdiff_t)(&((srfTriangles_t *)0)->tangentsCalculated), sizeof( ((srfTriangles_t *)0)->tangentsCalculated ) },
	{ "bool", "facePlanesCalculated", (ptrdiff_t)(&((srfTriangles_t *)0)->facePlanesCalculated), sizeof( ((srfTriangles_t *)0)->facePlanesCalculated ) },
	{ "bool", "perfectHull", (ptrdiff_t)(&((srfTriangles_t *)0)->perfectHull), sizeof( ((srfTriangles_t *)0)->perfectHull ) },
	{ "bool", "deformedSurface", (ptrdiff_t)(&((srfTriangles_t *)0)->deformedSurface), sizeof( ((srfTriangles_t *)0)->deformedSurface ) },
	{ "int", "numVerts", (ptrdiff_t)(&((srfTriangles_t *)0)->numVerts), sizeof( ((srfTriangles_t *)0)->numVerts ) },
	{ "idDrawVert *", "verts", (ptrdiff_t)(&((srfTriangles_t *)0)->verts), sizeof( ((srfTriangles_t *)0)->verts ) },
	{ "int", "numIndexes", (ptrdiff_t)(&((srfTriangles_t *)0)->numIndexes), sizeof( ((srfTriangles_t *)0)->numIndexes ) },
	{ "glIndex_t *", "indexes", (ptrdiff_t)(&((srfTriangles_t *)0)->indexes), sizeof( ((srfTriangles_t *)0)->indexes ) },
	{ "glIndex_t *", "silIndexes", (ptrdiff_t)(&((srfTriangles_t *)0)->silIndexes), sizeof( ((srfTriangles_t *)0)->silIndexes ) },
	{ "int", "numMirroredVerts", (ptrdiff_t)(&((srfTriangles_t *)0)->numMirroredVerts), sizeof( ((srfTriangles_t *)0)->numMirroredVerts ) },
	{ "int *", "mirroredVerts", (ptrdiff_t)(&((srfTriangles_t *)0)->mirroredVerts), sizeof( ((srfTriangles_t *)0)->mirroredVerts ) },
	{ "int", "numDupVerts", (ptrdiff_t)(&((srfTriangles_t *)0)->numDupVerts), sizeof( ((srfTriangles_t *)0)->numDupVerts ) },
	{ "int *", "dupVerts", (ptrdiff_t)(&((srfTriangles_t *)0)->dupVerts), sizeof( ((srfTriangles_t *)0)->dupVerts ) },
	{ "int", "numSilEdges", (ptrdiff_t)(&((srfTriangles_t *)0)->numSilEdges), sizeof( ((srfTriangles_t *)0)->numSilEdges ) },
	{ "silEdge_t *", "silEdges", (ptrdiff_t)(&((srfTriangles_t *)0)->silEdges), sizeof( ((srfTriangles_t *)0)->silEdges ) },
	{ "idPlane *", "facePlanes", (ptrdiff_t)(&((srfTriangles_t *)0)->facePlanes), sizeof( ((srfTriangles_t *)0)->facePlanes ) },
	{ "dominantTri_t *", "dominantTris", (ptrdiff_t)(&((srfTriangles_t *)0)->dominantTris), sizeof( ((srfTriangles_t *)0)->dominantTris ) },
	{ "int", "numShadowIndexesNoFrontCaps", (ptrdiff_t)(&((srfTriangles_t *)0)->numShadowIndexesNoFrontCaps), sizeof( ((srfTriangles_t *)0)->numShadowIndexesNoFrontCaps ) },
	{ "int", "numShadowIndexesNoCaps", (ptrdiff_t)(&((srfTriangles_t *)0)->numShadowIndexesNoCaps), sizeof( ((srfTriangles_t *)0)->numShadowIndexesNoCaps ) },
	{ "int", "shadowCapPlaneBits", (ptrdiff_t)(&((srfTriangles_t *)0)->shadowCapPlaneBits), sizeof( ((srfTriangles_t *)0)->shadowCapPlaneBits ) },
	{ "shadowCache_t *", "shadowVertexes", (ptrdiff_t)(&((srfTriangles_t *)0)->shadowVertexes), sizeof( ((srfTriangles_t *)0)->shadowVertexes ) },
	{ "srfTriangles_s *", "ambientSurface", (ptrdiff_t)(&((srfTriangles_t *)0)->ambientSurface), sizeof( ((srfTriangles_t *)0)->ambientSurface ) },
	{ "srfTriangles_s *", "nextDeferredFree", (ptrdiff_t)(&((srfTriangles_t *)0)->nextDeferredFree), sizeof( ((srfTriangles_t *)0)->nextDeferredFree ) },
	{ "vertCacheHandle_t", "indexCache", (ptrdiff_t)(&((srfTriangles_t *)0)->indexCache), sizeof( ((srfTriangles_t *)0)->indexCache ) },
	{ "vertCacheHandle_t", "ambientCache", (ptrdiff_t)(&((srfTriangles_t *)0)->ambientCache), sizeof( ((srfTriangles_t *)0)->ambientCache ) },
	{ "vertCacheHandle_t", "shadowCache", (ptrdiff_t)(&((srfTriangles_t *)0)->shadowCache), sizeof( ((srfTriangles_t *)0)->shadowCache ) },
	{ NULL, 0 }
};

static classVariableInfo_t modelSurface_t_typeInfo[] = {
	{ "int", "id", (ptrdiff_t)(&((modelSurface_t *)0)->id), sizeof( ((modelSurface_t *)0)->id ) },
	{ "const idMaterial *", "material", (ptrdiff_t)(&((modelSurface_t *)0)->material), sizeof( ((modelSurface_t *)0)->material ) },
	{ "srfTriangles_t *", "geometry", (ptrdiff_t)(&((modelSurface_t *)0)->geometry), sizeof( ((modelSurface_t *)0)->geometry ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMD5Joint_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idMD5Joint *)0)->name), sizeof( ((idMD5Joint *)0)->name ) },
	{ "const idMD5Joint *", "parent", (ptrdiff_t)(&((idMD5Joint *)0)->parent), sizeof( ((idMD5Joint *)0)->parent ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRenderModel_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idRenderModelManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t glconfig_t_typeInfo[] = {
	{ "bool", "isInitialized", (ptrdiff_t)(&((glconfig_t *)0)->isInitialized), sizeof( ((glconfig_t *)0)->isInitialized ) },
	{ "const char *", "renderer_string", (ptrdiff_t)(&((glconfig_t *)0)->renderer_string), sizeof( ((glconfig_t *)0)->renderer_string ) },
	{ "const char *", "vendor_string", (ptrdiff_t)(&((glconfig_t *)0)->vendor_string), sizeof( ((glconfig_t *)0)->vendor_string ) },
	{ "const char *", "version_string", (ptrdiff_t)(&((glconfig_t *)0)->version_string), sizeof( ((glconfig_t *)0)->version_string ) },
	{ "const char *", "wgl_extensions_string", (ptrdiff_t)(&((glconfig_t *)0)->wgl_extensions_string), sizeof( ((glconfig_t *)0)->wgl_extensions_string ) },
	{ "glVendor_t", "vendor", (ptrdiff_t)(&((glconfig_t *)0)->vendor), sizeof( ((glconfig_t *)0)->vendor ) },
	{ "int", "vidWidth", (ptrdiff_t)(&((glconfig_t *)0)->vidWidth), sizeof( ((glconfig_t *)0)->vidWidth ) },
	{ "int", "vidHeight", (ptrdiff_t)(&((glconfig_t *)0)->vidHeight), sizeof( ((glconfig_t *)0)->vidHeight ) },
	{ "int", "displayFrequency", (ptrdiff_t)(&((glconfig_t *)0)->displayFrequency), sizeof( ((glconfig_t *)0)->displayFrequency ) },
	{ "bool", "isFullscreen", (ptrdiff_t)(&((glconfig_t *)0)->isFullscreen), sizeof( ((glconfig_t *)0)->isFullscreen ) },
	{ "bool", "srgb", (ptrdiff_t)(&((glconfig_t *)0)->srgb), sizeof( ((glconfig_t *)0)->srgb ) },
	{ "bool", "anisotropicAvailable", (ptrdiff_t)(&((glconfig_t *)0)->anisotropicAvailable), sizeof( ((glconfig_t *)0)->anisotropicAvailable ) },
	{ "bool", "depthBoundsTestAvailable", (ptrdiff_t)(&((glconfig_t *)0)->depthBoundsTestAvailable), sizeof( ((glconfig_t *)0)->depthBoundsTestAvailable ) },
	{ "bool", "geometryShaderAvailable", (ptrdiff_t)(&((glconfig_t *)0)->geometryShaderAvailable), sizeof( ((glconfig_t *)0)->geometryShaderAvailable ) },
	{ "bool", "bufferStorageAvailable", (ptrdiff_t)(&((glconfig_t *)0)->bufferStorageAvailable), sizeof( ((glconfig_t *)0)->bufferStorageAvailable ) },
	{ "bool", "stencilTexturing", (ptrdiff_t)(&((glconfig_t *)0)->stencilTexturing), sizeof( ((glconfig_t *)0)->stencilTexturing ) },
	{ "int", "maxTextureSize", (ptrdiff_t)(&((glconfig_t *)0)->maxTextureSize), sizeof( ((glconfig_t *)0)->maxTextureSize ) },
	{ "int", "maxTextures", (ptrdiff_t)(&((glconfig_t *)0)->maxTextures), sizeof( ((glconfig_t *)0)->maxTextures ) },
	{ "int", "maxTextureUnits", (ptrdiff_t)(&((glconfig_t *)0)->maxTextureUnits), sizeof( ((glconfig_t *)0)->maxTextureUnits ) },
	{ "float", "maxTextureAnisotropy", (ptrdiff_t)(&((glconfig_t *)0)->maxTextureAnisotropy), sizeof( ((glconfig_t *)0)->maxTextureAnisotropy ) },
	{ "int", "maxSamples", (ptrdiff_t)(&((glconfig_t *)0)->maxSamples), sizeof( ((glconfig_t *)0)->maxSamples ) },
	{ NULL, 0 }
};

static classVariableInfo_t glyphInfo_t_typeInfo[] = {
	{ "int", "height", (ptrdiff_t)(&((glyphInfo_t *)0)->height), sizeof( ((glyphInfo_t *)0)->height ) },
	{ "int", "top", (ptrdiff_t)(&((glyphInfo_t *)0)->top), sizeof( ((glyphInfo_t *)0)->top ) },
	{ "int", "bottom", (ptrdiff_t)(&((glyphInfo_t *)0)->bottom), sizeof( ((glyphInfo_t *)0)->bottom ) },
	{ "int", "pitch", (ptrdiff_t)(&((glyphInfo_t *)0)->pitch), sizeof( ((glyphInfo_t *)0)->pitch ) },
	{ "int", "xSkip", (ptrdiff_t)(&((glyphInfo_t *)0)->xSkip), sizeof( ((glyphInfo_t *)0)->xSkip ) },
	{ "int", "imageWidth", (ptrdiff_t)(&((glyphInfo_t *)0)->imageWidth), sizeof( ((glyphInfo_t *)0)->imageWidth ) },
	{ "int", "imageHeight", (ptrdiff_t)(&((glyphInfo_t *)0)->imageHeight), sizeof( ((glyphInfo_t *)0)->imageHeight ) },
	{ "float", "s", (ptrdiff_t)(&((glyphInfo_t *)0)->s), sizeof( ((glyphInfo_t *)0)->s ) },
	{ "float", "t", (ptrdiff_t)(&((glyphInfo_t *)0)->t), sizeof( ((glyphInfo_t *)0)->t ) },
	{ "float", "s2", (ptrdiff_t)(&((glyphInfo_t *)0)->s2), sizeof( ((glyphInfo_t *)0)->s2 ) },
	{ "float", "t2", (ptrdiff_t)(&((glyphInfo_t *)0)->t2), sizeof( ((glyphInfo_t *)0)->t2 ) },
	{ "const idMaterial *", "glyph", (ptrdiff_t)(&((glyphInfo_t *)0)->glyph), sizeof( ((glyphInfo_t *)0)->glyph ) },
	{ "char[32]", "shaderName", (ptrdiff_t)(&((glyphInfo_t *)0)->shaderName), sizeof( ((glyphInfo_t *)0)->shaderName ) },
	{ NULL, 0 }
};

static classVariableInfo_t fontInfo_t_typeInfo[] = {
	{ "glyphInfo_t[256]", "glyphs", (ptrdiff_t)(&((fontInfo_t *)0)->glyphs), sizeof( ((fontInfo_t *)0)->glyphs ) },
	{ "float", "glyphScale", (ptrdiff_t)(&((fontInfo_t *)0)->glyphScale), sizeof( ((fontInfo_t *)0)->glyphScale ) },
	{ "char[64]", "name", (ptrdiff_t)(&((fontInfo_t *)0)->name), sizeof( ((fontInfo_t *)0)->name ) },
	{ NULL, 0 }
};

static classVariableInfo_t fontInfoEx_t_typeInfo[] = {
	{ "fontInfo_t", "fontInfoSmall", (ptrdiff_t)(&((fontInfoEx_t *)0)->fontInfoSmall), sizeof( ((fontInfoEx_t *)0)->fontInfoSmall ) },
	{ "fontInfo_t", "fontInfoMedium", (ptrdiff_t)(&((fontInfoEx_t *)0)->fontInfoMedium), sizeof( ((fontInfoEx_t *)0)->fontInfoMedium ) },
	{ "fontInfo_t", "fontInfoLarge", (ptrdiff_t)(&((fontInfoEx_t *)0)->fontInfoLarge), sizeof( ((fontInfoEx_t *)0)->fontInfoLarge ) },
	{ "int", "maxHeight", (ptrdiff_t)(&((fontInfoEx_t *)0)->maxHeight), sizeof( ((fontInfoEx_t *)0)->maxHeight ) },
	{ "int", "maxWidth", (ptrdiff_t)(&((fontInfoEx_t *)0)->maxWidth), sizeof( ((fontInfoEx_t *)0)->maxWidth ) },
	{ "int", "maxHeightSmall", (ptrdiff_t)(&((fontInfoEx_t *)0)->maxHeightSmall), sizeof( ((fontInfoEx_t *)0)->maxHeightSmall ) },
	{ "int", "maxWidthSmall", (ptrdiff_t)(&((fontInfoEx_t *)0)->maxWidthSmall), sizeof( ((fontInfoEx_t *)0)->maxWidthSmall ) },
	{ "int", "maxHeightMedium", (ptrdiff_t)(&((fontInfoEx_t *)0)->maxHeightMedium), sizeof( ((fontInfoEx_t *)0)->maxHeightMedium ) },
	{ "int", "maxWidthMedium", (ptrdiff_t)(&((fontInfoEx_t *)0)->maxWidthMedium), sizeof( ((fontInfoEx_t *)0)->maxWidthMedium ) },
	{ "int", "maxHeightLarge", (ptrdiff_t)(&((fontInfoEx_t *)0)->maxHeightLarge), sizeof( ((fontInfoEx_t *)0)->maxHeightLarge ) },
	{ "int", "maxWidthLarge", (ptrdiff_t)(&((fontInfoEx_t *)0)->maxWidthLarge), sizeof( ((fontInfoEx_t *)0)->maxWidthLarge ) },
	{ "char[64]", "name", (ptrdiff_t)(&((fontInfoEx_t *)0)->name), sizeof( ((fontInfoEx_t *)0)->name ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRenderSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t renderEntity_t_typeInfo[] = {
	{ "idRenderModel *", "hModel", (ptrdiff_t)(&((renderEntity_t *)0)->hModel), sizeof( ((renderEntity_t *)0)->hModel ) },
	{ "int", "entityNum", (ptrdiff_t)(&((renderEntity_t *)0)->entityNum), sizeof( ((renderEntity_t *)0)->entityNum ) },
	{ "int", "bodyId", (ptrdiff_t)(&((renderEntity_t *)0)->bodyId), sizeof( ((renderEntity_t *)0)->bodyId ) },
	{ "idBounds", "bounds", (ptrdiff_t)(&((renderEntity_t *)0)->bounds), sizeof( ((renderEntity_t *)0)->bounds ) },
	{ "deferredEntityCallback_t", "callback", (ptrdiff_t)(&((renderEntity_t *)0)->callback), sizeof( ((renderEntity_t *)0)->callback ) },
	{ "void *", "callbackData", (ptrdiff_t)(&((renderEntity_t *)0)->callbackData), sizeof( ((renderEntity_t *)0)->callbackData ) },
	{ "int", "suppressSurfaceInViewID", (ptrdiff_t)(&((renderEntity_t *)0)->suppressSurfaceInViewID), sizeof( ((renderEntity_t *)0)->suppressSurfaceInViewID ) },
	{ "int", "suppressShadowInViewID", (ptrdiff_t)(&((renderEntity_t *)0)->suppressShadowInViewID), sizeof( ((renderEntity_t *)0)->suppressShadowInViewID ) },
	{ "int", "suppressShadowInLightID", (ptrdiff_t)(&((renderEntity_t *)0)->suppressShadowInLightID), sizeof( ((renderEntity_t *)0)->suppressShadowInLightID ) },
	{ "int", "allowSurfaceInViewID", (ptrdiff_t)(&((renderEntity_t *)0)->allowSurfaceInViewID), sizeof( ((renderEntity_t *)0)->allowSurfaceInViewID ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((renderEntity_t *)0)->origin), sizeof( ((renderEntity_t *)0)->origin ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((renderEntity_t *)0)->axis), sizeof( ((renderEntity_t *)0)->axis ) },
	{ "const idMaterial *", "customShader", (ptrdiff_t)(&((renderEntity_t *)0)->customShader), sizeof( ((renderEntity_t *)0)->customShader ) },
	{ "const idMaterial *", "referenceShader", (ptrdiff_t)(&((renderEntity_t *)0)->referenceShader), sizeof( ((renderEntity_t *)0)->referenceShader ) },
	{ "const idDeclSkin *", "customSkin", (ptrdiff_t)(&((renderEntity_t *)0)->customSkin), sizeof( ((renderEntity_t *)0)->customSkin ) },
	{ "idSoundEmitter *", "referenceSound", (ptrdiff_t)(&((renderEntity_t *)0)->referenceSound), sizeof( ((renderEntity_t *)0)->referenceSound ) },
	{ "float[12]", "shaderParms", (ptrdiff_t)(&((renderEntity_t *)0)->shaderParms), sizeof( ((renderEntity_t *)0)->shaderParms ) },
	{ "idUserInterface *[3]", "gui", (ptrdiff_t)(&((renderEntity_t *)0)->gui), sizeof( ((renderEntity_t *)0)->gui ) },
	{ "renderView_s *", "remoteRenderView", (ptrdiff_t)(&((renderEntity_t *)0)->remoteRenderView), sizeof( ((renderEntity_t *)0)->remoteRenderView ) },
	{ "int", "numJoints", (ptrdiff_t)(&((renderEntity_t *)0)->numJoints), sizeof( ((renderEntity_t *)0)->numJoints ) },
	{ "idJointMat *", "joints", (ptrdiff_t)(&((renderEntity_t *)0)->joints), sizeof( ((renderEntity_t *)0)->joints ) },
	{ "float", "modelDepthHack", (ptrdiff_t)(&((renderEntity_t *)0)->modelDepthHack), sizeof( ((renderEntity_t *)0)->modelDepthHack ) },
	{ "bool", "noSelfShadow", (ptrdiff_t)(&((renderEntity_t *)0)->noSelfShadow), sizeof( ((renderEntity_t *)0)->noSelfShadow ) },
	{ "bool", "noShadow", (ptrdiff_t)(&((renderEntity_t *)0)->noShadow), sizeof( ((renderEntity_t *)0)->noShadow ) },
	{ "float", "shadowMapOffset", (ptrdiff_t)(&((renderEntity_t *)0)->shadowMapOffset), sizeof( ((renderEntity_t *)0)->shadowMapOffset ) },
	{ "renderEntity_s::areaLock_t", "areaLock", (ptrdiff_t)(&((renderEntity_t *)0)->areaLock), sizeof( ((renderEntity_t *)0)->areaLock ) },
	{ "bool", "noDynamicInteractions", (ptrdiff_t)(&((renderEntity_t *)0)->noDynamicInteractions), sizeof( ((renderEntity_t *)0)->noDynamicInteractions ) },
	{ "bool", "isLightgem", (ptrdiff_t)(&((renderEntity_t *)0)->isLightgem), sizeof( ((renderEntity_t *)0)->isLightgem ) },
	{ "bool", "noFog", (ptrdiff_t)(&((renderEntity_t *)0)->noFog), sizeof( ((renderEntity_t *)0)->noFog ) },
	{ "int", "spectrum", (ptrdiff_t)(&((renderEntity_t *)0)->spectrum), sizeof( ((renderEntity_t *)0)->spectrum ) },
	{ "int", "lightspectrum", (ptrdiff_t)(&((renderEntity_t *)0)->lightspectrum), sizeof( ((renderEntity_t *)0)->lightspectrum ) },
	{ "int", "nospectrum", (ptrdiff_t)(&((renderEntity_t *)0)->nospectrum), sizeof( ((renderEntity_t *)0)->nospectrum ) },
	{ "bool", "weaponDepthHack", (ptrdiff_t)(&((renderEntity_t *)0)->weaponDepthHack), sizeof( ((renderEntity_t *)0)->weaponDepthHack ) },
	{ "int", "forceUpdate", (ptrdiff_t)(&((renderEntity_t *)0)->forceUpdate), sizeof( ((renderEntity_t *)0)->forceUpdate ) },
	{ "int", "timeGroup", (ptrdiff_t)(&((renderEntity_t *)0)->timeGroup), sizeof( ((renderEntity_t *)0)->timeGroup ) },
	{ "int", "xrayIndex", (ptrdiff_t)(&((renderEntity_t *)0)->xrayIndex), sizeof( ((renderEntity_t *)0)->xrayIndex ) },
	{ "int", "sortOffset", (ptrdiff_t)(&((renderEntity_t *)0)->sortOffset), sizeof( ((renderEntity_t *)0)->sortOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t renderLight_t_typeInfo[] = {
	{ "int", "entityNum", (ptrdiff_t)(&((renderLight_t *)0)->entityNum), sizeof( ((renderLight_t *)0)->entityNum ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((renderLight_t *)0)->axis), sizeof( ((renderLight_t *)0)->axis ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((renderLight_t *)0)->origin), sizeof( ((renderLight_t *)0)->origin ) },
	{ "int", "suppressLightInViewID", (ptrdiff_t)(&((renderLight_t *)0)->suppressLightInViewID), sizeof( ((renderLight_t *)0)->suppressLightInViewID ) },
	{ "int", "allowLightInViewID", (ptrdiff_t)(&((renderLight_t *)0)->allowLightInViewID), sizeof( ((renderLight_t *)0)->allowLightInViewID ) },
	{ "bool", "noShadows", (ptrdiff_t)(&((renderLight_t *)0)->noShadows), sizeof( ((renderLight_t *)0)->noShadows ) },
	{ "bool", "noSpecular", (ptrdiff_t)(&((renderLight_t *)0)->noSpecular), sizeof( ((renderLight_t *)0)->noSpecular ) },
	{ "bool", "pointLight", (ptrdiff_t)(&((renderLight_t *)0)->pointLight), sizeof( ((renderLight_t *)0)->pointLight ) },
	{ "bool", "parallel", (ptrdiff_t)(&((renderLight_t *)0)->parallel), sizeof( ((renderLight_t *)0)->parallel ) },
	{ "bool", "parallelSky", (ptrdiff_t)(&((renderLight_t *)0)->parallelSky), sizeof( ((renderLight_t *)0)->parallelSky ) },
	{ "idVec3", "lightRadius", (ptrdiff_t)(&((renderLight_t *)0)->lightRadius), sizeof( ((renderLight_t *)0)->lightRadius ) },
	{ "idVec3", "lightCenter", (ptrdiff_t)(&((renderLight_t *)0)->lightCenter), sizeof( ((renderLight_t *)0)->lightCenter ) },
	{ "idVec3", "target", (ptrdiff_t)(&((renderLight_t *)0)->target), sizeof( ((renderLight_t *)0)->target ) },
	{ "idVec3", "right", (ptrdiff_t)(&((renderLight_t *)0)->right), sizeof( ((renderLight_t *)0)->right ) },
	{ "idVec3", "up", (ptrdiff_t)(&((renderLight_t *)0)->up), sizeof( ((renderLight_t *)0)->up ) },
	{ "idVec3", "start", (ptrdiff_t)(&((renderLight_t *)0)->start), sizeof( ((renderLight_t *)0)->start ) },
	{ "idVec3", "end", (ptrdiff_t)(&((renderLight_t *)0)->end), sizeof( ((renderLight_t *)0)->end ) },
	{ "idRenderModel *", "prelightModel", (ptrdiff_t)(&((renderLight_t *)0)->prelightModel), sizeof( ((renderLight_t *)0)->prelightModel ) },
	{ "int", "lightId", (ptrdiff_t)(&((renderLight_t *)0)->lightId), sizeof( ((renderLight_t *)0)->lightId ) },
	{ "const idMaterial *", "shader", (ptrdiff_t)(&((renderLight_t *)0)->shader), sizeof( ((renderLight_t *)0)->shader ) },
	{ "float[12]", "shaderParms", (ptrdiff_t)(&((renderLight_t *)0)->shaderParms), sizeof( ((renderLight_t *)0)->shaderParms ) },
	{ "idSoundEmitter *", "referenceSound", (ptrdiff_t)(&((renderLight_t *)0)->referenceSound), sizeof( ((renderLight_t *)0)->referenceSound ) },
	{ "bool", "noFogBoundary", (ptrdiff_t)(&((renderLight_t *)0)->noFogBoundary), sizeof( ((renderLight_t *)0)->noFogBoundary ) },
	{ "int", "spectrum", (ptrdiff_t)(&((renderLight_t *)0)->spectrum), sizeof( ((renderLight_t *)0)->spectrum ) },
	{ "renderEntity_s :: areaLock_t", "areaLock", (ptrdiff_t)(&((renderLight_t *)0)->areaLock), sizeof( ((renderLight_t *)0)->areaLock ) },
	{ "float", "volumetricDust", (ptrdiff_t)(&((renderLight_t *)0)->volumetricDust), sizeof( ((renderLight_t *)0)->volumetricDust ) },
	{ NULL, 0 }
};

static classVariableInfo_t renderView_t_typeInfo[] = {
	{ "viewID_t", "viewID", (ptrdiff_t)(&((renderView_t *)0)->viewID), sizeof( ((renderView_t *)0)->viewID ) },
	{ "int", "x", (ptrdiff_t)(&((renderView_t *)0)->x), sizeof( ((renderView_t *)0)->x ) },
	{ "int", "y", (ptrdiff_t)(&((renderView_t *)0)->y), sizeof( ((renderView_t *)0)->y ) },
	{ "int", "width", (ptrdiff_t)(&((renderView_t *)0)->width), sizeof( ((renderView_t *)0)->width ) },
	{ "int", "height", (ptrdiff_t)(&((renderView_t *)0)->height), sizeof( ((renderView_t *)0)->height ) },
	{ "float", "fov_x", (ptrdiff_t)(&((renderView_t *)0)->fov_x), sizeof( ((renderView_t *)0)->fov_x ) },
	{ "float", "fov_y", (ptrdiff_t)(&((renderView_t *)0)->fov_y), sizeof( ((renderView_t *)0)->fov_y ) },
	{ "idVec3", "vieworg", (ptrdiff_t)(&((renderView_t *)0)->vieworg), sizeof( ((renderView_t *)0)->vieworg ) },
	{ "idMat3", "viewaxis", (ptrdiff_t)(&((renderView_t *)0)->viewaxis), sizeof( ((renderView_t *)0)->viewaxis ) },
	{ "bool", "cramZNear", (ptrdiff_t)(&((renderView_t *)0)->cramZNear), sizeof( ((renderView_t *)0)->cramZNear ) },
	{ "bool", "forceUpdate", (ptrdiff_t)(&((renderView_t *)0)->forceUpdate), sizeof( ((renderView_t *)0)->forceUpdate ) },
	{ "int", "time", (ptrdiff_t)(&((renderView_t *)0)->time), sizeof( ((renderView_t *)0)->time ) },
	{ "float[12]", "shaderParms", (ptrdiff_t)(&((renderView_t *)0)->shaderParms), sizeof( ((renderView_t *)0)->shaderParms ) },
	{ "const idMaterial *", "globalMaterial", (ptrdiff_t)(&((renderView_t *)0)->globalMaterial), sizeof( ((renderView_t *)0)->globalMaterial ) },
	{ NULL, 0 }
};

static classVariableInfo_t exitPortal_t_typeInfo[] = {
	{ "int[2]", "areas", (ptrdiff_t)(&((exitPortal_t *)0)->areas), sizeof( ((exitPortal_t *)0)->areas ) },
//	{ "const idWinding &", "w", (ptrdiff_t)(&((exitPortal_t *)0)->w), sizeof( ((exitPortal_t *)0)->w ) },
	{ "int", "blockingBits", (ptrdiff_t)(&((exitPortal_t *)0)->blockingBits), sizeof( ((exitPortal_t *)0)->blockingBits ) },
	{ "float", "lossPlayer", (ptrdiff_t)(&((exitPortal_t *)0)->lossPlayer), sizeof( ((exitPortal_t *)0)->lossPlayer ) },
	{ "qhandle_t", "portalHandle", (ptrdiff_t)(&((exitPortal_t *)0)->portalHandle), sizeof( ((exitPortal_t *)0)->portalHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t guiPoint_t_typeInfo[] = {
	{ "float", "x", (ptrdiff_t)(&((guiPoint_t *)0)->x), sizeof( ((guiPoint_t *)0)->x ) },
	{ "float", "y", (ptrdiff_t)(&((guiPoint_t *)0)->y), sizeof( ((guiPoint_t *)0)->y ) },
	{ "int", "guiId", (ptrdiff_t)(&((guiPoint_t *)0)->guiId), sizeof( ((guiPoint_t *)0)->guiId ) },
	{ NULL, 0 }
};

static classVariableInfo_t modelTrace_t_typeInfo[] = {
	{ "float", "fraction", (ptrdiff_t)(&((modelTrace_t *)0)->fraction), sizeof( ((modelTrace_t *)0)->fraction ) },
	{ "idVec3", "point", (ptrdiff_t)(&((modelTrace_t *)0)->point), sizeof( ((modelTrace_t *)0)->point ) },
	{ "idVec3", "normal", (ptrdiff_t)(&((modelTrace_t *)0)->normal), sizeof( ((modelTrace_t *)0)->normal ) },
	{ "const idMaterial *", "material", (ptrdiff_t)(&((modelTrace_t *)0)->material), sizeof( ((modelTrace_t *)0)->material ) },
	{ "const renderEntity_t *", "entity", (ptrdiff_t)(&((modelTrace_t *)0)->entity), sizeof( ((modelTrace_t *)0)->entity ) },
	{ "const idRenderModel *", "model", (ptrdiff_t)(&((modelTrace_t *)0)->model), sizeof( ((modelTrace_t *)0)->model ) },
	{ "int", "surfIdx", (ptrdiff_t)(&((modelTrace_t *)0)->surfIdx), sizeof( ((modelTrace_t *)0)->surfIdx ) },
	{ "int", "jointNumber", (ptrdiff_t)(&((modelTrace_t *)0)->jointNumber), sizeof( ((modelTrace_t *)0)->jointNumber ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRenderWorld_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t soundShaderParms_t_typeInfo[] = {
	{ "float", "minDistance", (ptrdiff_t)(&((soundShaderParms_t *)0)->minDistance), sizeof( ((soundShaderParms_t *)0)->minDistance ) },
	{ "float", "maxDistance", (ptrdiff_t)(&((soundShaderParms_t *)0)->maxDistance), sizeof( ((soundShaderParms_t *)0)->maxDistance ) },
	{ "float", "volume", (ptrdiff_t)(&((soundShaderParms_t *)0)->volume), sizeof( ((soundShaderParms_t *)0)->volume ) },
	{ "float", "shakes", (ptrdiff_t)(&((soundShaderParms_t *)0)->shakes), sizeof( ((soundShaderParms_t *)0)->shakes ) },
	{ "int", "soundShaderFlags", (ptrdiff_t)(&((soundShaderParms_t *)0)->soundShaderFlags), sizeof( ((soundShaderParms_t *)0)->soundShaderFlags ) },
	{ "int", "soundClass", (ptrdiff_t)(&((soundShaderParms_t *)0)->soundClass), sizeof( ((soundShaderParms_t *)0)->soundClass ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSoundShader_typeInfo[] = {
	{ "soundShaderParms_t", "parms", (ptrdiff_t)(&((idSoundShader *)0)->parms), sizeof( ((idSoundShader *)0)->parms ) },
	{ "bool", "onDemand", (ptrdiff_t)(&((idSoundShader *)0)->onDemand), sizeof( ((idSoundShader *)0)->onDemand ) },
	{ "int", "speakerMask", (ptrdiff_t)(&((idSoundShader *)0)->speakerMask), sizeof( ((idSoundShader *)0)->speakerMask ) },
	{ "const idSoundShader *", "altSound", (ptrdiff_t)(&((idSoundShader *)0)->altSound), sizeof( ((idSoundShader *)0)->altSound ) },
	{ "idStr", "desc", (ptrdiff_t)(&((idSoundShader *)0)->desc), sizeof( ((idSoundShader *)0)->desc ) },
	{ "bool", "errorDuringParse", (ptrdiff_t)(&((idSoundShader *)0)->errorDuringParse), sizeof( ((idSoundShader *)0)->errorDuringParse ) },
	{ "float", "leadinVolume", (ptrdiff_t)(&((idSoundShader *)0)->leadinVolume), sizeof( ((idSoundShader *)0)->leadinVolume ) },
	{ "idSoundSample *[32]", "leadins", (ptrdiff_t)(&((idSoundShader *)0)->leadins), sizeof( ((idSoundShader *)0)->leadins ) },
	{ "int", "numLeadins", (ptrdiff_t)(&((idSoundShader *)0)->numLeadins), sizeof( ((idSoundShader *)0)->numLeadins ) },
	{ "idSoundSample *[32]", "entries", (ptrdiff_t)(&((idSoundShader *)0)->entries), sizeof( ((idSoundShader *)0)->entries ) },
	{ "int", "numEntries", (ptrdiff_t)(&((idSoundShader *)0)->numEntries), sizeof( ((idSoundShader *)0)->numEntries ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSoundEmitter_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSoundWorld_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t soundDecoderInfo_t_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->name), sizeof( ((soundDecoderInfo_t *)0)->name ) },
	{ "idStr", "format", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->format), sizeof( ((soundDecoderInfo_t *)0)->format ) },
	{ "int", "numChannels", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->numChannels), sizeof( ((soundDecoderInfo_t *)0)->numChannels ) },
	{ "int", "numSamplesPerSecond", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->numSamplesPerSecond), sizeof( ((soundDecoderInfo_t *)0)->numSamplesPerSecond ) },
	{ "int", "num44kHzSamples", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->num44kHzSamples), sizeof( ((soundDecoderInfo_t *)0)->num44kHzSamples ) },
	{ "int", "numBytes", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->numBytes), sizeof( ((soundDecoderInfo_t *)0)->numBytes ) },
	{ "bool", "looping", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->looping), sizeof( ((soundDecoderInfo_t *)0)->looping ) },
	{ "float", "lastVolume", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->lastVolume), sizeof( ((soundDecoderInfo_t *)0)->lastVolume ) },
	{ "int", "start44kHzTime", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->start44kHzTime), sizeof( ((soundDecoderInfo_t *)0)->start44kHzTime ) },
	{ "int", "current44kHzTime", (ptrdiff_t)(&((soundDecoderInfo_t *)0)->current44kHzTime), sizeof( ((soundDecoderInfo_t *)0)->current44kHzTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSoundSystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idListGUI_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idUserInterface_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idUserInterfaceManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t contactInfo_t_typeInfo[] = {
	{ "contactType_t", "type", (ptrdiff_t)(&((contactInfo_t *)0)->type), sizeof( ((contactInfo_t *)0)->type ) },
	{ "idVec3", "point", (ptrdiff_t)(&((contactInfo_t *)0)->point), sizeof( ((contactInfo_t *)0)->point ) },
	{ "idVec3", "normal", (ptrdiff_t)(&((contactInfo_t *)0)->normal), sizeof( ((contactInfo_t *)0)->normal ) },
	{ "float", "dist", (ptrdiff_t)(&((contactInfo_t *)0)->dist), sizeof( ((contactInfo_t *)0)->dist ) },
	{ "int", "contents", (ptrdiff_t)(&((contactInfo_t *)0)->contents), sizeof( ((contactInfo_t *)0)->contents ) },
	{ "const idMaterial *", "material", (ptrdiff_t)(&((contactInfo_t *)0)->material), sizeof( ((contactInfo_t *)0)->material ) },
	{ "int", "modelFeature", (ptrdiff_t)(&((contactInfo_t *)0)->modelFeature), sizeof( ((contactInfo_t *)0)->modelFeature ) },
	{ "int", "trmFeature", (ptrdiff_t)(&((contactInfo_t *)0)->trmFeature), sizeof( ((contactInfo_t *)0)->trmFeature ) },
	{ "int", "entityNum", (ptrdiff_t)(&((contactInfo_t *)0)->entityNum), sizeof( ((contactInfo_t *)0)->entityNum ) },
	{ "int", "id", (ptrdiff_t)(&((contactInfo_t *)0)->id), sizeof( ((contactInfo_t *)0)->id ) },
	{ NULL, 0 }
};

static classVariableInfo_t trace_t_typeInfo[] = {
	{ "float", "fraction", (ptrdiff_t)(&((trace_t *)0)->fraction), sizeof( ((trace_t *)0)->fraction ) },
	{ "idVec3", "endpos", (ptrdiff_t)(&((trace_t *)0)->endpos), sizeof( ((trace_t *)0)->endpos ) },
	{ "idMat3", "endAxis", (ptrdiff_t)(&((trace_t *)0)->endAxis), sizeof( ((trace_t *)0)->endAxis ) },
	{ "contactInfo_t", "c", (ptrdiff_t)(&((trace_t *)0)->c), sizeof( ((trace_t *)0)->c ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCollisionModelManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_typeInfo[] = {
	{ "int", "travelType", (ptrdiff_t)(&((idReachability *)0)->travelType), sizeof( ((idReachability *)0)->travelType ) },
	{ "int", "toAreaNum", (ptrdiff_t)(&((idReachability *)0)->toAreaNum), sizeof( ((idReachability *)0)->toAreaNum ) },
	{ "int", "fromAreaNum", (ptrdiff_t)(&((idReachability *)0)->fromAreaNum), sizeof( ((idReachability *)0)->fromAreaNum ) },
	{ "idVec3", "start", (ptrdiff_t)(&((idReachability *)0)->start), sizeof( ((idReachability *)0)->start ) },
	{ "idVec3", "end", (ptrdiff_t)(&((idReachability *)0)->end), sizeof( ((idReachability *)0)->end ) },
	{ "int", "edgeNum", (ptrdiff_t)(&((idReachability *)0)->edgeNum), sizeof( ((idReachability *)0)->edgeNum ) },
	{ "unsigned short", "travelTime", (ptrdiff_t)(&((idReachability *)0)->travelTime), sizeof( ((idReachability *)0)->travelTime ) },
	{ "byte", "number", (ptrdiff_t)(&((idReachability *)0)->number), sizeof( ((idReachability *)0)->number ) },
	{ "byte", "disableCount", (ptrdiff_t)(&((idReachability *)0)->disableCount), sizeof( ((idReachability *)0)->disableCount ) },
	{ "idReachability *", "next", (ptrdiff_t)(&((idReachability *)0)->next), sizeof( ((idReachability *)0)->next ) },
	{ "idReachability *", "rev_next", (ptrdiff_t)(&((idReachability *)0)->rev_next), sizeof( ((idReachability *)0)->rev_next ) },
	{ "unsigned short *", "areaTravelTimes", (ptrdiff_t)(&((idReachability *)0)->areaTravelTimes), sizeof( ((idReachability *)0)->areaTravelTimes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Walk_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_BarrierJump_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_WaterJump_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_WalkOffLedge_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Swim_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Fly_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idReachability_Special_typeInfo[] = {
	{ "idDict", "dict", (ptrdiff_t)(&((idReachability_Special *)0)->dict), sizeof( ((idReachability_Special *)0)->dict ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasEdge_t_typeInfo[] = {
	{ "int[2]", "vertexNum", (ptrdiff_t)(&((aasEdge_t *)0)->vertexNum), sizeof( ((aasEdge_t *)0)->vertexNum ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasFace_t_typeInfo[] = {
	{ "unsigned int", "planeNum", (ptrdiff_t)(&((aasFace_t *)0)->planeNum), sizeof( ((aasFace_t *)0)->planeNum ) },
	{ "unsigned int", "flags", (ptrdiff_t)(&((aasFace_t *)0)->flags), sizeof( ((aasFace_t *)0)->flags ) },
	{ "int", "numEdges", (ptrdiff_t)(&((aasFace_t *)0)->numEdges), sizeof( ((aasFace_t *)0)->numEdges ) },
	{ "int", "firstEdge", (ptrdiff_t)(&((aasFace_t *)0)->firstEdge), sizeof( ((aasFace_t *)0)->firstEdge ) },
	{ "int[2]", "areas", (ptrdiff_t)(&((aasFace_t *)0)->areas), sizeof( ((aasFace_t *)0)->areas ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasArea_t_typeInfo[] = {
	{ "int", "numFaces", (ptrdiff_t)(&((aasArea_t *)0)->numFaces), sizeof( ((aasArea_t *)0)->numFaces ) },
	{ "int", "firstFace", (ptrdiff_t)(&((aasArea_t *)0)->firstFace), sizeof( ((aasArea_t *)0)->firstFace ) },
	{ "idBounds", "bounds", (ptrdiff_t)(&((aasArea_t *)0)->bounds), sizeof( ((aasArea_t *)0)->bounds ) },
	{ "idVec3", "center", (ptrdiff_t)(&((aasArea_t *)0)->center), sizeof( ((aasArea_t *)0)->center ) },
	{ "unsigned int", "flags", (ptrdiff_t)(&((aasArea_t *)0)->flags), sizeof( ((aasArea_t *)0)->flags ) },
	{ "unsigned int", "contents", (ptrdiff_t)(&((aasArea_t *)0)->contents), sizeof( ((aasArea_t *)0)->contents ) },
	{ "int", "cluster", (ptrdiff_t)(&((aasArea_t *)0)->cluster), sizeof( ((aasArea_t *)0)->cluster ) },
	{ "int", "clusterAreaNum", (ptrdiff_t)(&((aasArea_t *)0)->clusterAreaNum), sizeof( ((aasArea_t *)0)->clusterAreaNum ) },
	{ "int", "travelFlags", (ptrdiff_t)(&((aasArea_t *)0)->travelFlags), sizeof( ((aasArea_t *)0)->travelFlags ) },
	{ "idReachability *", "reach", (ptrdiff_t)(&((aasArea_t *)0)->reach), sizeof( ((aasArea_t *)0)->reach ) },
	{ "idReachability *", "rev_reach", (ptrdiff_t)(&((aasArea_t *)0)->rev_reach), sizeof( ((aasArea_t *)0)->rev_reach ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasNode_t_typeInfo[] = {
	{ "unsigned int", "planeNum", (ptrdiff_t)(&((aasNode_t *)0)->planeNum), sizeof( ((aasNode_t *)0)->planeNum ) },
	{ "int[2]", "children", (ptrdiff_t)(&((aasNode_t *)0)->children), sizeof( ((aasNode_t *)0)->children ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasPortal_t_typeInfo[] = {
	{ "int", "areaNum", (ptrdiff_t)(&((aasPortal_t *)0)->areaNum), sizeof( ((aasPortal_t *)0)->areaNum ) },
	{ "int[2]", "clusters", (ptrdiff_t)(&((aasPortal_t *)0)->clusters), sizeof( ((aasPortal_t *)0)->clusters ) },
	{ "int[2]", "clusterAreaNum", (ptrdiff_t)(&((aasPortal_t *)0)->clusterAreaNum), sizeof( ((aasPortal_t *)0)->clusterAreaNum ) },
	{ "unsigned int", "maxAreaTravelTime", (ptrdiff_t)(&((aasPortal_t *)0)->maxAreaTravelTime), sizeof( ((aasPortal_t *)0)->maxAreaTravelTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasCluster_t_typeInfo[] = {
	{ "int", "numAreas", (ptrdiff_t)(&((aasCluster_t *)0)->numAreas), sizeof( ((aasCluster_t *)0)->numAreas ) },
	{ "int", "numReachableAreas", (ptrdiff_t)(&((aasCluster_t *)0)->numReachableAreas), sizeof( ((aasCluster_t *)0)->numReachableAreas ) },
	{ "int", "numPortals", (ptrdiff_t)(&((aasCluster_t *)0)->numPortals), sizeof( ((aasCluster_t *)0)->numPortals ) },
	{ "int", "firstPortal", (ptrdiff_t)(&((aasCluster_t *)0)->firstPortal), sizeof( ((aasCluster_t *)0)->firstPortal ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasTrace_t_typeInfo[] = {
	{ "int", "flags", (ptrdiff_t)(&((aasTrace_t *)0)->flags), sizeof( ((aasTrace_t *)0)->flags ) },
	{ "int", "travelFlags", (ptrdiff_t)(&((aasTrace_t *)0)->travelFlags), sizeof( ((aasTrace_t *)0)->travelFlags ) },
	{ "int", "maxAreas", (ptrdiff_t)(&((aasTrace_t *)0)->maxAreas), sizeof( ((aasTrace_t *)0)->maxAreas ) },
	{ "int", "getOutOfSolid", (ptrdiff_t)(&((aasTrace_t *)0)->getOutOfSolid), sizeof( ((aasTrace_t *)0)->getOutOfSolid ) },
	{ "float", "fraction", (ptrdiff_t)(&((aasTrace_t *)0)->fraction), sizeof( ((aasTrace_t *)0)->fraction ) },
	{ "idVec3", "endpos", (ptrdiff_t)(&((aasTrace_t *)0)->endpos), sizeof( ((aasTrace_t *)0)->endpos ) },
	{ "int", "planeNum", (ptrdiff_t)(&((aasTrace_t *)0)->planeNum), sizeof( ((aasTrace_t *)0)->planeNum ) },
	{ "int", "lastAreaNum", (ptrdiff_t)(&((aasTrace_t *)0)->lastAreaNum), sizeof( ((aasTrace_t *)0)->lastAreaNum ) },
	{ "int", "blockingAreaNum", (ptrdiff_t)(&((aasTrace_t *)0)->blockingAreaNum), sizeof( ((aasTrace_t *)0)->blockingAreaNum ) },
	{ "int", "numAreas", (ptrdiff_t)(&((aasTrace_t *)0)->numAreas), sizeof( ((aasTrace_t *)0)->numAreas ) },
	{ "int *", "areas", (ptrdiff_t)(&((aasTrace_t *)0)->areas), sizeof( ((aasTrace_t *)0)->areas ) },
	{ "idVec3 *", "points", (ptrdiff_t)(&((aasTrace_t *)0)->points), sizeof( ((aasTrace_t *)0)->points ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASSettings_typeInfo[] = {
	{ "int", "numBoundingBoxes", (ptrdiff_t)(&((idAASSettings *)0)->numBoundingBoxes), sizeof( ((idAASSettings *)0)->numBoundingBoxes ) },
	{ "idBounds[4]", "boundingBoxes", (ptrdiff_t)(&((idAASSettings *)0)->boundingBoxes), sizeof( ((idAASSettings *)0)->boundingBoxes ) },
	{ "bool", "usePatches", (ptrdiff_t)(&((idAASSettings *)0)->usePatches), sizeof( ((idAASSettings *)0)->usePatches ) },
	{ "bool", "writeBrushMap", (ptrdiff_t)(&((idAASSettings *)0)->writeBrushMap), sizeof( ((idAASSettings *)0)->writeBrushMap ) },
	{ "bool", "playerFlood", (ptrdiff_t)(&((idAASSettings *)0)->playerFlood), sizeof( ((idAASSettings *)0)->playerFlood ) },
	{ "bool", "noOptimize", (ptrdiff_t)(&((idAASSettings *)0)->noOptimize), sizeof( ((idAASSettings *)0)->noOptimize ) },
	{ "bool", "allowSwimReachabilities", (ptrdiff_t)(&((idAASSettings *)0)->allowSwimReachabilities), sizeof( ((idAASSettings *)0)->allowSwimReachabilities ) },
	{ "bool", "allowFlyReachabilities", (ptrdiff_t)(&((idAASSettings *)0)->allowFlyReachabilities), sizeof( ((idAASSettings *)0)->allowFlyReachabilities ) },
	{ "idStr", "fileExtension", (ptrdiff_t)(&((idAASSettings *)0)->fileExtension), sizeof( ((idAASSettings *)0)->fileExtension ) },
	{ "idVec3", "gravity", (ptrdiff_t)(&((idAASSettings *)0)->gravity), sizeof( ((idAASSettings *)0)->gravity ) },
	{ "idVec3", "gravityDir", (ptrdiff_t)(&((idAASSettings *)0)->gravityDir), sizeof( ((idAASSettings *)0)->gravityDir ) },
	{ "idVec3", "invGravityDir", (ptrdiff_t)(&((idAASSettings *)0)->invGravityDir), sizeof( ((idAASSettings *)0)->invGravityDir ) },
	{ "float", "gravityValue", (ptrdiff_t)(&((idAASSettings *)0)->gravityValue), sizeof( ((idAASSettings *)0)->gravityValue ) },
	{ "float", "maxStepHeight", (ptrdiff_t)(&((idAASSettings *)0)->maxStepHeight), sizeof( ((idAASSettings *)0)->maxStepHeight ) },
	{ "float", "maxBarrierHeight", (ptrdiff_t)(&((idAASSettings *)0)->maxBarrierHeight), sizeof( ((idAASSettings *)0)->maxBarrierHeight ) },
	{ "float", "maxWaterJumpHeight", (ptrdiff_t)(&((idAASSettings *)0)->maxWaterJumpHeight), sizeof( ((idAASSettings *)0)->maxWaterJumpHeight ) },
	{ "float", "maxFallHeight", (ptrdiff_t)(&((idAASSettings *)0)->maxFallHeight), sizeof( ((idAASSettings *)0)->maxFallHeight ) },
	{ "float", "minFloorCos", (ptrdiff_t)(&((idAASSettings *)0)->minFloorCos), sizeof( ((idAASSettings *)0)->minFloorCos ) },
	{ "int", "tt_barrierJump", (ptrdiff_t)(&((idAASSettings *)0)->tt_barrierJump), sizeof( ((idAASSettings *)0)->tt_barrierJump ) },
	{ "int", "tt_startCrouching", (ptrdiff_t)(&((idAASSettings *)0)->tt_startCrouching), sizeof( ((idAASSettings *)0)->tt_startCrouching ) },
	{ "int", "tt_waterJump", (ptrdiff_t)(&((idAASSettings *)0)->tt_waterJump), sizeof( ((idAASSettings *)0)->tt_waterJump ) },
	{ "int", "tt_startWalkOffLedge", (ptrdiff_t)(&((idAASSettings *)0)->tt_startWalkOffLedge), sizeof( ((idAASSettings *)0)->tt_startWalkOffLedge ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFile_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idAASFile *)0)->name), sizeof( ((idAASFile *)0)->name ) },
	{ "unsigned int", "crc", (ptrdiff_t)(&((idAASFile *)0)->crc), sizeof( ((idAASFile *)0)->crc ) },
	{ "idPlaneSet", "planeList", (ptrdiff_t)(&((idAASFile *)0)->planeList), sizeof( ((idAASFile *)0)->planeList ) },
	{ "idList < aasVertex_t >", "vertices", (ptrdiff_t)(&((idAASFile *)0)->vertices), sizeof( ((idAASFile *)0)->vertices ) },
	{ "idList < aasEdge_t >", "edges", (ptrdiff_t)(&((idAASFile *)0)->edges), sizeof( ((idAASFile *)0)->edges ) },
	{ "idList < aasIndex_t >", "edgeIndex", (ptrdiff_t)(&((idAASFile *)0)->edgeIndex), sizeof( ((idAASFile *)0)->edgeIndex ) },
	{ "idList < aasFace_t >", "faces", (ptrdiff_t)(&((idAASFile *)0)->faces), sizeof( ((idAASFile *)0)->faces ) },
	{ "idList < aasIndex_t >", "faceIndex", (ptrdiff_t)(&((idAASFile *)0)->faceIndex), sizeof( ((idAASFile *)0)->faceIndex ) },
	{ "idList < aasArea_t >", "areas", (ptrdiff_t)(&((idAASFile *)0)->areas), sizeof( ((idAASFile *)0)->areas ) },
	{ "idList < aasNode_t >", "nodes", (ptrdiff_t)(&((idAASFile *)0)->nodes), sizeof( ((idAASFile *)0)->nodes ) },
	{ "idList < aasPortal_t >", "portals", (ptrdiff_t)(&((idAASFile *)0)->portals), sizeof( ((idAASFile *)0)->portals ) },
	{ "idList < aasIndex_t >", "portalIndex", (ptrdiff_t)(&((idAASFile *)0)->portalIndex), sizeof( ((idAASFile *)0)->portalIndex ) },
	{ "idList < aasCluster_t >", "clusters", (ptrdiff_t)(&((idAASFile *)0)->clusters), sizeof( ((idAASFile *)0)->clusters ) },
	{ "idAASSettings", "settings", (ptrdiff_t)(&((idAASFile *)0)->settings), sizeof( ((idAASFile *)0)->settings ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFileManager_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t gameReturn_t_typeInfo[] = {
	{ "char[1024]", "sessionCommand", (ptrdiff_t)(&((gameReturn_t *)0)->sessionCommand), sizeof( ((gameReturn_t *)0)->sessionCommand ) },
	{ "int", "consistencyHash", (ptrdiff_t)(&((gameReturn_t *)0)->consistencyHash), sizeof( ((gameReturn_t *)0)->consistencyHash ) },
	{ "int", "health", (ptrdiff_t)(&((gameReturn_t *)0)->health), sizeof( ((gameReturn_t *)0)->health ) },
	{ "int", "heartRate", (ptrdiff_t)(&((gameReturn_t *)0)->heartRate), sizeof( ((gameReturn_t *)0)->heartRate ) },
	{ "int", "stamina", (ptrdiff_t)(&((gameReturn_t *)0)->stamina), sizeof( ((gameReturn_t *)0)->stamina ) },
	{ "int", "combat", (ptrdiff_t)(&((gameReturn_t *)0)->combat), sizeof( ((gameReturn_t *)0)->combat ) },
	{ "bool", "syncNextGameFrame", (ptrdiff_t)(&((gameReturn_t *)0)->syncNextGameFrame), sizeof( ((gameReturn_t *)0)->syncNextGameFrame ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGame_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t refSound_t_typeInfo[] = {
	{ "idSoundEmitter *", "referenceSound", (ptrdiff_t)(&((refSound_t *)0)->referenceSound), sizeof( ((refSound_t *)0)->referenceSound ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((refSound_t *)0)->origin), sizeof( ((refSound_t *)0)->origin ) },
	{ "int", "listenerId", (ptrdiff_t)(&((refSound_t *)0)->listenerId), sizeof( ((refSound_t *)0)->listenerId ) },
	{ "const idSoundShader *", "shader", (ptrdiff_t)(&((refSound_t *)0)->shader), sizeof( ((refSound_t *)0)->shader ) },
	{ "float", "diversity", (ptrdiff_t)(&((refSound_t *)0)->diversity), sizeof( ((refSound_t *)0)->diversity ) },
	{ "bool", "waitfortrigger", (ptrdiff_t)(&((refSound_t *)0)->waitfortrigger), sizeof( ((refSound_t *)0)->waitfortrigger ) },
	{ "soundShaderParms_t", "parms", (ptrdiff_t)(&((refSound_t *)0)->parms), sizeof( ((refSound_t *)0)->parms ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameEdit_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t gameImport_t_typeInfo[] = {
	{ "int", "version", (ptrdiff_t)(&((gameImport_t *)0)->version), sizeof( ((gameImport_t *)0)->version ) },
	{ "idSys *", "sys", (ptrdiff_t)(&((gameImport_t *)0)->sys), sizeof( ((gameImport_t *)0)->sys ) },
	{ "idCommon *", "common", (ptrdiff_t)(&((gameImport_t *)0)->common), sizeof( ((gameImport_t *)0)->common ) },
	{ "idCmdSystem *", "cmdSystem", (ptrdiff_t)(&((gameImport_t *)0)->cmdSystem), sizeof( ((gameImport_t *)0)->cmdSystem ) },
	{ "idCVarSystem *", "cvarSystem", (ptrdiff_t)(&((gameImport_t *)0)->cvarSystem), sizeof( ((gameImport_t *)0)->cvarSystem ) },
	{ "idFileSystem *", "fileSystem", (ptrdiff_t)(&((gameImport_t *)0)->fileSystem), sizeof( ((gameImport_t *)0)->fileSystem ) },
	{ "idRenderSystem *", "renderSystem", (ptrdiff_t)(&((gameImport_t *)0)->renderSystem), sizeof( ((gameImport_t *)0)->renderSystem ) },
	{ "idSoundSystem *", "soundSystem", (ptrdiff_t)(&((gameImport_t *)0)->soundSystem), sizeof( ((gameImport_t *)0)->soundSystem ) },
	{ "idRenderModelManager *", "renderModelManager", (ptrdiff_t)(&((gameImport_t *)0)->renderModelManager), sizeof( ((gameImport_t *)0)->renderModelManager ) },
	{ "idUserInterfaceManager *", "uiManager", (ptrdiff_t)(&((gameImport_t *)0)->uiManager), sizeof( ((gameImport_t *)0)->uiManager ) },
	{ "idDeclManager *", "declManager", (ptrdiff_t)(&((gameImport_t *)0)->declManager), sizeof( ((gameImport_t *)0)->declManager ) },
	{ "idAASFileManager *", "AASFileManager", (ptrdiff_t)(&((gameImport_t *)0)->AASFileManager), sizeof( ((gameImport_t *)0)->AASFileManager ) },
	{ "idCollisionModelManager *", "collisionModelManager", (ptrdiff_t)(&((gameImport_t *)0)->collisionModelManager), sizeof( ((gameImport_t *)0)->collisionModelManager ) },
	{ NULL, 0 }
};

static classVariableInfo_t gameExport_t_typeInfo[] = {
	{ "int", "version", (ptrdiff_t)(&((gameExport_t *)0)->version), sizeof( ((gameExport_t *)0)->version ) },
	{ "idGame *", "game", (ptrdiff_t)(&((gameExport_t *)0)->game), sizeof( ((gameExport_t *)0)->game ) },
	{ "idGameEdit *", "gameEdit", (ptrdiff_t)(&((gameExport_t *)0)->gameEdit), sizeof( ((gameExport_t *)0)->gameEdit ) },
	{ NULL, 0 }
};

static classVariableInfo_t EventArg_typeInfo[] = {
	{ "char", "type", (ptrdiff_t)(&((EventArg *)0)->type), sizeof( ((EventArg *)0)->type ) },
	{ "const char *", "name", (ptrdiff_t)(&((EventArg *)0)->name), sizeof( ((EventArg *)0)->name ) },
	{ "const char *", "desc", (ptrdiff_t)(&((EventArg *)0)->desc), sizeof( ((EventArg *)0)->desc ) },
	{ NULL, 0 }
};

static classVariableInfo_t EventArgs_typeInfo[] = {
	{ "idStaticList < EventArg , 8 >", "args", (ptrdiff_t)(&((EventArgs *)0)->args), sizeof( ((EventArgs *)0)->args ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEventDef_typeInfo[] = {
	{ "const char *", "name", (ptrdiff_t)(&((idEventDef *)0)->name), sizeof( ((idEventDef *)0)->name ) },
	{ "char[10]", "formatspec", (ptrdiff_t)(&((idEventDef *)0)->formatspec), sizeof( ((idEventDef *)0)->formatspec ) },
	{ "unsigned int", "formatspecIndex", (ptrdiff_t)(&((idEventDef *)0)->formatspecIndex), sizeof( ((idEventDef *)0)->formatspecIndex ) },
	{ "int", "returnType", (ptrdiff_t)(&((idEventDef *)0)->returnType), sizeof( ((idEventDef *)0)->returnType ) },
	{ "int", "numargs", (ptrdiff_t)(&((idEventDef *)0)->numargs), sizeof( ((idEventDef *)0)->numargs ) },
	{ "size_t", "argsize", (ptrdiff_t)(&((idEventDef *)0)->argsize), sizeof( ((idEventDef *)0)->argsize ) },
	{ "int[8]", "argOffset", (ptrdiff_t)(&((idEventDef *)0)->argOffset), sizeof( ((idEventDef *)0)->argOffset ) },
	{ "int", "eventnum", (ptrdiff_t)(&((idEventDef *)0)->eventnum), sizeof( ((idEventDef *)0)->eventnum ) },
	{ "const char *", "description", (ptrdiff_t)(&((idEventDef *)0)->description), sizeof( ((idEventDef *)0)->description ) },
	{ "EventArgs", "args", (ptrdiff_t)(&((idEventDef *)0)->args), sizeof( ((idEventDef *)0)->args ) },
	{ "const idEventDef *", "next", (ptrdiff_t)(&((idEventDef *)0)->next), sizeof( ((idEventDef *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEvent_typeInfo[] = {
	{ "const idEventDef *", "eventdef", (ptrdiff_t)(&((idEvent *)0)->eventdef), sizeof( ((idEvent *)0)->eventdef ) },
	{ "byte *", "data", (ptrdiff_t)(&((idEvent *)0)->data), sizeof( ((idEvent *)0)->data ) },
	{ "int", "time", (ptrdiff_t)(&((idEvent *)0)->time), sizeof( ((idEvent *)0)->time ) },
	{ "idClass *", "object", (ptrdiff_t)(&((idEvent *)0)->object), sizeof( ((idEvent *)0)->object ) },
	{ "const idTypeInfo *", "typeinfo", (ptrdiff_t)(&((idEvent *)0)->typeinfo), sizeof( ((idEvent *)0)->typeinfo ) },
	{ "idLinkList < idEvent >", "eventNode", (ptrdiff_t)(&((idEvent *)0)->eventNode), sizeof( ((idEvent *)0)->eventNode ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEventArg_typeInfo[] = {
	{ "int", "type", (ptrdiff_t)(&((idEventArg *)0)->type), sizeof( ((idEventArg *)0)->type ) },
	{ "intptr_t", "value", (ptrdiff_t)(&((idEventArg *)0)->value), sizeof( ((idEventArg *)0)->value ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAllocError_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idClass_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTypeInfo_typeInfo[] = {
	{ "const char *", "classname", (ptrdiff_t)(&((idTypeInfo *)0)->classname), sizeof( ((idTypeInfo *)0)->classname ) },
	{ "const char *", "superclass", (ptrdiff_t)(&((idTypeInfo *)0)->superclass), sizeof( ((idTypeInfo *)0)->superclass ) },
	{ "idEventFunc < idClass > *", "eventCallbacks", (ptrdiff_t)(&((idTypeInfo *)0)->eventCallbacks), sizeof( ((idTypeInfo *)0)->eventCallbacks ) },
	{ "eventCallback_t *", "eventMap", (ptrdiff_t)(&((idTypeInfo *)0)->eventMap), sizeof( ((idTypeInfo *)0)->eventMap ) },
	{ "idTypeInfo *", "super", (ptrdiff_t)(&((idTypeInfo *)0)->super), sizeof( ((idTypeInfo *)0)->super ) },
	{ "idTypeInfo *", "next", (ptrdiff_t)(&((idTypeInfo *)0)->next), sizeof( ((idTypeInfo *)0)->next ) },
	{ "bool", "freeEventMap", (ptrdiff_t)(&((idTypeInfo *)0)->freeEventMap), sizeof( ((idTypeInfo *)0)->freeEventMap ) },
	{ "int", "typeNum", (ptrdiff_t)(&((idTypeInfo *)0)->typeNum), sizeof( ((idTypeInfo *)0)->typeNum ) },
	{ "int", "lastChild", (ptrdiff_t)(&((idTypeInfo *)0)->lastChild), sizeof( ((idTypeInfo *)0)->lastChild ) },
	{ "idHierarchy < idTypeInfo >", "node", (ptrdiff_t)(&((idTypeInfo *)0)->node), sizeof( ((idTypeInfo *)0)->node ) },
	{ NULL, 0 }
};

static classVariableInfo_t CRawVector_typeInfo[] = {
	{ "char *", "m_Pointer", (ptrdiff_t)(&((CRawVector *)0)->m_Pointer), sizeof( ((CRawVector *)0)->m_Pointer ) },
	{ "int", "m_Size", (ptrdiff_t)(&((CRawVector *)0)->m_Size), sizeof( ((CRawVector *)0)->m_Size ) },
	{ "int", "m_Capacity", (ptrdiff_t)(&((CRawVector *)0)->m_Capacity), sizeof( ((CRawVector *)0)->m_Capacity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSaveGame_typeInfo[] = {
	{ "idFile *", "file", (ptrdiff_t)(&((idSaveGame *)0)->file), sizeof( ((idSaveGame *)0)->file ) },
	{ "idList < const idClass * >", "objects", (ptrdiff_t)(&((idSaveGame *)0)->objects), sizeof( ((idSaveGame *)0)->objects ) },
	{ "bool", "isCompressed", (ptrdiff_t)(&((idSaveGame *)0)->isCompressed), sizeof( ((idSaveGame *)0)->isCompressed ) },
	{ "CRawVector", "cache", (ptrdiff_t)(&((idSaveGame *)0)->cache), sizeof( ((idSaveGame *)0)->cache ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRestoreGame_typeInfo[] = {
	{ "idFile *", "file", (ptrdiff_t)(&((idRestoreGame *)0)->file), sizeof( ((idRestoreGame *)0)->file ) },
	{ "int", "buildNumber", (ptrdiff_t)(&((idRestoreGame *)0)->buildNumber), sizeof( ((idRestoreGame *)0)->buildNumber ) },
	{ "int", "codeRevision", (ptrdiff_t)(&((idRestoreGame *)0)->codeRevision), sizeof( ((idRestoreGame *)0)->codeRevision ) },
	{ "idList < idClass * >", "objects", (ptrdiff_t)(&((idRestoreGame *)0)->objects), sizeof( ((idRestoreGame *)0)->objects ) },
	{ "bool", "isCompressed", (ptrdiff_t)(&((idRestoreGame *)0)->isCompressed), sizeof( ((idRestoreGame *)0)->isCompressed ) },
	{ "CRawVector", "cache", (ptrdiff_t)(&((idRestoreGame *)0)->cache), sizeof( ((idRestoreGame *)0)->cache ) },
	{ "int", "cachePointer", (ptrdiff_t)(&((idRestoreGame *)0)->cachePointer), sizeof( ((idRestoreGame *)0)->cachePointer ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDebugGraph_typeInfo[] = {
	{ "idList < float >", "samples", (ptrdiff_t)(&((idDebugGraph *)0)->samples), sizeof( ((idDebugGraph *)0)->samples ) },
	{ "int", "index", (ptrdiff_t)(&((idDebugGraph *)0)->index), sizeof( ((idDebugGraph *)0)->index ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEmbeddedAllocator_typeInfo[] = {
	{ "char *", "bufferPtr", (ptrdiff_t)(&((idEmbeddedAllocator *)0)->bufferPtr), sizeof( ((idEmbeddedAllocator *)0)->bufferPtr ) },
	{ "int", "bufferSize", (ptrdiff_t)(&((idEmbeddedAllocator *)0)->bufferSize), sizeof( ((idEmbeddedAllocator *)0)->bufferSize ) },
	{ "idList < int >", "freePos", (ptrdiff_t)(&((idEmbeddedAllocator *)0)->freePos), sizeof( ((idEmbeddedAllocator *)0)->freePos ) },
	{ "idList < int >", "freeSize", (ptrdiff_t)(&((idEmbeddedAllocator *)0)->freeSize), sizeof( ((idEmbeddedAllocator *)0)->freeSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t function_t_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((function_t *)0)->name), sizeof( ((function_t *)0)->name ) },
	{ "const idEventDef *", "eventdef", (ptrdiff_t)(&((function_t *)0)->eventdef), sizeof( ((function_t *)0)->eventdef ) },
	{ "idVarDef *", "def", (ptrdiff_t)(&((function_t *)0)->def), sizeof( ((function_t *)0)->def ) },
	{ "const idTypeDef *", "type", (ptrdiff_t)(&((function_t *)0)->type), sizeof( ((function_t *)0)->type ) },
	{ "int", "firstStatement", (ptrdiff_t)(&((function_t *)0)->firstStatement), sizeof( ((function_t *)0)->firstStatement ) },
	{ "int", "numStatements", (ptrdiff_t)(&((function_t *)0)->numStatements), sizeof( ((function_t *)0)->numStatements ) },
	{ "int", "parmTotal", (ptrdiff_t)(&((function_t *)0)->parmTotal), sizeof( ((function_t *)0)->parmTotal ) },
	{ "int", "locals", (ptrdiff_t)(&((function_t *)0)->locals), sizeof( ((function_t *)0)->locals ) },
	{ "int", "filenum", (ptrdiff_t)(&((function_t *)0)->filenum), sizeof( ((function_t *)0)->filenum ) },
	{ "idList < int >", "parmSize", (ptrdiff_t)(&((function_t *)0)->parmSize), sizeof( ((function_t *)0)->parmSize ) },
	{ NULL, 0 }
};

static classVariableInfo_t eval_t_typeInfo[] = {
	{ "const char *", "stringPtr", (ptrdiff_t)(&((eval_t *)0)->stringPtr), sizeof( ((eval_t *)0)->stringPtr ) },
	{ "float", "_float", (ptrdiff_t)(&((eval_t *)0)->_float), sizeof( ((eval_t *)0)->_float ) },
	{ "float[3]", "vector", (ptrdiff_t)(&((eval_t *)0)->vector), sizeof( ((eval_t *)0)->vector ) },
	{ "function_t *", "function", (ptrdiff_t)(&((eval_t *)0)->function), sizeof( ((eval_t *)0)->function ) },
	{ "int", "_int", (ptrdiff_t)(&((eval_t *)0)->_int), sizeof( ((eval_t *)0)->_int ) },
	{ "int", "entity", (ptrdiff_t)(&((eval_t *)0)->entity), sizeof( ((eval_t *)0)->entity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTypeDef_typeInfo[] = {
	{ "etype_t", "type", (ptrdiff_t)(&((idTypeDef *)0)->type), sizeof( ((idTypeDef *)0)->type ) },
	{ "idStr", "name", (ptrdiff_t)(&((idTypeDef *)0)->name), sizeof( ((idTypeDef *)0)->name ) },
	{ "int", "size", (ptrdiff_t)(&((idTypeDef *)0)->size), sizeof( ((idTypeDef *)0)->size ) },
	{ "idTypeDef *", "auxType", (ptrdiff_t)(&((idTypeDef *)0)->auxType), sizeof( ((idTypeDef *)0)->auxType ) },
	{ "idList < idTypeDef * >", "parmTypes", (ptrdiff_t)(&((idTypeDef *)0)->parmTypes), sizeof( ((idTypeDef *)0)->parmTypes ) },
	{ "idStrList", "parmNames", (ptrdiff_t)(&((idTypeDef *)0)->parmNames), sizeof( ((idTypeDef *)0)->parmNames ) },
	{ "idList < const function_t * >", "functions", (ptrdiff_t)(&((idTypeDef *)0)->functions), sizeof( ((idTypeDef *)0)->functions ) },
	{ "idVarDef *", "def", (ptrdiff_t)(&((idTypeDef *)0)->def), sizeof( ((idTypeDef *)0)->def ) },
	{ NULL, 0 }
};

static classVariableInfo_t idScriptObject_typeInfo[] = {
	{ "idTypeDef *", "type", (ptrdiff_t)(&((idScriptObject *)0)->type), sizeof( ((idScriptObject *)0)->type ) },
	{ "byte *", "data", (ptrdiff_t)(&((idScriptObject *)0)->data), sizeof( ((idScriptObject *)0)->data ) },
	{ NULL, 0 }
};

static classVariableInfo_t idScriptVariable_class_type_etype_t_etype_class_returnType__typeInfo[] = {
//	{ "type *", "data", (ptrdiff_t)(&((idScriptVariable< class type , etype_t etype , class returnType > *)0)->data), sizeof( ((idScriptVariable< class type , etype_t etype , class returnType > *)0)->data ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCompileError_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t varEval_t_typeInfo[] = {
	{ "idScriptObject * *", "objectPtrPtr", (ptrdiff_t)(&((varEval_t *)0)->objectPtrPtr), sizeof( ((varEval_t *)0)->objectPtrPtr ) },
	{ "char *", "stringPtr", (ptrdiff_t)(&((varEval_t *)0)->stringPtr), sizeof( ((varEval_t *)0)->stringPtr ) },
	{ "float *", "floatPtr", (ptrdiff_t)(&((varEval_t *)0)->floatPtr), sizeof( ((varEval_t *)0)->floatPtr ) },
	{ "idVec3 *", "vectorPtr", (ptrdiff_t)(&((varEval_t *)0)->vectorPtr), sizeof( ((varEval_t *)0)->vectorPtr ) },
	{ "function_t *", "functionPtr", (ptrdiff_t)(&((varEval_t *)0)->functionPtr), sizeof( ((varEval_t *)0)->functionPtr ) },
	{ "int *", "intPtr", (ptrdiff_t)(&((varEval_t *)0)->intPtr), sizeof( ((varEval_t *)0)->intPtr ) },
	{ "byte *", "bytePtr", (ptrdiff_t)(&((varEval_t *)0)->bytePtr), sizeof( ((varEval_t *)0)->bytePtr ) },
	{ "int *", "entityNumberPtr", (ptrdiff_t)(&((varEval_t *)0)->entityNumberPtr), sizeof( ((varEval_t *)0)->entityNumberPtr ) },
	{ "int", "virtualFunction", (ptrdiff_t)(&((varEval_t *)0)->virtualFunction), sizeof( ((varEval_t *)0)->virtualFunction ) },
	{ "int", "jumpOffset", (ptrdiff_t)(&((varEval_t *)0)->jumpOffset), sizeof( ((varEval_t *)0)->jumpOffset ) },
	{ "int", "stackOffset", (ptrdiff_t)(&((varEval_t *)0)->stackOffset), sizeof( ((varEval_t *)0)->stackOffset ) },
	{ "int", "argSize", (ptrdiff_t)(&((varEval_t *)0)->argSize), sizeof( ((varEval_t *)0)->argSize ) },
	{ "int", "ptrOffset", (ptrdiff_t)(&((varEval_t *)0)->ptrOffset), sizeof( ((varEval_t *)0)->ptrOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVarDef_typeInfo[] = {
	{ "int", "num", (ptrdiff_t)(&((idVarDef *)0)->num), sizeof( ((idVarDef *)0)->num ) },
	{ "varEval_t", "value", (ptrdiff_t)(&((idVarDef *)0)->value), sizeof( ((idVarDef *)0)->value ) },
	{ "idVarDef *", "scope", (ptrdiff_t)(&((idVarDef *)0)->scope), sizeof( ((idVarDef *)0)->scope ) },
	{ "int", "numUsers", (ptrdiff_t)(&((idVarDef *)0)->numUsers), sizeof( ((idVarDef *)0)->numUsers ) },
	{ "initialized_t", "initialized", (ptrdiff_t)(&((idVarDef *)0)->initialized), sizeof( ((idVarDef *)0)->initialized ) },
	{ "idTypeDef *", "typeDef", (ptrdiff_t)(&((idVarDef *)0)->typeDef), sizeof( ((idVarDef *)0)->typeDef ) },
	{ "idVarDefName *", "name", (ptrdiff_t)(&((idVarDef *)0)->name), sizeof( ((idVarDef *)0)->name ) },
	{ "idVarDef *", "next", (ptrdiff_t)(&((idVarDef *)0)->next), sizeof( ((idVarDef *)0)->next ) },
	{ "idStr", "fileName", (ptrdiff_t)(&((idVarDef *)0)->fileName), sizeof( ((idVarDef *)0)->fileName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVarDefName_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idVarDefName *)0)->name), sizeof( ((idVarDefName *)0)->name ) },
	{ "idVarDef *", "defs", (ptrdiff_t)(&((idVarDefName *)0)->defs), sizeof( ((idVarDefName *)0)->defs ) },
	{ NULL, 0 }
};

static classVariableInfo_t statement_t_typeInfo[] = {
	{ "unsigned short", "op", (ptrdiff_t)(&((statement_t *)0)->op), sizeof( ((statement_t *)0)->op ) },
	{ "idVarDef *", "a", (ptrdiff_t)(&((statement_t *)0)->a), sizeof( ((statement_t *)0)->a ) },
	{ "idVarDef *", "b", (ptrdiff_t)(&((statement_t *)0)->b), sizeof( ((statement_t *)0)->b ) },
	{ "idVarDef *", "c", (ptrdiff_t)(&((statement_t *)0)->c), sizeof( ((statement_t *)0)->c ) },
	{ "unsigned short", "linenumber", (ptrdiff_t)(&((statement_t *)0)->linenumber), sizeof( ((statement_t *)0)->linenumber ) },
	{ "unsigned short", "file", (ptrdiff_t)(&((statement_t *)0)->file), sizeof( ((statement_t *)0)->file ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProgram_typeInfo[] = {
	{ "idStrList", "fileList", (ptrdiff_t)(&((idProgram *)0)->fileList), sizeof( ((idProgram *)0)->fileList ) },
	{ "idStr", "filename", (ptrdiff_t)(&((idProgram *)0)->filename), sizeof( ((idProgram *)0)->filename ) },
	{ "int", "filenum", (ptrdiff_t)(&((idProgram *)0)->filenum), sizeof( ((idProgram *)0)->filenum ) },
	{ "unsigned int", "numVariables", (ptrdiff_t)(&((idProgram *)0)->numVariables), sizeof( ((idProgram *)0)->numVariables ) },
	{ "byte[196608]", "variables", (ptrdiff_t)(&((idProgram *)0)->variables), sizeof( ((idProgram *)0)->variables ) },
	{ "idStaticList < byte , 196608 >", "variableDefaults", (ptrdiff_t)(&((idProgram *)0)->variableDefaults), sizeof( ((idProgram *)0)->variableDefaults ) },
	{ "idStaticList < function_t , 3072 >", "functions", (ptrdiff_t)(&((idProgram *)0)->functions), sizeof( ((idProgram *)0)->functions ) },
	{ "idStaticList < statement_t , 81920 >", "statements", (ptrdiff_t)(&((idProgram *)0)->statements), sizeof( ((idProgram *)0)->statements ) },
	{ "idList < idTypeDef * >", "types", (ptrdiff_t)(&((idProgram *)0)->types), sizeof( ((idProgram *)0)->types ) },
	{ "idList < idVarDefName * >", "varDefNames", (ptrdiff_t)(&((idProgram *)0)->varDefNames), sizeof( ((idProgram *)0)->varDefNames ) },
	{ "idHashIndex", "varDefNameHash", (ptrdiff_t)(&((idProgram *)0)->varDefNameHash), sizeof( ((idProgram *)0)->varDefNameHash ) },
	{ "idList < idVarDef * >", "varDefs", (ptrdiff_t)(&((idProgram *)0)->varDefs), sizeof( ((idProgram *)0)->varDefs ) },
	{ "idVarDef *", "sysDef", (ptrdiff_t)(&((idProgram *)0)->sysDef), sizeof( ((idProgram *)0)->sysDef ) },
	{ "int", "top_functions", (ptrdiff_t)(&((idProgram *)0)->top_functions), sizeof( ((idProgram *)0)->top_functions ) },
	{ "int", "top_statements", (ptrdiff_t)(&((idProgram *)0)->top_statements), sizeof( ((idProgram *)0)->top_statements ) },
	{ "int", "top_types", (ptrdiff_t)(&((idProgram *)0)->top_types), sizeof( ((idProgram *)0)->top_types ) },
	{ "int", "top_defs", (ptrdiff_t)(&((idProgram *)0)->top_defs), sizeof( ((idProgram *)0)->top_defs ) },
	{ "int", "top_files", (ptrdiff_t)(&((idProgram *)0)->top_files), sizeof( ((idProgram *)0)->top_files ) },
	{ "byte *", "som_buffer", (ptrdiff_t)(&((idProgram *)0)->som_buffer), sizeof( ((idProgram *)0)->som_buffer ) },
	{ "int", "som_totalSize", (ptrdiff_t)(&((idProgram *)0)->som_totalSize), sizeof( ((idProgram *)0)->som_totalSize ) },
	{ "idEmbeddedAllocator", "som_allocator", (ptrdiff_t)(&((idProgram *)0)->som_allocator), sizeof( ((idProgram *)0)->som_allocator ) },
	{ "idVarDef *", "returnDef", (ptrdiff_t)(&((idProgram *)0)->returnDef), sizeof( ((idProgram *)0)->returnDef ) },
	{ "idVarDef *", "returnStringDef", (ptrdiff_t)(&((idProgram *)0)->returnStringDef), sizeof( ((idProgram *)0)->returnStringDef ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameBlend_t_typeInfo[] = {
	{ "int", "cycleCount", (ptrdiff_t)(&((frameBlend_t *)0)->cycleCount), sizeof( ((frameBlend_t *)0)->cycleCount ) },
	{ "int", "frame1", (ptrdiff_t)(&((frameBlend_t *)0)->frame1), sizeof( ((frameBlend_t *)0)->frame1 ) },
	{ "int", "frame2", (ptrdiff_t)(&((frameBlend_t *)0)->frame2), sizeof( ((frameBlend_t *)0)->frame2 ) },
	{ "float", "frontlerp", (ptrdiff_t)(&((frameBlend_t *)0)->frontlerp), sizeof( ((frameBlend_t *)0)->frontlerp ) },
	{ "float", "backlerp", (ptrdiff_t)(&((frameBlend_t *)0)->backlerp), sizeof( ((frameBlend_t *)0)->backlerp ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointAnimInfo_t_typeInfo[] = {
	{ "int", "nameIndex", (ptrdiff_t)(&((jointAnimInfo_t *)0)->nameIndex), sizeof( ((jointAnimInfo_t *)0)->nameIndex ) },
	{ "int", "parentNum", (ptrdiff_t)(&((jointAnimInfo_t *)0)->parentNum), sizeof( ((jointAnimInfo_t *)0)->parentNum ) },
	{ "int", "animBits", (ptrdiff_t)(&((jointAnimInfo_t *)0)->animBits), sizeof( ((jointAnimInfo_t *)0)->animBits ) },
	{ "int", "firstComponent", (ptrdiff_t)(&((jointAnimInfo_t *)0)->firstComponent), sizeof( ((jointAnimInfo_t *)0)->firstComponent ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointInfo_t_typeInfo[] = {
	{ "jointHandle_t", "num", (ptrdiff_t)(&((jointInfo_t *)0)->num), sizeof( ((jointInfo_t *)0)->num ) },
	{ "jointHandle_t", "parentNum", (ptrdiff_t)(&((jointInfo_t *)0)->parentNum), sizeof( ((jointInfo_t *)0)->parentNum ) },
	{ "int", "channel", (ptrdiff_t)(&((jointInfo_t *)0)->channel), sizeof( ((jointInfo_t *)0)->channel ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointMod_t_typeInfo[] = {
	{ "jointHandle_t", "jointnum", (ptrdiff_t)(&((jointMod_t *)0)->jointnum), sizeof( ((jointMod_t *)0)->jointnum ) },
	{ "idMat3", "mat", (ptrdiff_t)(&((jointMod_t *)0)->mat), sizeof( ((jointMod_t *)0)->mat ) },
	{ "idVec3", "pos", (ptrdiff_t)(&((jointMod_t *)0)->pos), sizeof( ((jointMod_t *)0)->pos ) },
	{ "jointModTransform_t", "transform_pos", (ptrdiff_t)(&((jointMod_t *)0)->transform_pos), sizeof( ((jointMod_t *)0)->transform_pos ) },
	{ "jointModTransform_t", "transform_axis", (ptrdiff_t)(&((jointMod_t *)0)->transform_axis), sizeof( ((jointMod_t *)0)->transform_axis ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameLookup_t_typeInfo[] = {
	{ "int", "num", (ptrdiff_t)(&((frameLookup_t *)0)->num), sizeof( ((frameLookup_t *)0)->num ) },
	{ "int", "firstCommand", (ptrdiff_t)(&((frameLookup_t *)0)->firstCommand), sizeof( ((frameLookup_t *)0)->firstCommand ) },
	{ NULL, 0 }
};

static classVariableInfo_t class_289_class_289_typeInfo[] = {
//	{ "const idSoundShader *", "soundShader", (ptrdiff_t)(&((class_289::class_289 *)0)->soundShader), sizeof( ((class_289::class_289 *)0)->soundShader ) },
//	{ "const function_t *", "function", (ptrdiff_t)(&((class_289::class_289 *)0)->function), sizeof( ((class_289::class_289 *)0)->function ) },
//	{ "const idDeclSkin *", "skin", (ptrdiff_t)(&((class_289::class_289 *)0)->skin), sizeof( ((class_289::class_289 *)0)->skin ) },
//	{ "int", "index", (ptrdiff_t)(&((class_289::class_289 *)0)->index), sizeof( ((class_289::class_289 *)0)->index ) },
	{ NULL, 0 }
};

static classVariableInfo_t frameCommand_t_typeInfo[] = {
	{ "frameCommandType_t", "type", (ptrdiff_t)(&((frameCommand_t *)0)->type), sizeof( ((frameCommand_t *)0)->type ) },
	{ "idStr *", "string", (ptrdiff_t)(&((frameCommand_t *)0)->string), sizeof( ((frameCommand_t *)0)->string ) },
	{ NULL, 0 }
};

static classVariableInfo_t animFlags_t_typeInfo[] = {
//	{ "bool", "prevent_idle_override", (ptrdiff_t)(&((animFlags_t *)0)->prevent_idle_override), sizeof( ((animFlags_t *)0)->prevent_idle_override ) },
//	{ "bool", "random_cycle_start", (ptrdiff_t)(&((animFlags_t *)0)->random_cycle_start), sizeof( ((animFlags_t *)0)->random_cycle_start ) },
//	{ "bool", "ai_no_turn", (ptrdiff_t)(&((animFlags_t *)0)->ai_no_turn), sizeof( ((animFlags_t *)0)->ai_no_turn ) },
//	{ "bool", "anim_turn", (ptrdiff_t)(&((animFlags_t *)0)->anim_turn), sizeof( ((animFlags_t *)0)->anim_turn ) },
//	{ "bool", "no_random_headturning", (ptrdiff_t)(&((animFlags_t *)0)->no_random_headturning), sizeof( ((animFlags_t *)0)->no_random_headturning ) },
//	{ "bool", "has_voice_fc", (ptrdiff_t)(&((animFlags_t *)0)->has_voice_fc), sizeof( ((animFlags_t *)0)->has_voice_fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idModelExport_typeInfo[] = {
	{ "idStr", "commandLine", (ptrdiff_t)(&((idModelExport *)0)->commandLine), sizeof( ((idModelExport *)0)->commandLine ) },
	{ "idStr", "src", (ptrdiff_t)(&((idModelExport *)0)->src), sizeof( ((idModelExport *)0)->src ) },
	{ "idStr", "dest", (ptrdiff_t)(&((idModelExport *)0)->dest), sizeof( ((idModelExport *)0)->dest ) },
	{ "bool", "force", (ptrdiff_t)(&((idModelExport *)0)->force), sizeof( ((idModelExport *)0)->force ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMD5Anim_typeInfo[] = {
	{ "int", "numFrames", (ptrdiff_t)(&((idMD5Anim *)0)->numFrames), sizeof( ((idMD5Anim *)0)->numFrames ) },
	{ "int", "frameRate", (ptrdiff_t)(&((idMD5Anim *)0)->frameRate), sizeof( ((idMD5Anim *)0)->frameRate ) },
	{ "int", "animLength", (ptrdiff_t)(&((idMD5Anim *)0)->animLength), sizeof( ((idMD5Anim *)0)->animLength ) },
	{ "int", "numJoints", (ptrdiff_t)(&((idMD5Anim *)0)->numJoints), sizeof( ((idMD5Anim *)0)->numJoints ) },
	{ "int", "numAnimatedComponents", (ptrdiff_t)(&((idMD5Anim *)0)->numAnimatedComponents), sizeof( ((idMD5Anim *)0)->numAnimatedComponents ) },
	{ "idList < idBounds >", "bounds", (ptrdiff_t)(&((idMD5Anim *)0)->bounds), sizeof( ((idMD5Anim *)0)->bounds ) },
	{ "idList < jointAnimInfo_t >", "jointInfo", (ptrdiff_t)(&((idMD5Anim *)0)->jointInfo), sizeof( ((idMD5Anim *)0)->jointInfo ) },
	{ "idList < idJointQuat >", "baseFrame", (ptrdiff_t)(&((idMD5Anim *)0)->baseFrame), sizeof( ((idMD5Anim *)0)->baseFrame ) },
	{ "idList < float >", "componentFrames", (ptrdiff_t)(&((idMD5Anim *)0)->componentFrames), sizeof( ((idMD5Anim *)0)->componentFrames ) },
	{ "idStr", "name", (ptrdiff_t)(&((idMD5Anim *)0)->name), sizeof( ((idMD5Anim *)0)->name ) },
	{ "idVec3", "totaldelta", (ptrdiff_t)(&((idMD5Anim *)0)->totaldelta), sizeof( ((idMD5Anim *)0)->totaldelta ) },
	{ "mutable int", "ref_count", (ptrdiff_t)(&((idMD5Anim *)0)->ref_count), sizeof( ((idMD5Anim *)0)->ref_count ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnim_typeInfo[] = {
	{ "const idDeclModelDef *", "modelDef", (ptrdiff_t)(&((idAnim *)0)->modelDef), sizeof( ((idAnim *)0)->modelDef ) },
	{ "const idMD5Anim *[3]", "anims", (ptrdiff_t)(&((idAnim *)0)->anims), sizeof( ((idAnim *)0)->anims ) },
	{ "int", "numAnims", (ptrdiff_t)(&((idAnim *)0)->numAnims), sizeof( ((idAnim *)0)->numAnims ) },
	{ "idStr", "name", (ptrdiff_t)(&((idAnim *)0)->name), sizeof( ((idAnim *)0)->name ) },
	{ "idStr", "realname", (ptrdiff_t)(&((idAnim *)0)->realname), sizeof( ((idAnim *)0)->realname ) },
	{ "idList < frameLookup_t >", "frameLookup", (ptrdiff_t)(&((idAnim *)0)->frameLookup), sizeof( ((idAnim *)0)->frameLookup ) },
	{ "idList < frameCommand_t >", "frameCommands", (ptrdiff_t)(&((idAnim *)0)->frameCommands), sizeof( ((idAnim *)0)->frameCommands ) },
	{ "animFlags_t", "flags", (ptrdiff_t)(&((idAnim *)0)->flags), sizeof( ((idAnim *)0)->flags ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDeclModelDef_typeInfo[] = {
	{ "idVec3", "offset", (ptrdiff_t)(&((idDeclModelDef *)0)->offset), sizeof( ((idDeclModelDef *)0)->offset ) },
	{ "idList < jointInfo_t >", "joints", (ptrdiff_t)(&((idDeclModelDef *)0)->joints), sizeof( ((idDeclModelDef *)0)->joints ) },
	{ "idList < int >", "jointParents", (ptrdiff_t)(&((idDeclModelDef *)0)->jointParents), sizeof( ((idDeclModelDef *)0)->jointParents ) },
	{ "idList < int >[5]", "channelJoints", (ptrdiff_t)(&((idDeclModelDef *)0)->channelJoints), sizeof( ((idDeclModelDef *)0)->channelJoints ) },
	{ "idRenderModel *", "modelHandle", (ptrdiff_t)(&((idDeclModelDef *)0)->modelHandle), sizeof( ((idDeclModelDef *)0)->modelHandle ) },
	{ "idList < idAnim * >", "anims", (ptrdiff_t)(&((idDeclModelDef *)0)->anims), sizeof( ((idDeclModelDef *)0)->anims ) },
	{ "const idDeclSkin *", "skin", (ptrdiff_t)(&((idDeclModelDef *)0)->skin), sizeof( ((idDeclModelDef *)0)->skin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimBlend_typeInfo[] = {
	{ "const idDeclModelDef *", "modelDef", (ptrdiff_t)(&((idAnimBlend *)0)->modelDef), sizeof( ((idAnimBlend *)0)->modelDef ) },
	{ "int", "starttime", (ptrdiff_t)(&((idAnimBlend *)0)->starttime), sizeof( ((idAnimBlend *)0)->starttime ) },
	{ "int", "endtime", (ptrdiff_t)(&((idAnimBlend *)0)->endtime), sizeof( ((idAnimBlend *)0)->endtime ) },
	{ "int", "timeOffset", (ptrdiff_t)(&((idAnimBlend *)0)->timeOffset), sizeof( ((idAnimBlend *)0)->timeOffset ) },
	{ "float", "rate", (ptrdiff_t)(&((idAnimBlend *)0)->rate), sizeof( ((idAnimBlend *)0)->rate ) },
	{ "int", "blendStartTime", (ptrdiff_t)(&((idAnimBlend *)0)->blendStartTime), sizeof( ((idAnimBlend *)0)->blendStartTime ) },
	{ "int", "blendDuration", (ptrdiff_t)(&((idAnimBlend *)0)->blendDuration), sizeof( ((idAnimBlend *)0)->blendDuration ) },
	{ "float", "blendStartValue", (ptrdiff_t)(&((idAnimBlend *)0)->blendStartValue), sizeof( ((idAnimBlend *)0)->blendStartValue ) },
	{ "float", "blendEndValue", (ptrdiff_t)(&((idAnimBlend *)0)->blendEndValue), sizeof( ((idAnimBlend *)0)->blendEndValue ) },
	{ "float[3]", "animWeights", (ptrdiff_t)(&((idAnimBlend *)0)->animWeights), sizeof( ((idAnimBlend *)0)->animWeights ) },
	{ "short", "cycle", (ptrdiff_t)(&((idAnimBlend *)0)->cycle), sizeof( ((idAnimBlend *)0)->cycle ) },
	{ "short", "frame", (ptrdiff_t)(&((idAnimBlend *)0)->frame), sizeof( ((idAnimBlend *)0)->frame ) },
	{ "short", "animNum", (ptrdiff_t)(&((idAnimBlend *)0)->animNum), sizeof( ((idAnimBlend *)0)->animNum ) },
	{ "bool", "allowMove", (ptrdiff_t)(&((idAnimBlend *)0)->allowMove), sizeof( ((idAnimBlend *)0)->allowMove ) },
	{ "bool", "allowFrameCommands", (ptrdiff_t)(&((idAnimBlend *)0)->allowFrameCommands), sizeof( ((idAnimBlend *)0)->allowFrameCommands ) },
	{ "bool", "m_bPaused", (ptrdiff_t)(&((idAnimBlend *)0)->m_bPaused), sizeof( ((idAnimBlend *)0)->m_bPaused ) },
	{ "int", "m_PausedEndtime", (ptrdiff_t)(&((idAnimBlend *)0)->m_PausedEndtime), sizeof( ((idAnimBlend *)0)->m_PausedEndtime ) },
	{ "short", "m_PausedCycle", (ptrdiff_t)(&((idAnimBlend *)0)->m_PausedCycle), sizeof( ((idAnimBlend *)0)->m_PausedCycle ) },
	{ "int", "m_PausedTime", (ptrdiff_t)(&((idAnimBlend *)0)->m_PausedTime), sizeof( ((idAnimBlend *)0)->m_PausedTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFPoseJointMod_typeInfo[] = {
	{ "AFJointModType_t", "mod", (ptrdiff_t)(&((idAFPoseJointMod *)0)->mod), sizeof( ((idAFPoseJointMod *)0)->mod ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((idAFPoseJointMod *)0)->axis), sizeof( ((idAFPoseJointMod *)0)->axis ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((idAFPoseJointMod *)0)->origin), sizeof( ((idAFPoseJointMod *)0)->origin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimator_typeInfo[] = {
	{ "const idDeclModelDef *", "modelDef", (ptrdiff_t)(&((idAnimator *)0)->modelDef), sizeof( ((idAnimator *)0)->modelDef ) },
	{ "idEntity *", "entity", (ptrdiff_t)(&((idAnimator *)0)->entity), sizeof( ((idAnimator *)0)->entity ) },
	{ "idAnimBlend[15]", "channels", (ptrdiff_t)(&((idAnimator *)0)->channels), sizeof( ((idAnimator *)0)->channels ) },
	{ "idList < jointMod_t * >", "jointMods", (ptrdiff_t)(&((idAnimator *)0)->jointMods), sizeof( ((idAnimator *)0)->jointMods ) },
	{ "int", "numJoints", (ptrdiff_t)(&((idAnimator *)0)->numJoints), sizeof( ((idAnimator *)0)->numJoints ) },
	{ "idJointMat *", "joints", (ptrdiff_t)(&((idAnimator *)0)->joints), sizeof( ((idAnimator *)0)->joints ) },
	{ "mutable int", "lastTransformTime", (ptrdiff_t)(&((idAnimator *)0)->lastTransformTime), sizeof( ((idAnimator *)0)->lastTransformTime ) },
	{ "mutable bool", "stoppedAnimatingUpdate", (ptrdiff_t)(&((idAnimator *)0)->stoppedAnimatingUpdate), sizeof( ((idAnimator *)0)->stoppedAnimatingUpdate ) },
	{ "bool", "removeOriginOffset", (ptrdiff_t)(&((idAnimator *)0)->removeOriginOffset), sizeof( ((idAnimator *)0)->removeOriginOffset ) },
	{ "bool", "forceUpdate", (ptrdiff_t)(&((idAnimator *)0)->forceUpdate), sizeof( ((idAnimator *)0)->forceUpdate ) },
	{ "idBounds", "frameBounds", (ptrdiff_t)(&((idAnimator *)0)->frameBounds), sizeof( ((idAnimator *)0)->frameBounds ) },
	{ "float", "AFPoseBlendWeight", (ptrdiff_t)(&((idAnimator *)0)->AFPoseBlendWeight), sizeof( ((idAnimator *)0)->AFPoseBlendWeight ) },
	{ "idList < int >", "AFPoseJoints", (ptrdiff_t)(&((idAnimator *)0)->AFPoseJoints), sizeof( ((idAnimator *)0)->AFPoseJoints ) },
	{ "idList < idAFPoseJointMod >", "AFPoseJointMods", (ptrdiff_t)(&((idAnimator *)0)->AFPoseJointMods), sizeof( ((idAnimator *)0)->AFPoseJointMods ) },
	{ "idList < idJointQuat >", "AFPoseJointFrame", (ptrdiff_t)(&((idAnimator *)0)->AFPoseJointFrame), sizeof( ((idAnimator *)0)->AFPoseJointFrame ) },
	{ "idBounds", "AFPoseBounds", (ptrdiff_t)(&((idAnimator *)0)->AFPoseBounds), sizeof( ((idAnimator *)0)->AFPoseBounds ) },
	{ "int", "AFPoseTime", (ptrdiff_t)(&((idAnimator *)0)->AFPoseTime), sizeof( ((idAnimator *)0)->AFPoseTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimManager_typeInfo[] = {
	{ "idHashTable < idMD5Anim * >", "animations", (ptrdiff_t)(&((idAnimManager *)0)->animations), sizeof( ((idAnimManager *)0)->animations ) },
	{ "idStrList", "jointnames", (ptrdiff_t)(&((idAnimManager *)0)->jointnames), sizeof( ((idAnimManager *)0)->jointnames ) },
	{ "idHashIndex", "jointnamesHash", (ptrdiff_t)(&((idAnimManager *)0)->jointnamesHash), sizeof( ((idAnimManager *)0)->jointnamesHash ) },
	{ NULL, 0 }
};

static classVariableInfo_t eas_RouteNode_typeInfo[] = {
	{ "ActionType", "type", (ptrdiff_t)(&((eas::RouteNode *)0)->type), sizeof( ((eas::RouteNode *)0)->type ) },
	{ "int", "toArea", (ptrdiff_t)(&((eas::RouteNode *)0)->toArea), sizeof( ((eas::RouteNode *)0)->toArea ) },
	{ "int", "toCluster", (ptrdiff_t)(&((eas::RouteNode *)0)->toCluster), sizeof( ((eas::RouteNode *)0)->toCluster ) },
	{ "int", "elevator", (ptrdiff_t)(&((eas::RouteNode *)0)->elevator), sizeof( ((eas::RouteNode *)0)->elevator ) },
	{ "int", "elevatorStation", (ptrdiff_t)(&((eas::RouteNode *)0)->elevatorStation), sizeof( ((eas::RouteNode *)0)->elevatorStation ) },
	{ "int", "nodeTravelTime", (ptrdiff_t)(&((eas::RouteNode *)0)->nodeTravelTime), sizeof( ((eas::RouteNode *)0)->nodeTravelTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t eas_RouteInfo_typeInfo[] = {
	{ "RouteType", "routeType", (ptrdiff_t)(&((eas::RouteInfo *)0)->routeType), sizeof( ((eas::RouteInfo *)0)->routeType ) },
	{ "int", "target", (ptrdiff_t)(&((eas::RouteInfo *)0)->target), sizeof( ((eas::RouteInfo *)0)->target ) },
	{ "RouteNodeList", "routeNodes", (ptrdiff_t)(&((eas::RouteInfo *)0)->routeNodes), sizeof( ((eas::RouteInfo *)0)->routeNodes ) },
	{ "int", "routeTravelTime", (ptrdiff_t)(&((eas::RouteInfo *)0)->routeTravelTime), sizeof( ((eas::RouteInfo *)0)->routeTravelTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasPath_t_typeInfo[] = {
	{ "int", "type", (ptrdiff_t)(&((aasPath_t *)0)->type), sizeof( ((aasPath_t *)0)->type ) },
	{ "idVec3", "moveGoal", (ptrdiff_t)(&((aasPath_t *)0)->moveGoal), sizeof( ((aasPath_t *)0)->moveGoal ) },
	{ "int", "moveAreaNum", (ptrdiff_t)(&((aasPath_t *)0)->moveAreaNum), sizeof( ((aasPath_t *)0)->moveAreaNum ) },
	{ "idVec3", "secondaryGoal", (ptrdiff_t)(&((aasPath_t *)0)->secondaryGoal), sizeof( ((aasPath_t *)0)->secondaryGoal ) },
	{ "const idReachability *", "reachability", (ptrdiff_t)(&((aasPath_t *)0)->reachability), sizeof( ((aasPath_t *)0)->reachability ) },
	{ "eas :: RouteInfoPtr", "elevatorRoute", (ptrdiff_t)(&((aasPath_t *)0)->elevatorRoute), sizeof( ((aasPath_t *)0)->elevatorRoute ) },
	{ "CFrobDoor *", "firstDoor", (ptrdiff_t)(&((aasPath_t *)0)->firstDoor), sizeof( ((aasPath_t *)0)->firstDoor ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasGoal_t_typeInfo[] = {
	{ "int", "areaNum", (ptrdiff_t)(&((aasGoal_t *)0)->areaNum), sizeof( ((aasGoal_t *)0)->areaNum ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((aasGoal_t *)0)->origin), sizeof( ((aasGoal_t *)0)->origin ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasObstacle_t_typeInfo[] = {
	{ "idBounds", "absBounds", (ptrdiff_t)(&((aasObstacle_t *)0)->absBounds), sizeof( ((aasObstacle_t *)0)->absBounds ) },
	{ "idBounds", "expAbsBounds", (ptrdiff_t)(&((aasObstacle_t *)0)->expAbsBounds), sizeof( ((aasObstacle_t *)0)->expAbsBounds ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASCallback_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAAS_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idFlexList_class_type_int_N__typeInfo[] = {
//	{ "int", "num", (ptrdiff_t)(&((idFlexList< class type , int N > *)0)->num), sizeof( ((idFlexList< class type , int N > *)0)->num ) },
//	{ "int", "size", (ptrdiff_t)(&((idFlexList< class type , int N > *)0)->size), sizeof( ((idFlexList< class type , int N > *)0)->size ) },
//	{ "type *", "list", (ptrdiff_t)(&((idFlexList< class type , int N > *)0)->list), sizeof( ((idFlexList< class type , int N > *)0)->list ) },
//	{ "type[1]", "autoStore", (ptrdiff_t)(&((idFlexList< class type , int N > *)0)->autoStore), sizeof( ((idFlexList< class type , int N > *)0)->autoStore ) },
	{ NULL, 0 }
};

static classVariableInfo_t idClipModel_typeInfo[] = {
	{ "bool", "enabled", (ptrdiff_t)(&((idClipModel *)0)->enabled), sizeof( ((idClipModel *)0)->enabled ) },
	{ "idEntity *", "entity", (ptrdiff_t)(&((idClipModel *)0)->entity), sizeof( ((idClipModel *)0)->entity ) },
	{ "int", "id", (ptrdiff_t)(&((idClipModel *)0)->id), sizeof( ((idClipModel *)0)->id ) },
	{ "idEntity *", "owner", (ptrdiff_t)(&((idClipModel *)0)->owner), sizeof( ((idClipModel *)0)->owner ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((idClipModel *)0)->origin), sizeof( ((idClipModel *)0)->origin ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((idClipModel *)0)->axis), sizeof( ((idClipModel *)0)->axis ) },
	{ "idBounds", "bounds", (ptrdiff_t)(&((idClipModel *)0)->bounds), sizeof( ((idClipModel *)0)->bounds ) },
	{ "idBounds", "absBounds", (ptrdiff_t)(&((idClipModel *)0)->absBounds), sizeof( ((idClipModel *)0)->absBounds ) },
	{ "const idMaterial *", "material", (ptrdiff_t)(&((idClipModel *)0)->material), sizeof( ((idClipModel *)0)->material ) },
	{ "int", "contents", (ptrdiff_t)(&((idClipModel *)0)->contents), sizeof( ((idClipModel *)0)->contents ) },
	{ "cmHandle_t", "collisionModelHandle", (ptrdiff_t)(&((idClipModel *)0)->collisionModelHandle), sizeof( ((idClipModel *)0)->collisionModelHandle ) },
	{ "int", "traceModelIndex", (ptrdiff_t)(&((idClipModel *)0)->traceModelIndex), sizeof( ((idClipModel *)0)->traceModelIndex ) },
	{ "int", "renderModelHandle", (ptrdiff_t)(&((idClipModel *)0)->renderModelHandle), sizeof( ((idClipModel *)0)->renderModelHandle ) },
	{ "clipLink_s *", "clipLinks", (ptrdiff_t)(&((idClipModel *)0)->clipLinks), sizeof( ((idClipModel *)0)->clipLinks ) },
	{ "int", "touchCount", (ptrdiff_t)(&((idClipModel *)0)->touchCount), sizeof( ((idClipModel *)0)->touchCount ) },
	{ NULL, 0 }
};

static classVariableInfo_t idClip_typeInfo[] = {
	{ "int", "numClipSectors", (ptrdiff_t)(&((idClip *)0)->numClipSectors), sizeof( ((idClip *)0)->numClipSectors ) },
	{ "clipSector_s *", "clipSectors", (ptrdiff_t)(&((idClip *)0)->clipSectors), sizeof( ((idClip *)0)->clipSectors ) },
	{ "idBounds", "worldBounds", (ptrdiff_t)(&((idClip *)0)->worldBounds), sizeof( ((idClip *)0)->worldBounds ) },
	{ "idClipModel", "temporaryClipModel", (ptrdiff_t)(&((idClip *)0)->temporaryClipModel), sizeof( ((idClip *)0)->temporaryClipModel ) },
	{ "idClipModel", "defaultClipModel", (ptrdiff_t)(&((idClip *)0)->defaultClipModel), sizeof( ((idClip *)0)->defaultClipModel ) },
	{ "mutable int", "touchCount", (ptrdiff_t)(&((idClip *)0)->touchCount), sizeof( ((idClip *)0)->touchCount ) },
	{ "int", "numTranslations", (ptrdiff_t)(&((idClip *)0)->numTranslations), sizeof( ((idClip *)0)->numTranslations ) },
	{ "int", "numRotations", (ptrdiff_t)(&((idClip *)0)->numRotations), sizeof( ((idClip *)0)->numRotations ) },
	{ "int", "numMotions", (ptrdiff_t)(&((idClip *)0)->numMotions), sizeof( ((idClip *)0)->numMotions ) },
	{ "int", "numRenderModelTraces", (ptrdiff_t)(&((idClip *)0)->numRenderModelTraces), sizeof( ((idClip *)0)->numRenderModelTraces ) },
	{ "int", "numContents", (ptrdiff_t)(&((idClip *)0)->numContents), sizeof( ((idClip *)0)->numContents ) },
	{ "int", "numContacts", (ptrdiff_t)(&((idClip *)0)->numContacts), sizeof( ((idClip *)0)->numContacts ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_pushed_s_typeInfo[] = {
	{ "idEntity *", "ent", (ptrdiff_t)(&((idPush::pushed_s *)0)->ent), sizeof( ((idPush::pushed_s *)0)->ent ) },
	{ "idAngles", "deltaViewAngles", (ptrdiff_t)(&((idPush::pushed_s *)0)->deltaViewAngles), sizeof( ((idPush::pushed_s *)0)->deltaViewAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_pushedGroup_s_typeInfo[] = {
	{ "idEntity *", "ent", (ptrdiff_t)(&((idPush::pushedGroup_s *)0)->ent), sizeof( ((idPush::pushedGroup_s *)0)->ent ) },
	{ "float", "fraction", (ptrdiff_t)(&((idPush::pushedGroup_s *)0)->fraction), sizeof( ((idPush::pushedGroup_s *)0)->fraction ) },
	{ "bool", "groundContact", (ptrdiff_t)(&((idPush::pushedGroup_s *)0)->groundContact), sizeof( ((idPush::pushedGroup_s *)0)->groundContact ) },
	{ "bool", "test", (ptrdiff_t)(&((idPush::pushedGroup_s *)0)->test), sizeof( ((idPush::pushedGroup_s *)0)->test ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPush_typeInfo[] = {
	{ "idFlexList < pushed_s , PUSHED_AUTOSIZE >", "pushed", (ptrdiff_t)(&((idPush *)0)->pushed), sizeof( ((idPush *)0)->pushed ) },
	{ "idFlexList < pushedGroup_s , PUSHED_AUTOSIZE >", "pushedGroup", (ptrdiff_t)(&((idPush *)0)->pushedGroup), sizeof( ((idPush *)0)->pushedGroup ) },
	{ NULL, 0 }
};

static classVariableInfo_t pvsHandle_t_typeInfo[] = {
	{ "int", "i", (ptrdiff_t)(&((pvsHandle_t *)0)->i), sizeof( ((pvsHandle_t *)0)->i ) },
	{ "unsigned int", "h", (ptrdiff_t)(&((pvsHandle_t *)0)->h), sizeof( ((pvsHandle_t *)0)->h ) },
	{ NULL, 0 }
};

static classVariableInfo_t pvsCurrent_t_typeInfo[] = {
	{ "pvsHandle_t", "handle", (ptrdiff_t)(&((pvsCurrent_t *)0)->handle), sizeof( ((pvsCurrent_t *)0)->handle ) },
	{ "byte *", "pvs", (ptrdiff_t)(&((pvsCurrent_t *)0)->pvs), sizeof( ((pvsCurrent_t *)0)->pvs ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPVS_typeInfo[] = {
	{ "int", "numAreas", (ptrdiff_t)(&((idPVS *)0)->numAreas), sizeof( ((idPVS *)0)->numAreas ) },
	{ "int", "numPortals", (ptrdiff_t)(&((idPVS *)0)->numPortals), sizeof( ((idPVS *)0)->numPortals ) },
	{ "bool *", "connectedAreas", (ptrdiff_t)(&((idPVS *)0)->connectedAreas), sizeof( ((idPVS *)0)->connectedAreas ) },
	{ "int *", "areaQueue", (ptrdiff_t)(&((idPVS *)0)->areaQueue), sizeof( ((idPVS *)0)->areaQueue ) },
	{ "byte *", "areaPVS", (ptrdiff_t)(&((idPVS *)0)->areaPVS), sizeof( ((idPVS *)0)->areaPVS ) },
	{ "mutable pvsCurrent_t[16]", "currentPVS", (ptrdiff_t)(&((idPVS *)0)->currentPVS), sizeof( ((idPVS *)0)->currentPVS ) },
	{ "int", "portalVisBytes", (ptrdiff_t)(&((idPVS *)0)->portalVisBytes), sizeof( ((idPVS *)0)->portalVisBytes ) },
	{ "int", "portalVisWords", (ptrdiff_t)(&((idPVS *)0)->portalVisWords), sizeof( ((idPVS *)0)->portalVisWords ) },
	{ "int", "areaVisBytes", (ptrdiff_t)(&((idPVS *)0)->areaVisBytes), sizeof( ((idPVS *)0)->areaVisBytes ) },
	{ "int", "areaVisWords", (ptrdiff_t)(&((idPVS *)0)->areaVisWords), sizeof( ((idPVS *)0)->areaVisWords ) },
	{ "pvsPortal_s *", "pvsPortals", (ptrdiff_t)(&((idPVS *)0)->pvsPortals), sizeof( ((idPVS *)0)->pvsPortals ) },
	{ "pvsArea_s *", "pvsAreas", (ptrdiff_t)(&((idPVS *)0)->pvsAreas), sizeof( ((idPVS *)0)->pvsAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t difficulty_Setting_typeInfo[] = {
	{ "idStr", "className", (ptrdiff_t)(&((difficulty::Setting *)0)->className), sizeof( ((difficulty::Setting *)0)->className ) },
	{ "idStr", "spawnArg", (ptrdiff_t)(&((difficulty::Setting *)0)->spawnArg), sizeof( ((difficulty::Setting *)0)->spawnArg ) },
	{ "idStr", "argument", (ptrdiff_t)(&((difficulty::Setting *)0)->argument), sizeof( ((difficulty::Setting *)0)->argument ) },
	{ "EApplicationType", "appType", (ptrdiff_t)(&((difficulty::Setting *)0)->appType), sizeof( ((difficulty::Setting *)0)->appType ) },
	{ "bool", "isValid", (ptrdiff_t)(&((difficulty::Setting *)0)->isValid), sizeof( ((difficulty::Setting *)0)->isValid ) },
	{ NULL, 0 }
};

static classVariableInfo_t difficulty_DifficultySettings_typeInfo[] = {
	{ "SettingsMap", "_settings", (ptrdiff_t)(&((difficulty::DifficultySettings *)0)->_settings), sizeof( ((difficulty::DifficultySettings *)0)->_settings ) },
	{ "InheritanceChainsMap", "_inheritanceChains", (ptrdiff_t)(&((difficulty::DifficultySettings *)0)->_inheritanceChains), sizeof( ((difficulty::DifficultySettings *)0)->_inheritanceChains ) },
	{ "int", "_level", (ptrdiff_t)(&((difficulty::DifficultySettings *)0)->_level), sizeof( ((difficulty::DifficultySettings *)0)->_level ) },
	{ NULL, 0 }
};

static classVariableInfo_t difficulty_CVARSetting_typeInfo[] = {
	{ "idStr", "cvar", (ptrdiff_t)(&((difficulty::CVARSetting *)0)->cvar), sizeof( ((difficulty::CVARSetting *)0)->cvar ) },
	{ NULL, 0 }
};

static classVariableInfo_t difficulty_CVARDifficultySettings_typeInfo[] = {
	{ "SettingsMap", "_settings", (ptrdiff_t)(&((difficulty::CVARDifficultySettings *)0)->_settings), sizeof( ((difficulty::CVARDifficultySettings *)0)->_settings ) },
	{ "int", "_level", (ptrdiff_t)(&((difficulty::CVARDifficultySettings *)0)->_level), sizeof( ((difficulty::CVARDifficultySettings *)0)->_level ) },
	{ NULL, 0 }
};

static classVariableInfo_t difficulty_DifficultyManager_typeInfo[] = {
	{ "int", "_difficulty", (ptrdiff_t)(&((difficulty::DifficultyManager *)0)->_difficulty), sizeof( ((difficulty::DifficultyManager *)0)->_difficulty ) },
	{ "DifficultySettings[3]", "_globalSettings", (ptrdiff_t)(&((difficulty::DifficultyManager *)0)->_globalSettings), sizeof( ((difficulty::DifficultyManager *)0)->_globalSettings ) },
	{ "CVARDifficultySettings[3]", "_cvarSettings", (ptrdiff_t)(&((difficulty::DifficultyManager *)0)->_cvarSettings), sizeof( ((difficulty::DifficultyManager *)0)->_cvarSettings ) },
	{ "idStr[3]", "_difficultyNames", (ptrdiff_t)(&((difficulty::DifficultyManager *)0)->_difficultyNames), sizeof( ((difficulty::DifficultyManager *)0)->_difficultyNames ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_AreaManager_typeInfo[] = {
	{ "ForbiddenAreasMap", "_forbiddenAreas", (ptrdiff_t)(&((ai::AreaManager *)0)->_forbiddenAreas), sizeof( ((ai::AreaManager *)0)->_forbiddenAreas ) },
	{ "AiAreasMap", "_aiAreas", (ptrdiff_t)(&((ai::AreaManager *)0)->_aiAreas), sizeof( ((ai::AreaManager *)0)->_aiAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t GamePlayTimer_typeInfo[] = {
	{ "std :: time_t", "_lastTime", (ptrdiff_t)(&((GamePlayTimer *)0)->_lastTime), sizeof( ((GamePlayTimer *)0)->_lastTime ) },
	{ "std :: time_t", "_curTime", (ptrdiff_t)(&((GamePlayTimer *)0)->_curTime), sizeof( ((GamePlayTimer *)0)->_curTime ) },
	{ "uint32_t", "_timePassed", (ptrdiff_t)(&((GamePlayTimer *)0)->_timePassed), sizeof( ((GamePlayTimer *)0)->_timePassed ) },
	{ "bool", "_enabled", (ptrdiff_t)(&((GamePlayTimer *)0)->_enabled), sizeof( ((GamePlayTimer *)0)->_enabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t model_ofs_t_typeInfo[] = {
	{ "idVec3", "offset", (ptrdiff_t)(&((model_ofs_t *)0)->offset), sizeof( ((model_ofs_t *)0)->offset ) },
	{ "idVec3", "scale", (ptrdiff_t)(&((model_ofs_t *)0)->scale), sizeof( ((model_ofs_t *)0)->scale ) },
	{ "idAngles", "angles", (ptrdiff_t)(&((model_ofs_t *)0)->angles), sizeof( ((model_ofs_t *)0)->angles ) },
	{ "dword", "color", (ptrdiff_t)(&((model_ofs_t *)0)->color), sizeof( ((model_ofs_t *)0)->color ) },
	{ "int", "lod", (ptrdiff_t)(&((model_ofs_t *)0)->lod), sizeof( ((model_ofs_t *)0)->lod ) },
	{ "int", "flags", (ptrdiff_t)(&((model_ofs_t *)0)->flags), sizeof( ((model_ofs_t *)0)->flags ) },
	{ NULL, 0 }
};

static classVariableInfo_t model_target_surf_typeInfo[] = {
	{ "int", "numVerts", (ptrdiff_t)(&((model_target_surf *)0)->numVerts), sizeof( ((model_target_surf *)0)->numVerts ) },
	{ "int", "numIndexes", (ptrdiff_t)(&((model_target_surf *)0)->numIndexes), sizeof( ((model_target_surf *)0)->numIndexes ) },
	{ "modelSurface_s", "surf", (ptrdiff_t)(&((model_target_surf *)0)->surf), sizeof( ((model_target_surf *)0)->surf ) },
	{ NULL, 0 }
};

static classVariableInfo_t lod_data_t_typeInfo[] = {
	{ "bool", "bDistCheckXYOnly", (ptrdiff_t)(&((lod_data_t *)0)->bDistCheckXYOnly), sizeof( ((lod_data_t *)0)->bDistCheckXYOnly ) },
	{ "int", "DistCheckInterval", (ptrdiff_t)(&((lod_data_t *)0)->DistCheckInterval), sizeof( ((lod_data_t *)0)->DistCheckInterval ) },
	{ "float[7]", "DistLODSq", (ptrdiff_t)(&((lod_data_t *)0)->DistLODSq), sizeof( ((lod_data_t *)0)->DistLODSq ) },
	{ "idStr[7]", "ModelLOD", (ptrdiff_t)(&((lod_data_t *)0)->ModelLOD), sizeof( ((lod_data_t *)0)->ModelLOD ) },
	{ "idStr[7]", "SkinLOD", (ptrdiff_t)(&((lod_data_t *)0)->SkinLOD), sizeof( ((lod_data_t *)0)->SkinLOD ) },
	{ "idVec3[7]", "OffsetLOD", (ptrdiff_t)(&((lod_data_t *)0)->OffsetLOD), sizeof( ((lod_data_t *)0)->OffsetLOD ) },
	{ "int", "noshadowsLOD", (ptrdiff_t)(&((lod_data_t *)0)->noshadowsLOD), sizeof( ((lod_data_t *)0)->noshadowsLOD ) },
	{ "float", "fLODFadeOutRange", (ptrdiff_t)(&((lod_data_t *)0)->fLODFadeOutRange), sizeof( ((lod_data_t *)0)->fLODFadeOutRange ) },
	{ "float", "fLODFadeInRange", (ptrdiff_t)(&((lod_data_t *)0)->fLODFadeInRange), sizeof( ((lod_data_t *)0)->fLODFadeInRange ) },
	{ "float", "fLODNormalDistance", (ptrdiff_t)(&((lod_data_t *)0)->fLODNormalDistance), sizeof( ((lod_data_t *)0)->fLODNormalDistance ) },
	{ NULL, 0 }
};

static classVariableInfo_t lod_entry_t_typeInfo[] = {
	{ "int", "users", (ptrdiff_t)(&((lod_entry_t *)0)->users), sizeof( ((lod_entry_t *)0)->users ) },
	{ "lod_data_t *", "LODPtr", (ptrdiff_t)(&((lod_entry_t *)0)->LODPtr), sizeof( ((lod_entry_t *)0)->LODPtr ) },
	{ NULL, 0 }
};

static classVariableInfo_t model_stage_info_t_typeInfo[] = {
	{ "bool", "couldCastShadow", (ptrdiff_t)(&((model_stage_info_t *)0)->couldCastShadow), sizeof( ((model_stage_info_t *)0)->couldCastShadow ) },
	{ "unsigned int", "usedShadowless", (ptrdiff_t)(&((model_stage_info_t *)0)->usedShadowless), sizeof( ((model_stage_info_t *)0)->usedShadowless ) },
	{ "unsigned int", "usedShadowing", (ptrdiff_t)(&((model_stage_info_t *)0)->usedShadowing), sizeof( ((model_stage_info_t *)0)->usedShadowing ) },
	{ "const idRenderModel *", "source", (ptrdiff_t)(&((model_stage_info_t *)0)->source), sizeof( ((model_stage_info_t *)0)->source ) },
	{ "idList < int >", "noshadowSurfaces", (ptrdiff_t)(&((model_stage_info_t *)0)->noshadowSurfaces), sizeof( ((model_stage_info_t *)0)->noshadowSurfaces ) },
	{ "idList < int >", "shadowSurfaces", (ptrdiff_t)(&((model_stage_info_t *)0)->shadowSurfaces), sizeof( ((model_stage_info_t *)0)->shadowSurfaces ) },
	{ "idList < int >", "surface_info", (ptrdiff_t)(&((model_stage_info_t *)0)->surface_info), sizeof( ((model_stage_info_t *)0)->surface_info ) },
	{ NULL, 0 }
};

static classVariableInfo_t CModelGenerator_typeInfo[] = {
	{ "idStr", "m_shadowTexturePrefix", (ptrdiff_t)(&((CModelGenerator *)0)->m_shadowTexturePrefix), sizeof( ((CModelGenerator *)0)->m_shadowTexturePrefix ) },
	{ "idList < lod_entry_t >", "m_LODList", (ptrdiff_t)(&((CModelGenerator *)0)->m_LODList), sizeof( ((CModelGenerator *)0)->m_LODList ) },
	{ NULL, 0 }
};

static classVariableInfo_t light_controller_ambient_t_typeInfo[] = {
	{ "idVec3", "origin", (ptrdiff_t)(&((light_controller_ambient_t *)0)->origin), sizeof( ((light_controller_ambient_t *)0)->origin ) },
	{ "idVec3", "color", (ptrdiff_t)(&((light_controller_ambient_t *)0)->color), sizeof( ((light_controller_ambient_t *)0)->color ) },
	{ "idVec3", "target_color", (ptrdiff_t)(&((light_controller_ambient_t *)0)->target_color), sizeof( ((light_controller_ambient_t *)0)->target_color ) },
	{ NULL, 0 }
};

static classVariableInfo_t light_controller_light_t_typeInfo[] = {
	{ "idVec3", "origin", (ptrdiff_t)(&((light_controller_light_t *)0)->origin), sizeof( ((light_controller_light_t *)0)->origin ) },
	{ "idVec3", "color", (ptrdiff_t)(&((light_controller_light_t *)0)->color), sizeof( ((light_controller_light_t *)0)->color ) },
	{ "float", "radius", (ptrdiff_t)(&((light_controller_light_t *)0)->radius), sizeof( ((light_controller_light_t *)0)->radius ) },
	{ NULL, 0 }
};

static classVariableInfo_t CLightController_typeInfo[] = {
	{ "idList < light_controller_ambient_t >", "m_Ambients", (ptrdiff_t)(&((CLightController *)0)->m_Ambients), sizeof( ((CLightController *)0)->m_Ambients ) },
	{ "idList < light_controller_light_t >", "m_Lights", (ptrdiff_t)(&((CLightController *)0)->m_Lights), sizeof( ((CLightController *)0)->m_Lights ) },
	{ "bool", "m_bActive", (ptrdiff_t)(&((CLightController *)0)->m_bActive), sizeof( ((CLightController *)0)->m_bActive ) },
	{ NULL, 0 }
};

static classVariableInfo_t CModMenu_typeInfo[] = {
	{ "int", "_modTop", (ptrdiff_t)(&((CModMenu *)0)->_modTop), sizeof( ((CModMenu *)0)->_modTop ) },
	{ "int", "_briefingPage", (ptrdiff_t)(&((CModMenu *)0)->_briefingPage), sizeof( ((CModMenu *)0)->_briefingPage ) },
	{ NULL, 0 }
};

static classVariableInfo_t entityNetEvent_t_typeInfo[] = {
	{ "int", "spawnId", (ptrdiff_t)(&((entityNetEvent_t *)0)->spawnId), sizeof( ((entityNetEvent_t *)0)->spawnId ) },
	{ "int", "event", (ptrdiff_t)(&((entityNetEvent_t *)0)->event), sizeof( ((entityNetEvent_t *)0)->event ) },
	{ "int", "time", (ptrdiff_t)(&((entityNetEvent_t *)0)->time), sizeof( ((entityNetEvent_t *)0)->time ) },
	{ "int", "paramsSize", (ptrdiff_t)(&((entityNetEvent_t *)0)->paramsSize), sizeof( ((entityNetEvent_t *)0)->paramsSize ) },
	{ "byte[128]", "paramsBuf", (ptrdiff_t)(&((entityNetEvent_t *)0)->paramsBuf), sizeof( ((entityNetEvent_t *)0)->paramsBuf ) },
	{ "entityNetEvent_s *", "next", (ptrdiff_t)(&((entityNetEvent_t *)0)->next), sizeof( ((entityNetEvent_t *)0)->next ) },
	{ "entityNetEvent_s *", "prev", (ptrdiff_t)(&((entityNetEvent_t *)0)->prev), sizeof( ((entityNetEvent_t *)0)->prev ) },
	{ NULL, 0 }
};

static classVariableInfo_t GuiMessage_typeInfo[] = {
	{ "idStr", "title", (ptrdiff_t)(&((GuiMessage *)0)->title), sizeof( ((GuiMessage *)0)->title ) },
	{ "idStr", "message", (ptrdiff_t)(&((GuiMessage *)0)->message), sizeof( ((GuiMessage *)0)->message ) },
	{ "Type", "type", (ptrdiff_t)(&((GuiMessage *)0)->type), sizeof( ((GuiMessage *)0)->type ) },
	{ "idStr", "positiveCmd", (ptrdiff_t)(&((GuiMessage *)0)->positiveCmd), sizeof( ((GuiMessage *)0)->positiveCmd ) },
	{ "idStr", "negativeCmd", (ptrdiff_t)(&((GuiMessage *)0)->negativeCmd), sizeof( ((GuiMessage *)0)->negativeCmd ) },
	{ "idStr", "okCmd", (ptrdiff_t)(&((GuiMessage *)0)->okCmd), sizeof( ((GuiMessage *)0)->okCmd ) },
	{ "idStr", "positiveLabel", (ptrdiff_t)(&((GuiMessage *)0)->positiveLabel), sizeof( ((GuiMessage *)0)->positiveLabel ) },
	{ "idStr", "negativeLabel", (ptrdiff_t)(&((GuiMessage *)0)->negativeLabel), sizeof( ((GuiMessage *)0)->negativeLabel ) },
	{ "idStr", "okLabel", (ptrdiff_t)(&((GuiMessage *)0)->okLabel), sizeof( ((GuiMessage *)0)->okLabel ) },
	{ NULL, 0 }
};

static classVariableInfo_t spawnSpot_t_typeInfo[] = {
	{ "idEntity *", "ent", (ptrdiff_t)(&((spawnSpot_t *)0)->ent), sizeof( ((spawnSpot_t *)0)->ent ) },
	{ "int", "dist", (ptrdiff_t)(&((spawnSpot_t *)0)->dist), sizeof( ((spawnSpot_t *)0)->dist ) },
	{ NULL, 0 }
};

static classVariableInfo_t SSprFlagBits_typeInfo[] = {
//	{ "unsigned int", "friendly", (ptrdiff_t)(&((SSprFlagBits *)0)->friendly), sizeof( ((SSprFlagBits *)0)->friendly ) },
//	{ "unsigned int", "neutral", (ptrdiff_t)(&((SSprFlagBits *)0)->neutral), sizeof( ((SSprFlagBits *)0)->neutral ) },
//	{ "unsigned int", "enemy", (ptrdiff_t)(&((SSprFlagBits *)0)->enemy), sizeof( ((SSprFlagBits *)0)->enemy ) },
//	{ "unsigned int", "same", (ptrdiff_t)(&((SSprFlagBits *)0)->same), sizeof( ((SSprFlagBits *)0)->same ) },
//	{ "unsigned int", "omni_dir", (ptrdiff_t)(&((SSprFlagBits *)0)->omni_dir), sizeof( ((SSprFlagBits *)0)->omni_dir ) },
//	{ "unsigned int", "unique_loc", (ptrdiff_t)(&((SSprFlagBits *)0)->unique_loc), sizeof( ((SSprFlagBits *)0)->unique_loc ) },
//	{ "unsigned int", "urgent", (ptrdiff_t)(&((SSprFlagBits *)0)->urgent), sizeof( ((SSprFlagBits *)0)->urgent ) },
//	{ "unsigned int", "global_vol", (ptrdiff_t)(&((SSprFlagBits *)0)->global_vol), sizeof( ((SSprFlagBits *)0)->global_vol ) },
//	{ "unsigned int", "check_touched", (ptrdiff_t)(&((SSprFlagBits *)0)->check_touched), sizeof( ((SSprFlagBits *)0)->check_touched ) },
	{ NULL, 0 }
};

static classVariableInfo_t USprFlags_typeInfo[] = {
	{ "unsigned int", "m_field", (ptrdiff_t)(&((USprFlags *)0)->m_field), sizeof( ((USprFlags *)0)->m_field ) },
	{ "SSprFlagBits", "m_bits", (ptrdiff_t)(&((USprFlags *)0)->m_bits), sizeof( ((USprFlags *)0)->m_bits ) },
	{ NULL, 0 }
};

static classVariableInfo_t SSprParms_typeInfo[] = {
	{ "USprFlags", "flags", (ptrdiff_t)(&((SSprParms *)0)->flags), sizeof( ((SSprParms *)0)->flags ) },
	{ "idStr", "name", (ptrdiff_t)(&((SSprParms *)0)->name), sizeof( ((SSprParms *)0)->name ) },
	{ "float", "propVol", (ptrdiff_t)(&((SSprParms *)0)->propVol), sizeof( ((SSprParms *)0)->propVol ) },
	{ "idVec3", "direction", (ptrdiff_t)(&((SSprParms *)0)->direction), sizeof( ((SSprParms *)0)->direction ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((SSprParms *)0)->origin), sizeof( ((SSprParms *)0)->origin ) },
	{ "float", "duration", (ptrdiff_t)(&((SSprParms *)0)->duration), sizeof( ((SSprParms *)0)->duration ) },
	{ "int", "frequency", (ptrdiff_t)(&((SSprParms *)0)->frequency), sizeof( ((SSprParms *)0)->frequency ) },
	{ "float", "bandwidth", (ptrdiff_t)(&((SSprParms *)0)->bandwidth), sizeof( ((SSprParms *)0)->bandwidth ) },
	{ "float", "loudness", (ptrdiff_t)(&((SSprParms *)0)->loudness), sizeof( ((SSprParms *)0)->loudness ) },
	{ "float", "alertFactor", (ptrdiff_t)(&((SSprParms *)0)->alertFactor), sizeof( ((SSprParms *)0)->alertFactor ) },
	{ "float", "alertMax", (ptrdiff_t)(&((SSprParms *)0)->alertMax), sizeof( ((SSprParms *)0)->alertMax ) },
	{ "bool", "bSameArea", (ptrdiff_t)(&((SSprParms *)0)->bSameArea), sizeof( ((SSprParms *)0)->bSameArea ) },
	{ "bool", "bDetailedPath", (ptrdiff_t)(&((SSprParms *)0)->bDetailedPath), sizeof( ((SSprParms *)0)->bDetailedPath ) },
	{ "int", "floods", (ptrdiff_t)(&((SSprParms *)0)->floods), sizeof( ((SSprParms *)0)->floods ) },
	{ "idEntity *", "maker", (ptrdiff_t)(&((SSprParms *)0)->maker), sizeof( ((SSprParms *)0)->maker ) },
	{ "idAI *", "makerAI", (ptrdiff_t)(&((SSprParms *)0)->makerAI), sizeof( ((SSprParms *)0)->makerAI ) },
	{ "int", "messageTag", (ptrdiff_t)(&((SSprParms *)0)->messageTag), sizeof( ((SSprParms *)0)->messageTag ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntityPtr_class_type__typeInfo[] = {
//	{ "int", "entityId", (ptrdiff_t)(&((idEntityPtr< class type > *)0)->entityId), sizeof( ((idEntityPtr< class type > *)0)->entityId ) },
//	{ "int", "spawnId", (ptrdiff_t)(&((idEntityPtr< class type > *)0)->spawnId), sizeof( ((idEntityPtr< class type > *)0)->spawnId ) },
	{ NULL, 0 }
};

static classVariableInfo_t LightGem_typeInfo[] = {
	{ "int", "m_LightgemShotSpot", (ptrdiff_t)(&((LightGem *)0)->m_LightgemShotSpot), sizeof( ((LightGem *)0)->m_LightgemShotSpot ) },
	{ "float[2]", "m_LightgemShotValue", (ptrdiff_t)(&((LightGem *)0)->m_LightgemShotValue), sizeof( ((LightGem *)0)->m_LightgemShotValue ) },
	{ "float[4]", "m_fColVal", (ptrdiff_t)(&((LightGem *)0)->m_fColVal), sizeof( ((LightGem *)0)->m_fColVal ) },
	{ "unsigned char *", "m_LightgemImgBufferFrontend", (ptrdiff_t)(&((LightGem *)0)->m_LightgemImgBufferFrontend), sizeof( ((LightGem *)0)->m_LightgemImgBufferFrontend ) },
	{ "unsigned char *", "m_LightgemImgBufferBackend", (ptrdiff_t)(&((LightGem *)0)->m_LightgemImgBufferBackend), sizeof( ((LightGem *)0)->m_LightgemImgBufferBackend ) },
	{ "idEntityPtr < idEntity >", "m_LightgemSurface", (ptrdiff_t)(&((LightGem *)0)->m_LightgemSurface), sizeof( ((LightGem *)0)->m_LightgemSurface ) },
	{ NULL, 0 }
};

static classVariableInfo_t SuspiciousEvent_typeInfo[] = {
	{ "EventType", "type", (ptrdiff_t)(&((SuspiciousEvent *)0)->type), sizeof( ((SuspiciousEvent *)0)->type ) },
	{ "idVec3", "location", (ptrdiff_t)(&((SuspiciousEvent *)0)->location), sizeof( ((SuspiciousEvent *)0)->location ) },
	{ "idEntityPtr < idEntity >", "entity", (ptrdiff_t)(&((SuspiciousEvent *)0)->entity), sizeof( ((SuspiciousEvent *)0)->entity ) },
	{ "int", "time", (ptrdiff_t)(&((SuspiciousEvent *)0)->time), sizeof( ((SuspiciousEvent *)0)->time ) },
	{ NULL, 0 }
};

static classVariableInfo_t darkModHidingSpot_typeInfo[] = {
	{ "aasGoal_t", "goal", (ptrdiff_t)(&((darkModHidingSpot *)0)->goal), sizeof( ((darkModHidingSpot *)0)->goal ) },
	{ "int", "hidingSpotTypes", (ptrdiff_t)(&((darkModHidingSpot *)0)->hidingSpotTypes), sizeof( ((darkModHidingSpot *)0)->hidingSpotTypes ) },
	{ "float", "lightQuotient", (ptrdiff_t)(&((darkModHidingSpot *)0)->lightQuotient), sizeof( ((darkModHidingSpot *)0)->lightQuotient ) },
	{ "float", "qualityWithoutDistanceFactor", (ptrdiff_t)(&((darkModHidingSpot *)0)->qualityWithoutDistanceFactor), sizeof( ((darkModHidingSpot *)0)->qualityWithoutDistanceFactor ) },
	{ "float", "quality", (ptrdiff_t)(&((darkModHidingSpot *)0)->quality), sizeof( ((darkModHidingSpot *)0)->quality ) },
	{ NULL, 0 }
};

static classVariableInfo_t TDarkmodHidingSpotAreaNode_typeInfo[] = {
	{ "int", "id", (ptrdiff_t)(&((TDarkmodHidingSpotAreaNode *)0)->id), sizeof( ((TDarkmodHidingSpotAreaNode *)0)->id ) },
	{ "unsigned int", "aasAreaIndex", (ptrdiff_t)(&((TDarkmodHidingSpotAreaNode *)0)->aasAreaIndex), sizeof( ((TDarkmodHidingSpotAreaNode *)0)->aasAreaIndex ) },
	{ "unsigned int", "count", (ptrdiff_t)(&((TDarkmodHidingSpotAreaNode *)0)->count), sizeof( ((TDarkmodHidingSpotAreaNode *)0)->count ) },
	{ "TDarkmodHidingSpotAreaNode *", "p_prevSibling", (ptrdiff_t)(&((TDarkmodHidingSpotAreaNode *)0)->p_prevSibling), sizeof( ((TDarkmodHidingSpotAreaNode *)0)->p_prevSibling ) },
	{ "TDarkmodHidingSpotAreaNode *", "p_nextSibling", (ptrdiff_t)(&((TDarkmodHidingSpotAreaNode *)0)->p_nextSibling), sizeof( ((TDarkmodHidingSpotAreaNode *)0)->p_nextSibling ) },
	{ "idList < darkModHidingSpot * >", "spots", (ptrdiff_t)(&((TDarkmodHidingSpotAreaNode *)0)->spots), sizeof( ((TDarkmodHidingSpotAreaNode *)0)->spots ) },
	{ "float", "bestSpotQuality", (ptrdiff_t)(&((TDarkmodHidingSpotAreaNode *)0)->bestSpotQuality), sizeof( ((TDarkmodHidingSpotAreaNode *)0)->bestSpotQuality ) },
	{ "idBounds", "bounds", (ptrdiff_t)(&((TDarkmodHidingSpotAreaNode *)0)->bounds), sizeof( ((TDarkmodHidingSpotAreaNode *)0)->bounds ) },
	{ NULL, 0 }
};

static classVariableInfo_t CDarkmodHidingSpotTree_typeInfo[] = {
	{ "int", "maxAreaNodeId", (ptrdiff_t)(&((CDarkmodHidingSpotTree *)0)->maxAreaNodeId), sizeof( ((CDarkmodHidingSpotTree *)0)->maxAreaNodeId ) },
	{ "unsigned int", "numAreas", (ptrdiff_t)(&((CDarkmodHidingSpotTree *)0)->numAreas), sizeof( ((CDarkmodHidingSpotTree *)0)->numAreas ) },
	{ "unsigned int", "numSpots", (ptrdiff_t)(&((CDarkmodHidingSpotTree *)0)->numSpots), sizeof( ((CDarkmodHidingSpotTree *)0)->numSpots ) },
	{ "TDarkmodHidingSpotAreaNode *", "p_firstArea", (ptrdiff_t)(&((CDarkmodHidingSpotTree *)0)->p_firstArea), sizeof( ((CDarkmodHidingSpotTree *)0)->p_firstArea ) },
	{ "TDarkmodHidingSpotAreaNode *", "p_lastArea", (ptrdiff_t)(&((CDarkmodHidingSpotTree *)0)->p_lastArea), sizeof( ((CDarkmodHidingSpotTree *)0)->p_lastArea ) },
	{ NULL, 0 }
};

static classVariableInfo_t Assignment_typeInfo[] = {
	{ "idVec3", "_origin", (ptrdiff_t)(&((Assignment *)0)->_origin), sizeof( ((Assignment *)0)->_origin ) },
	{ "float", "_outerRadius", (ptrdiff_t)(&((Assignment *)0)->_outerRadius), sizeof( ((Assignment *)0)->_outerRadius ) },
	{ "idBounds", "_limits", (ptrdiff_t)(&((Assignment *)0)->_limits), sizeof( ((Assignment *)0)->_limits ) },
	{ "idAI *", "_searcher", (ptrdiff_t)(&((Assignment *)0)->_searcher), sizeof( ((Assignment *)0)->_searcher ) },
	{ "int", "_lastSpotAssigned", (ptrdiff_t)(&((Assignment *)0)->_lastSpotAssigned), sizeof( ((Assignment *)0)->_lastSpotAssigned ) },
	{ "int", "_sector", (ptrdiff_t)(&((Assignment *)0)->_sector), sizeof( ((Assignment *)0)->_sector ) },
	{ "smRole_t", "_searcherRole", (ptrdiff_t)(&((Assignment *)0)->_searcherRole), sizeof( ((Assignment *)0)->_searcherRole ) },
	{ NULL, 0 }
};

static classVariableInfo_t Search_typeInfo[] = {
	{ "int", "_searchID", (ptrdiff_t)(&((Search *)0)->_searchID), sizeof( ((Search *)0)->_searchID ) },
	{ "int", "_eventID", (ptrdiff_t)(&((Search *)0)->_eventID), sizeof( ((Search *)0)->_eventID ) },
	{ "bool", "_isCoopSearch", (ptrdiff_t)(&((Search *)0)->_isCoopSearch), sizeof( ((Search *)0)->_isCoopSearch ) },
	{ "int", "_hidingSpotSearchHandle", (ptrdiff_t)(&((Search *)0)->_hidingSpotSearchHandle), sizeof( ((Search *)0)->_hidingSpotSearchHandle ) },
	{ "idVec3", "_origin", (ptrdiff_t)(&((Search *)0)->_origin), sizeof( ((Search *)0)->_origin ) },
	{ "idBounds", "_limits", (ptrdiff_t)(&((Search *)0)->_limits), sizeof( ((Search *)0)->_limits ) },
	{ "idBounds", "_exclusion_limits", (ptrdiff_t)(&((Search *)0)->_exclusion_limits), sizeof( ((Search *)0)->_exclusion_limits ) },
	{ "float", "_outerRadius", (ptrdiff_t)(&((Search *)0)->_outerRadius), sizeof( ((Search *)0)->_outerRadius ) },
	{ "float", "_referenceAlertLevel", (ptrdiff_t)(&((Search *)0)->_referenceAlertLevel), sizeof( ((Search *)0)->_referenceAlertLevel ) },
	{ "CDarkmodHidingSpotTree", "_hidingSpots", (ptrdiff_t)(&((Search *)0)->_hidingSpots), sizeof( ((Search *)0)->_hidingSpots ) },
	{ "bool", "_hidingSpotsReady", (ptrdiff_t)(&((Search *)0)->_hidingSpotsReady), sizeof( ((Search *)0)->_hidingSpotsReady ) },
	{ "std :: vector < int >", "_hidingSpotIndexes", (ptrdiff_t)(&((Search *)0)->_hidingSpotIndexes), sizeof( ((Search *)0)->_hidingSpotIndexes ) },
	{ "idList < idVec4 >", "_guardSpots", (ptrdiff_t)(&((Search *)0)->_guardSpots), sizeof( ((Search *)0)->_guardSpots ) },
	{ "bool", "_guardSpotsReady", (ptrdiff_t)(&((Search *)0)->_guardSpotsReady), sizeof( ((Search *)0)->_guardSpotsReady ) },
	{ "unsigned int", "_assignmentFlags", (ptrdiff_t)(&((Search *)0)->_assignmentFlags), sizeof( ((Search *)0)->_assignmentFlags ) },
	{ "int", "_searcherCount", (ptrdiff_t)(&((Search *)0)->_searcherCount), sizeof( ((Search *)0)->_searcherCount ) },
	{ "idList < Assignment >", "_assignments", (ptrdiff_t)(&((Search *)0)->_assignments), sizeof( ((Search *)0)->_assignments ) },
	{ NULL, 0 }
};

static classVariableInfo_t CSearchManager_typeInfo[] = {
	{ "idList < Search * >", "_searches", (ptrdiff_t)(&((CSearchManager *)0)->_searches), sizeof( ((CSearchManager *)0)->_searches ) },
	{ "int", "_uniqueSearchID", (ptrdiff_t)(&((CSearchManager *)0)->_uniqueSearchID), sizeof( ((CSearchManager *)0)->_uniqueSearchID ) },
	{ "int", "_nextThinkTime", (ptrdiff_t)(&((CSearchManager *)0)->_nextThinkTime), sizeof( ((CSearchManager *)0)->_nextThinkTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameLocal_BriefingVideoPart_typeInfo[] = {
	{ "idStr", "material", (ptrdiff_t)(&((idGameLocal::BriefingVideoPart *)0)->material), sizeof( ((idGameLocal::BriefingVideoPart *)0)->material ) },
	{ "int", "lengthMsec", (ptrdiff_t)(&((idGameLocal::BriefingVideoPart *)0)->lengthMsec), sizeof( ((idGameLocal::BriefingVideoPart *)0)->lengthMsec ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameLocal_InterMissionTrigger_typeInfo[] = {
	{ "int", "missionNum", (ptrdiff_t)(&((idGameLocal::InterMissionTrigger *)0)->missionNum), sizeof( ((idGameLocal::InterMissionTrigger *)0)->missionNum ) },
	{ "idStr", "activatorName", (ptrdiff_t)(&((idGameLocal::InterMissionTrigger *)0)->activatorName), sizeof( ((idGameLocal::InterMissionTrigger *)0)->activatorName ) },
	{ "idStr", "targetName", (ptrdiff_t)(&((idGameLocal::InterMissionTrigger *)0)->targetName), sizeof( ((idGameLocal::InterMissionTrigger *)0)->targetName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameLocal_typeInfo[] = {
	{ "idDict", "serverInfo", (ptrdiff_t)(&((idGameLocal *)0)->serverInfo), sizeof( ((idGameLocal *)0)->serverInfo ) },
	{ "int", "numClients", (ptrdiff_t)(&((idGameLocal *)0)->numClients), sizeof( ((idGameLocal *)0)->numClients ) },
	{ "idDict", "userInfo", (ptrdiff_t)(&((idGameLocal *)0)->userInfo), sizeof( ((idGameLocal *)0)->userInfo ) },
	{ "usercmd_t", "usercmds", (ptrdiff_t)(&((idGameLocal *)0)->usercmds), sizeof( ((idGameLocal *)0)->usercmds ) },
	{ "idDict", "persistentPlayerInfo", (ptrdiff_t)(&((idGameLocal *)0)->persistentPlayerInfo), sizeof( ((idGameLocal *)0)->persistentPlayerInfo ) },
	{ "idEntity *[65536]", "entities", (ptrdiff_t)(&((idGameLocal *)0)->entities), sizeof( ((idGameLocal *)0)->entities ) },
	{ "int[65536]", "spawnIds", (ptrdiff_t)(&((idGameLocal *)0)->spawnIds), sizeof( ((idGameLocal *)0)->spawnIds ) },
	{ "int", "firstFreeIndex", (ptrdiff_t)(&((idGameLocal *)0)->firstFreeIndex), sizeof( ((idGameLocal *)0)->firstFreeIndex ) },
	{ "int", "num_entities", (ptrdiff_t)(&((idGameLocal *)0)->num_entities), sizeof( ((idGameLocal *)0)->num_entities ) },
	{ "idHashIndex", "entityHash", (ptrdiff_t)(&((idGameLocal *)0)->entityHash), sizeof( ((idGameLocal *)0)->entityHash ) },
	{ "idWorldspawn *", "world", (ptrdiff_t)(&((idGameLocal *)0)->world), sizeof( ((idGameLocal *)0)->world ) },
	{ "idLinkList < idEntity >", "spawnedEntities", (ptrdiff_t)(&((idGameLocal *)0)->spawnedEntities), sizeof( ((idGameLocal *)0)->spawnedEntities ) },
	{ "idLinkList < idEntity >", "activeEntities", (ptrdiff_t)(&((idGameLocal *)0)->activeEntities), sizeof( ((idGameLocal *)0)->activeEntities ) },
	{ "idLinkList < idAI >", "spawnedAI", (ptrdiff_t)(&((idGameLocal *)0)->spawnedAI), sizeof( ((idGameLocal *)0)->spawnedAI ) },
	{ "int", "numEntitiesToDeactivate", (ptrdiff_t)(&((idGameLocal *)0)->numEntitiesToDeactivate), sizeof( ((idGameLocal *)0)->numEntitiesToDeactivate ) },
	{ "bool", "sortPushers", (ptrdiff_t)(&((idGameLocal *)0)->sortPushers), sizeof( ((idGameLocal *)0)->sortPushers ) },
	{ "bool", "sortTeamMasters", (ptrdiff_t)(&((idGameLocal *)0)->sortTeamMasters), sizeof( ((idGameLocal *)0)->sortTeamMasters ) },
	{ "idDict", "persistentLevelInfo", (ptrdiff_t)(&((idGameLocal *)0)->persistentLevelInfo), sizeof( ((idGameLocal *)0)->persistentLevelInfo ) },
	{ "CInventoryPtr", "persistentPlayerInventory", (ptrdiff_t)(&((idGameLocal *)0)->persistentPlayerInventory), sizeof( ((idGameLocal *)0)->persistentPlayerInventory ) },
	{ "idList < idEntity * >", "campaignInfoEntities", (ptrdiff_t)(&((idGameLocal *)0)->campaignInfoEntities), sizeof( ((idGameLocal *)0)->campaignInfoEntities ) },
	{ "bool", "postMissionScreenActive", (ptrdiff_t)(&((idGameLocal *)0)->postMissionScreenActive), sizeof( ((idGameLocal *)0)->postMissionScreenActive ) },
	{ "bool", "briefingVideoInfoLoaded", (ptrdiff_t)(&((idGameLocal *)0)->briefingVideoInfoLoaded), sizeof( ((idGameLocal *)0)->briefingVideoInfoLoaded ) },
	{ "idList < BriefingVideoPart >", "briefingVideo", (ptrdiff_t)(&((idGameLocal *)0)->briefingVideo), sizeof( ((idGameLocal *)0)->briefingVideo ) },
	{ "int", "curBriefingVideoPart", (ptrdiff_t)(&((idGameLocal *)0)->curBriefingVideoPart), sizeof( ((idGameLocal *)0)->curBriefingVideoPart ) },
	{ "idList < BriefingVideoPart >", "debriefingVideo", (ptrdiff_t)(&((idGameLocal *)0)->debriefingVideo), sizeof( ((idGameLocal *)0)->debriefingVideo ) },
	{ "int", "curDebriefingVideoPart", (ptrdiff_t)(&((idGameLocal *)0)->curDebriefingVideoPart), sizeof( ((idGameLocal *)0)->curDebriefingVideoPart ) },
	{ "bool", "mainMenuExited", (ptrdiff_t)(&((idGameLocal *)0)->mainMenuExited), sizeof( ((idGameLocal *)0)->mainMenuExited ) },
	{ "float[12]", "globalShaderParms", (ptrdiff_t)(&((idGameLocal *)0)->globalShaderParms), sizeof( ((idGameLocal *)0)->globalShaderParms ) },
	{ "idRandom", "random", (ptrdiff_t)(&((idGameLocal *)0)->random), sizeof( ((idGameLocal *)0)->random ) },
	{ "idProgram", "program", (ptrdiff_t)(&((idGameLocal *)0)->program), sizeof( ((idGameLocal *)0)->program ) },
	{ "idThread *", "frameCommandThread", (ptrdiff_t)(&((idGameLocal *)0)->frameCommandThread), sizeof( ((idGameLocal *)0)->frameCommandThread ) },
	{ "idClip", "clip", (ptrdiff_t)(&((idGameLocal *)0)->clip), sizeof( ((idGameLocal *)0)->clip ) },
	{ "idPush", "push", (ptrdiff_t)(&((idGameLocal *)0)->push), sizeof( ((idGameLocal *)0)->push ) },
	{ "idPVS", "pvs", (ptrdiff_t)(&((idGameLocal *)0)->pvs), sizeof( ((idGameLocal *)0)->pvs ) },
	{ "idTestModel *", "testmodel", (ptrdiff_t)(&((idGameLocal *)0)->testmodel), sizeof( ((idGameLocal *)0)->testmodel ) },
	{ "idEntityFx *", "testFx", (ptrdiff_t)(&((idGameLocal *)0)->testFx), sizeof( ((idGameLocal *)0)->testFx ) },
	{ "idStr", "sessionCommand", (ptrdiff_t)(&((idGameLocal *)0)->sessionCommand), sizeof( ((idGameLocal *)0)->sessionCommand ) },
	{ "idSmokeParticles *", "smokeParticles", (ptrdiff_t)(&((idGameLocal *)0)->smokeParticles), sizeof( ((idGameLocal *)0)->smokeParticles ) },
	{ "idEditEntities *", "editEntities", (ptrdiff_t)(&((idGameLocal *)0)->editEntities), sizeof( ((idGameLocal *)0)->editEntities ) },
	{ "CGrabber *", "m_Grabber", (ptrdiff_t)(&((idGameLocal *)0)->m_Grabber), sizeof( ((idGameLocal *)0)->m_Grabber ) },
	{ "difficulty :: DifficultyManager", "m_DifficultyManager", (ptrdiff_t)(&((idGameLocal *)0)->m_DifficultyManager), sizeof( ((idGameLocal *)0)->m_DifficultyManager ) },
	{ "ai :: AreaManager", "m_AreaManager", (ptrdiff_t)(&((idGameLocal *)0)->m_AreaManager), sizeof( ((idGameLocal *)0)->m_AreaManager ) },
	{ "ai :: ConversationSystemPtr", "m_ConversationSystem", (ptrdiff_t)(&((idGameLocal *)0)->m_ConversationSystem), sizeof( ((idGameLocal *)0)->m_ConversationSystem ) },
	{ "CModMenuPtr", "m_ModMenu", (ptrdiff_t)(&((idGameLocal *)0)->m_ModMenu), sizeof( ((idGameLocal *)0)->m_ModMenu ) },
	{ "CDownloadMenuPtr", "m_DownloadMenu", (ptrdiff_t)(&((idGameLocal *)0)->m_DownloadMenu), sizeof( ((idGameLocal *)0)->m_DownloadMenu ) },
	{ "CDownloadManagerPtr", "m_DownloadManager", (ptrdiff_t)(&((idGameLocal *)0)->m_DownloadManager), sizeof( ((idGameLocal *)0)->m_DownloadManager ) },
	{ "CMissionManagerPtr", "m_MissionManager", (ptrdiff_t)(&((idGameLocal *)0)->m_MissionManager), sizeof( ((idGameLocal *)0)->m_MissionManager ) },
	{ "CModelGeneratorPtr", "m_ModelGenerator", (ptrdiff_t)(&((idGameLocal *)0)->m_ModelGenerator), sizeof( ((idGameLocal *)0)->m_ModelGenerator ) },
	{ "CLightControllerPtr", "m_LightController", (ptrdiff_t)(&((idGameLocal *)0)->m_LightController), sizeof( ((idGameLocal *)0)->m_LightController ) },
	{ "CShopPtr", "m_Shop", (ptrdiff_t)(&((idGameLocal *)0)->m_Shop), sizeof( ((idGameLocal *)0)->m_Shop ) },
	{ "mutable idStr", "m_guiError", (ptrdiff_t)(&((idGameLocal *)0)->m_guiError), sizeof( ((idGameLocal *)0)->m_guiError ) },
	{ "mutable idList < GuiMessage >", "m_GuiMessages", (ptrdiff_t)(&((idGameLocal *)0)->m_GuiMessages), sizeof( ((idGameLocal *)0)->m_GuiMessages ) },
	{ "CRelationsPtr", "m_RelationsManager", (ptrdiff_t)(&((idGameLocal *)0)->m_RelationsManager), sizeof( ((idGameLocal *)0)->m_RelationsManager ) },
	{ "CMissionDataPtr", "m_MissionData", (ptrdiff_t)(&((idGameLocal *)0)->m_MissionData), sizeof( ((idGameLocal *)0)->m_MissionData ) },
	{ "EMissionResult", "m_MissionResult", (ptrdiff_t)(&((idGameLocal *)0)->m_MissionResult), sizeof( ((idGameLocal *)0)->m_MissionResult ) },
	{ "CampaignStatsPtr", "m_CampaignStats", (ptrdiff_t)(&((idGameLocal *)0)->m_CampaignStats), sizeof( ((idGameLocal *)0)->m_CampaignStats ) },
	{ "CsndPropLoader *", "m_sndPropLoader", (ptrdiff_t)(&((idGameLocal *)0)->m_sndPropLoader), sizeof( ((idGameLocal *)0)->m_sndPropLoader ) },
	{ "CsndProp *", "m_sndProp", (ptrdiff_t)(&((idGameLocal *)0)->m_sndProp), sizeof( ((idGameLocal *)0)->m_sndProp ) },
	{ "CEscapePointManager *", "m_EscapePointManager", (ptrdiff_t)(&((idGameLocal *)0)->m_EscapePointManager), sizeof( ((idGameLocal *)0)->m_EscapePointManager ) },
	{ "CSearchManager *", "m_searchManager", (ptrdiff_t)(&((idGameLocal *)0)->m_searchManager), sizeof( ((idGameLocal *)0)->m_searchManager ) },
	{ "GamePlayTimer", "m_GamePlayTimer", (ptrdiff_t)(&((idGameLocal *)0)->m_GamePlayTimer), sizeof( ((idGameLocal *)0)->m_GamePlayTimer ) },
	{ "CHttpConnectionPtr", "m_HttpConnection", (ptrdiff_t)(&((idGameLocal *)0)->m_HttpConnection), sizeof( ((idGameLocal *)0)->m_HttpConnection ) },
	{ "float", "m_walkSpeed", (ptrdiff_t)(&((idGameLocal *)0)->m_walkSpeed), sizeof( ((idGameLocal *)0)->m_walkSpeed ) },
	{ "int", "m_HighestSRId", (ptrdiff_t)(&((idGameLocal *)0)->m_HighestSRId), sizeof( ((idGameLocal *)0)->m_HighestSRId ) },
	{ "idList < CStimResponseTimer * >", "m_Timer", (ptrdiff_t)(&((idGameLocal *)0)->m_Timer), sizeof( ((idGameLocal *)0)->m_Timer ) },
	{ "idList < CStim * >", "m_StimTimer", (ptrdiff_t)(&((idGameLocal *)0)->m_StimTimer), sizeof( ((idGameLocal *)0)->m_StimTimer ) },
	{ "idList < idEntityPtr < idEntity > >", "m_StimEntity", (ptrdiff_t)(&((idGameLocal *)0)->m_StimEntity), sizeof( ((idGameLocal *)0)->m_StimEntity ) },
	{ "idList < idEntityPtr < idEntity > >", "m_RespEntity", (ptrdiff_t)(&((idGameLocal *)0)->m_RespEntity), sizeof( ((idGameLocal *)0)->m_RespEntity ) },
	{ "int", "cinematicSkipTime", (ptrdiff_t)(&((idGameLocal *)0)->cinematicSkipTime), sizeof( ((idGameLocal *)0)->cinematicSkipTime ) },
	{ "int", "cinematicStopTime", (ptrdiff_t)(&((idGameLocal *)0)->cinematicStopTime), sizeof( ((idGameLocal *)0)->cinematicStopTime ) },
	{ "int", "cinematicMaxSkipTime", (ptrdiff_t)(&((idGameLocal *)0)->cinematicMaxSkipTime), sizeof( ((idGameLocal *)0)->cinematicMaxSkipTime ) },
	{ "bool", "inCinematic", (ptrdiff_t)(&((idGameLocal *)0)->inCinematic), sizeof( ((idGameLocal *)0)->inCinematic ) },
	{ "bool", "skipCinematic", (ptrdiff_t)(&((idGameLocal *)0)->skipCinematic), sizeof( ((idGameLocal *)0)->skipCinematic ) },
	{ "int", "framenum", (ptrdiff_t)(&((idGameLocal *)0)->framenum), sizeof( ((idGameLocal *)0)->framenum ) },
	{ "int", "previousTime", (ptrdiff_t)(&((idGameLocal *)0)->previousTime), sizeof( ((idGameLocal *)0)->previousTime ) },
	{ "int", "time", (ptrdiff_t)(&((idGameLocal *)0)->time), sizeof( ((idGameLocal *)0)->time ) },
	{ "int", "m_Interleave", (ptrdiff_t)(&((idGameLocal *)0)->m_Interleave), sizeof( ((idGameLocal *)0)->m_Interleave ) },
	{ "int", "vacuumAreaNum", (ptrdiff_t)(&((idGameLocal *)0)->vacuumAreaNum), sizeof( ((idGameLocal *)0)->vacuumAreaNum ) },
	{ "int", "localClientNum", (ptrdiff_t)(&((idGameLocal *)0)->localClientNum), sizeof( ((idGameLocal *)0)->localClientNum ) },
	{ "idLinkList < idEntity >", "snapshotEntities", (ptrdiff_t)(&((idGameLocal *)0)->snapshotEntities), sizeof( ((idGameLocal *)0)->snapshotEntities ) },
	{ "int", "realClientTime", (ptrdiff_t)(&((idGameLocal *)0)->realClientTime), sizeof( ((idGameLocal *)0)->realClientTime ) },
	{ "bool", "isNewFrame", (ptrdiff_t)(&((idGameLocal *)0)->isNewFrame), sizeof( ((idGameLocal *)0)->isNewFrame ) },
	{ "float", "clientSmoothing", (ptrdiff_t)(&((idGameLocal *)0)->clientSmoothing), sizeof( ((idGameLocal *)0)->clientSmoothing ) },
	{ "int", "entityDefBits", (ptrdiff_t)(&((idGameLocal *)0)->entityDefBits), sizeof( ((idGameLocal *)0)->entityDefBits ) },
	{ "idEntityPtr < idEntity >", "lastGUIEnt", (ptrdiff_t)(&((idGameLocal *)0)->lastGUIEnt), sizeof( ((idGameLocal *)0)->lastGUIEnt ) },
	{ "int", "lastGUI", (ptrdiff_t)(&((idGameLocal *)0)->lastGUI), sizeof( ((idGameLocal *)0)->lastGUI ) },
	{ "idEntityPtr < idEntity >", "portalSkyEnt", (ptrdiff_t)(&((idGameLocal *)0)->portalSkyEnt), sizeof( ((idGameLocal *)0)->portalSkyEnt ) },
	{ "bool", "portalSkyActive", (ptrdiff_t)(&((idGameLocal *)0)->portalSkyActive), sizeof( ((idGameLocal *)0)->portalSkyActive ) },
	{ "bool", "globalPortalSky", (ptrdiff_t)(&((idGameLocal *)0)->globalPortalSky), sizeof( ((idGameLocal *)0)->globalPortalSky ) },
	{ "int", "portalSkyScale", (ptrdiff_t)(&((idGameLocal *)0)->portalSkyScale), sizeof( ((idGameLocal *)0)->portalSkyScale ) },
	{ "int", "currentPortalSkyType", (ptrdiff_t)(&((idGameLocal *)0)->currentPortalSkyType), sizeof( ((idGameLocal *)0)->currentPortalSkyType ) },
	{ "idVec3", "portalSkyOrigin", (ptrdiff_t)(&((idGameLocal *)0)->portalSkyOrigin), sizeof( ((idGameLocal *)0)->portalSkyOrigin ) },
	{ "idVec3", "portalSkyGlobalOrigin", (ptrdiff_t)(&((idGameLocal *)0)->portalSkyGlobalOrigin), sizeof( ((idGameLocal *)0)->portalSkyGlobalOrigin ) },
	{ "idVec3", "playerOldEyePos", (ptrdiff_t)(&((idGameLocal *)0)->playerOldEyePos), sizeof( ((idGameLocal *)0)->playerOldEyePos ) },
	{ "idList < idEntityPtr < idLight > >", "m_ambientLights", (ptrdiff_t)(&((idGameLocal *)0)->m_ambientLights), sizeof( ((idGameLocal *)0)->m_ambientLights ) },
	{ "idList < int >", "musicSpeakers", (ptrdiff_t)(&((idGameLocal *)0)->musicSpeakers), sizeof( ((idGameLocal *)0)->musicSpeakers ) },
	{ "bool", "m_TriggerFinalSave", (ptrdiff_t)(&((idGameLocal *)0)->m_TriggerFinalSave), sizeof( ((idGameLocal *)0)->m_TriggerFinalSave ) },
	{ "const char *", "m_StartPosition", (ptrdiff_t)(&((idGameLocal *)0)->m_StartPosition), sizeof( ((idGameLocal *)0)->m_StartPosition ) },
	{ "int", "m_spyglassOverlay", (ptrdiff_t)(&((idGameLocal *)0)->m_spyglassOverlay), sizeof( ((idGameLocal *)0)->m_spyglassOverlay ) },
	{ "int", "m_peekOverlay", (ptrdiff_t)(&((idGameLocal *)0)->m_peekOverlay), sizeof( ((idGameLocal *)0)->m_peekOverlay ) },
	{ "LightGem", "m_lightGem", (ptrdiff_t)(&((idGameLocal *)0)->m_lightGem), sizeof( ((idGameLocal *)0)->m_lightGem ) },
	{ "idStr", "m_strMainAmbientLightName", (ptrdiff_t)(&((idGameLocal *)0)->m_strMainAmbientLightName), sizeof( ((idGameLocal *)0)->m_strMainAmbientLightName ) },
	{ "idStr", "mapFileName", (ptrdiff_t)(&((idGameLocal *)0)->mapFileName), sizeof( ((idGameLocal *)0)->mapFileName ) },
	{ "idMapFile *", "mapFile", (ptrdiff_t)(&((idGameLocal *)0)->mapFile), sizeof( ((idGameLocal *)0)->mapFile ) },
	{ "bool", "mapCycleLoaded", (ptrdiff_t)(&((idGameLocal *)0)->mapCycleLoaded), sizeof( ((idGameLocal *)0)->mapCycleLoaded ) },
	{ "int", "spawnCount", (ptrdiff_t)(&((idGameLocal *)0)->spawnCount), sizeof( ((idGameLocal *)0)->spawnCount ) },
	{ "int", "mapSpawnCount", (ptrdiff_t)(&((idGameLocal *)0)->mapSpawnCount), sizeof( ((idGameLocal *)0)->mapSpawnCount ) },
	{ "idLocationEntity * *", "locationEntities", (ptrdiff_t)(&((idGameLocal *)0)->locationEntities), sizeof( ((idGameLocal *)0)->locationEntities ) },
	{ "idList < SuspiciousEvent >", "m_suspiciousEvents", (ptrdiff_t)(&((idGameLocal *)0)->m_suspiciousEvents), sizeof( ((idGameLocal *)0)->m_suspiciousEvents ) },
	{ "idCamera *", "camera", (ptrdiff_t)(&((idGameLocal *)0)->camera), sizeof( ((idGameLocal *)0)->camera ) },
	{ "const idMaterial *", "globalMaterial", (ptrdiff_t)(&((idGameLocal *)0)->globalMaterial), sizeof( ((idGameLocal *)0)->globalMaterial ) },
	{ "idList < idAAS * >", "aasList", (ptrdiff_t)(&((idGameLocal *)0)->aasList), sizeof( ((idGameLocal *)0)->aasList ) },
	{ "idStrList", "aasNames", (ptrdiff_t)(&((idGameLocal *)0)->aasNames), sizeof( ((idGameLocal *)0)->aasNames ) },
	{ "idDict", "spawnArgs", (ptrdiff_t)(&((idGameLocal *)0)->spawnArgs), sizeof( ((idGameLocal *)0)->spawnArgs ) },
	{ "pvsHandle_t", "playerPVS", (ptrdiff_t)(&((idGameLocal *)0)->playerPVS), sizeof( ((idGameLocal *)0)->playerPVS ) },
	{ "pvsHandle_t", "playerConnectedAreas", (ptrdiff_t)(&((idGameLocal *)0)->playerConnectedAreas), sizeof( ((idGameLocal *)0)->playerConnectedAreas ) },
	{ "idVec3", "gravity", (ptrdiff_t)(&((idGameLocal *)0)->gravity), sizeof( ((idGameLocal *)0)->gravity ) },
	{ "gameState_t", "gamestate", (ptrdiff_t)(&((idGameLocal *)0)->gamestate), sizeof( ((idGameLocal *)0)->gamestate ) },
	{ "bool", "influenceActive", (ptrdiff_t)(&((idGameLocal *)0)->influenceActive), sizeof( ((idGameLocal *)0)->influenceActive ) },
	{ "int", "nextGibTime", (ptrdiff_t)(&((idGameLocal *)0)->nextGibTime), sizeof( ((idGameLocal *)0)->nextGibTime ) },
	{ "idStaticList < spawnSpot_t , ( 1 << 16 ) >", "spawnSpots", (ptrdiff_t)(&((idGameLocal *)0)->spawnSpots), sizeof( ((idGameLocal *)0)->spawnSpots ) },
	{ "idStaticList < idEntity * , ( 1 << 16 ) >", "initialSpots", (ptrdiff_t)(&((idGameLocal *)0)->initialSpots), sizeof( ((idGameLocal *)0)->initialSpots ) },
	{ "int", "currentInitialSpot", (ptrdiff_t)(&((idGameLocal *)0)->currentInitialSpot), sizeof( ((idGameLocal *)0)->currentInitialSpot ) },
	{ "idDict", "newInfo", (ptrdiff_t)(&((idGameLocal *)0)->newInfo), sizeof( ((idGameLocal *)0)->newInfo ) },
	{ "idStrList", "shakeSounds", (ptrdiff_t)(&((idGameLocal *)0)->shakeSounds), sizeof( ((idGameLocal *)0)->shakeSounds ) },
	{ "byte[16384]", "lagometer", (ptrdiff_t)(&((idGameLocal *)0)->lagometer), sizeof( ((idGameLocal *)0)->lagometer ) },
	{ "int", "m_uniqueMessageTag", (ptrdiff_t)(&((idGameLocal *)0)->m_uniqueMessageTag), sizeof( ((idGameLocal *)0)->m_uniqueMessageTag ) },
	{ "idList < InterMissionTrigger >", "m_InterMissionTriggers", (ptrdiff_t)(&((idGameLocal *)0)->m_InterMissionTriggers), sizeof( ((idGameLocal *)0)->m_InterMissionTriggers ) },
	{ "idList < idStr >", "m_GUICommandStack", (ptrdiff_t)(&((idGameLocal *)0)->m_GUICommandStack), sizeof( ((idGameLocal *)0)->m_GUICommandStack ) },
	{ "int", "m_GUICommandArgs", (ptrdiff_t)(&((idGameLocal *)0)->m_GUICommandArgs), sizeof( ((idGameLocal *)0)->m_GUICommandArgs ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGameError_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idForce_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idForce_Constant_typeInfo[] = {
	{ "idVec3", "force", (ptrdiff_t)(&((idForce_Constant *)0)->force), sizeof( ((idForce_Constant *)0)->force ) },
	{ "idPhysics *", "physics", (ptrdiff_t)(&((idForce_Constant *)0)->physics), sizeof( ((idForce_Constant *)0)->physics ) },
	{ "int", "id", (ptrdiff_t)(&((idForce_Constant *)0)->id), sizeof( ((idForce_Constant *)0)->id ) },
	{ "idVec3", "point", (ptrdiff_t)(&((idForce_Constant *)0)->point), sizeof( ((idForce_Constant *)0)->point ) },
	{ NULL, 0 }
};

static classVariableInfo_t idForce_Drag_typeInfo[] = {
	{ "float", "damping", (ptrdiff_t)(&((idForce_Drag *)0)->damping), sizeof( ((idForce_Drag *)0)->damping ) },
	{ "idPhysics *", "physics", (ptrdiff_t)(&((idForce_Drag *)0)->physics), sizeof( ((idForce_Drag *)0)->physics ) },
	{ "int", "id", (ptrdiff_t)(&((idForce_Drag *)0)->id), sizeof( ((idForce_Drag *)0)->id ) },
	{ "idVec3", "p", (ptrdiff_t)(&((idForce_Drag *)0)->p), sizeof( ((idForce_Drag *)0)->p ) },
	{ "idVec3", "dragPosition", (ptrdiff_t)(&((idForce_Drag *)0)->dragPosition), sizeof( ((idForce_Drag *)0)->dragPosition ) },
	{ NULL, 0 }
};

static classVariableInfo_t idForce_Field_typeInfo[] = {
	{ "forceFieldType", "type", (ptrdiff_t)(&((idForce_Field *)0)->type), sizeof( ((idForce_Field *)0)->type ) },
	{ "forceFieldApplyType", "applyType", (ptrdiff_t)(&((idForce_Field *)0)->applyType), sizeof( ((idForce_Field *)0)->applyType ) },
	{ "float", "magnitude", (ptrdiff_t)(&((idForce_Field *)0)->magnitude), sizeof( ((idForce_Field *)0)->magnitude ) },
	{ "idVec3", "dir", (ptrdiff_t)(&((idForce_Field *)0)->dir), sizeof( ((idForce_Field *)0)->dir ) },
	{ "float", "randomTorque", (ptrdiff_t)(&((idForce_Field *)0)->randomTorque), sizeof( ((idForce_Field *)0)->randomTorque ) },
	{ "bool", "playerOnly", (ptrdiff_t)(&((idForce_Field *)0)->playerOnly), sizeof( ((idForce_Field *)0)->playerOnly ) },
	{ "bool", "monsterOnly", (ptrdiff_t)(&((idForce_Field *)0)->monsterOnly), sizeof( ((idForce_Field *)0)->monsterOnly ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((idForce_Field *)0)->clipModel), sizeof( ((idForce_Field *)0)->clipModel ) },
	{ "float", "playerMass", (ptrdiff_t)(&((idForce_Field *)0)->playerMass), sizeof( ((idForce_Field *)0)->playerMass ) },
	{ "bool", "scaleImpulse", (ptrdiff_t)(&((idForce_Field *)0)->scaleImpulse), sizeof( ((idForce_Field *)0)->scaleImpulse ) },
	{ NULL, 0 }
};

static classVariableInfo_t idForce_Spring_typeInfo[] = {
	{ "float", "Kstretch", (ptrdiff_t)(&((idForce_Spring *)0)->Kstretch), sizeof( ((idForce_Spring *)0)->Kstretch ) },
	{ "float", "Kcompress", (ptrdiff_t)(&((idForce_Spring *)0)->Kcompress), sizeof( ((idForce_Spring *)0)->Kcompress ) },
	{ "float", "damping", (ptrdiff_t)(&((idForce_Spring *)0)->damping), sizeof( ((idForce_Spring *)0)->damping ) },
	{ "float", "restLength", (ptrdiff_t)(&((idForce_Spring *)0)->restLength), sizeof( ((idForce_Spring *)0)->restLength ) },
	{ "idPhysics *", "physics1", (ptrdiff_t)(&((idForce_Spring *)0)->physics1), sizeof( ((idForce_Spring *)0)->physics1 ) },
	{ "int", "id1", (ptrdiff_t)(&((idForce_Spring *)0)->id1), sizeof( ((idForce_Spring *)0)->id1 ) },
	{ "idVec3", "p1", (ptrdiff_t)(&((idForce_Spring *)0)->p1), sizeof( ((idForce_Spring *)0)->p1 ) },
	{ "idPhysics *", "physics2", (ptrdiff_t)(&((idForce_Spring *)0)->physics2), sizeof( ((idForce_Spring *)0)->physics2 ) },
	{ "int", "id2", (ptrdiff_t)(&((idForce_Spring *)0)->id2), sizeof( ((idForce_Spring *)0)->id2 ) },
	{ "idVec3", "p2", (ptrdiff_t)(&((idForce_Spring *)0)->p2), sizeof( ((idForce_Spring *)0)->p2 ) },
	{ NULL, 0 }
};

static classVariableInfo_t impactInfo_t_typeInfo[] = {
	{ "float", "invMass", (ptrdiff_t)(&((impactInfo_t *)0)->invMass), sizeof( ((impactInfo_t *)0)->invMass ) },
	{ "idMat3", "invInertiaTensor", (ptrdiff_t)(&((impactInfo_t *)0)->invInertiaTensor), sizeof( ((impactInfo_t *)0)->invInertiaTensor ) },
	{ "idVec3", "position", (ptrdiff_t)(&((impactInfo_t *)0)->position), sizeof( ((impactInfo_t *)0)->position ) },
	{ "idVec3", "velocity", (ptrdiff_t)(&((impactInfo_t *)0)->velocity), sizeof( ((impactInfo_t *)0)->velocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t staticPState_t_typeInfo[] = {
	{ "idVec3", "origin", (ptrdiff_t)(&((staticPState_t *)0)->origin), sizeof( ((staticPState_t *)0)->origin ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((staticPState_t *)0)->axis), sizeof( ((staticPState_t *)0)->axis ) },
	{ "idVec3", "localOrigin", (ptrdiff_t)(&((staticPState_t *)0)->localOrigin), sizeof( ((staticPState_t *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (ptrdiff_t)(&((staticPState_t *)0)->localAxis), sizeof( ((staticPState_t *)0)->localAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Static_typeInfo[] = {
	{ "idEntity *", "self", (ptrdiff_t)(&((idPhysics_Static *)0)->self), sizeof( ((idPhysics_Static *)0)->self ) },
	{ "staticPState_t", "current", (ptrdiff_t)(&((idPhysics_Static *)0)->current), sizeof( ((idPhysics_Static *)0)->current ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((idPhysics_Static *)0)->clipModel), sizeof( ((idPhysics_Static *)0)->clipModel ) },
	{ "bool", "hasMaster", (ptrdiff_t)(&((idPhysics_Static *)0)->hasMaster), sizeof( ((idPhysics_Static *)0)->hasMaster ) },
	{ "bool", "isOrientated", (ptrdiff_t)(&((idPhysics_Static *)0)->isOrientated), sizeof( ((idPhysics_Static *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_StaticMulti_typeInfo[] = {
	{ "idEntity *", "self", (ptrdiff_t)(&((idPhysics_StaticMulti *)0)->self), sizeof( ((idPhysics_StaticMulti *)0)->self ) },
	{ "idList < staticPState_t >", "current", (ptrdiff_t)(&((idPhysics_StaticMulti *)0)->current), sizeof( ((idPhysics_StaticMulti *)0)->current ) },
	{ "idList < idClipModel * >", "clipModels", (ptrdiff_t)(&((idPhysics_StaticMulti *)0)->clipModels), sizeof( ((idPhysics_StaticMulti *)0)->clipModels ) },
	{ "bool", "hasMaster", (ptrdiff_t)(&((idPhysics_StaticMulti *)0)->hasMaster), sizeof( ((idPhysics_StaticMulti *)0)->hasMaster ) },
	{ "bool", "isOrientated", (ptrdiff_t)(&((idPhysics_StaticMulti *)0)->isOrientated), sizeof( ((idPhysics_StaticMulti *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Base_typeInfo[] = {
	{ "idEntity *", "self", (ptrdiff_t)(&((idPhysics_Base *)0)->self), sizeof( ((idPhysics_Base *)0)->self ) },
	{ "int", "clipMask", (ptrdiff_t)(&((idPhysics_Base *)0)->clipMask), sizeof( ((idPhysics_Base *)0)->clipMask ) },
	{ "idVec3", "gravityVector", (ptrdiff_t)(&((idPhysics_Base *)0)->gravityVector), sizeof( ((idPhysics_Base *)0)->gravityVector ) },
	{ "idVec3", "gravityNormal", (ptrdiff_t)(&((idPhysics_Base *)0)->gravityNormal), sizeof( ((idPhysics_Base *)0)->gravityNormal ) },
	{ "idList < contactInfo_t >", "contacts", (ptrdiff_t)(&((idPhysics_Base *)0)->contacts), sizeof( ((idPhysics_Base *)0)->contacts ) },
	{ "idList < idEntityPtr < idEntity > >", "contactEntities", (ptrdiff_t)(&((idPhysics_Base *)0)->contactEntities), sizeof( ((idPhysics_Base *)0)->contactEntities ) },
	{ "idPhysics_Liquid *", "water", (ptrdiff_t)(&((idPhysics_Base *)0)->water), sizeof( ((idPhysics_Base *)0)->water ) },
	{ "float", "m_fWaterMurkiness", (ptrdiff_t)(&((idPhysics_Base *)0)->m_fWaterMurkiness), sizeof( ((idPhysics_Base *)0)->m_fWaterMurkiness ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Actor_typeInfo[] = {
	{ "waterLevel_t", "waterLevel", (ptrdiff_t)(&((idPhysics_Actor *)0)->waterLevel), sizeof( ((idPhysics_Actor *)0)->waterLevel ) },
	{ "waterLevel_t", "previousWaterLevel", (ptrdiff_t)(&((idPhysics_Actor *)0)->previousWaterLevel), sizeof( ((idPhysics_Actor *)0)->previousWaterLevel ) },
	{ "int", "waterType", (ptrdiff_t)(&((idPhysics_Actor *)0)->waterType), sizeof( ((idPhysics_Actor *)0)->waterType ) },
	{ "int", "submerseFrame", (ptrdiff_t)(&((idPhysics_Actor *)0)->submerseFrame), sizeof( ((idPhysics_Actor *)0)->submerseFrame ) },
	{ "int", "submerseTime", (ptrdiff_t)(&((idPhysics_Actor *)0)->submerseTime), sizeof( ((idPhysics_Actor *)0)->submerseTime ) },
	{ "bool", "waterLevelChanged", (ptrdiff_t)(&((idPhysics_Actor *)0)->waterLevelChanged), sizeof( ((idPhysics_Actor *)0)->waterLevelChanged ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((idPhysics_Actor *)0)->clipModel), sizeof( ((idPhysics_Actor *)0)->clipModel ) },
	{ "idMat3", "clipModelAxis", (ptrdiff_t)(&((idPhysics_Actor *)0)->clipModelAxis), sizeof( ((idPhysics_Actor *)0)->clipModelAxis ) },
	{ "float", "mass", (ptrdiff_t)(&((idPhysics_Actor *)0)->mass), sizeof( ((idPhysics_Actor *)0)->mass ) },
	{ "float", "invMass", (ptrdiff_t)(&((idPhysics_Actor *)0)->invMass), sizeof( ((idPhysics_Actor *)0)->invMass ) },
	{ "idEntity *", "masterEntity", (ptrdiff_t)(&((idPhysics_Actor *)0)->masterEntity), sizeof( ((idPhysics_Actor *)0)->masterEntity ) },
	{ "float", "masterYaw", (ptrdiff_t)(&((idPhysics_Actor *)0)->masterYaw), sizeof( ((idPhysics_Actor *)0)->masterYaw ) },
	{ "float", "masterDeltaYaw", (ptrdiff_t)(&((idPhysics_Actor *)0)->masterDeltaYaw), sizeof( ((idPhysics_Actor *)0)->masterDeltaYaw ) },
	{ "idEntityPtr < idEntity >", "groundEntityPtr", (ptrdiff_t)(&((idPhysics_Actor *)0)->groundEntityPtr), sizeof( ((idPhysics_Actor *)0)->groundEntityPtr ) },
	{ NULL, 0 }
};

static classVariableInfo_t monsterPState_t_typeInfo[] = {
	{ "int", "atRest", (ptrdiff_t)(&((monsterPState_t *)0)->atRest), sizeof( ((monsterPState_t *)0)->atRest ) },
	{ "bool", "onGround", (ptrdiff_t)(&((monsterPState_t *)0)->onGround), sizeof( ((monsterPState_t *)0)->onGround ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((monsterPState_t *)0)->origin), sizeof( ((monsterPState_t *)0)->origin ) },
	{ "idVec3", "velocity", (ptrdiff_t)(&((monsterPState_t *)0)->velocity), sizeof( ((monsterPState_t *)0)->velocity ) },
	{ "idVec3", "localOrigin", (ptrdiff_t)(&((monsterPState_t *)0)->localOrigin), sizeof( ((monsterPState_t *)0)->localOrigin ) },
	{ "idVec3", "pushVelocity", (ptrdiff_t)(&((monsterPState_t *)0)->pushVelocity), sizeof( ((monsterPState_t *)0)->pushVelocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Monster_typeInfo[] = {
	{ "monsterPState_t", "current", (ptrdiff_t)(&((idPhysics_Monster *)0)->current), sizeof( ((idPhysics_Monster *)0)->current ) },
	{ "monsterPState_t", "saved", (ptrdiff_t)(&((idPhysics_Monster *)0)->saved), sizeof( ((idPhysics_Monster *)0)->saved ) },
	{ "float", "maxStepHeight", (ptrdiff_t)(&((idPhysics_Monster *)0)->maxStepHeight), sizeof( ((idPhysics_Monster *)0)->maxStepHeight ) },
	{ "float", "stepUpIncrease", (ptrdiff_t)(&((idPhysics_Monster *)0)->stepUpIncrease), sizeof( ((idPhysics_Monster *)0)->stepUpIncrease ) },
	{ "float", "minFloorCosine", (ptrdiff_t)(&((idPhysics_Monster *)0)->minFloorCosine), sizeof( ((idPhysics_Monster *)0)->minFloorCosine ) },
	{ "idVec3", "delta", (ptrdiff_t)(&((idPhysics_Monster *)0)->delta), sizeof( ((idPhysics_Monster *)0)->delta ) },
	{ "bool", "forceDeltaMove", (ptrdiff_t)(&((idPhysics_Monster *)0)->forceDeltaMove), sizeof( ((idPhysics_Monster *)0)->forceDeltaMove ) },
	{ "bool", "fly", (ptrdiff_t)(&((idPhysics_Monster *)0)->fly), sizeof( ((idPhysics_Monster *)0)->fly ) },
	{ "bool", "useVelocityMove", (ptrdiff_t)(&((idPhysics_Monster *)0)->useVelocityMove), sizeof( ((idPhysics_Monster *)0)->useVelocityMove ) },
	{ "bool", "noImpact", (ptrdiff_t)(&((idPhysics_Monster *)0)->noImpact), sizeof( ((idPhysics_Monster *)0)->noImpact ) },
	{ "monsterMoveResult_t", "moveResult", (ptrdiff_t)(&((idPhysics_Monster *)0)->moveResult), sizeof( ((idPhysics_Monster *)0)->moveResult ) },
	{ "idEntity *", "blockingEntity", (ptrdiff_t)(&((idPhysics_Monster *)0)->blockingEntity), sizeof( ((idPhysics_Monster *)0)->blockingEntity ) },
	{ NULL, 0 }
};

static classVariableInfo_t playerPState_t_typeInfo[] = {
	{ "idVec3", "origin", (ptrdiff_t)(&((playerPState_t *)0)->origin), sizeof( ((playerPState_t *)0)->origin ) },
	{ "idVec3", "velocity", (ptrdiff_t)(&((playerPState_t *)0)->velocity), sizeof( ((playerPState_t *)0)->velocity ) },
	{ "idVec3", "localOrigin", (ptrdiff_t)(&((playerPState_t *)0)->localOrigin), sizeof( ((playerPState_t *)0)->localOrigin ) },
	{ "idVec3", "pushVelocity", (ptrdiff_t)(&((playerPState_t *)0)->pushVelocity), sizeof( ((playerPState_t *)0)->pushVelocity ) },
	{ "float", "stepUp", (ptrdiff_t)(&((playerPState_t *)0)->stepUp), sizeof( ((playerPState_t *)0)->stepUp ) },
	{ "int", "movementType", (ptrdiff_t)(&((playerPState_t *)0)->movementType), sizeof( ((playerPState_t *)0)->movementType ) },
	{ "int", "movementFlags", (ptrdiff_t)(&((playerPState_t *)0)->movementFlags), sizeof( ((playerPState_t *)0)->movementFlags ) },
	{ "int", "movementTime", (ptrdiff_t)(&((playerPState_t *)0)->movementTime), sizeof( ((playerPState_t *)0)->movementTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Player_typeInfo[] = {
	{ "bool", "m_bSlideOrDetachClimb", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bSlideOrDetachClimb), sizeof( ((idPhysics_Player *)0)->m_bSlideOrDetachClimb ) },
	{ "bool", "m_bSlideInitialized", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bSlideInitialized), sizeof( ((idPhysics_Player *)0)->m_bSlideInitialized ) },
	{ "playerPState_t", "current", (ptrdiff_t)(&((idPhysics_Player *)0)->current), sizeof( ((idPhysics_Player *)0)->current ) },
	{ "playerPState_t", "saved", (ptrdiff_t)(&((idPhysics_Player *)0)->saved), sizeof( ((idPhysics_Player *)0)->saved ) },
	{ "float", "walkSpeed", (ptrdiff_t)(&((idPhysics_Player *)0)->walkSpeed), sizeof( ((idPhysics_Player *)0)->walkSpeed ) },
	{ "float", "crouchSpeed", (ptrdiff_t)(&((idPhysics_Player *)0)->crouchSpeed), sizeof( ((idPhysics_Player *)0)->crouchSpeed ) },
	{ "float", "maxStepHeight", (ptrdiff_t)(&((idPhysics_Player *)0)->maxStepHeight), sizeof( ((idPhysics_Player *)0)->maxStepHeight ) },
	{ "float", "maxJumpHeight", (ptrdiff_t)(&((idPhysics_Player *)0)->maxJumpHeight), sizeof( ((idPhysics_Player *)0)->maxJumpHeight ) },
	{ "int", "debugLevel", (ptrdiff_t)(&((idPhysics_Player *)0)->debugLevel), sizeof( ((idPhysics_Player *)0)->debugLevel ) },
	{ "int", "lastJumpTime", (ptrdiff_t)(&((idPhysics_Player *)0)->lastJumpTime), sizeof( ((idPhysics_Player *)0)->lastJumpTime ) },
	{ "usercmd_t", "command", (ptrdiff_t)(&((idPhysics_Player *)0)->command), sizeof( ((idPhysics_Player *)0)->command ) },
	{ "idAngles", "viewAngles", (ptrdiff_t)(&((idPhysics_Player *)0)->viewAngles), sizeof( ((idPhysics_Player *)0)->viewAngles ) },
	{ "int", "framemsec", (ptrdiff_t)(&((idPhysics_Player *)0)->framemsec), sizeof( ((idPhysics_Player *)0)->framemsec ) },
	{ "float", "frametime", (ptrdiff_t)(&((idPhysics_Player *)0)->frametime), sizeof( ((idPhysics_Player *)0)->frametime ) },
	{ "float", "playerSpeed", (ptrdiff_t)(&((idPhysics_Player *)0)->playerSpeed), sizeof( ((idPhysics_Player *)0)->playerSpeed ) },
	{ "idVec3", "viewForward", (ptrdiff_t)(&((idPhysics_Player *)0)->viewForward), sizeof( ((idPhysics_Player *)0)->viewForward ) },
	{ "idVec3", "viewRight", (ptrdiff_t)(&((idPhysics_Player *)0)->viewRight), sizeof( ((idPhysics_Player *)0)->viewRight ) },
	{ "float", "m_fSwimTimeStart_s", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fSwimTimeStart_s), sizeof( ((idPhysics_Player *)0)->m_fSwimTimeStart_s ) },
	{ "bool", "m_bSwimSoundStarted", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bSwimSoundStarted), sizeof( ((idPhysics_Player *)0)->m_bSwimSoundStarted ) },
	{ "float", "m_fSwimLeadInDuration_s", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fSwimLeadInDuration_s), sizeof( ((idPhysics_Player *)0)->m_fSwimLeadInDuration_s ) },
	{ "float", "m_fSwimLeadOutStart_s", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fSwimLeadOutStart_s), sizeof( ((idPhysics_Player *)0)->m_fSwimLeadOutStart_s ) },
	{ "float", "m_fSwimLeadOutDuration_s", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fSwimLeadOutDuration_s), sizeof( ((idPhysics_Player *)0)->m_fSwimLeadOutDuration_s ) },
	{ "float", "m_fSwimSpeedModCompensation", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fSwimSpeedModCompensation), sizeof( ((idPhysics_Player *)0)->m_fSwimSpeedModCompensation ) },
	{ "bool", "walking", (ptrdiff_t)(&((idPhysics_Player *)0)->walking), sizeof( ((idPhysics_Player *)0)->walking ) },
	{ "bool", "groundPlane", (ptrdiff_t)(&((idPhysics_Player *)0)->groundPlane), sizeof( ((idPhysics_Player *)0)->groundPlane ) },
	{ "trace_t", "groundTrace", (ptrdiff_t)(&((idPhysics_Player *)0)->groundTrace), sizeof( ((idPhysics_Player *)0)->groundTrace ) },
	{ "const idMaterial *", "groundMaterial", (ptrdiff_t)(&((idPhysics_Player *)0)->groundMaterial), sizeof( ((idPhysics_Player *)0)->groundMaterial ) },
	{ "idVec3", "m_RefEntVelocity", (ptrdiff_t)(&((idPhysics_Player *)0)->m_RefEntVelocity), sizeof( ((idPhysics_Player *)0)->m_RefEntVelocity ) },
	{ "bool", "m_bRopeContact", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bRopeContact), sizeof( ((idPhysics_Player *)0)->m_bRopeContact ) },
	{ "idEntityPtr < idAFEntity_Base >", "m_RopeEntity", (ptrdiff_t)(&((idPhysics_Player *)0)->m_RopeEntity), sizeof( ((idPhysics_Player *)0)->m_RopeEntity ) },
	{ "idEntityPtr < idAFEntity_Base >", "m_RopeEntTouched", (ptrdiff_t)(&((idPhysics_Player *)0)->m_RopeEntTouched), sizeof( ((idPhysics_Player *)0)->m_RopeEntTouched ) },
	{ "bool", "m_bOnRope", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bOnRope), sizeof( ((idPhysics_Player *)0)->m_bOnRope ) },
	{ "bool", "m_bJustHitRope", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bJustHitRope), sizeof( ((idPhysics_Player *)0)->m_bJustHitRope ) },
	{ "int", "m_RopeKickTime", (ptrdiff_t)(&((idPhysics_Player *)0)->m_RopeKickTime), sizeof( ((idPhysics_Player *)0)->m_RopeKickTime ) },
	{ "bool", "m_bClimbableAhead", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bClimbableAhead), sizeof( ((idPhysics_Player *)0)->m_bClimbableAhead ) },
	{ "bool", "m_bOnClimb", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bOnClimb), sizeof( ((idPhysics_Player *)0)->m_bOnClimb ) },
	{ "idVec3", "m_vClimbNormal", (ptrdiff_t)(&((idPhysics_Player *)0)->m_vClimbNormal), sizeof( ((idPhysics_Player *)0)->m_vClimbNormal ) },
	{ "idVec3", "m_vClimbPoint", (ptrdiff_t)(&((idPhysics_Player *)0)->m_vClimbPoint), sizeof( ((idPhysics_Player *)0)->m_vClimbPoint ) },
	{ "idEntityPtr < idEntity >", "m_ClimbingOnEnt", (ptrdiff_t)(&((idPhysics_Player *)0)->m_ClimbingOnEnt), sizeof( ((idPhysics_Player *)0)->m_ClimbingOnEnt ) },
	{ "bool", "m_bClimbDetachThisFrame", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bClimbDetachThisFrame), sizeof( ((idPhysics_Player *)0)->m_bClimbDetachThisFrame ) },
	{ "bool", "m_bClimbInitialPhase", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bClimbInitialPhase), sizeof( ((idPhysics_Player *)0)->m_bClimbInitialPhase ) },
	{ "idStr", "m_ClimbSurfName", (ptrdiff_t)(&((idPhysics_Player *)0)->m_ClimbSurfName), sizeof( ((idPhysics_Player *)0)->m_ClimbSurfName ) },
	{ "float", "m_ClimbMaxVelHoriz", (ptrdiff_t)(&((idPhysics_Player *)0)->m_ClimbMaxVelHoriz), sizeof( ((idPhysics_Player *)0)->m_ClimbMaxVelHoriz ) },
	{ "float", "m_ClimbMaxVelVert", (ptrdiff_t)(&((idPhysics_Player *)0)->m_ClimbMaxVelVert), sizeof( ((idPhysics_Player *)0)->m_ClimbMaxVelVert ) },
	{ "int", "m_ClimbSndRepDistVert", (ptrdiff_t)(&((idPhysics_Player *)0)->m_ClimbSndRepDistVert), sizeof( ((idPhysics_Player *)0)->m_ClimbSndRepDistVert ) },
	{ "int", "m_ClimbSndRepDistHoriz", (ptrdiff_t)(&((idPhysics_Player *)0)->m_ClimbSndRepDistHoriz), sizeof( ((idPhysics_Player *)0)->m_ClimbSndRepDistHoriz ) },
	{ "int", "m_NextAttachTime", (ptrdiff_t)(&((idPhysics_Player *)0)->m_NextAttachTime), sizeof( ((idPhysics_Player *)0)->m_NextAttachTime ) },
	{ "int", "m_SlopeIgnoreTimer", (ptrdiff_t)(&((idPhysics_Player *)0)->m_SlopeIgnoreTimer), sizeof( ((idPhysics_Player *)0)->m_SlopeIgnoreTimer ) },
	{ "float", "m_DeltaViewYaw", (ptrdiff_t)(&((idPhysics_Player *)0)->m_DeltaViewYaw), sizeof( ((idPhysics_Player *)0)->m_DeltaViewYaw ) },
	{ "float", "m_DeltaViewPitch", (ptrdiff_t)(&((idPhysics_Player *)0)->m_DeltaViewPitch), sizeof( ((idPhysics_Player *)0)->m_DeltaViewPitch ) },
	{ "idEntityPtr < idEntity >", "m_LeanEnt", (ptrdiff_t)(&((idPhysics_Player *)0)->m_LeanEnt), sizeof( ((idPhysics_Player *)0)->m_LeanEnt ) },
	{ "idVec3", "m_LeanListenPos", (ptrdiff_t)(&((idPhysics_Player *)0)->m_LeanListenPos), sizeof( ((idPhysics_Player *)0)->m_LeanListenPos ) },
	{ "CForcePushPtr", "m_PushForce", (ptrdiff_t)(&((idPhysics_Player *)0)->m_PushForce), sizeof( ((idPhysics_Player *)0)->m_PushForce ) },
	{ "EMantlePhase", "m_mantlePhase", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantlePhase), sizeof( ((idPhysics_Player *)0)->m_mantlePhase ) },
	{ "bool", "m_mantleStartPossible", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantleStartPossible), sizeof( ((idPhysics_Player *)0)->m_mantleStartPossible ) },
	{ "idVec3", "m_mantlePullStartPos", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantlePullStartPos), sizeof( ((idPhysics_Player *)0)->m_mantlePullStartPos ) },
	{ "idVec3", "m_mantlePullEndPos", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantlePullEndPos), sizeof( ((idPhysics_Player *)0)->m_mantlePullEndPos ) },
	{ "idVec3", "m_mantlePushEndPos", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantlePushEndPos), sizeof( ((idPhysics_Player *)0)->m_mantlePushEndPos ) },
	{ "float", "m_mantleCancelStartRoll", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantleCancelStartRoll), sizeof( ((idPhysics_Player *)0)->m_mantleCancelStartRoll ) },
	{ "float", "m_fmantleCancelDist", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fmantleCancelDist), sizeof( ((idPhysics_Player *)0)->m_fmantleCancelDist ) },
	{ "idVec3", "m_mantleCancelStartPos", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantleCancelStartPos), sizeof( ((idPhysics_Player *)0)->m_mantleCancelStartPos ) },
	{ "idVec3", "m_mantleCancelEndPos", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantleCancelEndPos), sizeof( ((idPhysics_Player *)0)->m_mantleCancelEndPos ) },
	{ "idVec3", "m_mantleStartPosWorld", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantleStartPosWorld), sizeof( ((idPhysics_Player *)0)->m_mantleStartPosWorld ) },
	{ "idEntity *", "m_p_mantledEntity", (ptrdiff_t)(&((idPhysics_Player *)0)->m_p_mantledEntity), sizeof( ((idPhysics_Player *)0)->m_p_mantledEntity ) },
	{ "int", "m_mantledEntityID", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantledEntityID), sizeof( ((idPhysics_Player *)0)->m_mantledEntityID ) },
	{ "float", "m_mantleTime", (ptrdiff_t)(&((idPhysics_Player *)0)->m_mantleTime), sizeof( ((idPhysics_Player *)0)->m_mantleTime ) },
	{ "float", "m_jumpHeldDownTime", (ptrdiff_t)(&((idPhysics_Player *)0)->m_jumpHeldDownTime), sizeof( ((idPhysics_Player *)0)->m_jumpHeldDownTime ) },
	{ "float", "m_leanYawAngleDegrees", (ptrdiff_t)(&((idPhysics_Player *)0)->m_leanYawAngleDegrees), sizeof( ((idPhysics_Player *)0)->m_leanYawAngleDegrees ) },
	{ "float", "m_CurrentLeanTiltDegrees", (ptrdiff_t)(&((idPhysics_Player *)0)->m_CurrentLeanTiltDegrees), sizeof( ((idPhysics_Player *)0)->m_CurrentLeanTiltDegrees ) },
	{ "float", "m_CurrentLeanStretch", (ptrdiff_t)(&((idPhysics_Player *)0)->m_CurrentLeanStretch), sizeof( ((idPhysics_Player *)0)->m_CurrentLeanStretch ) },
	{ "float", "m_leanMoveStartTilt", (ptrdiff_t)(&((idPhysics_Player *)0)->m_leanMoveStartTilt), sizeof( ((idPhysics_Player *)0)->m_leanMoveStartTilt ) },
	{ "float", "m_leanMoveEndTilt", (ptrdiff_t)(&((idPhysics_Player *)0)->m_leanMoveEndTilt), sizeof( ((idPhysics_Player *)0)->m_leanMoveEndTilt ) },
	{ "float", "m_leanMoveMaxAngle", (ptrdiff_t)(&((idPhysics_Player *)0)->m_leanMoveMaxAngle), sizeof( ((idPhysics_Player *)0)->m_leanMoveMaxAngle ) },
	{ "float", "m_leanMoveMaxStretch", (ptrdiff_t)(&((idPhysics_Player *)0)->m_leanMoveMaxStretch), sizeof( ((idPhysics_Player *)0)->m_leanMoveMaxStretch ) },
	{ "bool", "m_b_leanFinished", (ptrdiff_t)(&((idPhysics_Player *)0)->m_b_leanFinished), sizeof( ((idPhysics_Player *)0)->m_b_leanFinished ) },
	{ "float", "m_leanTime", (ptrdiff_t)(&((idPhysics_Player *)0)->m_leanTime), sizeof( ((idPhysics_Player *)0)->m_leanTime ) },
	{ "idAngles", "m_lastPlayerViewAngles", (ptrdiff_t)(&((idPhysics_Player *)0)->m_lastPlayerViewAngles), sizeof( ((idPhysics_Player *)0)->m_lastPlayerViewAngles ) },
	{ "float", "m_lastCommandViewYaw", (ptrdiff_t)(&((idPhysics_Player *)0)->m_lastCommandViewYaw), sizeof( ((idPhysics_Player *)0)->m_lastCommandViewYaw ) },
	{ "float", "m_lastCommandViewPitch", (ptrdiff_t)(&((idPhysics_Player *)0)->m_lastCommandViewPitch), sizeof( ((idPhysics_Player *)0)->m_lastCommandViewPitch ) },
	{ "idAngles", "m_viewLeanAngles", (ptrdiff_t)(&((idPhysics_Player *)0)->m_viewLeanAngles), sizeof( ((idPhysics_Player *)0)->m_viewLeanAngles ) },
	{ "idVec3", "m_viewLeanTranslation", (ptrdiff_t)(&((idPhysics_Player *)0)->m_viewLeanTranslation), sizeof( ((idPhysics_Player *)0)->m_viewLeanTranslation ) },
	{ "idBounds", "m_LeanViewBounds", (ptrdiff_t)(&((idPhysics_Player *)0)->m_LeanViewBounds), sizeof( ((idPhysics_Player *)0)->m_LeanViewBounds ) },
	{ "eShoulderingAnimation", "m_eShoulderAnimState", (ptrdiff_t)(&((idPhysics_Player *)0)->m_eShoulderAnimState), sizeof( ((idPhysics_Player *)0)->m_eShoulderAnimState ) },
	{ "float", "m_fShoulderingTime", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fShoulderingTime), sizeof( ((idPhysics_Player *)0)->m_fShoulderingTime ) },
	{ "float", "m_fPrevShoulderingPitchOffset", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fPrevShoulderingPitchOffset), sizeof( ((idPhysics_Player *)0)->m_fPrevShoulderingPitchOffset ) },
	{ "idVec3", "m_PrevShoulderingPosOffset", (ptrdiff_t)(&((idPhysics_Player *)0)->m_PrevShoulderingPosOffset), sizeof( ((idPhysics_Player *)0)->m_PrevShoulderingPosOffset ) },
	{ "idVec3", "m_ShoulderingStartPos", (ptrdiff_t)(&((idPhysics_Player *)0)->m_ShoulderingStartPos), sizeof( ((idPhysics_Player *)0)->m_ShoulderingStartPos ) },
	{ "bool", "m_bShouldering_SkipDucking", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bShouldering_SkipDucking), sizeof( ((idPhysics_Player *)0)->m_bShouldering_SkipDucking ) },
	{ "float", "m_fShouldering_TimeToNextSound", (ptrdiff_t)(&((idPhysics_Player *)0)->m_fShouldering_TimeToNextSound), sizeof( ((idPhysics_Player *)0)->m_fShouldering_TimeToNextSound ) },
	{ "bool", "m_bMidAir", (ptrdiff_t)(&((idPhysics_Player *)0)->m_bMidAir), sizeof( ((idPhysics_Player *)0)->m_bMidAir ) },
	{ NULL, 0 }
};

static classVariableInfo_t parametricPState_t_typeInfo[] = {
	{ "int", "time", (ptrdiff_t)(&((parametricPState_t *)0)->time), sizeof( ((parametricPState_t *)0)->time ) },
	{ "int", "atRest", (ptrdiff_t)(&((parametricPState_t *)0)->atRest), sizeof( ((parametricPState_t *)0)->atRest ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((parametricPState_t *)0)->origin), sizeof( ((parametricPState_t *)0)->origin ) },
	{ "idAngles", "angles", (ptrdiff_t)(&((parametricPState_t *)0)->angles), sizeof( ((parametricPState_t *)0)->angles ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((parametricPState_t *)0)->axis), sizeof( ((parametricPState_t *)0)->axis ) },
	{ "idVec3", "localOrigin", (ptrdiff_t)(&((parametricPState_t *)0)->localOrigin), sizeof( ((parametricPState_t *)0)->localOrigin ) },
	{ "idAngles", "localAngles", (ptrdiff_t)(&((parametricPState_t *)0)->localAngles), sizeof( ((parametricPState_t *)0)->localAngles ) },
	{ "idExtrapolate < idVec3 >", "linearExtrapolation", (ptrdiff_t)(&((parametricPState_t *)0)->linearExtrapolation), sizeof( ((parametricPState_t *)0)->linearExtrapolation ) },
	{ "idExtrapolate < idAngles >", "angularExtrapolation", (ptrdiff_t)(&((parametricPState_t *)0)->angularExtrapolation), sizeof( ((parametricPState_t *)0)->angularExtrapolation ) },
	{ "idInterpolateAccelDecelLinear < idVec3 >", "linearInterpolation", (ptrdiff_t)(&((parametricPState_t *)0)->linearInterpolation), sizeof( ((parametricPState_t *)0)->linearInterpolation ) },
	{ "idInterpolateAccelDecelLinear < idAngles >", "angularInterpolation", (ptrdiff_t)(&((parametricPState_t *)0)->angularInterpolation), sizeof( ((parametricPState_t *)0)->angularInterpolation ) },
	{ "idCurve_Spline < idVec3 > *", "spline", (ptrdiff_t)(&((parametricPState_t *)0)->spline), sizeof( ((parametricPState_t *)0)->spline ) },
	{ "idInterpolateAccelDecelLinear < float >", "splineInterpolate", (ptrdiff_t)(&((parametricPState_t *)0)->splineInterpolate), sizeof( ((parametricPState_t *)0)->splineInterpolate ) },
	{ "bool", "useSplineAngles", (ptrdiff_t)(&((parametricPState_t *)0)->useSplineAngles), sizeof( ((parametricPState_t *)0)->useSplineAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Parametric_typeInfo[] = {
	{ "parametricPState_t", "current", (ptrdiff_t)(&((idPhysics_Parametric *)0)->current), sizeof( ((idPhysics_Parametric *)0)->current ) },
	{ "parametricPState_t", "saved", (ptrdiff_t)(&((idPhysics_Parametric *)0)->saved), sizeof( ((idPhysics_Parametric *)0)->saved ) },
	{ "bool", "isPusher", (ptrdiff_t)(&((idPhysics_Parametric *)0)->isPusher), sizeof( ((idPhysics_Parametric *)0)->isPusher ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((idPhysics_Parametric *)0)->clipModel), sizeof( ((idPhysics_Parametric *)0)->clipModel ) },
	{ "int", "pushFlags", (ptrdiff_t)(&((idPhysics_Parametric *)0)->pushFlags), sizeof( ((idPhysics_Parametric *)0)->pushFlags ) },
	{ "trace_t", "pushResults", (ptrdiff_t)(&((idPhysics_Parametric *)0)->pushResults), sizeof( ((idPhysics_Parametric *)0)->pushResults ) },
	{ "bool", "isBlocked", (ptrdiff_t)(&((idPhysics_Parametric *)0)->isBlocked), sizeof( ((idPhysics_Parametric *)0)->isBlocked ) },
	{ "bool", "hasMaster", (ptrdiff_t)(&((idPhysics_Parametric *)0)->hasMaster), sizeof( ((idPhysics_Parametric *)0)->hasMaster ) },
	{ "bool", "isOrientated", (ptrdiff_t)(&((idPhysics_Parametric *)0)->isOrientated), sizeof( ((idPhysics_Parametric *)0)->isOrientated ) },
	{ NULL, 0 }
};

static classVariableInfo_t rigidBodyIState_t_typeInfo[] = {
	{ "idVec3", "position", (ptrdiff_t)(&((rigidBodyIState_t *)0)->position), sizeof( ((rigidBodyIState_t *)0)->position ) },
	{ "idMat3", "orientation", (ptrdiff_t)(&((rigidBodyIState_t *)0)->orientation), sizeof( ((rigidBodyIState_t *)0)->orientation ) },
	{ "idVec3", "linearMomentum", (ptrdiff_t)(&((rigidBodyIState_t *)0)->linearMomentum), sizeof( ((rigidBodyIState_t *)0)->linearMomentum ) },
	{ "idVec3", "angularMomentum", (ptrdiff_t)(&((rigidBodyIState_t *)0)->angularMomentum), sizeof( ((rigidBodyIState_t *)0)->angularMomentum ) },
	{ NULL, 0 }
};

static classVariableInfo_t rigidBodyPState_t_typeInfo[] = {
	{ "int", "atRest", (ptrdiff_t)(&((rigidBodyPState_t *)0)->atRest), sizeof( ((rigidBodyPState_t *)0)->atRest ) },
	{ "float", "lastTimeStep", (ptrdiff_t)(&((rigidBodyPState_t *)0)->lastTimeStep), sizeof( ((rigidBodyPState_t *)0)->lastTimeStep ) },
	{ "idVec3", "localOrigin", (ptrdiff_t)(&((rigidBodyPState_t *)0)->localOrigin), sizeof( ((rigidBodyPState_t *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (ptrdiff_t)(&((rigidBodyPState_t *)0)->localAxis), sizeof( ((rigidBodyPState_t *)0)->localAxis ) },
	{ "idVec6", "pushVelocity", (ptrdiff_t)(&((rigidBodyPState_t *)0)->pushVelocity), sizeof( ((rigidBodyPState_t *)0)->pushVelocity ) },
	{ "idVec3", "externalForce", (ptrdiff_t)(&((rigidBodyPState_t *)0)->externalForce), sizeof( ((rigidBodyPState_t *)0)->externalForce ) },
	{ "idVec3", "externalTorque", (ptrdiff_t)(&((rigidBodyPState_t *)0)->externalTorque), sizeof( ((rigidBodyPState_t *)0)->externalTorque ) },
	{ "idVec3", "externalForcePoint", (ptrdiff_t)(&((rigidBodyPState_t *)0)->externalForcePoint), sizeof( ((rigidBodyPState_t *)0)->externalForcePoint ) },
	{ "rigidBodyIState_t", "i", (ptrdiff_t)(&((rigidBodyPState_t *)0)->i), sizeof( ((rigidBodyPState_t *)0)->i ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_RigidBody_typeInfo[] = {
	{ "rigidBodyPState_t", "current", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->current), sizeof( ((idPhysics_RigidBody *)0)->current ) },
	{ "rigidBodyPState_t", "saved", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->saved), sizeof( ((idPhysics_RigidBody *)0)->saved ) },
	{ "float", "linearFriction", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->linearFriction), sizeof( ((idPhysics_RigidBody *)0)->linearFriction ) },
	{ "float", "angularFriction", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->angularFriction), sizeof( ((idPhysics_RigidBody *)0)->angularFriction ) },
	{ "float", "contactFriction", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->contactFriction), sizeof( ((idPhysics_RigidBody *)0)->contactFriction ) },
	{ "float", "bouncyness", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->bouncyness), sizeof( ((idPhysics_RigidBody *)0)->bouncyness ) },
	{ "float", "volume", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->volume), sizeof( ((idPhysics_RigidBody *)0)->volume ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->clipModel), sizeof( ((idPhysics_RigidBody *)0)->clipModel ) },
	{ "idVec3", "maxForce", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->maxForce), sizeof( ((idPhysics_RigidBody *)0)->maxForce ) },
	{ "idVec3", "maxTorque", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->maxTorque), sizeof( ((idPhysics_RigidBody *)0)->maxTorque ) },
	{ "float", "mass", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->mass), sizeof( ((idPhysics_RigidBody *)0)->mass ) },
	{ "float", "inverseMass", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->inverseMass), sizeof( ((idPhysics_RigidBody *)0)->inverseMass ) },
	{ "idVec3", "centerOfMass", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->centerOfMass), sizeof( ((idPhysics_RigidBody *)0)->centerOfMass ) },
	{ "idMat3", "inertiaTensor", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->inertiaTensor), sizeof( ((idPhysics_RigidBody *)0)->inertiaTensor ) },
	{ "idMat3", "inverseInertiaTensor", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->inverseInertiaTensor), sizeof( ((idPhysics_RigidBody *)0)->inverseInertiaTensor ) },
	{ "idODE *", "integrator", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->integrator), sizeof( ((idPhysics_RigidBody *)0)->integrator ) },
	{ "bool", "dropToFloor", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->dropToFloor), sizeof( ((idPhysics_RigidBody *)0)->dropToFloor ) },
	{ "bool", "testSolid", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->testSolid), sizeof( ((idPhysics_RigidBody *)0)->testSolid ) },
	{ "bool", "noImpact", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->noImpact), sizeof( ((idPhysics_RigidBody *)0)->noImpact ) },
	{ "bool", "noContact", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->noContact), sizeof( ((idPhysics_RigidBody *)0)->noContact ) },
	{ "bool", "hasMaster", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->hasMaster), sizeof( ((idPhysics_RigidBody *)0)->hasMaster ) },
	{ "bool", "isOrientated", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->isOrientated), sizeof( ((idPhysics_RigidBody *)0)->isOrientated ) },
	{ "trace_t", "collisionTrace", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->collisionTrace), sizeof( ((idPhysics_RigidBody *)0)->collisionTrace ) },
	{ "bool", "isBlocked", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->isBlocked), sizeof( ((idPhysics_RigidBody *)0)->isBlocked ) },
	{ "bool", "propagateImpulseLock", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->propagateImpulseLock), sizeof( ((idPhysics_RigidBody *)0)->propagateImpulseLock ) },
	{ "int", "noMoveTime", (ptrdiff_t)(&((idPhysics_RigidBody *)0)->noMoveTime), sizeof( ((idPhysics_RigidBody *)0)->noMoveTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_constraintFlags_s_typeInfo[] = {
//	{ "bool", "allowPrimary", (ptrdiff_t)(&((idAFConstraint::constraintFlags_s *)0)->allowPrimary), sizeof( ((idAFConstraint::constraintFlags_s *)0)->allowPrimary ) },
//	{ "bool", "frameConstraint", (ptrdiff_t)(&((idAFConstraint::constraintFlags_s *)0)->frameConstraint), sizeof( ((idAFConstraint::constraintFlags_s *)0)->frameConstraint ) },
//	{ "bool", "noCollision", (ptrdiff_t)(&((idAFConstraint::constraintFlags_s *)0)->noCollision), sizeof( ((idAFConstraint::constraintFlags_s *)0)->noCollision ) },
//	{ "bool", "isPrimary", (ptrdiff_t)(&((idAFConstraint::constraintFlags_s *)0)->isPrimary), sizeof( ((idAFConstraint::constraintFlags_s *)0)->isPrimary ) },
//	{ "bool", "isZero", (ptrdiff_t)(&((idAFConstraint::constraintFlags_s *)0)->isZero), sizeof( ((idAFConstraint::constraintFlags_s *)0)->isZero ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_typeInfo[] = {
	{ "constraintType_t", "type", (ptrdiff_t)(&((idAFConstraint *)0)->type), sizeof( ((idAFConstraint *)0)->type ) },
	{ "idStr", "name", (ptrdiff_t)(&((idAFConstraint *)0)->name), sizeof( ((idAFConstraint *)0)->name ) },
	{ "idAFBody *", "body1", (ptrdiff_t)(&((idAFConstraint *)0)->body1), sizeof( ((idAFConstraint *)0)->body1 ) },
	{ "idAFBody *", "body2", (ptrdiff_t)(&((idAFConstraint *)0)->body2), sizeof( ((idAFConstraint *)0)->body2 ) },
	{ "idPhysics_AF *", "physics", (ptrdiff_t)(&((idAFConstraint *)0)->physics), sizeof( ((idAFConstraint *)0)->physics ) },
	{ "idMatX", "J1", (ptrdiff_t)(&((idAFConstraint *)0)->J1), sizeof( ((idAFConstraint *)0)->J1 ) },
	{ "idMatX", "J2", (ptrdiff_t)(&((idAFConstraint *)0)->J2), sizeof( ((idAFConstraint *)0)->J2 ) },
	{ "idVecX", "c1", (ptrdiff_t)(&((idAFConstraint *)0)->c1), sizeof( ((idAFConstraint *)0)->c1 ) },
	{ "idVecX", "c2", (ptrdiff_t)(&((idAFConstraint *)0)->c2), sizeof( ((idAFConstraint *)0)->c2 ) },
	{ "idVecX", "lo", (ptrdiff_t)(&((idAFConstraint *)0)->lo), sizeof( ((idAFConstraint *)0)->lo ) },
	{ "idVecX", "hi", (ptrdiff_t)(&((idAFConstraint *)0)->hi), sizeof( ((idAFConstraint *)0)->hi ) },
	{ "idVecX", "e", (ptrdiff_t)(&((idAFConstraint *)0)->e), sizeof( ((idAFConstraint *)0)->e ) },
	{ "idAFConstraint *", "boxConstraint", (ptrdiff_t)(&((idAFConstraint *)0)->boxConstraint), sizeof( ((idAFConstraint *)0)->boxConstraint ) },
	{ "int[6]", "boxIndex", (ptrdiff_t)(&((idAFConstraint *)0)->boxIndex), sizeof( ((idAFConstraint *)0)->boxIndex ) },
	{ "idMatX", "invI", (ptrdiff_t)(&((idAFConstraint *)0)->invI), sizeof( ((idAFConstraint *)0)->invI ) },
	{ "idMatX", "J", (ptrdiff_t)(&((idAFConstraint *)0)->J), sizeof( ((idAFConstraint *)0)->J ) },
	{ "idVecX", "s", (ptrdiff_t)(&((idAFConstraint *)0)->s), sizeof( ((idAFConstraint *)0)->s ) },
	{ "idVecX", "lm", (ptrdiff_t)(&((idAFConstraint *)0)->lm), sizeof( ((idAFConstraint *)0)->lm ) },
	{ "int", "firstIndex", (ptrdiff_t)(&((idAFConstraint *)0)->firstIndex), sizeof( ((idAFConstraint *)0)->firstIndex ) },
	{ "idAFConstraint::constraintFlags_s", "fl", (ptrdiff_t)(&((idAFConstraint *)0)->fl), sizeof( ((idAFConstraint *)0)->fl ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Fixed_typeInfo[] = {
	{ "idVec3", "offset", (ptrdiff_t)(&((idAFConstraint_Fixed *)0)->offset), sizeof( ((idAFConstraint_Fixed *)0)->offset ) },
	{ "idMat3", "relAxis", (ptrdiff_t)(&((idAFConstraint_Fixed *)0)->relAxis), sizeof( ((idAFConstraint_Fixed *)0)->relAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_BallAndSocketJoint_typeInfo[] = {
	{ "idVec3", "anchor1", (ptrdiff_t)(&((idAFConstraint_BallAndSocketJoint *)0)->anchor1), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (ptrdiff_t)(&((idAFConstraint_BallAndSocketJoint *)0)->anchor2), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->anchor2 ) },
	{ "float", "friction", (ptrdiff_t)(&((idAFConstraint_BallAndSocketJoint *)0)->friction), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (ptrdiff_t)(&((idAFConstraint_BallAndSocketJoint *)0)->coneLimit), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->coneLimit ) },
	{ "idAFConstraint_PyramidLimit *", "pyramidLimit", (ptrdiff_t)(&((idAFConstraint_BallAndSocketJoint *)0)->pyramidLimit), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->pyramidLimit ) },
	{ "idAFConstraint_BallAndSocketJointFriction *", "fc", (ptrdiff_t)(&((idAFConstraint_BallAndSocketJoint *)0)->fc), sizeof( ((idAFConstraint_BallAndSocketJoint *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_BallAndSocketJointFriction_typeInfo[] = {
	{ "idAFConstraint_BallAndSocketJoint *", "joint", (ptrdiff_t)(&((idAFConstraint_BallAndSocketJointFriction *)0)->joint), sizeof( ((idAFConstraint_BallAndSocketJointFriction *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_UniversalJoint_typeInfo[] = {
	{ "idVec3", "anchor1", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->anchor1), sizeof( ((idAFConstraint_UniversalJoint *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->anchor2), sizeof( ((idAFConstraint_UniversalJoint *)0)->anchor2 ) },
	{ "idVec3", "shaft1", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->shaft1), sizeof( ((idAFConstraint_UniversalJoint *)0)->shaft1 ) },
	{ "idVec3", "shaft2", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->shaft2), sizeof( ((idAFConstraint_UniversalJoint *)0)->shaft2 ) },
	{ "idVec3", "axis1", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->axis1), sizeof( ((idAFConstraint_UniversalJoint *)0)->axis1 ) },
	{ "idVec3", "axis2", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->axis2), sizeof( ((idAFConstraint_UniversalJoint *)0)->axis2 ) },
	{ "float", "friction", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->friction), sizeof( ((idAFConstraint_UniversalJoint *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->coneLimit), sizeof( ((idAFConstraint_UniversalJoint *)0)->coneLimit ) },
	{ "idAFConstraint_PyramidLimit *", "pyramidLimit", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->pyramidLimit), sizeof( ((idAFConstraint_UniversalJoint *)0)->pyramidLimit ) },
	{ "idAFConstraint_UniversalJointFriction *", "fc", (ptrdiff_t)(&((idAFConstraint_UniversalJoint *)0)->fc), sizeof( ((idAFConstraint_UniversalJoint *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_UniversalJointFriction_typeInfo[] = {
	{ "idAFConstraint_UniversalJoint *", "joint", (ptrdiff_t)(&((idAFConstraint_UniversalJointFriction *)0)->joint), sizeof( ((idAFConstraint_UniversalJointFriction *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_CylindricalJoint_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Hinge_typeInfo[] = {
	{ "idVec3", "anchor1", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->anchor1), sizeof( ((idAFConstraint_Hinge *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->anchor2), sizeof( ((idAFConstraint_Hinge *)0)->anchor2 ) },
	{ "idVec3", "axis1", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->axis1), sizeof( ((idAFConstraint_Hinge *)0)->axis1 ) },
	{ "idVec3", "axis2", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->axis2), sizeof( ((idAFConstraint_Hinge *)0)->axis2 ) },
	{ "idMat3", "initialAxis", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->initialAxis), sizeof( ((idAFConstraint_Hinge *)0)->initialAxis ) },
	{ "float", "friction", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->friction), sizeof( ((idAFConstraint_Hinge *)0)->friction ) },
	{ "idAFConstraint_ConeLimit *", "coneLimit", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->coneLimit), sizeof( ((idAFConstraint_Hinge *)0)->coneLimit ) },
	{ "idAFConstraint_HingeSteering *", "steering", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->steering), sizeof( ((idAFConstraint_Hinge *)0)->steering ) },
	{ "idAFConstraint_HingeFriction *", "fc", (ptrdiff_t)(&((idAFConstraint_Hinge *)0)->fc), sizeof( ((idAFConstraint_Hinge *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_HingeFriction_typeInfo[] = {
	{ "idAFConstraint_Hinge *", "hinge", (ptrdiff_t)(&((idAFConstraint_HingeFriction *)0)->hinge), sizeof( ((idAFConstraint_HingeFriction *)0)->hinge ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_HingeSteering_typeInfo[] = {
	{ "idAFConstraint_Hinge *", "hinge", (ptrdiff_t)(&((idAFConstraint_HingeSteering *)0)->hinge), sizeof( ((idAFConstraint_HingeSteering *)0)->hinge ) },
	{ "float", "steerAngle", (ptrdiff_t)(&((idAFConstraint_HingeSteering *)0)->steerAngle), sizeof( ((idAFConstraint_HingeSteering *)0)->steerAngle ) },
	{ "float", "steerSpeed", (ptrdiff_t)(&((idAFConstraint_HingeSteering *)0)->steerSpeed), sizeof( ((idAFConstraint_HingeSteering *)0)->steerSpeed ) },
	{ "float", "epsilon", (ptrdiff_t)(&((idAFConstraint_HingeSteering *)0)->epsilon), sizeof( ((idAFConstraint_HingeSteering *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Slider_typeInfo[] = {
	{ "idVec3", "axis", (ptrdiff_t)(&((idAFConstraint_Slider *)0)->axis), sizeof( ((idAFConstraint_Slider *)0)->axis ) },
	{ "idVec3", "offset", (ptrdiff_t)(&((idAFConstraint_Slider *)0)->offset), sizeof( ((idAFConstraint_Slider *)0)->offset ) },
	{ "idMat3", "relAxis", (ptrdiff_t)(&((idAFConstraint_Slider *)0)->relAxis), sizeof( ((idAFConstraint_Slider *)0)->relAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Line_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Plane_typeInfo[] = {
	{ "idVec3", "anchor1", (ptrdiff_t)(&((idAFConstraint_Plane *)0)->anchor1), sizeof( ((idAFConstraint_Plane *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (ptrdiff_t)(&((idAFConstraint_Plane *)0)->anchor2), sizeof( ((idAFConstraint_Plane *)0)->anchor2 ) },
	{ "idVec3", "planeNormal", (ptrdiff_t)(&((idAFConstraint_Plane *)0)->planeNormal), sizeof( ((idAFConstraint_Plane *)0)->planeNormal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Spring_typeInfo[] = {
	{ "idVec3", "anchor1", (ptrdiff_t)(&((idAFConstraint_Spring *)0)->anchor1), sizeof( ((idAFConstraint_Spring *)0)->anchor1 ) },
	{ "idVec3", "anchor2", (ptrdiff_t)(&((idAFConstraint_Spring *)0)->anchor2), sizeof( ((idAFConstraint_Spring *)0)->anchor2 ) },
	{ "float", "kstretch", (ptrdiff_t)(&((idAFConstraint_Spring *)0)->kstretch), sizeof( ((idAFConstraint_Spring *)0)->kstretch ) },
	{ "float", "kcompress", (ptrdiff_t)(&((idAFConstraint_Spring *)0)->kcompress), sizeof( ((idAFConstraint_Spring *)0)->kcompress ) },
	{ "float", "damping", (ptrdiff_t)(&((idAFConstraint_Spring *)0)->damping), sizeof( ((idAFConstraint_Spring *)0)->damping ) },
	{ "float", "restLength", (ptrdiff_t)(&((idAFConstraint_Spring *)0)->restLength), sizeof( ((idAFConstraint_Spring *)0)->restLength ) },
	{ "float", "minLength", (ptrdiff_t)(&((idAFConstraint_Spring *)0)->minLength), sizeof( ((idAFConstraint_Spring *)0)->minLength ) },
	{ "float", "maxLength", (ptrdiff_t)(&((idAFConstraint_Spring *)0)->maxLength), sizeof( ((idAFConstraint_Spring *)0)->maxLength ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Contact_typeInfo[] = {
	{ "contactInfo_t", "contact", (ptrdiff_t)(&((idAFConstraint_Contact *)0)->contact), sizeof( ((idAFConstraint_Contact *)0)->contact ) },
	{ "idAFConstraint_ContactFriction *", "fc", (ptrdiff_t)(&((idAFConstraint_Contact *)0)->fc), sizeof( ((idAFConstraint_Contact *)0)->fc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_ContactFriction_typeInfo[] = {
	{ "idAFConstraint_Contact *", "cc", (ptrdiff_t)(&((idAFConstraint_ContactFriction *)0)->cc), sizeof( ((idAFConstraint_ContactFriction *)0)->cc ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_ConeLimit_typeInfo[] = {
	{ "idVec3", "coneAnchor", (ptrdiff_t)(&((idAFConstraint_ConeLimit *)0)->coneAnchor), sizeof( ((idAFConstraint_ConeLimit *)0)->coneAnchor ) },
	{ "idVec3", "coneAxis", (ptrdiff_t)(&((idAFConstraint_ConeLimit *)0)->coneAxis), sizeof( ((idAFConstraint_ConeLimit *)0)->coneAxis ) },
	{ "idVec3", "body1Axis", (ptrdiff_t)(&((idAFConstraint_ConeLimit *)0)->body1Axis), sizeof( ((idAFConstraint_ConeLimit *)0)->body1Axis ) },
	{ "float", "cosAngle", (ptrdiff_t)(&((idAFConstraint_ConeLimit *)0)->cosAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->cosAngle ) },
	{ "float", "sinHalfAngle", (ptrdiff_t)(&((idAFConstraint_ConeLimit *)0)->sinHalfAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->sinHalfAngle ) },
	{ "float", "cosHalfAngle", (ptrdiff_t)(&((idAFConstraint_ConeLimit *)0)->cosHalfAngle), sizeof( ((idAFConstraint_ConeLimit *)0)->cosHalfAngle ) },
	{ "float", "epsilon", (ptrdiff_t)(&((idAFConstraint_ConeLimit *)0)->epsilon), sizeof( ((idAFConstraint_ConeLimit *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_PyramidLimit_typeInfo[] = {
	{ "idVec3", "pyramidAnchor", (ptrdiff_t)(&((idAFConstraint_PyramidLimit *)0)->pyramidAnchor), sizeof( ((idAFConstraint_PyramidLimit *)0)->pyramidAnchor ) },
	{ "idMat3", "pyramidBasis", (ptrdiff_t)(&((idAFConstraint_PyramidLimit *)0)->pyramidBasis), sizeof( ((idAFConstraint_PyramidLimit *)0)->pyramidBasis ) },
	{ "idVec3", "body1Axis", (ptrdiff_t)(&((idAFConstraint_PyramidLimit *)0)->body1Axis), sizeof( ((idAFConstraint_PyramidLimit *)0)->body1Axis ) },
	{ "float[2]", "cosAngle", (ptrdiff_t)(&((idAFConstraint_PyramidLimit *)0)->cosAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->cosAngle ) },
	{ "float[2]", "sinHalfAngle", (ptrdiff_t)(&((idAFConstraint_PyramidLimit *)0)->sinHalfAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->sinHalfAngle ) },
	{ "float[2]", "cosHalfAngle", (ptrdiff_t)(&((idAFConstraint_PyramidLimit *)0)->cosHalfAngle), sizeof( ((idAFConstraint_PyramidLimit *)0)->cosHalfAngle ) },
	{ "float", "epsilon", (ptrdiff_t)(&((idAFConstraint_PyramidLimit *)0)->epsilon), sizeof( ((idAFConstraint_PyramidLimit *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFConstraint_Suspension_typeInfo[] = {
	{ "idVec3", "localOrigin", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->localOrigin), sizeof( ((idAFConstraint_Suspension *)0)->localOrigin ) },
	{ "idMat3", "localAxis", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->localAxis), sizeof( ((idAFConstraint_Suspension *)0)->localAxis ) },
	{ "float", "suspensionUp", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->suspensionUp), sizeof( ((idAFConstraint_Suspension *)0)->suspensionUp ) },
	{ "float", "suspensionDown", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->suspensionDown), sizeof( ((idAFConstraint_Suspension *)0)->suspensionDown ) },
	{ "float", "suspensionKCompress", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->suspensionKCompress), sizeof( ((idAFConstraint_Suspension *)0)->suspensionKCompress ) },
	{ "float", "suspensionDamping", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->suspensionDamping), sizeof( ((idAFConstraint_Suspension *)0)->suspensionDamping ) },
	{ "float", "steerAngle", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->steerAngle), sizeof( ((idAFConstraint_Suspension *)0)->steerAngle ) },
	{ "float", "friction", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->friction), sizeof( ((idAFConstraint_Suspension *)0)->friction ) },
	{ "bool", "motorEnabled", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->motorEnabled), sizeof( ((idAFConstraint_Suspension *)0)->motorEnabled ) },
	{ "float", "motorForce", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->motorForce), sizeof( ((idAFConstraint_Suspension *)0)->motorForce ) },
	{ "float", "motorVelocity", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->motorVelocity), sizeof( ((idAFConstraint_Suspension *)0)->motorVelocity ) },
	{ "idClipModel *", "wheelModel", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->wheelModel), sizeof( ((idAFConstraint_Suspension *)0)->wheelModel ) },
	{ "idVec3", "wheelOffset", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->wheelOffset), sizeof( ((idAFConstraint_Suspension *)0)->wheelOffset ) },
	{ "trace_t", "trace", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->trace), sizeof( ((idAFConstraint_Suspension *)0)->trace ) },
	{ "float", "epsilon", (ptrdiff_t)(&((idAFConstraint_Suspension *)0)->epsilon), sizeof( ((idAFConstraint_Suspension *)0)->epsilon ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFBodyPState_t_typeInfo[] = {
	{ "idVec3", "worldOrigin", (ptrdiff_t)(&((AFBodyPState_t *)0)->worldOrigin), sizeof( ((AFBodyPState_t *)0)->worldOrigin ) },
	{ "idMat3", "worldAxis", (ptrdiff_t)(&((AFBodyPState_t *)0)->worldAxis), sizeof( ((AFBodyPState_t *)0)->worldAxis ) },
	{ "idVec6", "spatialVelocity", (ptrdiff_t)(&((AFBodyPState_t *)0)->spatialVelocity), sizeof( ((AFBodyPState_t *)0)->spatialVelocity ) },
	{ "idVec6", "externalForce", (ptrdiff_t)(&((AFBodyPState_t *)0)->externalForce), sizeof( ((AFBodyPState_t *)0)->externalForce ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFBody_bodyFlags_s_typeInfo[] = {
//	{ "bool", "clipMaskSet", (ptrdiff_t)(&((idAFBody::bodyFlags_s *)0)->clipMaskSet), sizeof( ((idAFBody::bodyFlags_s *)0)->clipMaskSet ) },
//	{ "bool", "selfCollision", (ptrdiff_t)(&((idAFBody::bodyFlags_s *)0)->selfCollision), sizeof( ((idAFBody::bodyFlags_s *)0)->selfCollision ) },
//	{ "bool", "spatialInertiaSparse", (ptrdiff_t)(&((idAFBody::bodyFlags_s *)0)->spatialInertiaSparse), sizeof( ((idAFBody::bodyFlags_s *)0)->spatialInertiaSparse ) },
//	{ "bool", "useFrictionDir", (ptrdiff_t)(&((idAFBody::bodyFlags_s *)0)->useFrictionDir), sizeof( ((idAFBody::bodyFlags_s *)0)->useFrictionDir ) },
//	{ "bool", "useContactMotorDir", (ptrdiff_t)(&((idAFBody::bodyFlags_s *)0)->useContactMotorDir), sizeof( ((idAFBody::bodyFlags_s *)0)->useContactMotorDir ) },
//	{ "bool", "isZero", (ptrdiff_t)(&((idAFBody::bodyFlags_s *)0)->isZero), sizeof( ((idAFBody::bodyFlags_s *)0)->isZero ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFBody_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idAFBody *)0)->name), sizeof( ((idAFBody *)0)->name ) },
	{ "idAFBody *", "parent", (ptrdiff_t)(&((idAFBody *)0)->parent), sizeof( ((idAFBody *)0)->parent ) },
	{ "idList < idAFBody * >", "children", (ptrdiff_t)(&((idAFBody *)0)->children), sizeof( ((idAFBody *)0)->children ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((idAFBody *)0)->clipModel), sizeof( ((idAFBody *)0)->clipModel ) },
	{ "idEntityPtr < idEntity >", "m_RerouteEnt", (ptrdiff_t)(&((idAFBody *)0)->m_RerouteEnt), sizeof( ((idAFBody *)0)->m_RerouteEnt ) },
	{ "idAFConstraint *", "primaryConstraint", (ptrdiff_t)(&((idAFBody *)0)->primaryConstraint), sizeof( ((idAFBody *)0)->primaryConstraint ) },
	{ "idList < idAFConstraint * >", "constraints", (ptrdiff_t)(&((idAFBody *)0)->constraints), sizeof( ((idAFBody *)0)->constraints ) },
	{ "idAFTree *", "tree", (ptrdiff_t)(&((idAFBody *)0)->tree), sizeof( ((idAFBody *)0)->tree ) },
	{ "float", "linearFriction", (ptrdiff_t)(&((idAFBody *)0)->linearFriction), sizeof( ((idAFBody *)0)->linearFriction ) },
	{ "float", "angularFriction", (ptrdiff_t)(&((idAFBody *)0)->angularFriction), sizeof( ((idAFBody *)0)->angularFriction ) },
	{ "float", "contactFriction", (ptrdiff_t)(&((idAFBody *)0)->contactFriction), sizeof( ((idAFBody *)0)->contactFriction ) },
	{ "float", "bouncyness", (ptrdiff_t)(&((idAFBody *)0)->bouncyness), sizeof( ((idAFBody *)0)->bouncyness ) },
	{ "float", "volume", (ptrdiff_t)(&((idAFBody *)0)->volume), sizeof( ((idAFBody *)0)->volume ) },
	{ "int", "clipMask", (ptrdiff_t)(&((idAFBody *)0)->clipMask), sizeof( ((idAFBody *)0)->clipMask ) },
	{ "idVec3", "frictionDir", (ptrdiff_t)(&((idAFBody *)0)->frictionDir), sizeof( ((idAFBody *)0)->frictionDir ) },
	{ "idVec3", "contactMotorDir", (ptrdiff_t)(&((idAFBody *)0)->contactMotorDir), sizeof( ((idAFBody *)0)->contactMotorDir ) },
	{ "float", "contactMotorVelocity", (ptrdiff_t)(&((idAFBody *)0)->contactMotorVelocity), sizeof( ((idAFBody *)0)->contactMotorVelocity ) },
	{ "float", "contactMotorForce", (ptrdiff_t)(&((idAFBody *)0)->contactMotorForce), sizeof( ((idAFBody *)0)->contactMotorForce ) },
	{ "float", "mass", (ptrdiff_t)(&((idAFBody *)0)->mass), sizeof( ((idAFBody *)0)->mass ) },
	{ "float", "invMass", (ptrdiff_t)(&((idAFBody *)0)->invMass), sizeof( ((idAFBody *)0)->invMass ) },
	{ "float", "liquidMass", (ptrdiff_t)(&((idAFBody *)0)->liquidMass), sizeof( ((idAFBody *)0)->liquidMass ) },
	{ "float", "invLiquidMass", (ptrdiff_t)(&((idAFBody *)0)->invLiquidMass), sizeof( ((idAFBody *)0)->invLiquidMass ) },
	{ "float", "waterLevel", (ptrdiff_t)(&((idAFBody *)0)->waterLevel), sizeof( ((idAFBody *)0)->waterLevel ) },
	{ "float", "m_fWaterMurkiness", (ptrdiff_t)(&((idAFBody *)0)->m_fWaterMurkiness), sizeof( ((idAFBody *)0)->m_fWaterMurkiness ) },
	{ "idVec3", "centerOfMass", (ptrdiff_t)(&((idAFBody *)0)->centerOfMass), sizeof( ((idAFBody *)0)->centerOfMass ) },
	{ "idMat3", "inertiaTensor", (ptrdiff_t)(&((idAFBody *)0)->inertiaTensor), sizeof( ((idAFBody *)0)->inertiaTensor ) },
	{ "idMat3", "inverseInertiaTensor", (ptrdiff_t)(&((idAFBody *)0)->inverseInertiaTensor), sizeof( ((idAFBody *)0)->inverseInertiaTensor ) },
	{ "AFBodyPState_t[2]", "state", (ptrdiff_t)(&((idAFBody *)0)->state), sizeof( ((idAFBody *)0)->state ) },
	{ "AFBodyPState_t *", "current", (ptrdiff_t)(&((idAFBody *)0)->current), sizeof( ((idAFBody *)0)->current ) },
	{ "AFBodyPState_t *", "next", (ptrdiff_t)(&((idAFBody *)0)->next), sizeof( ((idAFBody *)0)->next ) },
	{ "AFBodyPState_t", "saved", (ptrdiff_t)(&((idAFBody *)0)->saved), sizeof( ((idAFBody *)0)->saved ) },
	{ "idVec3", "atRestOrigin", (ptrdiff_t)(&((idAFBody *)0)->atRestOrigin), sizeof( ((idAFBody *)0)->atRestOrigin ) },
	{ "idMat3", "atRestAxis", (ptrdiff_t)(&((idAFBody *)0)->atRestAxis), sizeof( ((idAFBody *)0)->atRestAxis ) },
	{ "idMatX", "inverseWorldSpatialInertia", (ptrdiff_t)(&((idAFBody *)0)->inverseWorldSpatialInertia), sizeof( ((idAFBody *)0)->inverseWorldSpatialInertia ) },
	{ "idMatX", "I", (ptrdiff_t)(&((idAFBody *)0)->I), sizeof( ((idAFBody *)0)->I ) },
	{ "idMatX", "invI", (ptrdiff_t)(&((idAFBody *)0)->invI), sizeof( ((idAFBody *)0)->invI ) },
	{ "idMatX", "J", (ptrdiff_t)(&((idAFBody *)0)->J), sizeof( ((idAFBody *)0)->J ) },
	{ "idVecX", "s", (ptrdiff_t)(&((idAFBody *)0)->s), sizeof( ((idAFBody *)0)->s ) },
	{ "idVecX", "totalForce", (ptrdiff_t)(&((idAFBody *)0)->totalForce), sizeof( ((idAFBody *)0)->totalForce ) },
	{ "idVecX", "auxForce", (ptrdiff_t)(&((idAFBody *)0)->auxForce), sizeof( ((idAFBody *)0)->auxForce ) },
	{ "idVecX", "acceleration", (ptrdiff_t)(&((idAFBody *)0)->acceleration), sizeof( ((idAFBody *)0)->acceleration ) },
	{ "float *", "response", (ptrdiff_t)(&((idAFBody *)0)->response), sizeof( ((idAFBody *)0)->response ) },
	{ "int *", "responseIndex", (ptrdiff_t)(&((idAFBody *)0)->responseIndex), sizeof( ((idAFBody *)0)->responseIndex ) },
	{ "int", "numResponses", (ptrdiff_t)(&((idAFBody *)0)->numResponses), sizeof( ((idAFBody *)0)->numResponses ) },
	{ "int", "maxAuxiliaryIndex", (ptrdiff_t)(&((idAFBody *)0)->maxAuxiliaryIndex), sizeof( ((idAFBody *)0)->maxAuxiliaryIndex ) },
	{ "int", "maxSubTreeAuxiliaryIndex", (ptrdiff_t)(&((idAFBody *)0)->maxSubTreeAuxiliaryIndex), sizeof( ((idAFBody *)0)->maxSubTreeAuxiliaryIndex ) },
	{ "idAFBody::bodyFlags_s", "fl", (ptrdiff_t)(&((idAFBody *)0)->fl), sizeof( ((idAFBody *)0)->fl ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFTree_typeInfo[] = {
	{ "idList < idAFBody * >", "sortedBodies", (ptrdiff_t)(&((idAFTree *)0)->sortedBodies), sizeof( ((idAFTree *)0)->sortedBodies ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFPState_t_typeInfo[] = {
	{ "int", "atRest", (ptrdiff_t)(&((AFPState_t *)0)->atRest), sizeof( ((AFPState_t *)0)->atRest ) },
	{ "float", "noMoveTime", (ptrdiff_t)(&((AFPState_t *)0)->noMoveTime), sizeof( ((AFPState_t *)0)->noMoveTime ) },
	{ "float", "activateTime", (ptrdiff_t)(&((AFPState_t *)0)->activateTime), sizeof( ((AFPState_t *)0)->activateTime ) },
	{ "float", "lastTimeStep", (ptrdiff_t)(&((AFPState_t *)0)->lastTimeStep), sizeof( ((AFPState_t *)0)->lastTimeStep ) },
	{ "idVec6", "pushVelocity", (ptrdiff_t)(&((AFPState_t *)0)->pushVelocity), sizeof( ((AFPState_t *)0)->pushVelocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t AFCollision_t_typeInfo[] = {
	{ "trace_t", "trace", (ptrdiff_t)(&((AFCollision_t *)0)->trace), sizeof( ((AFCollision_t *)0)->trace ) },
	{ "idAFBody *", "body", (ptrdiff_t)(&((AFCollision_t *)0)->body), sizeof( ((AFCollision_t *)0)->body ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_AF_typeInfo[] = {
	{ "idList < idAFTree * >", "trees", (ptrdiff_t)(&((idPhysics_AF *)0)->trees), sizeof( ((idPhysics_AF *)0)->trees ) },
	{ "idList < idAFBody * >", "bodies", (ptrdiff_t)(&((idPhysics_AF *)0)->bodies), sizeof( ((idPhysics_AF *)0)->bodies ) },
	{ "idList < idAFConstraint * >", "constraints", (ptrdiff_t)(&((idPhysics_AF *)0)->constraints), sizeof( ((idPhysics_AF *)0)->constraints ) },
	{ "idList < idAFConstraint * >", "primaryConstraints", (ptrdiff_t)(&((idPhysics_AF *)0)->primaryConstraints), sizeof( ((idPhysics_AF *)0)->primaryConstraints ) },
	{ "idList < idAFConstraint * >", "auxiliaryConstraints", (ptrdiff_t)(&((idPhysics_AF *)0)->auxiliaryConstraints), sizeof( ((idPhysics_AF *)0)->auxiliaryConstraints ) },
	{ "idList < idAFConstraint * >", "frameConstraints", (ptrdiff_t)(&((idPhysics_AF *)0)->frameConstraints), sizeof( ((idPhysics_AF *)0)->frameConstraints ) },
	{ "idList < idAFConstraint_Contact * >", "contactConstraints", (ptrdiff_t)(&((idPhysics_AF *)0)->contactConstraints), sizeof( ((idPhysics_AF *)0)->contactConstraints ) },
	{ "idList < int >", "contactBodies", (ptrdiff_t)(&((idPhysics_AF *)0)->contactBodies), sizeof( ((idPhysics_AF *)0)->contactBodies ) },
	{ "idList < AFCollision_t >", "collisions", (ptrdiff_t)(&((idPhysics_AF *)0)->collisions), sizeof( ((idPhysics_AF *)0)->collisions ) },
	{ "bool", "changedAF", (ptrdiff_t)(&((idPhysics_AF *)0)->changedAF), sizeof( ((idPhysics_AF *)0)->changedAF ) },
	{ "int", "m_NumOrigBodies", (ptrdiff_t)(&((idPhysics_AF *)0)->m_NumOrigBodies), sizeof( ((idPhysics_AF *)0)->m_NumOrigBodies ) },
	{ "int", "m_NumOrigConstraints", (ptrdiff_t)(&((idPhysics_AF *)0)->m_NumOrigConstraints), sizeof( ((idPhysics_AF *)0)->m_NumOrigConstraints ) },
	{ "float", "linearFriction", (ptrdiff_t)(&((idPhysics_AF *)0)->linearFriction), sizeof( ((idPhysics_AF *)0)->linearFriction ) },
	{ "float", "angularFriction", (ptrdiff_t)(&((idPhysics_AF *)0)->angularFriction), sizeof( ((idPhysics_AF *)0)->angularFriction ) },
	{ "float", "contactFriction", (ptrdiff_t)(&((idPhysics_AF *)0)->contactFriction), sizeof( ((idPhysics_AF *)0)->contactFriction ) },
	{ "float", "bouncyness", (ptrdiff_t)(&((idPhysics_AF *)0)->bouncyness), sizeof( ((idPhysics_AF *)0)->bouncyness ) },
	{ "float", "totalMass", (ptrdiff_t)(&((idPhysics_AF *)0)->totalMass), sizeof( ((idPhysics_AF *)0)->totalMass ) },
	{ "float", "forceTotalMass", (ptrdiff_t)(&((idPhysics_AF *)0)->forceTotalMass), sizeof( ((idPhysics_AF *)0)->forceTotalMass ) },
	{ "idVec2", "suspendVelocity", (ptrdiff_t)(&((idPhysics_AF *)0)->suspendVelocity), sizeof( ((idPhysics_AF *)0)->suspendVelocity ) },
	{ "idVec2", "suspendAcceleration", (ptrdiff_t)(&((idPhysics_AF *)0)->suspendAcceleration), sizeof( ((idPhysics_AF *)0)->suspendAcceleration ) },
	{ "float", "noMoveTime", (ptrdiff_t)(&((idPhysics_AF *)0)->noMoveTime), sizeof( ((idPhysics_AF *)0)->noMoveTime ) },
	{ "float", "noMoveTranslation", (ptrdiff_t)(&((idPhysics_AF *)0)->noMoveTranslation), sizeof( ((idPhysics_AF *)0)->noMoveTranslation ) },
	{ "float", "noMoveRotation", (ptrdiff_t)(&((idPhysics_AF *)0)->noMoveRotation), sizeof( ((idPhysics_AF *)0)->noMoveRotation ) },
	{ "float", "minMoveTime", (ptrdiff_t)(&((idPhysics_AF *)0)->minMoveTime), sizeof( ((idPhysics_AF *)0)->minMoveTime ) },
	{ "float", "maxMoveTime", (ptrdiff_t)(&((idPhysics_AF *)0)->maxMoveTime), sizeof( ((idPhysics_AF *)0)->maxMoveTime ) },
	{ "float", "impulseThreshold", (ptrdiff_t)(&((idPhysics_AF *)0)->impulseThreshold), sizeof( ((idPhysics_AF *)0)->impulseThreshold ) },
	{ "float", "timeScale", (ptrdiff_t)(&((idPhysics_AF *)0)->timeScale), sizeof( ((idPhysics_AF *)0)->timeScale ) },
	{ "float", "timeScaleRampStart", (ptrdiff_t)(&((idPhysics_AF *)0)->timeScaleRampStart), sizeof( ((idPhysics_AF *)0)->timeScaleRampStart ) },
	{ "float", "timeScaleRampEnd", (ptrdiff_t)(&((idPhysics_AF *)0)->timeScaleRampEnd), sizeof( ((idPhysics_AF *)0)->timeScaleRampEnd ) },
	{ "float", "jointFrictionScale", (ptrdiff_t)(&((idPhysics_AF *)0)->jointFrictionScale), sizeof( ((idPhysics_AF *)0)->jointFrictionScale ) },
	{ "float", "jointFrictionDent", (ptrdiff_t)(&((idPhysics_AF *)0)->jointFrictionDent), sizeof( ((idPhysics_AF *)0)->jointFrictionDent ) },
	{ "float", "jointFrictionDentStart", (ptrdiff_t)(&((idPhysics_AF *)0)->jointFrictionDentStart), sizeof( ((idPhysics_AF *)0)->jointFrictionDentStart ) },
	{ "float", "jointFrictionDentEnd", (ptrdiff_t)(&((idPhysics_AF *)0)->jointFrictionDentEnd), sizeof( ((idPhysics_AF *)0)->jointFrictionDentEnd ) },
	{ "float", "jointFrictionDentScale", (ptrdiff_t)(&((idPhysics_AF *)0)->jointFrictionDentScale), sizeof( ((idPhysics_AF *)0)->jointFrictionDentScale ) },
	{ "float", "contactFrictionScale", (ptrdiff_t)(&((idPhysics_AF *)0)->contactFrictionScale), sizeof( ((idPhysics_AF *)0)->contactFrictionScale ) },
	{ "float", "contactFrictionDent", (ptrdiff_t)(&((idPhysics_AF *)0)->contactFrictionDent), sizeof( ((idPhysics_AF *)0)->contactFrictionDent ) },
	{ "float", "contactFrictionDentStart", (ptrdiff_t)(&((idPhysics_AF *)0)->contactFrictionDentStart), sizeof( ((idPhysics_AF *)0)->contactFrictionDentStart ) },
	{ "float", "contactFrictionDentEnd", (ptrdiff_t)(&((idPhysics_AF *)0)->contactFrictionDentEnd), sizeof( ((idPhysics_AF *)0)->contactFrictionDentEnd ) },
	{ "float", "contactFrictionDentScale", (ptrdiff_t)(&((idPhysics_AF *)0)->contactFrictionDentScale), sizeof( ((idPhysics_AF *)0)->contactFrictionDentScale ) },
	{ "bool", "enableCollision", (ptrdiff_t)(&((idPhysics_AF *)0)->enableCollision), sizeof( ((idPhysics_AF *)0)->enableCollision ) },
	{ "bool", "selfCollision", (ptrdiff_t)(&((idPhysics_AF *)0)->selfCollision), sizeof( ((idPhysics_AF *)0)->selfCollision ) },
	{ "bool", "comeToRest", (ptrdiff_t)(&((idPhysics_AF *)0)->comeToRest), sizeof( ((idPhysics_AF *)0)->comeToRest ) },
	{ "bool", "linearTime", (ptrdiff_t)(&((idPhysics_AF *)0)->linearTime), sizeof( ((idPhysics_AF *)0)->linearTime ) },
	{ "bool", "noImpact", (ptrdiff_t)(&((idPhysics_AF *)0)->noImpact), sizeof( ((idPhysics_AF *)0)->noImpact ) },
	{ "bool", "worldConstraintsLocked", (ptrdiff_t)(&((idPhysics_AF *)0)->worldConstraintsLocked), sizeof( ((idPhysics_AF *)0)->worldConstraintsLocked ) },
	{ "bool", "forcePushable", (ptrdiff_t)(&((idPhysics_AF *)0)->forcePushable), sizeof( ((idPhysics_AF *)0)->forcePushable ) },
	{ "AFPState_t", "current", (ptrdiff_t)(&((idPhysics_AF *)0)->current), sizeof( ((idPhysics_AF *)0)->current ) },
	{ "AFPState_t", "saved", (ptrdiff_t)(&((idPhysics_AF *)0)->saved), sizeof( ((idPhysics_AF *)0)->saved ) },
	{ "bool", "fixedDensityBuoyancy", (ptrdiff_t)(&((idPhysics_AF *)0)->fixedDensityBuoyancy), sizeof( ((idPhysics_AF *)0)->fixedDensityBuoyancy ) },
	{ "float", "liquidDensity", (ptrdiff_t)(&((idPhysics_AF *)0)->liquidDensity), sizeof( ((idPhysics_AF *)0)->liquidDensity ) },
	{ "idAFBody *", "masterBody", (ptrdiff_t)(&((idPhysics_AF *)0)->masterBody), sizeof( ((idPhysics_AF *)0)->masterBody ) },
	{ "idLCP *", "lcp", (ptrdiff_t)(&((idPhysics_AF *)0)->lcp), sizeof( ((idPhysics_AF *)0)->lcp ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhysics_Liquid_typeInfo[] = {
	{ "float", "density", (ptrdiff_t)(&((idPhysics_Liquid *)0)->density), sizeof( ((idPhysics_Liquid *)0)->density ) },
	{ "float", "viscosity", (ptrdiff_t)(&((idPhysics_Liquid *)0)->viscosity), sizeof( ((idPhysics_Liquid *)0)->viscosity ) },
	{ "idVec3", "minWaveVelocity", (ptrdiff_t)(&((idPhysics_Liquid *)0)->minWaveVelocity), sizeof( ((idPhysics_Liquid *)0)->minWaveVelocity ) },
	{ "idVec3", "minSplashVelocity", (ptrdiff_t)(&((idPhysics_Liquid *)0)->minSplashVelocity), sizeof( ((idPhysics_Liquid *)0)->minSplashVelocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t singleSmoke_t_typeInfo[] = {
	{ "singleSmoke_s *", "next", (ptrdiff_t)(&((singleSmoke_t *)0)->next), sizeof( ((singleSmoke_t *)0)->next ) },
	{ "int", "privateStartTime", (ptrdiff_t)(&((singleSmoke_t *)0)->privateStartTime), sizeof( ((singleSmoke_t *)0)->privateStartTime ) },
	{ "int", "index", (ptrdiff_t)(&((singleSmoke_t *)0)->index), sizeof( ((singleSmoke_t *)0)->index ) },
	{ "idRandom", "random", (ptrdiff_t)(&((singleSmoke_t *)0)->random), sizeof( ((singleSmoke_t *)0)->random ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((singleSmoke_t *)0)->origin), sizeof( ((singleSmoke_t *)0)->origin ) },
	{ "idMat3", "axis", (ptrdiff_t)(&((singleSmoke_t *)0)->axis), sizeof( ((singleSmoke_t *)0)->axis ) },
	{ NULL, 0 }
};

static classVariableInfo_t activeSmokeStage_t_typeInfo[] = {
	{ "const idParticleStage *", "stage", (ptrdiff_t)(&((activeSmokeStage_t *)0)->stage), sizeof( ((activeSmokeStage_t *)0)->stage ) },
	{ "singleSmoke_t *", "smokes", (ptrdiff_t)(&((activeSmokeStage_t *)0)->smokes), sizeof( ((activeSmokeStage_t *)0)->smokes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSmokeParticles_typeInfo[] = {
	{ "bool", "initialized", (ptrdiff_t)(&((idSmokeParticles *)0)->initialized), sizeof( ((idSmokeParticles *)0)->initialized ) },
	{ "renderEntity_t", "renderEntity", (ptrdiff_t)(&((idSmokeParticles *)0)->renderEntity), sizeof( ((idSmokeParticles *)0)->renderEntity ) },
	{ "int", "renderEntityHandle", (ptrdiff_t)(&((idSmokeParticles *)0)->renderEntityHandle), sizeof( ((idSmokeParticles *)0)->renderEntityHandle ) },
	{ "singleSmoke_t[10000]", "smokes", (ptrdiff_t)(&((idSmokeParticles *)0)->smokes), sizeof( ((idSmokeParticles *)0)->smokes ) },
	{ "idList < activeSmokeStage_t >", "activeStages", (ptrdiff_t)(&((idSmokeParticles *)0)->activeStages), sizeof( ((idSmokeParticles *)0)->activeStages ) },
	{ "singleSmoke_t *", "freeSmokes", (ptrdiff_t)(&((idSmokeParticles *)0)->freeSmokes), sizeof( ((idSmokeParticles *)0)->freeSmokes ) },
	{ "int", "numActiveSmokes", (ptrdiff_t)(&((idSmokeParticles *)0)->numActiveSmokes), sizeof( ((idSmokeParticles *)0)->numActiveSmokes ) },
	{ "int", "currentParticleTime", (ptrdiff_t)(&((idSmokeParticles *)0)->currentParticleTime), sizeof( ((idSmokeParticles *)0)->currentParticleTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t COverlaySys_typeInfo[] = {
	{ "idLinkList < SOverlay >", "m_overlays", (ptrdiff_t)(&((COverlaySys *)0)->m_overlays), sizeof( ((COverlaySys *)0)->m_overlays ) },
	{ "int", "m_lastUsedHandle", (ptrdiff_t)(&((COverlaySys *)0)->m_lastUsedHandle), sizeof( ((COverlaySys *)0)->m_lastUsedHandle ) },
	{ "SOverlay *", "m_lastUsedOverlay", (ptrdiff_t)(&((COverlaySys *)0)->m_lastUsedOverlay), sizeof( ((COverlaySys *)0)->m_lastUsedOverlay ) },
	{ "bool", "m_updateOpaque", (ptrdiff_t)(&((COverlaySys *)0)->m_updateOpaque), sizeof( ((COverlaySys *)0)->m_updateOpaque ) },
	{ "idLinkList < SOverlay > *", "m_highestOpaque", (ptrdiff_t)(&((COverlaySys *)0)->m_highestOpaque), sizeof( ((COverlaySys *)0)->m_highestOpaque ) },
	{ "bool", "m_updateInteractive", (ptrdiff_t)(&((COverlaySys *)0)->m_updateInteractive), sizeof( ((COverlaySys *)0)->m_updateInteractive ) },
	{ "idUserInterface *", "m_highestInteractive", (ptrdiff_t)(&((COverlaySys *)0)->m_highestInteractive), sizeof( ((COverlaySys *)0)->m_highestInteractive ) },
	{ "int", "m_nextHandle", (ptrdiff_t)(&((COverlaySys *)0)->m_nextHandle), sizeof( ((COverlaySys *)0)->m_nextHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t SOverlay_typeInfo[] = {
	{ "idLinkList < SOverlay >", "m_node", (ptrdiff_t)(&((SOverlay *)0)->m_node), sizeof( ((SOverlay *)0)->m_node ) },
	{ "idUserInterface *", "m_gui", (ptrdiff_t)(&((SOverlay *)0)->m_gui), sizeof( ((SOverlay *)0)->m_gui ) },
	{ "int", "m_handle", (ptrdiff_t)(&((SOverlay *)0)->m_handle), sizeof( ((SOverlay *)0)->m_handle ) },
	{ "int", "m_layer", (ptrdiff_t)(&((SOverlay *)0)->m_layer), sizeof( ((SOverlay *)0)->m_layer ) },
	{ "bool", "m_external", (ptrdiff_t)(&((SOverlay *)0)->m_external), sizeof( ((SOverlay *)0)->m_external ) },
	{ "bool", "m_opaque", (ptrdiff_t)(&((SOverlay *)0)->m_opaque), sizeof( ((SOverlay *)0)->m_opaque ) },
	{ "bool", "m_interactive", (ptrdiff_t)(&((SOverlay *)0)->m_interactive), sizeof( ((SOverlay *)0)->m_interactive ) },
	{ NULL, 0 }
};

static classVariableInfo_t UserManager_typeInfo[] = {
	{ "idList < idEntityPtr < idActor > >", "m_users", (ptrdiff_t)(&((UserManager *)0)->m_users), sizeof( ((UserManager *)0)->m_users ) },
	{ NULL, 0 }
};

static classVariableInfo_t FlinderSpawn_typeInfo[] = {
	{ "idStr", "m_Entity", (ptrdiff_t)(&((FlinderSpawn *)0)->m_Entity), sizeof( ((FlinderSpawn *)0)->m_Entity ) },
	{ "idVec3", "m_Offset", (ptrdiff_t)(&((FlinderSpawn *)0)->m_Offset), sizeof( ((FlinderSpawn *)0)->m_Offset ) },
	{ "int", "m_Count", (ptrdiff_t)(&((FlinderSpawn *)0)->m_Count), sizeof( ((FlinderSpawn *)0)->m_Count ) },
	{ "float", "m_Probability", (ptrdiff_t)(&((FlinderSpawn *)0)->m_Probability), sizeof( ((FlinderSpawn *)0)->m_Probability ) },
	{ NULL, 0 }
};

static classVariableInfo_t signal_t_typeInfo[] = {
	{ "int", "threadnum", (ptrdiff_t)(&((signal_t *)0)->threadnum), sizeof( ((signal_t *)0)->threadnum ) },
	{ "const function_t *", "function", (ptrdiff_t)(&((signal_t *)0)->function), sizeof( ((signal_t *)0)->function ) },
	{ NULL, 0 }
};

static classVariableInfo_t signalList_t_typeInfo[] = {
	{ "idList < signal_t >[10]", "signal", (ptrdiff_t)(&((signalList_t *)0)->signal), sizeof( ((signalList_t *)0)->signal ) },
	{ NULL, 0 }
};

static classVariableInfo_t CAttachInfo_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "ent", (ptrdiff_t)(&((CAttachInfo *)0)->ent), sizeof( ((CAttachInfo *)0)->ent ) },
	{ "int", "channel", (ptrdiff_t)(&((CAttachInfo *)0)->channel), sizeof( ((CAttachInfo *)0)->channel ) },
	{ "idStr", "name", (ptrdiff_t)(&((CAttachInfo *)0)->name), sizeof( ((CAttachInfo *)0)->name ) },
	{ "int", "savedContents", (ptrdiff_t)(&((CAttachInfo *)0)->savedContents), sizeof( ((CAttachInfo *)0)->savedContents ) },
	{ "idStr", "posName", (ptrdiff_t)(&((CAttachInfo *)0)->posName), sizeof( ((CAttachInfo *)0)->posName ) },
	{ NULL, 0 }
};

static classVariableInfo_t SAttachPosition_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((SAttachPosition *)0)->name), sizeof( ((SAttachPosition *)0)->name ) },
	{ "jointHandle_t", "joint", (ptrdiff_t)(&((SAttachPosition *)0)->joint), sizeof( ((SAttachPosition *)0)->joint ) },
	{ "idAngles", "angleOffset", (ptrdiff_t)(&((SAttachPosition *)0)->angleOffset), sizeof( ((SAttachPosition *)0)->angleOffset ) },
	{ "idVec3", "originOffset", (ptrdiff_t)(&((SAttachPosition *)0)->originOffset), sizeof( ((SAttachPosition *)0)->originOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t SDecalInfo_typeInfo[] = {
	{ "idStr", "decal", (ptrdiff_t)(&((SDecalInfo *)0)->decal), sizeof( ((SDecalInfo *)0)->decal ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((SDecalInfo *)0)->origin), sizeof( ((SDecalInfo *)0)->origin ) },
	{ "idVec3", "dir", (ptrdiff_t)(&((SDecalInfo *)0)->dir), sizeof( ((SDecalInfo *)0)->dir ) },
	{ "float", "size", (ptrdiff_t)(&((SDecalInfo *)0)->size), sizeof( ((SDecalInfo *)0)->size ) },
	{ "jointHandle_t", "overlay_joint", (ptrdiff_t)(&((SDecalInfo *)0)->overlay_joint), sizeof( ((SDecalInfo *)0)->overlay_joint ) },
	{ "int", "decal_starttime", (ptrdiff_t)(&((SDecalInfo *)0)->decal_starttime), sizeof( ((SDecalInfo *)0)->decal_starttime ) },
	{ "float", "decal_depth", (ptrdiff_t)(&((SDecalInfo *)0)->decal_depth), sizeof( ((SDecalInfo *)0)->decal_depth ) },
	{ "bool", "decal_parallel", (ptrdiff_t)(&((SDecalInfo *)0)->decal_parallel), sizeof( ((SDecalInfo *)0)->decal_parallel ) },
	{ "float", "decal_angle", (ptrdiff_t)(&((SDecalInfo *)0)->decal_angle), sizeof( ((SDecalInfo *)0)->decal_angle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntity_entityFlags_s_typeInfo[] = {
//	{ "bool", "notarget", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->notarget), sizeof( ((idEntity::entityFlags_s *)0)->notarget ) },
//	{ "bool", "noknockback", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->noknockback), sizeof( ((idEntity::entityFlags_s *)0)->noknockback ) },
//	{ "bool", "takedamage", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->takedamage), sizeof( ((idEntity::entityFlags_s *)0)->takedamage ) },
//	{ "bool", "hidden", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->hidden), sizeof( ((idEntity::entityFlags_s *)0)->hidden ) },
//	{ "bool", "bindOrientated", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->bindOrientated), sizeof( ((idEntity::entityFlags_s *)0)->bindOrientated ) },
//	{ "bool", "solidForTeam", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->solidForTeam), sizeof( ((idEntity::entityFlags_s *)0)->solidForTeam ) },
//	{ "bool", "forcePhysicsUpdate", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->forcePhysicsUpdate), sizeof( ((idEntity::entityFlags_s *)0)->forcePhysicsUpdate ) },
//	{ "bool", "selected", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->selected), sizeof( ((idEntity::entityFlags_s *)0)->selected ) },
//	{ "bool", "neverDormant", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->neverDormant), sizeof( ((idEntity::entityFlags_s *)0)->neverDormant ) },
//	{ "bool", "isDormant", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->isDormant), sizeof( ((idEntity::entityFlags_s *)0)->isDormant ) },
//	{ "bool", "hasAwakened", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->hasAwakened), sizeof( ((idEntity::entityFlags_s *)0)->hasAwakened ) },
//	{ "bool", "invisible", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->invisible), sizeof( ((idEntity::entityFlags_s *)0)->invisible ) },
//	{ "bool", "inaudible", (ptrdiff_t)(&((idEntity::entityFlags_s *)0)->inaudible), sizeof( ((idEntity::entityFlags_s *)0)->inaudible ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntity_typeInfo[] = {
	{ "int", "entityNumber", (ptrdiff_t)(&((idEntity *)0)->entityNumber), sizeof( ((idEntity *)0)->entityNumber ) },
	{ "int", "entityDefNumber", (ptrdiff_t)(&((idEntity *)0)->entityDefNumber), sizeof( ((idEntity *)0)->entityDefNumber ) },
	{ "idLinkList < idEntity >", "spawnNode", (ptrdiff_t)(&((idEntity *)0)->spawnNode), sizeof( ((idEntity *)0)->spawnNode ) },
	{ "idLinkList < idEntity >", "activeNode", (ptrdiff_t)(&((idEntity *)0)->activeNode), sizeof( ((idEntity *)0)->activeNode ) },
	{ "idLinkList < idEntity >", "snapshotNode", (ptrdiff_t)(&((idEntity *)0)->snapshotNode), sizeof( ((idEntity *)0)->snapshotNode ) },
	{ "int", "snapshotSequence", (ptrdiff_t)(&((idEntity *)0)->snapshotSequence), sizeof( ((idEntity *)0)->snapshotSequence ) },
	{ "int", "snapshotBits", (ptrdiff_t)(&((idEntity *)0)->snapshotBits), sizeof( ((idEntity *)0)->snapshotBits ) },
	{ "idStr", "name", (ptrdiff_t)(&((idEntity *)0)->name), sizeof( ((idEntity *)0)->name ) },
	{ "idDict", "spawnArgs", (ptrdiff_t)(&((idEntity *)0)->spawnArgs), sizeof( ((idEntity *)0)->spawnArgs ) },
	{ "idScriptObject", "scriptObject", (ptrdiff_t)(&((idEntity *)0)->scriptObject), sizeof( ((idEntity *)0)->scriptObject ) },
	{ "int", "thinkFlags", (ptrdiff_t)(&((idEntity *)0)->thinkFlags), sizeof( ((idEntity *)0)->thinkFlags ) },
	{ "int", "dormantStart", (ptrdiff_t)(&((idEntity *)0)->dormantStart), sizeof( ((idEntity *)0)->dormantStart ) },
	{ "bool", "cinematic", (ptrdiff_t)(&((idEntity *)0)->cinematic), sizeof( ((idEntity *)0)->cinematic ) },
	{ "bool", "fromMapFile", (ptrdiff_t)(&((idEntity *)0)->fromMapFile), sizeof( ((idEntity *)0)->fromMapFile ) },
	{ "renderView_t *", "renderView", (ptrdiff_t)(&((idEntity *)0)->renderView), sizeof( ((idEntity *)0)->renderView ) },
	{ "idEntity *", "cameraTarget", (ptrdiff_t)(&((idEntity *)0)->cameraTarget), sizeof( ((idEntity *)0)->cameraTarget ) },
	{ "idList < idEntityPtr < idEntity > >", "targets", (ptrdiff_t)(&((idEntity *)0)->targets), sizeof( ((idEntity *)0)->targets ) },
	{ "int", "health", (ptrdiff_t)(&((idEntity *)0)->health), sizeof( ((idEntity *)0)->health ) },
	{ "int", "maxHealth", (ptrdiff_t)(&((idEntity *)0)->maxHealth), sizeof( ((idEntity *)0)->maxHealth ) },
	{ "idEntity::entityFlags_s", "fl", (ptrdiff_t)(&((idEntity *)0)->fl), sizeof( ((idEntity *)0)->fl ) },
	{ "renderEntity_t", "xrayEntity", (ptrdiff_t)(&((idEntity *)0)->xrayEntity), sizeof( ((idEntity *)0)->xrayEntity ) },
	{ "qhandle_t", "xrayEntityHandle", (ptrdiff_t)(&((idEntity *)0)->xrayEntityHandle), sizeof( ((idEntity *)0)->xrayEntityHandle ) },
	{ "const idDeclSkin *", "xraySkin", (ptrdiff_t)(&((idEntity *)0)->xraySkin), sizeof( ((idEntity *)0)->xraySkin ) },
	{ "idRenderModel *", "xrayModelHandle", (ptrdiff_t)(&((idEntity *)0)->xrayModelHandle), sizeof( ((idEntity *)0)->xrayModelHandle ) },
	{ "int", "m_preHideContents", (ptrdiff_t)(&((idEntity *)0)->m_preHideContents), sizeof( ((idEntity *)0)->m_preHideContents ) },
	{ "int", "m_preHideClipMask", (ptrdiff_t)(&((idEntity *)0)->m_preHideClipMask), sizeof( ((idEntity *)0)->m_preHideClipMask ) },
	{ "int", "m_CustomContents", (ptrdiff_t)(&((idEntity *)0)->m_CustomContents), sizeof( ((idEntity *)0)->m_CustomContents ) },
	{ "idList < idStr >", "m_UsedByName", (ptrdiff_t)(&((idEntity *)0)->m_UsedByName), sizeof( ((idEntity *)0)->m_UsedByName ) },
	{ "idList < idStr >", "m_UsedByInvName", (ptrdiff_t)(&((idEntity *)0)->m_UsedByInvName), sizeof( ((idEntity *)0)->m_UsedByInvName ) },
	{ "idList < idStr >", "m_UsedByCategory", (ptrdiff_t)(&((idEntity *)0)->m_UsedByCategory), sizeof( ((idEntity *)0)->m_UsedByCategory ) },
	{ "idList < idStr >", "m_UsedByClassname", (ptrdiff_t)(&((idEntity *)0)->m_UsedByClassname), sizeof( ((idEntity *)0)->m_UsedByClassname ) },
	{ "bool", "m_bIsObjective", (ptrdiff_t)(&((idEntity *)0)->m_bIsObjective), sizeof( ((idEntity *)0)->m_bIsObjective ) },
	{ "idList < idEntityPtr < CObjectiveLocation > >", "m_objLocations", (ptrdiff_t)(&((idEntity *)0)->m_objLocations), sizeof( ((idEntity *)0)->m_objLocations ) },
	{ "bool", "m_bFrobable", (ptrdiff_t)(&((idEntity *)0)->m_bFrobable), sizeof( ((idEntity *)0)->m_bFrobable ) },
	{ "bool", "m_bFrobSimple", (ptrdiff_t)(&((idEntity *)0)->m_bFrobSimple), sizeof( ((idEntity *)0)->m_bFrobSimple ) },
	{ "int", "m_FrobDistance", (ptrdiff_t)(&((idEntity *)0)->m_FrobDistance), sizeof( ((idEntity *)0)->m_FrobDistance ) },
	{ "float", "m_FrobBias", (ptrdiff_t)(&((idEntity *)0)->m_FrobBias), sizeof( ((idEntity *)0)->m_FrobBias ) },
	{ "bool", "m_bAttachedAlertControlsSolidity", (ptrdiff_t)(&((idEntity *)0)->m_bAttachedAlertControlsSolidity), sizeof( ((idEntity *)0)->m_bAttachedAlertControlsSolidity ) },
	{ "bool", "m_bIsClimbableRope", (ptrdiff_t)(&((idEntity *)0)->m_bIsClimbableRope), sizeof( ((idEntity *)0)->m_bIsClimbableRope ) },
	{ "idList < float >", "m_animRates", (ptrdiff_t)(&((idEntity *)0)->m_animRates), sizeof( ((idEntity *)0)->m_animRates ) },
	{ "idEntityPtr < idActor >", "m_SetInMotionByActor", (ptrdiff_t)(&((idEntity *)0)->m_SetInMotionByActor), sizeof( ((idEntity *)0)->m_SetInMotionByActor ) },
	{ "idEntityPtr < idActor >", "m_MovedByActor", (ptrdiff_t)(&((idEntity *)0)->m_MovedByActor), sizeof( ((idEntity *)0)->m_MovedByActor ) },
	{ "idEntityPtr < idActor >", "m_DroppedInLiquidByActor", (ptrdiff_t)(&((idEntity *)0)->m_DroppedInLiquidByActor), sizeof( ((idEntity *)0)->m_DroppedInLiquidByActor ) },
	{ "float", "m_LightQuotient", (ptrdiff_t)(&((idEntity *)0)->m_LightQuotient), sizeof( ((idEntity *)0)->m_LightQuotient ) },
	{ "int", "m_LightQuotientLastEvalTime", (ptrdiff_t)(&((idEntity *)0)->m_LightQuotientLastEvalTime), sizeof( ((idEntity *)0)->m_LightQuotientLastEvalTime ) },
	{ "bool", "m_droppedByAI", (ptrdiff_t)(&((idEntity *)0)->m_droppedByAI), sizeof( ((idEntity *)0)->m_droppedByAI ) },
	{ "bool", "m_isFlinder", (ptrdiff_t)(&((idEntity *)0)->m_isFlinder), sizeof( ((idEntity *)0)->m_isFlinder ) },
	{ "lod_handle", "m_LODHandle", (ptrdiff_t)(&((idEntity *)0)->m_LODHandle), sizeof( ((idEntity *)0)->m_LODHandle ) },
	{ "int", "m_DistCheckTimeStamp", (ptrdiff_t)(&((idEntity *)0)->m_DistCheckTimeStamp), sizeof( ((idEntity *)0)->m_DistCheckTimeStamp ) },
	{ "int", "m_LODLevel", (ptrdiff_t)(&((idEntity *)0)->m_LODLevel), sizeof( ((idEntity *)0)->m_LODLevel ) },
	{ "int", "m_ModelLODCur", (ptrdiff_t)(&((idEntity *)0)->m_ModelLODCur), sizeof( ((idEntity *)0)->m_ModelLODCur ) },
	{ "int", "m_SkinLODCur", (ptrdiff_t)(&((idEntity *)0)->m_SkinLODCur), sizeof( ((idEntity *)0)->m_SkinLODCur ) },
	{ "idVec3", "m_OffsetLODCur", (ptrdiff_t)(&((idEntity *)0)->m_OffsetLODCur), sizeof( ((idEntity *)0)->m_OffsetLODCur ) },
	{ "float", "m_MinLODBias", (ptrdiff_t)(&((idEntity *)0)->m_MinLODBias), sizeof( ((idEntity *)0)->m_MinLODBias ) },
	{ "float", "m_MaxLODBias", (ptrdiff_t)(&((idEntity *)0)->m_MaxLODBias), sizeof( ((idEntity *)0)->m_MaxLODBias ) },
	{ "idStr", "m_HiddenSkin", (ptrdiff_t)(&((idEntity *)0)->m_HiddenSkin), sizeof( ((idEntity *)0)->m_HiddenSkin ) },
	{ "idStr", "m_VisibleSkin", (ptrdiff_t)(&((idEntity *)0)->m_VisibleSkin), sizeof( ((idEntity *)0)->m_VisibleSkin ) },
	{ "int", "m_HideUntilTime", (ptrdiff_t)(&((idEntity *)0)->m_HideUntilTime), sizeof( ((idEntity *)0)->m_HideUntilTime ) },
	{ "idVec3", "m_VinePlantLoc", (ptrdiff_t)(&((idEntity *)0)->m_VinePlantLoc), sizeof( ((idEntity *)0)->m_VinePlantLoc ) },
	{ "idVec3", "m_VinePlantNormal", (ptrdiff_t)(&((idEntity *)0)->m_VinePlantNormal), sizeof( ((idEntity *)0)->m_VinePlantNormal ) },
	{ "idVec3", "m_LastRestPos", (ptrdiff_t)(&((idEntity *)0)->m_LastRestPos), sizeof( ((idEntity *)0)->m_LastRestPos ) },
	{ "idEntityPtr < idEntity >", "m_pushedBy", (ptrdiff_t)(&((idEntity *)0)->m_pushedBy), sizeof( ((idEntity *)0)->m_pushedBy ) },
	{ "int", "m_splashtime", (ptrdiff_t)(&((idEntity *)0)->m_splashtime), sizeof( ((idEntity *)0)->m_splashtime ) },
	{ "bool", "m_listening", (ptrdiff_t)(&((idEntity *)0)->m_listening), sizeof( ((idEntity *)0)->m_listening ) },
	{ "int", "cameraFovX", (ptrdiff_t)(&((idEntity *)0)->cameraFovX), sizeof( ((idEntity *)0)->cameraFovX ) },
	{ "int", "cameraFovY", (ptrdiff_t)(&((idEntity *)0)->cameraFovY), sizeof( ((idEntity *)0)->cameraFovY ) },
	{ "int", "team", (ptrdiff_t)(&((idEntity *)0)->team), sizeof( ((idEntity *)0)->team ) },
	{ "EntityRelationsMap", "m_EntityRelations", (ptrdiff_t)(&((idEntity *)0)->m_EntityRelations), sizeof( ((idEntity *)0)->m_EntityRelations ) },
	{ "renderEntity_t", "renderEntity", (ptrdiff_t)(&((idEntity *)0)->renderEntity), sizeof( ((idEntity *)0)->renderEntity ) },
	{ "int", "modelDefHandle", (ptrdiff_t)(&((idEntity *)0)->modelDefHandle), sizeof( ((idEntity *)0)->modelDefHandle ) },
	{ "refSound_t", "refSound", (ptrdiff_t)(&((idEntity *)0)->refSound), sizeof( ((idEntity *)0)->refSound ) },
	{ "idStr", "brokenModel", (ptrdiff_t)(&((idEntity *)0)->brokenModel), sizeof( ((idEntity *)0)->brokenModel ) },
	{ "idList < CAttachInfo >", "m_Attachments", (ptrdiff_t)(&((idEntity *)0)->m_Attachments), sizeof( ((idEntity *)0)->m_Attachments ) },
	{ "AttNameMap", "m_AttNameMap", (ptrdiff_t)(&((idEntity *)0)->m_AttNameMap), sizeof( ((idEntity *)0)->m_AttNameMap ) },
	{ "idList < SAttachPosition >", "m_AttachPositions", (ptrdiff_t)(&((idEntity *)0)->m_AttachPositions), sizeof( ((idEntity *)0)->m_AttachPositions ) },
	{ "COverlaySys", "m_overlays", (ptrdiff_t)(&((idEntity *)0)->m_overlays), sizeof( ((idEntity *)0)->m_overlays ) },
	{ "bool", "m_bFrobbed", (ptrdiff_t)(&((idEntity *)0)->m_bFrobbed), sizeof( ((idEntity *)0)->m_bFrobbed ) },
	{ "bool", "m_bFrobHighlightState", (ptrdiff_t)(&((idEntity *)0)->m_bFrobHighlightState), sizeof( ((idEntity *)0)->m_bFrobHighlightState ) },
	{ "idStr", "m_FrobActionScript", (ptrdiff_t)(&((idEntity *)0)->m_FrobActionScript), sizeof( ((idEntity *)0)->m_FrobActionScript ) },
	{ "idStrList", "m_FrobPeers", (ptrdiff_t)(&((idEntity *)0)->m_FrobPeers), sizeof( ((idEntity *)0)->m_FrobPeers ) },
	{ "idStr", "m_MasterFrob", (ptrdiff_t)(&((idEntity *)0)->m_MasterFrob), sizeof( ((idEntity *)0)->m_MasterFrob ) },
	{ "bool", "m_FrobActionLock", (ptrdiff_t)(&((idEntity *)0)->m_FrobActionLock), sizeof( ((idEntity *)0)->m_FrobActionLock ) },
	{ "CStimResponseCollection *", "m_StimResponseColl", (ptrdiff_t)(&((idEntity *)0)->m_StimResponseColl), sizeof( ((idEntity *)0)->m_StimResponseColl ) },
	{ "float", "m_AbsenceNoticeability", (ptrdiff_t)(&((idEntity *)0)->m_AbsenceNoticeability), sizeof( ((idEntity *)0)->m_AbsenceNoticeability ) },
	{ "idBounds", "m_StartBounds", (ptrdiff_t)(&((idEntity *)0)->m_StartBounds), sizeof( ((idEntity *)0)->m_StartBounds ) },
	{ "bool", "m_AbsenceStatus", (ptrdiff_t)(&((idEntity *)0)->m_AbsenceStatus), sizeof( ((idEntity *)0)->m_AbsenceStatus ) },
	{ "idEntityPtr < CAbsenceMarker >", "m_AbsenceMarker", (ptrdiff_t)(&((idEntity *)0)->m_AbsenceMarker), sizeof( ((idEntity *)0)->m_AbsenceMarker ) },
	{ "bool", "m_bIsMantleable", (ptrdiff_t)(&((idEntity *)0)->m_bIsMantleable), sizeof( ((idEntity *)0)->m_bIsMantleable ) },
	{ "bool", "m_bIsBroken", (ptrdiff_t)(&((idEntity *)0)->m_bIsBroken), sizeof( ((idEntity *)0)->m_bIsBroken ) },
	{ "bool", "m_bFlinderize", (ptrdiff_t)(&((idEntity *)0)->m_bFlinderize), sizeof( ((idEntity *)0)->m_bFlinderize ) },
	{ "renderEntity_t", "m_renderTrigger", (ptrdiff_t)(&((idEntity *)0)->m_renderTrigger), sizeof( ((idEntity *)0)->m_renderTrigger ) },
	{ "int", "m_renderTriggerHandle", (ptrdiff_t)(&((idEntity *)0)->m_renderTriggerHandle), sizeof( ((idEntity *)0)->m_renderTriggerHandle ) },
	{ "int", "m_renderWaitingThread", (ptrdiff_t)(&((idEntity *)0)->m_renderWaitingThread), sizeof( ((idEntity *)0)->m_renderWaitingThread ) },
	{ "UserManager", "m_userManager", (ptrdiff_t)(&((idEntity *)0)->m_userManager), sizeof( ((idEntity *)0)->m_userManager ) },
	{ "idPhysics_Static", "defaultPhysicsObj", (ptrdiff_t)(&((idEntity *)0)->defaultPhysicsObj), sizeof( ((idEntity *)0)->defaultPhysicsObj ) },
	{ "idPhysics *", "physics", (ptrdiff_t)(&((idEntity *)0)->physics), sizeof( ((idEntity *)0)->physics ) },
	{ "idClipModel *", "m_FrobBox", (ptrdiff_t)(&((idEntity *)0)->m_FrobBox), sizeof( ((idEntity *)0)->m_FrobBox ) },
	{ "idEntity *", "bindMaster", (ptrdiff_t)(&((idEntity *)0)->bindMaster), sizeof( ((idEntity *)0)->bindMaster ) },
	{ "jointHandle_t", "bindJoint", (ptrdiff_t)(&((idEntity *)0)->bindJoint), sizeof( ((idEntity *)0)->bindJoint ) },
	{ "int", "bindBody", (ptrdiff_t)(&((idEntity *)0)->bindBody), sizeof( ((idEntity *)0)->bindBody ) },
	{ "idEntity *", "teamMaster", (ptrdiff_t)(&((idEntity *)0)->teamMaster), sizeof( ((idEntity *)0)->teamMaster ) },
	{ "idEntity *", "teamChain", (ptrdiff_t)(&((idEntity *)0)->teamChain), sizeof( ((idEntity *)0)->teamChain ) },
	{ "int", "numPVSAreas", (ptrdiff_t)(&((idEntity *)0)->numPVSAreas), sizeof( ((idEntity *)0)->numPVSAreas ) },
	{ "int[4]", "PVSAreas", (ptrdiff_t)(&((idEntity *)0)->PVSAreas), sizeof( ((idEntity *)0)->PVSAreas ) },
	{ "signalList_t *", "signals", (ptrdiff_t)(&((idEntity *)0)->signals), sizeof( ((idEntity *)0)->signals ) },
	{ "int", "mpGUIState", (ptrdiff_t)(&((idEntity *)0)->mpGUIState), sizeof( ((idEntity *)0)->mpGUIState ) },
	{ "CInventoryPtr", "m_Inventory", (ptrdiff_t)(&((idEntity *)0)->m_Inventory), sizeof( ((idEntity *)0)->m_Inventory ) },
	{ "CInventoryCursorPtr", "m_InventoryCursor", (ptrdiff_t)(&((idEntity *)0)->m_InventoryCursor), sizeof( ((idEntity *)0)->m_InventoryCursor ) },
	{ "idSoundShader *", "previousVoiceShader", (ptrdiff_t)(&((idEntity *)0)->previousVoiceShader), sizeof( ((idEntity *)0)->previousVoiceShader ) },
	{ "int", "previousVoiceIndex", (ptrdiff_t)(&((idEntity *)0)->previousVoiceIndex), sizeof( ((idEntity *)0)->previousVoiceIndex ) },
	{ "idSoundShader *", "previousBodyShader", (ptrdiff_t)(&((idEntity *)0)->previousBodyShader), sizeof( ((idEntity *)0)->previousBodyShader ) },
	{ "int", "previousBodyIndex", (ptrdiff_t)(&((idEntity *)0)->previousBodyIndex), sizeof( ((idEntity *)0)->previousBodyIndex ) },
	{ "std :: list < SDecalInfo >", "decals_list", (ptrdiff_t)(&((idEntity *)0)->decals_list), sizeof( ((idEntity *)0)->decals_list ) },
	{ "bool", "needsDecalRestore", (ptrdiff_t)(&((idEntity *)0)->needsDecalRestore), sizeof( ((idEntity *)0)->needsDecalRestore ) },
	{ NULL, 0 }
};

static classVariableInfo_t damageEffect_t_typeInfo[] = {
	{ "jointHandle_t", "jointNum", (ptrdiff_t)(&((damageEffect_t *)0)->jointNum), sizeof( ((damageEffect_t *)0)->jointNum ) },
	{ "idVec3", "localOrigin", (ptrdiff_t)(&((damageEffect_t *)0)->localOrigin), sizeof( ((damageEffect_t *)0)->localOrigin ) },
	{ "idVec3", "localNormal", (ptrdiff_t)(&((damageEffect_t *)0)->localNormal), sizeof( ((damageEffect_t *)0)->localNormal ) },
	{ "int", "time", (ptrdiff_t)(&((damageEffect_t *)0)->time), sizeof( ((damageEffect_t *)0)->time ) },
	{ "const idDeclParticle *", "type", (ptrdiff_t)(&((damageEffect_t *)0)->type), sizeof( ((damageEffect_t *)0)->type ) },
	{ "damageEffect_s *", "next", (ptrdiff_t)(&((damageEffect_t *)0)->next), sizeof( ((damageEffect_t *)0)->next ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimatedEntity_typeInfo[] = {
	{ "idAnimator", "animator", (ptrdiff_t)(&((idAnimatedEntity *)0)->animator), sizeof( ((idAnimatedEntity *)0)->animator ) },
	{ "damageEffect_t *", "damageEffects", (ptrdiff_t)(&((idAnimatedEntity *)0)->damageEffects), sizeof( ((idAnimatedEntity *)0)->damageEffects ) },
	{ "int", "lastUpdateTime", (ptrdiff_t)(&((idAnimatedEntity *)0)->lastUpdateTime), sizeof( ((idAnimatedEntity *)0)->lastUpdateTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCursor3D_typeInfo[] = {
	{ "idForce_Drag", "drag", (ptrdiff_t)(&((idCursor3D *)0)->drag), sizeof( ((idCursor3D *)0)->drag ) },
	{ "idVec3", "draggedPosition", (ptrdiff_t)(&((idCursor3D *)0)->draggedPosition), sizeof( ((idCursor3D *)0)->draggedPosition ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDragEntity_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "dragEnt", (ptrdiff_t)(&((idDragEntity *)0)->dragEnt), sizeof( ((idDragEntity *)0)->dragEnt ) },
	{ "jointHandle_t", "joint", (ptrdiff_t)(&((idDragEntity *)0)->joint), sizeof( ((idDragEntity *)0)->joint ) },
	{ "int", "id", (ptrdiff_t)(&((idDragEntity *)0)->id), sizeof( ((idDragEntity *)0)->id ) },
	{ "idVec3", "localEntityPoint", (ptrdiff_t)(&((idDragEntity *)0)->localEntityPoint), sizeof( ((idDragEntity *)0)->localEntityPoint ) },
	{ "idVec3", "localPlayerPoint", (ptrdiff_t)(&((idDragEntity *)0)->localPlayerPoint), sizeof( ((idDragEntity *)0)->localPlayerPoint ) },
	{ "idStr", "bodyName", (ptrdiff_t)(&((idDragEntity *)0)->bodyName), sizeof( ((idDragEntity *)0)->bodyName ) },
	{ "idCursor3D *", "cursor", (ptrdiff_t)(&((idDragEntity *)0)->cursor), sizeof( ((idDragEntity *)0)->cursor ) },
	{ "idEntityPtr < idEntity >", "selected", (ptrdiff_t)(&((idDragEntity *)0)->selected), sizeof( ((idDragEntity *)0)->selected ) },
	{ NULL, 0 }
};

static classVariableInfo_t selectedTypeInfo_t_typeInfo[] = {
	{ "idTypeInfo *", "typeInfo", (ptrdiff_t)(&((selectedTypeInfo_t *)0)->typeInfo), sizeof( ((selectedTypeInfo_t *)0)->typeInfo ) },
	{ "idStr", "textKey", (ptrdiff_t)(&((selectedTypeInfo_t *)0)->textKey), sizeof( ((selectedTypeInfo_t *)0)->textKey ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEditEntities_typeInfo[] = {
	{ "int", "nextSelectTime", (ptrdiff_t)(&((idEditEntities *)0)->nextSelectTime), sizeof( ((idEditEntities *)0)->nextSelectTime ) },
	{ "idList < selectedTypeInfo_t >", "selectableEntityClasses", (ptrdiff_t)(&((idEditEntities *)0)->selectableEntityClasses), sizeof( ((idEditEntities *)0)->selectableEntityClasses ) },
	{ "idList < idEntity * >", "selectedEntities", (ptrdiff_t)(&((idEditEntities *)0)->selectedEntities), sizeof( ((idEditEntities *)0)->selectedEntities ) },
	{ NULL, 0 }
};

static classVariableInfo_t jointConversion_t_typeInfo[] = {
	{ "int", "bodyId", (ptrdiff_t)(&((jointConversion_t *)0)->bodyId), sizeof( ((jointConversion_t *)0)->bodyId ) },
	{ "idStr", "bodyName", (ptrdiff_t)(&((jointConversion_t *)0)->bodyName), sizeof( ((jointConversion_t *)0)->bodyName ) },
	{ "jointHandle_t", "jointHandle", (ptrdiff_t)(&((jointConversion_t *)0)->jointHandle), sizeof( ((jointConversion_t *)0)->jointHandle ) },
	{ "AFJointModType_t", "jointMod", (ptrdiff_t)(&((jointConversion_t *)0)->jointMod), sizeof( ((jointConversion_t *)0)->jointMod ) },
	{ "idVec3", "jointBodyOrigin", (ptrdiff_t)(&((jointConversion_t *)0)->jointBodyOrigin), sizeof( ((jointConversion_t *)0)->jointBodyOrigin ) },
	{ "idMat3", "jointBodyAxis", (ptrdiff_t)(&((jointConversion_t *)0)->jointBodyAxis), sizeof( ((jointConversion_t *)0)->jointBodyAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t afTouch_t_typeInfo[] = {
	{ "idEntity *", "touchedEnt", (ptrdiff_t)(&((afTouch_t *)0)->touchedEnt), sizeof( ((afTouch_t *)0)->touchedEnt ) },
	{ "idClipModel *", "touchedClipModel", (ptrdiff_t)(&((afTouch_t *)0)->touchedClipModel), sizeof( ((afTouch_t *)0)->touchedClipModel ) },
	{ "idAFBody *", "touchedByBody", (ptrdiff_t)(&((afTouch_t *)0)->touchedByBody), sizeof( ((afTouch_t *)0)->touchedByBody ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAF_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((idAF *)0)->name), sizeof( ((idAF *)0)->name ) },
	{ "idPhysics_AF", "physicsObj", (ptrdiff_t)(&((idAF *)0)->physicsObj), sizeof( ((idAF *)0)->physicsObj ) },
	{ "idEntity *", "self", (ptrdiff_t)(&((idAF *)0)->self), sizeof( ((idAF *)0)->self ) },
	{ "idAnimator *", "animator", (ptrdiff_t)(&((idAF *)0)->animator), sizeof( ((idAF *)0)->animator ) },
	{ "int", "modifiedAnim", (ptrdiff_t)(&((idAF *)0)->modifiedAnim), sizeof( ((idAF *)0)->modifiedAnim ) },
	{ "idVec3", "baseOrigin", (ptrdiff_t)(&((idAF *)0)->baseOrigin), sizeof( ((idAF *)0)->baseOrigin ) },
	{ "idMat3", "baseAxis", (ptrdiff_t)(&((idAF *)0)->baseAxis), sizeof( ((idAF *)0)->baseAxis ) },
	{ "idList < jointConversion_t >", "jointMods", (ptrdiff_t)(&((idAF *)0)->jointMods), sizeof( ((idAF *)0)->jointMods ) },
	{ "idList < int >", "jointBody", (ptrdiff_t)(&((idAF *)0)->jointBody), sizeof( ((idAF *)0)->jointBody ) },
	{ "int", "poseTime", (ptrdiff_t)(&((idAF *)0)->poseTime), sizeof( ((idAF *)0)->poseTime ) },
	{ "int", "restStartTime", (ptrdiff_t)(&((idAF *)0)->restStartTime), sizeof( ((idAF *)0)->restStartTime ) },
	{ "bool", "isLoaded", (ptrdiff_t)(&((idAF *)0)->isLoaded), sizeof( ((idAF *)0)->isLoaded ) },
	{ "bool", "isActive", (ptrdiff_t)(&((idAF *)0)->isActive), sizeof( ((idAF *)0)->isActive ) },
	{ "bool", "hasBindConstraints", (ptrdiff_t)(&((idAF *)0)->hasBindConstraints), sizeof( ((idAF *)0)->hasBindConstraints ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_typeInfo[] = {
	{ "bool", "initialized", (ptrdiff_t)(&((idIK *)0)->initialized), sizeof( ((idIK *)0)->initialized ) },
	{ "bool", "ik_activate", (ptrdiff_t)(&((idIK *)0)->ik_activate), sizeof( ((idIK *)0)->ik_activate ) },
	{ "idEntity *", "self", (ptrdiff_t)(&((idIK *)0)->self), sizeof( ((idIK *)0)->self ) },
	{ "idAnimator *", "animator", (ptrdiff_t)(&((idIK *)0)->animator), sizeof( ((idIK *)0)->animator ) },
	{ "int", "modifiedAnim", (ptrdiff_t)(&((idIK *)0)->modifiedAnim), sizeof( ((idIK *)0)->modifiedAnim ) },
	{ "idVec3", "modelOffset", (ptrdiff_t)(&((idIK *)0)->modelOffset), sizeof( ((idIK *)0)->modelOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_Walk_typeInfo[] = {
	{ "idClipModel *", "footModel", (ptrdiff_t)(&((idIK_Walk *)0)->footModel), sizeof( ((idIK_Walk *)0)->footModel ) },
	{ "int", "numLegs", (ptrdiff_t)(&((idIK_Walk *)0)->numLegs), sizeof( ((idIK_Walk *)0)->numLegs ) },
	{ "int", "enabledLegs", (ptrdiff_t)(&((idIK_Walk *)0)->enabledLegs), sizeof( ((idIK_Walk *)0)->enabledLegs ) },
	{ "jointHandle_t[8]", "footJoints", (ptrdiff_t)(&((idIK_Walk *)0)->footJoints), sizeof( ((idIK_Walk *)0)->footJoints ) },
	{ "jointHandle_t[8]", "ankleJoints", (ptrdiff_t)(&((idIK_Walk *)0)->ankleJoints), sizeof( ((idIK_Walk *)0)->ankleJoints ) },
	{ "jointHandle_t[8]", "kneeJoints", (ptrdiff_t)(&((idIK_Walk *)0)->kneeJoints), sizeof( ((idIK_Walk *)0)->kneeJoints ) },
	{ "jointHandle_t[8]", "hipJoints", (ptrdiff_t)(&((idIK_Walk *)0)->hipJoints), sizeof( ((idIK_Walk *)0)->hipJoints ) },
	{ "jointHandle_t[8]", "dirJoints", (ptrdiff_t)(&((idIK_Walk *)0)->dirJoints), sizeof( ((idIK_Walk *)0)->dirJoints ) },
	{ "jointHandle_t", "waistJoint", (ptrdiff_t)(&((idIK_Walk *)0)->waistJoint), sizeof( ((idIK_Walk *)0)->waistJoint ) },
	{ "idVec3[8]", "hipForward", (ptrdiff_t)(&((idIK_Walk *)0)->hipForward), sizeof( ((idIK_Walk *)0)->hipForward ) },
	{ "idVec3[8]", "kneeForward", (ptrdiff_t)(&((idIK_Walk *)0)->kneeForward), sizeof( ((idIK_Walk *)0)->kneeForward ) },
	{ "float[8]", "upperLegLength", (ptrdiff_t)(&((idIK_Walk *)0)->upperLegLength), sizeof( ((idIK_Walk *)0)->upperLegLength ) },
	{ "float[8]", "lowerLegLength", (ptrdiff_t)(&((idIK_Walk *)0)->lowerLegLength), sizeof( ((idIK_Walk *)0)->lowerLegLength ) },
	{ "idMat3[8]", "upperLegToHipJoint", (ptrdiff_t)(&((idIK_Walk *)0)->upperLegToHipJoint), sizeof( ((idIK_Walk *)0)->upperLegToHipJoint ) },
	{ "idMat3[8]", "lowerLegToKneeJoint", (ptrdiff_t)(&((idIK_Walk *)0)->lowerLegToKneeJoint), sizeof( ((idIK_Walk *)0)->lowerLegToKneeJoint ) },
	{ "float", "smoothing", (ptrdiff_t)(&((idIK_Walk *)0)->smoothing), sizeof( ((idIK_Walk *)0)->smoothing ) },
	{ "float", "waistSmoothing", (ptrdiff_t)(&((idIK_Walk *)0)->waistSmoothing), sizeof( ((idIK_Walk *)0)->waistSmoothing ) },
	{ "float", "footShift", (ptrdiff_t)(&((idIK_Walk *)0)->footShift), sizeof( ((idIK_Walk *)0)->footShift ) },
	{ "float", "waistShift", (ptrdiff_t)(&((idIK_Walk *)0)->waistShift), sizeof( ((idIK_Walk *)0)->waistShift ) },
	{ "float", "minWaistFloorDist", (ptrdiff_t)(&((idIK_Walk *)0)->minWaistFloorDist), sizeof( ((idIK_Walk *)0)->minWaistFloorDist ) },
	{ "float", "minWaistAnkleDist", (ptrdiff_t)(&((idIK_Walk *)0)->minWaistAnkleDist), sizeof( ((idIK_Walk *)0)->minWaistAnkleDist ) },
	{ "float", "footUpTrace", (ptrdiff_t)(&((idIK_Walk *)0)->footUpTrace), sizeof( ((idIK_Walk *)0)->footUpTrace ) },
	{ "float", "footDownTrace", (ptrdiff_t)(&((idIK_Walk *)0)->footDownTrace), sizeof( ((idIK_Walk *)0)->footDownTrace ) },
	{ "bool", "tiltWaist", (ptrdiff_t)(&((idIK_Walk *)0)->tiltWaist), sizeof( ((idIK_Walk *)0)->tiltWaist ) },
	{ "bool", "usePivot", (ptrdiff_t)(&((idIK_Walk *)0)->usePivot), sizeof( ((idIK_Walk *)0)->usePivot ) },
	{ "int", "pivotFoot", (ptrdiff_t)(&((idIK_Walk *)0)->pivotFoot), sizeof( ((idIK_Walk *)0)->pivotFoot ) },
	{ "float", "pivotYaw", (ptrdiff_t)(&((idIK_Walk *)0)->pivotYaw), sizeof( ((idIK_Walk *)0)->pivotYaw ) },
	{ "idVec3", "pivotPos", (ptrdiff_t)(&((idIK_Walk *)0)->pivotPos), sizeof( ((idIK_Walk *)0)->pivotPos ) },
	{ "bool", "oldHeightsValid", (ptrdiff_t)(&((idIK_Walk *)0)->oldHeightsValid), sizeof( ((idIK_Walk *)0)->oldHeightsValid ) },
	{ "float", "oldWaistHeight", (ptrdiff_t)(&((idIK_Walk *)0)->oldWaistHeight), sizeof( ((idIK_Walk *)0)->oldWaistHeight ) },
	{ "float[8]", "oldAnkleHeights", (ptrdiff_t)(&((idIK_Walk *)0)->oldAnkleHeights), sizeof( ((idIK_Walk *)0)->oldAnkleHeights ) },
	{ "idVec3", "waistOffset", (ptrdiff_t)(&((idIK_Walk *)0)->waistOffset), sizeof( ((idIK_Walk *)0)->waistOffset ) },
	{ NULL, 0 }
};

static classVariableInfo_t idIK_Reach_typeInfo[] = {
	{ "int", "numArms", (ptrdiff_t)(&((idIK_Reach *)0)->numArms), sizeof( ((idIK_Reach *)0)->numArms ) },
	{ "int", "enabledArms", (ptrdiff_t)(&((idIK_Reach *)0)->enabledArms), sizeof( ((idIK_Reach *)0)->enabledArms ) },
	{ "jointHandle_t[2]", "handJoints", (ptrdiff_t)(&((idIK_Reach *)0)->handJoints), sizeof( ((idIK_Reach *)0)->handJoints ) },
	{ "jointHandle_t[2]", "elbowJoints", (ptrdiff_t)(&((idIK_Reach *)0)->elbowJoints), sizeof( ((idIK_Reach *)0)->elbowJoints ) },
	{ "jointHandle_t[2]", "shoulderJoints", (ptrdiff_t)(&((idIK_Reach *)0)->shoulderJoints), sizeof( ((idIK_Reach *)0)->shoulderJoints ) },
	{ "jointHandle_t[2]", "dirJoints", (ptrdiff_t)(&((idIK_Reach *)0)->dirJoints), sizeof( ((idIK_Reach *)0)->dirJoints ) },
	{ "idVec3[2]", "shoulderForward", (ptrdiff_t)(&((idIK_Reach *)0)->shoulderForward), sizeof( ((idIK_Reach *)0)->shoulderForward ) },
	{ "idVec3[2]", "elbowForward", (ptrdiff_t)(&((idIK_Reach *)0)->elbowForward), sizeof( ((idIK_Reach *)0)->elbowForward ) },
	{ "float[2]", "upperArmLength", (ptrdiff_t)(&((idIK_Reach *)0)->upperArmLength), sizeof( ((idIK_Reach *)0)->upperArmLength ) },
	{ "float[2]", "lowerArmLength", (ptrdiff_t)(&((idIK_Reach *)0)->lowerArmLength), sizeof( ((idIK_Reach *)0)->lowerArmLength ) },
	{ "idMat3[2]", "upperArmToShoulderJoint", (ptrdiff_t)(&((idIK_Reach *)0)->upperArmToShoulderJoint), sizeof( ((idIK_Reach *)0)->upperArmToShoulderJoint ) },
	{ "idMat3[2]", "lowerArmToElbowJoint", (ptrdiff_t)(&((idIK_Reach *)0)->lowerArmToElbowJoint), sizeof( ((idIK_Reach *)0)->lowerArmToElbowJoint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMultiModelAF_typeInfo[] = {
	{ "idPhysics_AF", "physicsObj", (ptrdiff_t)(&((idMultiModelAF *)0)->physicsObj), sizeof( ((idMultiModelAF *)0)->physicsObj ) },
	{ "idList < idRenderModel * >", "modelHandles", (ptrdiff_t)(&((idMultiModelAF *)0)->modelHandles), sizeof( ((idMultiModelAF *)0)->modelHandles ) },
	{ "idList < int >", "modelDefHandles", (ptrdiff_t)(&((idMultiModelAF *)0)->modelDefHandles), sizeof( ((idMultiModelAF *)0)->modelDefHandles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idChain_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idAFAttachment_typeInfo[] = {
	{ "idEntity *", "body", (ptrdiff_t)(&((idAFAttachment *)0)->body), sizeof( ((idAFAttachment *)0)->body ) },
	{ "idClipModel *", "combatModel", (ptrdiff_t)(&((idAFAttachment *)0)->combatModel), sizeof( ((idAFAttachment *)0)->combatModel ) },
	{ "int", "idleAnim", (ptrdiff_t)(&((idAFAttachment *)0)->idleAnim), sizeof( ((idAFAttachment *)0)->idleAnim ) },
	{ "jointHandle_t", "attachJoint", (ptrdiff_t)(&((idAFAttachment *)0)->attachJoint), sizeof( ((idAFAttachment *)0)->attachJoint ) },
	{ NULL, 0 }
};

static classVariableInfo_t SAddedEnt_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "ent", (ptrdiff_t)(&((SAddedEnt *)0)->ent), sizeof( ((SAddedEnt *)0)->ent ) },
	{ "idStr", "bodyName", (ptrdiff_t)(&((SAddedEnt *)0)->bodyName), sizeof( ((SAddedEnt *)0)->bodyName ) },
	{ "idStr", "AddedToBody", (ptrdiff_t)(&((SAddedEnt *)0)->AddedToBody), sizeof( ((SAddedEnt *)0)->AddedToBody ) },
	{ "int", "entContents", (ptrdiff_t)(&((SAddedEnt *)0)->entContents), sizeof( ((SAddedEnt *)0)->entContents ) },
	{ "int", "entClipMask", (ptrdiff_t)(&((SAddedEnt *)0)->entClipMask), sizeof( ((SAddedEnt *)0)->entClipMask ) },
	{ "int", "bodyContents", (ptrdiff_t)(&((SAddedEnt *)0)->bodyContents), sizeof( ((SAddedEnt *)0)->bodyContents ) },
	{ "int", "bodyClipMask", (ptrdiff_t)(&((SAddedEnt *)0)->bodyClipMask), sizeof( ((SAddedEnt *)0)->bodyClipMask ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_Base_typeInfo[] = {
	{ "bool", "m_bGroundWhenDragged", (ptrdiff_t)(&((idAFEntity_Base *)0)->m_bGroundWhenDragged), sizeof( ((idAFEntity_Base *)0)->m_bGroundWhenDragged ) },
	{ "idList < int >", "m_GroundBodyList", (ptrdiff_t)(&((idAFEntity_Base *)0)->m_GroundBodyList), sizeof( ((idAFEntity_Base *)0)->m_GroundBodyList ) },
	{ "int", "m_GroundBodyMinNum", (ptrdiff_t)(&((idAFEntity_Base *)0)->m_GroundBodyMinNum), sizeof( ((idAFEntity_Base *)0)->m_GroundBodyMinNum ) },
	{ "bool", "m_bDragAFDamping", (ptrdiff_t)(&((idAFEntity_Base *)0)->m_bDragAFDamping), sizeof( ((idAFEntity_Base *)0)->m_bDragAFDamping ) },
	{ "int", "nextSoundTime", (ptrdiff_t)(&((idAFEntity_Base *)0)->nextSoundTime), sizeof( ((idAFEntity_Base *)0)->nextSoundTime ) },
	{ "idAF", "af", (ptrdiff_t)(&((idAFEntity_Base *)0)->af), sizeof( ((idAFEntity_Base *)0)->af ) },
	{ "idClipModel *", "combatModel", (ptrdiff_t)(&((idAFEntity_Base *)0)->combatModel), sizeof( ((idAFEntity_Base *)0)->combatModel ) },
	{ "int", "combatModelContents", (ptrdiff_t)(&((idAFEntity_Base *)0)->combatModelContents), sizeof( ((idAFEntity_Base *)0)->combatModelContents ) },
	{ "idVec3", "spawnOrigin", (ptrdiff_t)(&((idAFEntity_Base *)0)->spawnOrigin), sizeof( ((idAFEntity_Base *)0)->spawnOrigin ) },
	{ "idMat3", "spawnAxis", (ptrdiff_t)(&((idAFEntity_Base *)0)->spawnAxis), sizeof( ((idAFEntity_Base *)0)->spawnAxis ) },
	{ "idList < SAddedEnt >", "m_AddedEnts", (ptrdiff_t)(&((idAFEntity_Base *)0)->m_AddedEnts), sizeof( ((idAFEntity_Base *)0)->m_AddedEnts ) },
	{ "bool", "m_bCollideWithTeam", (ptrdiff_t)(&((idAFEntity_Base *)0)->m_bCollideWithTeam), sizeof( ((idAFEntity_Base *)0)->m_bCollideWithTeam ) },
	{ "bool", "m_bAFPushMoveables", (ptrdiff_t)(&((idAFEntity_Base *)0)->m_bAFPushMoveables), sizeof( ((idAFEntity_Base *)0)->m_bAFPushMoveables ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_Gibbable_typeInfo[] = {
	{ "idRenderModel *", "skeletonModel", (ptrdiff_t)(&((idAFEntity_Gibbable *)0)->skeletonModel), sizeof( ((idAFEntity_Gibbable *)0)->skeletonModel ) },
	{ "int", "skeletonModelDefHandle", (ptrdiff_t)(&((idAFEntity_Gibbable *)0)->skeletonModelDefHandle), sizeof( ((idAFEntity_Gibbable *)0)->skeletonModelDefHandle ) },
	{ "bool", "gibbed", (ptrdiff_t)(&((idAFEntity_Gibbable *)0)->gibbed), sizeof( ((idAFEntity_Gibbable *)0)->gibbed ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_Generic_typeInfo[] = {
	{ "bool", "keepRunningPhysics", (ptrdiff_t)(&((idAFEntity_Generic *)0)->keepRunningPhysics), sizeof( ((idAFEntity_Generic *)0)->keepRunningPhysics ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_WithAttachedHead_typeInfo[] = {
	{ "idEntityPtr < idAFAttachment >", "head", (ptrdiff_t)(&((idAFEntity_WithAttachedHead *)0)->head), sizeof( ((idAFEntity_WithAttachedHead *)0)->head ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_Vehicle_typeInfo[] = {
	{ "idPlayer *", "player", (ptrdiff_t)(&((idAFEntity_Vehicle *)0)->player), sizeof( ((idAFEntity_Vehicle *)0)->player ) },
	{ "jointHandle_t", "eyesJoint", (ptrdiff_t)(&((idAFEntity_Vehicle *)0)->eyesJoint), sizeof( ((idAFEntity_Vehicle *)0)->eyesJoint ) },
	{ "jointHandle_t", "steeringWheelJoint", (ptrdiff_t)(&((idAFEntity_Vehicle *)0)->steeringWheelJoint), sizeof( ((idAFEntity_Vehicle *)0)->steeringWheelJoint ) },
	{ "float", "wheelRadius", (ptrdiff_t)(&((idAFEntity_Vehicle *)0)->wheelRadius), sizeof( ((idAFEntity_Vehicle *)0)->wheelRadius ) },
	{ "float", "steerAngle", (ptrdiff_t)(&((idAFEntity_Vehicle *)0)->steerAngle), sizeof( ((idAFEntity_Vehicle *)0)->steerAngle ) },
	{ "float", "steerSpeed", (ptrdiff_t)(&((idAFEntity_Vehicle *)0)->steerSpeed), sizeof( ((idAFEntity_Vehicle *)0)->steerSpeed ) },
	{ "const idDeclParticle *", "dustSmoke", (ptrdiff_t)(&((idAFEntity_Vehicle *)0)->dustSmoke), sizeof( ((idAFEntity_Vehicle *)0)->dustSmoke ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_VehicleSimple_typeInfo[] = {
	{ "idClipModel *", "wheelModel", (ptrdiff_t)(&((idAFEntity_VehicleSimple *)0)->wheelModel), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelModel ) },
	{ "idAFConstraint_Suspension *[4]", "suspension", (ptrdiff_t)(&((idAFEntity_VehicleSimple *)0)->suspension), sizeof( ((idAFEntity_VehicleSimple *)0)->suspension ) },
	{ "jointHandle_t[4]", "wheelJoints", (ptrdiff_t)(&((idAFEntity_VehicleSimple *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelJoints ) },
	{ "float[4]", "wheelAngles", (ptrdiff_t)(&((idAFEntity_VehicleSimple *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleSimple *)0)->wheelAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_VehicleFourWheels_typeInfo[] = {
	{ "idAFBody *[4]", "wheels", (ptrdiff_t)(&((idAFEntity_VehicleFourWheels *)0)->wheels), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheels ) },
	{ "idAFConstraint_Hinge *[2]", "steering", (ptrdiff_t)(&((idAFEntity_VehicleFourWheels *)0)->steering), sizeof( ((idAFEntity_VehicleFourWheels *)0)->steering ) },
	{ "jointHandle_t[4]", "wheelJoints", (ptrdiff_t)(&((idAFEntity_VehicleFourWheels *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheelJoints ) },
	{ "float[4]", "wheelAngles", (ptrdiff_t)(&((idAFEntity_VehicleFourWheels *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleFourWheels *)0)->wheelAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_VehicleSixWheels_typeInfo[] = {
	{ "idAFBody *[6]", "wheels", (ptrdiff_t)(&((idAFEntity_VehicleSixWheels *)0)->wheels), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheels ) },
	{ "idAFConstraint_Hinge *[4]", "steering", (ptrdiff_t)(&((idAFEntity_VehicleSixWheels *)0)->steering), sizeof( ((idAFEntity_VehicleSixWheels *)0)->steering ) },
	{ "jointHandle_t[6]", "wheelJoints", (ptrdiff_t)(&((idAFEntity_VehicleSixWheels *)0)->wheelJoints), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheelJoints ) },
	{ "float[6]", "wheelAngles", (ptrdiff_t)(&((idAFEntity_VehicleSixWheels *)0)->wheelAngles), sizeof( ((idAFEntity_VehicleSixWheels *)0)->wheelAngles ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAFEntity_SteamPipe_typeInfo[] = {
	{ "int", "steamBody", (ptrdiff_t)(&((idAFEntity_SteamPipe *)0)->steamBody), sizeof( ((idAFEntity_SteamPipe *)0)->steamBody ) },
	{ "float", "steamForce", (ptrdiff_t)(&((idAFEntity_SteamPipe *)0)->steamForce), sizeof( ((idAFEntity_SteamPipe *)0)->steamForce ) },
	{ "float", "steamUpForce", (ptrdiff_t)(&((idAFEntity_SteamPipe *)0)->steamUpForce), sizeof( ((idAFEntity_SteamPipe *)0)->steamUpForce ) },
	{ "idForce_Constant", "force", (ptrdiff_t)(&((idAFEntity_SteamPipe *)0)->force), sizeof( ((idAFEntity_SteamPipe *)0)->force ) },
	{ "renderEntity_t", "steamRenderEntity", (ptrdiff_t)(&((idAFEntity_SteamPipe *)0)->steamRenderEntity), sizeof( ((idAFEntity_SteamPipe *)0)->steamRenderEntity ) },
	{ "qhandle_t", "steamModelDefHandle", (ptrdiff_t)(&((idAFEntity_SteamPipe *)0)->steamModelDefHandle), sizeof( ((idAFEntity_SteamPipe *)0)->steamModelDefHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSpawnableEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerStart_typeInfo[] = {
	{ "int", "teleportStage", (ptrdiff_t)(&((idPlayerStart *)0)->teleportStage), sizeof( ((idPlayerStart *)0)->teleportStage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idActivator_typeInfo[] = {
	{ "bool", "stay_on", (ptrdiff_t)(&((idActivator *)0)->stay_on), sizeof( ((idActivator *)0)->stay_on ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPathCorner_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t tdmPathFlee_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t tdmPathGuard_typeInfo[] = {
	{ "int", "m_priority", (ptrdiff_t)(&((tdmPathGuard *)0)->m_priority), sizeof( ((tdmPathGuard *)0)->m_priority ) },
	{ "float", "m_angle", (ptrdiff_t)(&((tdmPathGuard *)0)->m_angle), sizeof( ((tdmPathGuard *)0)->m_angle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDamagable_typeInfo[] = {
	{ "int", "count", (ptrdiff_t)(&((idDamagable *)0)->count), sizeof( ((idDamagable *)0)->count ) },
	{ "int", "nextTriggerTime", (ptrdiff_t)(&((idDamagable *)0)->nextTriggerTime), sizeof( ((idDamagable *)0)->nextTriggerTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idExplodable_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSpring_typeInfo[] = {
	{ "idEntity *", "ent1", (ptrdiff_t)(&((idSpring *)0)->ent1), sizeof( ((idSpring *)0)->ent1 ) },
	{ "idEntity *", "ent2", (ptrdiff_t)(&((idSpring *)0)->ent2), sizeof( ((idSpring *)0)->ent2 ) },
	{ "int", "id1", (ptrdiff_t)(&((idSpring *)0)->id1), sizeof( ((idSpring *)0)->id1 ) },
	{ "int", "id2", (ptrdiff_t)(&((idSpring *)0)->id2), sizeof( ((idSpring *)0)->id2 ) },
	{ "idVec3", "p1", (ptrdiff_t)(&((idSpring *)0)->p1), sizeof( ((idSpring *)0)->p1 ) },
	{ "idVec3", "p2", (ptrdiff_t)(&((idSpring *)0)->p2), sizeof( ((idSpring *)0)->p2 ) },
	{ "idForce_Spring", "spring", (ptrdiff_t)(&((idSpring *)0)->spring), sizeof( ((idSpring *)0)->spring ) },
	{ NULL, 0 }
};

static classVariableInfo_t idForceField_typeInfo[] = {
	{ "idForce_Field", "forceField", (ptrdiff_t)(&((idForceField *)0)->forceField), sizeof( ((idForceField *)0)->forceField ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimated_typeInfo[] = {
	{ "int", "num_anims", (ptrdiff_t)(&((idAnimated *)0)->num_anims), sizeof( ((idAnimated *)0)->num_anims ) },
	{ "int", "current_anim_index", (ptrdiff_t)(&((idAnimated *)0)->current_anim_index), sizeof( ((idAnimated *)0)->current_anim_index ) },
	{ "int", "anim", (ptrdiff_t)(&((idAnimated *)0)->anim), sizeof( ((idAnimated *)0)->anim ) },
	{ "int", "blendFrames", (ptrdiff_t)(&((idAnimated *)0)->blendFrames), sizeof( ((idAnimated *)0)->blendFrames ) },
	{ "jointHandle_t", "soundJoint", (ptrdiff_t)(&((idAnimated *)0)->soundJoint), sizeof( ((idAnimated *)0)->soundJoint ) },
	{ "idEntityPtr < idEntity >", "activator", (ptrdiff_t)(&((idAnimated *)0)->activator), sizeof( ((idAnimated *)0)->activator ) },
	{ "bool", "activated", (ptrdiff_t)(&((idAnimated *)0)->activated), sizeof( ((idAnimated *)0)->activated ) },
	{ NULL, 0 }
};

static classVariableInfo_t idStaticEntity_typeInfo[] = {
	{ "int", "spawnTime", (ptrdiff_t)(&((idStaticEntity *)0)->spawnTime), sizeof( ((idStaticEntity *)0)->spawnTime ) },
	{ "bool", "active", (ptrdiff_t)(&((idStaticEntity *)0)->active), sizeof( ((idStaticEntity *)0)->active ) },
	{ "idVec4", "fadeFrom", (ptrdiff_t)(&((idStaticEntity *)0)->fadeFrom), sizeof( ((idStaticEntity *)0)->fadeFrom ) },
	{ "idVec4", "fadeTo", (ptrdiff_t)(&((idStaticEntity *)0)->fadeTo), sizeof( ((idStaticEntity *)0)->fadeTo ) },
	{ "int", "fadeStart", (ptrdiff_t)(&((idStaticEntity *)0)->fadeStart), sizeof( ((idStaticEntity *)0)->fadeStart ) },
	{ "int", "fadeEnd", (ptrdiff_t)(&((idStaticEntity *)0)->fadeEnd), sizeof( ((idStaticEntity *)0)->fadeEnd ) },
	{ "bool", "runGui", (ptrdiff_t)(&((idStaticEntity *)0)->runGui), sizeof( ((idStaticEntity *)0)->runGui ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncSmoke_typeInfo[] = {
	{ "int", "smokeTime", (ptrdiff_t)(&((idFuncSmoke *)0)->smokeTime), sizeof( ((idFuncSmoke *)0)->smokeTime ) },
	{ "const idDeclParticle *", "smoke", (ptrdiff_t)(&((idFuncSmoke *)0)->smoke), sizeof( ((idFuncSmoke *)0)->smoke ) },
	{ "bool", "restart", (ptrdiff_t)(&((idFuncSmoke *)0)->restart), sizeof( ((idFuncSmoke *)0)->restart ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTextEntity_typeInfo[] = {
	{ "idStr", "text", (ptrdiff_t)(&((idTextEntity *)0)->text), sizeof( ((idTextEntity *)0)->text ) },
	{ "bool", "playerOriented", (ptrdiff_t)(&((idTextEntity *)0)->playerOriented), sizeof( ((idTextEntity *)0)->playerOriented ) },
	{ "bool", "force", (ptrdiff_t)(&((idTextEntity *)0)->force), sizeof( ((idTextEntity *)0)->force ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLocationEntity_typeInfo[] = {
	{ "float", "m_SndLossMult", (ptrdiff_t)(&((idLocationEntity *)0)->m_SndLossMult), sizeof( ((idLocationEntity *)0)->m_SndLossMult ) },
	{ "float", "m_SndVolMod", (ptrdiff_t)(&((idLocationEntity *)0)->m_SndVolMod), sizeof( ((idLocationEntity *)0)->m_SndVolMod ) },
	{ "idStr", "m_ObjectiveGroup", (ptrdiff_t)(&((idLocationEntity *)0)->m_ObjectiveGroup), sizeof( ((idLocationEntity *)0)->m_ObjectiveGroup ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPortalEntity_typeInfo[] = {
	{ "float", "m_SoundLoss", (ptrdiff_t)(&((idPortalEntity *)0)->m_SoundLoss), sizeof( ((idPortalEntity *)0)->m_SoundLoss ) },
	{ "float", "m_LightLoss", (ptrdiff_t)(&((idPortalEntity *)0)->m_LightLoss), sizeof( ((idPortalEntity *)0)->m_LightLoss ) },
	{ "qhandle_t", "m_Portal", (ptrdiff_t)(&((idPortalEntity *)0)->m_Portal), sizeof( ((idPortalEntity *)0)->m_Portal ) },
	{ "idEntity *", "m_Entity", (ptrdiff_t)(&((idPortalEntity *)0)->m_Entity), sizeof( ((idPortalEntity *)0)->m_Entity ) },
	{ "bool", "m_EntityLocationDone", (ptrdiff_t)(&((idPortalEntity *)0)->m_EntityLocationDone), sizeof( ((idPortalEntity *)0)->m_EntityLocationDone ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLocationSeparatorEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idPortalSettingsEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idVacuumSeparatorEntity_typeInfo[] = {
	{ "qhandle_t", "portal", (ptrdiff_t)(&((idVacuumSeparatorEntity *)0)->portal), sizeof( ((idVacuumSeparatorEntity *)0)->portal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idVacuumEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idBeam_typeInfo[] = {
	{ "idEntityPtr < idBeam >", "target", (ptrdiff_t)(&((idBeam *)0)->target), sizeof( ((idBeam *)0)->target ) },
	{ "idEntityPtr < idBeam >", "master", (ptrdiff_t)(&((idBeam *)0)->master), sizeof( ((idBeam *)0)->master ) },
	{ NULL, 0 }
};

static classVariableInfo_t idShaking_typeInfo[] = {
	{ "idPhysics_Parametric", "physicsObj", (ptrdiff_t)(&((idShaking *)0)->physicsObj), sizeof( ((idShaking *)0)->physicsObj ) },
	{ "bool", "active", (ptrdiff_t)(&((idShaking *)0)->active), sizeof( ((idShaking *)0)->active ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEarthQuake_typeInfo[] = {
	{ "int", "nextTriggerTime", (ptrdiff_t)(&((idEarthQuake *)0)->nextTriggerTime), sizeof( ((idEarthQuake *)0)->nextTriggerTime ) },
	{ "int", "shakeStopTime", (ptrdiff_t)(&((idEarthQuake *)0)->shakeStopTime), sizeof( ((idEarthQuake *)0)->shakeStopTime ) },
	{ "float", "wait", (ptrdiff_t)(&((idEarthQuake *)0)->wait), sizeof( ((idEarthQuake *)0)->wait ) },
	{ "float", "random", (ptrdiff_t)(&((idEarthQuake *)0)->random), sizeof( ((idEarthQuake *)0)->random ) },
	{ "bool", "triggered", (ptrdiff_t)(&((idEarthQuake *)0)->triggered), sizeof( ((idEarthQuake *)0)->triggered ) },
	{ "bool", "playerOriented", (ptrdiff_t)(&((idEarthQuake *)0)->playerOriented), sizeof( ((idEarthQuake *)0)->playerOriented ) },
	{ "bool", "disabled", (ptrdiff_t)(&((idEarthQuake *)0)->disabled), sizeof( ((idEarthQuake *)0)->disabled ) },
	{ "float", "shakeTime", (ptrdiff_t)(&((idEarthQuake *)0)->shakeTime), sizeof( ((idEarthQuake *)0)->shakeTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncPortal_typeInfo[] = {
	{ "qhandle_t", "portal", (ptrdiff_t)(&((idFuncPortal *)0)->portal), sizeof( ((idFuncPortal *)0)->portal ) },
	{ "bool", "state", (ptrdiff_t)(&((idFuncPortal *)0)->state), sizeof( ((idFuncPortal *)0)->state ) },
	{ "bool", "m_bDistDependent", (ptrdiff_t)(&((idFuncPortal *)0)->m_bDistDependent), sizeof( ((idFuncPortal *)0)->m_bDistDependent ) },
	{ "int", "m_TimeStamp", (ptrdiff_t)(&((idFuncPortal *)0)->m_TimeStamp), sizeof( ((idFuncPortal *)0)->m_TimeStamp ) },
	{ "int", "m_Interval", (ptrdiff_t)(&((idFuncPortal *)0)->m_Interval), sizeof( ((idFuncPortal *)0)->m_Interval ) },
	{ "float", "m_Distance", (ptrdiff_t)(&((idFuncPortal *)0)->m_Distance), sizeof( ((idFuncPortal *)0)->m_Distance ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncAASPortal_typeInfo[] = {
	{ "bool", "state", (ptrdiff_t)(&((idFuncAASPortal *)0)->state), sizeof( ((idFuncAASPortal *)0)->state ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncAASObstacle_typeInfo[] = {
	{ "bool", "state", (ptrdiff_t)(&((idFuncAASObstacle *)0)->state), sizeof( ((idFuncAASObstacle *)0)->state ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPhantomObjects_typeInfo[] = {
	{ "int", "end_time", (ptrdiff_t)(&((idPhantomObjects *)0)->end_time), sizeof( ((idPhantomObjects *)0)->end_time ) },
	{ "float", "throw_time", (ptrdiff_t)(&((idPhantomObjects *)0)->throw_time), sizeof( ((idPhantomObjects *)0)->throw_time ) },
	{ "float", "shake_time", (ptrdiff_t)(&((idPhantomObjects *)0)->shake_time), sizeof( ((idPhantomObjects *)0)->shake_time ) },
	{ "idVec3", "shake_ang", (ptrdiff_t)(&((idPhantomObjects *)0)->shake_ang), sizeof( ((idPhantomObjects *)0)->shake_ang ) },
	{ "float", "speed", (ptrdiff_t)(&((idPhantomObjects *)0)->speed), sizeof( ((idPhantomObjects *)0)->speed ) },
	{ "int", "min_wait", (ptrdiff_t)(&((idPhantomObjects *)0)->min_wait), sizeof( ((idPhantomObjects *)0)->min_wait ) },
	{ "int", "max_wait", (ptrdiff_t)(&((idPhantomObjects *)0)->max_wait), sizeof( ((idPhantomObjects *)0)->max_wait ) },
	{ "idEntityPtr < idActor >", "target", (ptrdiff_t)(&((idPhantomObjects *)0)->target), sizeof( ((idPhantomObjects *)0)->target ) },
	{ "idList < int >", "targetTime", (ptrdiff_t)(&((idPhantomObjects *)0)->targetTime), sizeof( ((idPhantomObjects *)0)->targetTime ) },
	{ "idList < idVec3 >", "lastTargetPos", (ptrdiff_t)(&((idPhantomObjects *)0)->lastTargetPos), sizeof( ((idPhantomObjects *)0)->lastTargetPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPortalSky_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t tdmVine_typeInfo[] = {
	{ "bool", "_watered", (ptrdiff_t)(&((tdmVine *)0)->_watered), sizeof( ((tdmVine *)0)->_watered ) },
	{ "tdmVine *", "_prime", (ptrdiff_t)(&((tdmVine *)0)->_prime), sizeof( ((tdmVine *)0)->_prime ) },
	{ "idList < idEntityPtr < tdmVine > >", "_descendants", (ptrdiff_t)(&((tdmVine *)0)->_descendants), sizeof( ((tdmVine *)0)->_descendants ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPeek_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CMultiStateMoverPosition_typeInfo[] = {
	{ "idList < idEntityPtr < idFuncAASObstacle > >", "aasObstacleEntities", (ptrdiff_t)(&((CMultiStateMoverPosition *)0)->aasObstacleEntities), sizeof( ((CMultiStateMoverPosition *)0)->aasObstacleEntities ) },
	{ "idEntityPtr < CMultiStateMover >", "mover", (ptrdiff_t)(&((CMultiStateMoverPosition *)0)->mover), sizeof( ((CMultiStateMoverPosition *)0)->mover ) },
	{ NULL, 0 }
};

static classVariableInfo_t MoverPositionInfo_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((MoverPositionInfo *)0)->name), sizeof( ((MoverPositionInfo *)0)->name ) },
	{ "idEntityPtr < CMultiStateMoverPosition >", "positionEnt", (ptrdiff_t)(&((MoverPositionInfo *)0)->positionEnt), sizeof( ((MoverPositionInfo *)0)->positionEnt ) },
	{ NULL, 0 }
};

static classVariableInfo_t CMeleeStatus_typeInfo[] = {
	{ "EMeleeActState", "m_ActionState", (ptrdiff_t)(&((CMeleeStatus *)0)->m_ActionState), sizeof( ((CMeleeStatus *)0)->m_ActionState ) },
	{ "EMeleeActPhase", "m_ActionPhase", (ptrdiff_t)(&((CMeleeStatus *)0)->m_ActionPhase), sizeof( ((CMeleeStatus *)0)->m_ActionPhase ) },
	{ "EMeleeType", "m_ActionType", (ptrdiff_t)(&((CMeleeStatus *)0)->m_ActionType), sizeof( ((CMeleeStatus *)0)->m_ActionType ) },
	{ "int", "m_PhaseChangeTime", (ptrdiff_t)(&((CMeleeStatus *)0)->m_PhaseChangeTime), sizeof( ((CMeleeStatus *)0)->m_PhaseChangeTime ) },
	{ "int", "m_LastActTime", (ptrdiff_t)(&((CMeleeStatus *)0)->m_LastActTime), sizeof( ((CMeleeStatus *)0)->m_LastActTime ) },
	{ "EMeleeResult", "m_ActionResult", (ptrdiff_t)(&((CMeleeStatus *)0)->m_ActionResult), sizeof( ((CMeleeStatus *)0)->m_ActionResult ) },
	{ "bool", "m_bWasHit", (ptrdiff_t)(&((CMeleeStatus *)0)->m_bWasHit), sizeof( ((CMeleeStatus *)0)->m_bWasHit ) },
	{ "EMeleeType", "m_LastHitByType", (ptrdiff_t)(&((CMeleeStatus *)0)->m_LastHitByType), sizeof( ((CMeleeStatus *)0)->m_LastHitByType ) },
	{ "bool", "m_bCanParry", (ptrdiff_t)(&((CMeleeStatus *)0)->m_bCanParry), sizeof( ((CMeleeStatus *)0)->m_bCanParry ) },
	{ "bool", "m_bCanParryAll", (ptrdiff_t)(&((CMeleeStatus *)0)->m_bCanParryAll), sizeof( ((CMeleeStatus *)0)->m_bCanParryAll ) },
	{ "idList < EMeleeType >", "m_attacks", (ptrdiff_t)(&((CMeleeStatus *)0)->m_attacks), sizeof( ((CMeleeStatus *)0)->m_attacks ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAnimState_typeInfo[] = {
	{ "bool", "idleAnim", (ptrdiff_t)(&((idAnimState *)0)->idleAnim), sizeof( ((idAnimState *)0)->idleAnim ) },
	{ "idStr", "state", (ptrdiff_t)(&((idAnimState *)0)->state), sizeof( ((idAnimState *)0)->state ) },
	{ "int", "animBlendFrames", (ptrdiff_t)(&((idAnimState *)0)->animBlendFrames), sizeof( ((idAnimState *)0)->animBlendFrames ) },
	{ "int", "lastAnimBlendFrames", (ptrdiff_t)(&((idAnimState *)0)->lastAnimBlendFrames), sizeof( ((idAnimState *)0)->lastAnimBlendFrames ) },
	{ "idStr", "waitState", (ptrdiff_t)(&((idAnimState *)0)->waitState), sizeof( ((idAnimState *)0)->waitState ) },
	{ "idActor *", "self", (ptrdiff_t)(&((idAnimState *)0)->self), sizeof( ((idAnimState *)0)->self ) },
	{ "idAnimator *", "animator", (ptrdiff_t)(&((idAnimState *)0)->animator), sizeof( ((idAnimState *)0)->animator ) },
	{ "idThread *", "thread", (ptrdiff_t)(&((idAnimState *)0)->thread), sizeof( ((idAnimState *)0)->thread ) },
	{ "int", "channel", (ptrdiff_t)(&((idAnimState *)0)->channel), sizeof( ((idAnimState *)0)->channel ) },
	{ "bool", "disabled", (ptrdiff_t)(&((idAnimState *)0)->disabled), sizeof( ((idAnimState *)0)->disabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t copyJoints_t_typeInfo[] = {
	{ "jointModTransform_t", "mod", (ptrdiff_t)(&((copyJoints_t *)0)->mod), sizeof( ((copyJoints_t *)0)->mod ) },
	{ "jointHandle_t", "from", (ptrdiff_t)(&((copyJoints_t *)0)->from), sizeof( ((copyJoints_t *)0)->from ) },
	{ "jointHandle_t", "to", (ptrdiff_t)(&((copyJoints_t *)0)->to), sizeof( ((copyJoints_t *)0)->to ) },
	{ NULL, 0 }
};

static classVariableInfo_t CrashLandResult_typeInfo[] = {
	{ "int", "damageDealt", (ptrdiff_t)(&((CrashLandResult *)0)->damageDealt), sizeof( ((CrashLandResult *)0)->damageDealt ) },
	{ "bool", "hasLanded", (ptrdiff_t)(&((CrashLandResult *)0)->hasLanded), sizeof( ((CrashLandResult *)0)->hasLanded ) },
	{ NULL, 0 }
};

static classVariableInfo_t WarningEvent_typeInfo[] = {
	{ "int", "eventID", (ptrdiff_t)(&((WarningEvent *)0)->eventID), sizeof( ((WarningEvent *)0)->eventID ) },
	{ "idEntityPtr < idEntity >", "entity", (ptrdiff_t)(&((WarningEvent *)0)->entity), sizeof( ((WarningEvent *)0)->entity ) },
	{ NULL, 0 }
};

static classVariableInfo_t KnownSuspiciousEvent_typeInfo[] = {
	{ "int", "eventID", (ptrdiff_t)(&((KnownSuspiciousEvent *)0)->eventID), sizeof( ((KnownSuspiciousEvent *)0)->eventID ) },
	{ "bool", "searched", (ptrdiff_t)(&((KnownSuspiciousEvent *)0)->searched), sizeof( ((KnownSuspiciousEvent *)0)->searched ) },
	{ NULL, 0 }
};

static classVariableInfo_t idActor_typeInfo[] = {
	{ "int", "rank", (ptrdiff_t)(&((idActor *)0)->rank), sizeof( ((idActor *)0)->rank ) },
	{ "int", "m_AItype", (ptrdiff_t)(&((idActor *)0)->m_AItype), sizeof( ((idActor *)0)->m_AItype ) },
	{ "bool", "m_Innocent", (ptrdiff_t)(&((idActor *)0)->m_Innocent), sizeof( ((idActor *)0)->m_Innocent ) },
	{ "idMat3", "viewAxis", (ptrdiff_t)(&((idActor *)0)->viewAxis), sizeof( ((idActor *)0)->viewAxis ) },
	{ "idLinkList < idActor >", "enemyNode", (ptrdiff_t)(&((idActor *)0)->enemyNode), sizeof( ((idActor *)0)->enemyNode ) },
	{ "idLinkList < idActor >", "enemyList", (ptrdiff_t)(&((idActor *)0)->enemyList), sizeof( ((idActor *)0)->enemyList ) },
	{ "GreetingState", "greetingState", (ptrdiff_t)(&((idActor *)0)->greetingState), sizeof( ((idActor *)0)->greetingState ) },
	{ "float", "melee_range_unarmed", (ptrdiff_t)(&((idActor *)0)->melee_range_unarmed), sizeof( ((idActor *)0)->melee_range_unarmed ) },
	{ "float", "melee_range", (ptrdiff_t)(&((idActor *)0)->melee_range), sizeof( ((idActor *)0)->melee_range ) },
	{ "float", "melee_range_vert", (ptrdiff_t)(&((idActor *)0)->melee_range_vert), sizeof( ((idActor *)0)->melee_range_vert ) },
	{ "float", "m_MeleePredictedAttTime", (ptrdiff_t)(&((idActor *)0)->m_MeleePredictedAttTime), sizeof( ((idActor *)0)->m_MeleePredictedAttTime ) },
	{ "float", "m_MeleePredictedAttTimeUnarmed", (ptrdiff_t)(&((idActor *)0)->m_MeleePredictedAttTimeUnarmed), sizeof( ((idActor *)0)->m_MeleePredictedAttTimeUnarmed ) },
	{ "CMeleeStatus", "m_MeleeStatus", (ptrdiff_t)(&((idActor *)0)->m_MeleeStatus), sizeof( ((idActor *)0)->m_MeleeStatus ) },
	{ "float", "m_MeleeDamageMult", (ptrdiff_t)(&((idActor *)0)->m_MeleeDamageMult), sizeof( ((idActor *)0)->m_MeleeDamageMult ) },
	{ "int", "m_MeleeHoldTimeMin", (ptrdiff_t)(&((idActor *)0)->m_MeleeHoldTimeMin), sizeof( ((idActor *)0)->m_MeleeHoldTimeMin ) },
	{ "int", "m_MeleeHoldTimeMax", (ptrdiff_t)(&((idActor *)0)->m_MeleeHoldTimeMax), sizeof( ((idActor *)0)->m_MeleeHoldTimeMax ) },
	{ "int", "m_MeleeCurrentHoldTime", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentHoldTime), sizeof( ((idActor *)0)->m_MeleeCurrentHoldTime ) },
	{ "int", "m_MeleeParryHoldMin", (ptrdiff_t)(&((idActor *)0)->m_MeleeParryHoldMin), sizeof( ((idActor *)0)->m_MeleeParryHoldMin ) },
	{ "int", "m_MeleeParryHoldMax", (ptrdiff_t)(&((idActor *)0)->m_MeleeParryHoldMax), sizeof( ((idActor *)0)->m_MeleeParryHoldMax ) },
	{ "int", "m_MeleeCurrentParryHold", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentParryHold), sizeof( ((idActor *)0)->m_MeleeCurrentParryHold ) },
	{ "int", "m_MeleeAttackRecoveryMin", (ptrdiff_t)(&((idActor *)0)->m_MeleeAttackRecoveryMin), sizeof( ((idActor *)0)->m_MeleeAttackRecoveryMin ) },
	{ "int", "m_MeleeAttackRecoveryMax", (ptrdiff_t)(&((idActor *)0)->m_MeleeAttackRecoveryMax), sizeof( ((idActor *)0)->m_MeleeAttackRecoveryMax ) },
	{ "int", "m_MeleeCurrentAttackRecovery", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentAttackRecovery), sizeof( ((idActor *)0)->m_MeleeCurrentAttackRecovery ) },
	{ "int", "m_MeleeAttackLongRecoveryMin", (ptrdiff_t)(&((idActor *)0)->m_MeleeAttackLongRecoveryMin), sizeof( ((idActor *)0)->m_MeleeAttackLongRecoveryMin ) },
	{ "int", "m_MeleeAttackLongRecoveryMax", (ptrdiff_t)(&((idActor *)0)->m_MeleeAttackLongRecoveryMax), sizeof( ((idActor *)0)->m_MeleeAttackLongRecoveryMax ) },
	{ "int", "m_MeleeCurrentAttackLongRecovery", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentAttackLongRecovery), sizeof( ((idActor *)0)->m_MeleeCurrentAttackLongRecovery ) },
	{ "int", "m_MeleeParryRecoveryMin", (ptrdiff_t)(&((idActor *)0)->m_MeleeParryRecoveryMin), sizeof( ((idActor *)0)->m_MeleeParryRecoveryMin ) },
	{ "int", "m_MeleeParryRecoveryMax", (ptrdiff_t)(&((idActor *)0)->m_MeleeParryRecoveryMax), sizeof( ((idActor *)0)->m_MeleeParryRecoveryMax ) },
	{ "int", "m_MeleeCurrentParryRecovery", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentParryRecovery), sizeof( ((idActor *)0)->m_MeleeCurrentParryRecovery ) },
	{ "int", "m_MeleeRiposteRecoveryMin", (ptrdiff_t)(&((idActor *)0)->m_MeleeRiposteRecoveryMin), sizeof( ((idActor *)0)->m_MeleeRiposteRecoveryMin ) },
	{ "int", "m_MeleeRiposteRecoveryMax", (ptrdiff_t)(&((idActor *)0)->m_MeleeRiposteRecoveryMax), sizeof( ((idActor *)0)->m_MeleeRiposteRecoveryMax ) },
	{ "int", "m_MeleeCurrentRiposteRecovery", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentRiposteRecovery), sizeof( ((idActor *)0)->m_MeleeCurrentRiposteRecovery ) },
	{ "int", "m_MeleePreParryDelayMin", (ptrdiff_t)(&((idActor *)0)->m_MeleePreParryDelayMin), sizeof( ((idActor *)0)->m_MeleePreParryDelayMin ) },
	{ "int", "m_MeleePreParryDelayMax", (ptrdiff_t)(&((idActor *)0)->m_MeleePreParryDelayMax), sizeof( ((idActor *)0)->m_MeleePreParryDelayMax ) },
	{ "int", "m_MeleeCurrentPreParryDelay", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentPreParryDelay), sizeof( ((idActor *)0)->m_MeleeCurrentPreParryDelay ) },
	{ "int", "m_MeleeRepeatedPreParryDelayMin", (ptrdiff_t)(&((idActor *)0)->m_MeleeRepeatedPreParryDelayMin), sizeof( ((idActor *)0)->m_MeleeRepeatedPreParryDelayMin ) },
	{ "int", "m_MeleeRepeatedPreParryDelayMax", (ptrdiff_t)(&((idActor *)0)->m_MeleeRepeatedPreParryDelayMax), sizeof( ((idActor *)0)->m_MeleeRepeatedPreParryDelayMax ) },
	{ "int", "m_MeleeCurrentRepeatedPreParryDelay", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentRepeatedPreParryDelay), sizeof( ((idActor *)0)->m_MeleeCurrentRepeatedPreParryDelay ) },
	{ "int", "m_MeleeNumRepAttacks", (ptrdiff_t)(&((idActor *)0)->m_MeleeNumRepAttacks), sizeof( ((idActor *)0)->m_MeleeNumRepAttacks ) },
	{ "int", "m_MeleeRepAttackTime", (ptrdiff_t)(&((idActor *)0)->m_MeleeRepAttackTime), sizeof( ((idActor *)0)->m_MeleeRepAttackTime ) },
	{ "int", "m_MeleePostParryDelayMin", (ptrdiff_t)(&((idActor *)0)->m_MeleePostParryDelayMin), sizeof( ((idActor *)0)->m_MeleePostParryDelayMin ) },
	{ "int", "m_MeleePostParryDelayMax", (ptrdiff_t)(&((idActor *)0)->m_MeleePostParryDelayMax), sizeof( ((idActor *)0)->m_MeleePostParryDelayMax ) },
	{ "int", "m_MeleeCurrentPostParryDelay", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentPostParryDelay), sizeof( ((idActor *)0)->m_MeleeCurrentPostParryDelay ) },
	{ "int", "m_MeleeRepeatedPostParryDelayMin", (ptrdiff_t)(&((idActor *)0)->m_MeleeRepeatedPostParryDelayMin), sizeof( ((idActor *)0)->m_MeleeRepeatedPostParryDelayMin ) },
	{ "int", "m_MeleeRepeatedPostParryDelayMax", (ptrdiff_t)(&((idActor *)0)->m_MeleeRepeatedPostParryDelayMax), sizeof( ((idActor *)0)->m_MeleeRepeatedPostParryDelayMax ) },
	{ "int", "m_MeleeCurrentRepeatedPostParryDelay", (ptrdiff_t)(&((idActor *)0)->m_MeleeCurrentRepeatedPostParryDelay), sizeof( ((idActor *)0)->m_MeleeCurrentRepeatedPostParryDelay ) },
	{ "int", "m_pathRank", (ptrdiff_t)(&((idActor *)0)->m_pathRank), sizeof( ((idActor *)0)->m_pathRank ) },
	{ "int", "m_nextKickTime", (ptrdiff_t)(&((idActor *)0)->m_nextKickTime), sizeof( ((idActor *)0)->m_nextKickTime ) },
	{ "int", "m_timeFellDown", (ptrdiff_t)(&((idActor *)0)->m_timeFellDown), sizeof( ((idActor *)0)->m_timeFellDown ) },
	{ "bool", "m_isMute", (ptrdiff_t)(&((idActor *)0)->m_isMute), sizeof( ((idActor *)0)->m_isMute ) },
	{ "idVec3", "m_MouthOffset", (ptrdiff_t)(&((idActor *)0)->m_MouthOffset), sizeof( ((idActor *)0)->m_MouthOffset ) },
	{ "idVec3", "m_EyeOffset", (ptrdiff_t)(&((idActor *)0)->m_EyeOffset), sizeof( ((idActor *)0)->m_EyeOffset ) },
	{ "bool", "m_victorHasKnealt", (ptrdiff_t)(&((idActor *)0)->m_victorHasKnealt), sizeof( ((idActor *)0)->m_victorHasKnealt ) },
	{ "idEntityPtr < idEntity >", "m_killedBy", (ptrdiff_t)(&((idActor *)0)->m_killedBy), sizeof( ((idActor *)0)->m_killedBy ) },
	{ "idList < WarningEvent >", "m_warningEvents", (ptrdiff_t)(&((idActor *)0)->m_warningEvents), sizeof( ((idActor *)0)->m_warningEvents ) },
	{ "idList < KnownSuspiciousEvent >", "m_knownSuspiciousEvents", (ptrdiff_t)(&((idActor *)0)->m_knownSuspiciousEvents), sizeof( ((idActor *)0)->m_knownSuspiciousEvents ) },
	{ "idScriptBool", "AI_DEAD", (ptrdiff_t)(&((idActor *)0)->AI_DEAD), sizeof( ((idActor *)0)->AI_DEAD ) },
	{ "float", "m_damage_thresh_min", (ptrdiff_t)(&((idActor *)0)->m_damage_thresh_min), sizeof( ((idActor *)0)->m_damage_thresh_min ) },
	{ "float", "m_damage_thresh_hard", (ptrdiff_t)(&((idActor *)0)->m_damage_thresh_hard), sizeof( ((idActor *)0)->m_damage_thresh_hard ) },
	{ "float", "m_delta_scale", (ptrdiff_t)(&((idActor *)0)->m_delta_scale), sizeof( ((idActor *)0)->m_delta_scale ) },
	{ "idVec3", "m_savedVelocity", (ptrdiff_t)(&((idActor *)0)->m_savedVelocity), sizeof( ((idActor *)0)->m_savedVelocity ) },
	{ "float", "m_fovDotHoriz", (ptrdiff_t)(&((idActor *)0)->m_fovDotHoriz), sizeof( ((idActor *)0)->m_fovDotHoriz ) },
	{ "float", "m_fovDotVert", (ptrdiff_t)(&((idActor *)0)->m_fovDotVert), sizeof( ((idActor *)0)->m_fovDotVert ) },
	{ "idVec3", "eyeOffset", (ptrdiff_t)(&((idActor *)0)->eyeOffset), sizeof( ((idActor *)0)->eyeOffset ) },
	{ "idVec3", "modelOffset", (ptrdiff_t)(&((idActor *)0)->modelOffset), sizeof( ((idActor *)0)->modelOffset ) },
	{ "idVec3", "mHeadModelOffset", (ptrdiff_t)(&((idActor *)0)->mHeadModelOffset), sizeof( ((idActor *)0)->mHeadModelOffset ) },
	{ "idAngles", "deltaViewAngles", (ptrdiff_t)(&((idActor *)0)->deltaViewAngles), sizeof( ((idActor *)0)->deltaViewAngles ) },
	{ "int", "pain_debounce_time", (ptrdiff_t)(&((idActor *)0)->pain_debounce_time), sizeof( ((idActor *)0)->pain_debounce_time ) },
	{ "int", "pain_delay", (ptrdiff_t)(&((idActor *)0)->pain_delay), sizeof( ((idActor *)0)->pain_delay ) },
	{ "int", "pain_threshold", (ptrdiff_t)(&((idActor *)0)->pain_threshold), sizeof( ((idActor *)0)->pain_threshold ) },
	{ "idStrList", "damageGroups", (ptrdiff_t)(&((idActor *)0)->damageGroups), sizeof( ((idActor *)0)->damageGroups ) },
	{ "idList < float >", "damageScale", (ptrdiff_t)(&((idActor *)0)->damageScale), sizeof( ((idActor *)0)->damageScale ) },
	{ "int", "lowHealthThreshold", (ptrdiff_t)(&((idActor *)0)->lowHealthThreshold), sizeof( ((idActor *)0)->lowHealthThreshold ) },
	{ "idStr", "lowHealthScript", (ptrdiff_t)(&((idActor *)0)->lowHealthScript), sizeof( ((idActor *)0)->lowHealthScript ) },
	{ "float", "m_SneakAttackThresh", (ptrdiff_t)(&((idActor *)0)->m_SneakAttackThresh), sizeof( ((idActor *)0)->m_SneakAttackThresh ) },
	{ "float", "m_SneakAttackMult", (ptrdiff_t)(&((idActor *)0)->m_SneakAttackMult), sizeof( ((idActor *)0)->m_SneakAttackMult ) },
	{ "bool", "use_combat_bbox", (ptrdiff_t)(&((idActor *)0)->use_combat_bbox), sizeof( ((idActor *)0)->use_combat_bbox ) },
	{ "idEntityPtr < idAFAttachment >", "head", (ptrdiff_t)(&((idActor *)0)->head), sizeof( ((idActor *)0)->head ) },
	{ "idList < copyJoints_t >", "copyJoints", (ptrdiff_t)(&((idActor *)0)->copyJoints), sizeof( ((idActor *)0)->copyJoints ) },
	{ "const function_t *", "state", (ptrdiff_t)(&((idActor *)0)->state), sizeof( ((idActor *)0)->state ) },
	{ "const function_t *", "idealState", (ptrdiff_t)(&((idActor *)0)->idealState), sizeof( ((idActor *)0)->idealState ) },
	{ "jointHandle_t", "leftEyeJoint", (ptrdiff_t)(&((idActor *)0)->leftEyeJoint), sizeof( ((idActor *)0)->leftEyeJoint ) },
	{ "jointHandle_t", "rightEyeJoint", (ptrdiff_t)(&((idActor *)0)->rightEyeJoint), sizeof( ((idActor *)0)->rightEyeJoint ) },
	{ "jointHandle_t", "soundJoint", (ptrdiff_t)(&((idActor *)0)->soundJoint), sizeof( ((idActor *)0)->soundJoint ) },
	{ "idIK_Walk", "walkIK", (ptrdiff_t)(&((idActor *)0)->walkIK), sizeof( ((idActor *)0)->walkIK ) },
	{ "idStr", "animPrefix", (ptrdiff_t)(&((idActor *)0)->animPrefix), sizeof( ((idActor *)0)->animPrefix ) },
	{ "idStr", "painAnim", (ptrdiff_t)(&((idActor *)0)->painAnim), sizeof( ((idActor *)0)->painAnim ) },
	{ "int", "blink_anim", (ptrdiff_t)(&((idActor *)0)->blink_anim), sizeof( ((idActor *)0)->blink_anim ) },
	{ "int", "blink_time", (ptrdiff_t)(&((idActor *)0)->blink_time), sizeof( ((idActor *)0)->blink_time ) },
	{ "int", "blink_min", (ptrdiff_t)(&((idActor *)0)->blink_min), sizeof( ((idActor *)0)->blink_min ) },
	{ "int", "blink_max", (ptrdiff_t)(&((idActor *)0)->blink_max), sizeof( ((idActor *)0)->blink_max ) },
	{ "idThread *", "scriptThread", (ptrdiff_t)(&((idActor *)0)->scriptThread), sizeof( ((idActor *)0)->scriptThread ) },
	{ "idStr", "waitState", (ptrdiff_t)(&((idActor *)0)->waitState), sizeof( ((idActor *)0)->waitState ) },
	{ "idAnimState", "headAnim", (ptrdiff_t)(&((idActor *)0)->headAnim), sizeof( ((idActor *)0)->headAnim ) },
	{ "idAnimState", "torsoAnim", (ptrdiff_t)(&((idActor *)0)->torsoAnim), sizeof( ((idActor *)0)->torsoAnim ) },
	{ "idAnimState", "legsAnim", (ptrdiff_t)(&((idActor *)0)->legsAnim), sizeof( ((idActor *)0)->legsAnim ) },
	{ "bool", "allowPain", (ptrdiff_t)(&((idActor *)0)->allowPain), sizeof( ((idActor *)0)->allowPain ) },
	{ "bool", "allowEyeFocus", (ptrdiff_t)(&((idActor *)0)->allowEyeFocus), sizeof( ((idActor *)0)->allowEyeFocus ) },
	{ "bool", "finalBoss", (ptrdiff_t)(&((idActor *)0)->finalBoss), sizeof( ((idActor *)0)->finalBoss ) },
	{ "int", "painTime", (ptrdiff_t)(&((idActor *)0)->painTime), sizeof( ((idActor *)0)->painTime ) },
	{ "bool", "canUseElevators", (ptrdiff_t)(&((idActor *)0)->canUseElevators), sizeof( ((idActor *)0)->canUseElevators ) },
	{ "idDict", "m_replacementAnims", (ptrdiff_t)(&((idActor *)0)->m_replacementAnims), sizeof( ((idActor *)0)->m_replacementAnims ) },
	{ "std :: set < int >", "m_AttackFlags", (ptrdiff_t)(&((idActor *)0)->m_AttackFlags), sizeof( ((idActor *)0)->m_AttackFlags ) },
	{ "float", "m_stepvol_walk", (ptrdiff_t)(&((idActor *)0)->m_stepvol_walk), sizeof( ((idActor *)0)->m_stepvol_walk ) },
	{ "float", "m_stepvol_run", (ptrdiff_t)(&((idActor *)0)->m_stepvol_run), sizeof( ((idActor *)0)->m_stepvol_run ) },
	{ "float", "m_stepvol_creep", (ptrdiff_t)(&((idActor *)0)->m_stepvol_creep), sizeof( ((idActor *)0)->m_stepvol_creep ) },
	{ "float", "m_stepvol_crouch_walk", (ptrdiff_t)(&((idActor *)0)->m_stepvol_crouch_walk), sizeof( ((idActor *)0)->m_stepvol_crouch_walk ) },
	{ "float", "m_stepvol_crouch_creep", (ptrdiff_t)(&((idActor *)0)->m_stepvol_crouch_creep), sizeof( ((idActor *)0)->m_stepvol_crouch_creep ) },
	{ "float", "m_stepvol_crouch_run", (ptrdiff_t)(&((idActor *)0)->m_stepvol_crouch_run), sizeof( ((idActor *)0)->m_stepvol_crouch_run ) },
	{ NULL, 0 }
};

static classVariableInfo_t PickableLock_PinInfo_typeInfo[] = {
	{ "idStringList", "pattern", (ptrdiff_t)(&((PickableLock::PinInfo *)0)->pattern), sizeof( ((PickableLock::PinInfo *)0)->pattern ) },
	{ "idList < int >", "positions", (ptrdiff_t)(&((PickableLock::PinInfo *)0)->positions), sizeof( ((PickableLock::PinInfo *)0)->positions ) },
	{ NULL, 0 }
};

static classVariableInfo_t PickableLock_typeInfo[] = {
	{ "idEntity *", "m_Owner", (ptrdiff_t)(&((PickableLock *)0)->m_Owner), sizeof( ((PickableLock *)0)->m_Owner ) },
	{ "bool", "m_Locked", (ptrdiff_t)(&((PickableLock *)0)->m_Locked), sizeof( ((PickableLock *)0)->m_Locked ) },
	{ "ELockpickState", "m_LockpickState", (ptrdiff_t)(&((PickableLock *)0)->m_LockpickState), sizeof( ((PickableLock *)0)->m_LockpickState ) },
	{ "int", "m_FailedLockpickRounds", (ptrdiff_t)(&((PickableLock *)0)->m_FailedLockpickRounds), sizeof( ((PickableLock *)0)->m_FailedLockpickRounds ) },
	{ "idList < PinInfo >", "m_Pins", (ptrdiff_t)(&((PickableLock *)0)->m_Pins), sizeof( ((PickableLock *)0)->m_Pins ) },
	{ "bool", "m_Pickable", (ptrdiff_t)(&((PickableLock *)0)->m_Pickable), sizeof( ((PickableLock *)0)->m_Pickable ) },
	{ "int", "m_FirstLockedPinIndex", (ptrdiff_t)(&((PickableLock *)0)->m_FirstLockedPinIndex), sizeof( ((PickableLock *)0)->m_FirstLockedPinIndex ) },
	{ "int", "m_SoundPinSampleIndex", (ptrdiff_t)(&((PickableLock *)0)->m_SoundPinSampleIndex), sizeof( ((PickableLock *)0)->m_SoundPinSampleIndex ) },
	{ "int", "m_SoundTimerStarted", (ptrdiff_t)(&((PickableLock *)0)->m_SoundTimerStarted), sizeof( ((PickableLock *)0)->m_SoundTimerStarted ) },
	{ NULL, 0 }
};

static classVariableInfo_t CInventoryItem_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "m_Owner", (ptrdiff_t)(&((CInventoryItem *)0)->m_Owner), sizeof( ((CInventoryItem *)0)->m_Owner ) },
	{ "idEntityPtr < idEntity >", "m_Item", (ptrdiff_t)(&((CInventoryItem *)0)->m_Item), sizeof( ((CInventoryItem *)0)->m_Item ) },
	{ "std :: shared_ptr < idDict >", "m_ItemDict", (ptrdiff_t)(&((CInventoryItem *)0)->m_ItemDict), sizeof( ((CInventoryItem *)0)->m_ItemDict ) },
	{ "idEntityPtr < idEntity >", "m_BindMaster", (ptrdiff_t)(&((CInventoryItem *)0)->m_BindMaster), sizeof( ((CInventoryItem *)0)->m_BindMaster ) },
	{ "idStr", "m_Name", (ptrdiff_t)(&((CInventoryItem *)0)->m_Name), sizeof( ((CInventoryItem *)0)->m_Name ) },
	{ "idStr", "m_HudName", (ptrdiff_t)(&((CInventoryItem *)0)->m_HudName), sizeof( ((CInventoryItem *)0)->m_HudName ) },
	{ "idStr", "m_ItemId", (ptrdiff_t)(&((CInventoryItem *)0)->m_ItemId), sizeof( ((CInventoryItem *)0)->m_ItemId ) },
	{ "CInventoryCategory *", "m_Category", (ptrdiff_t)(&((CInventoryItem *)0)->m_Category), sizeof( ((CInventoryItem *)0)->m_Category ) },
	{ "ItemType", "m_Type", (ptrdiff_t)(&((CInventoryItem *)0)->m_Type), sizeof( ((CInventoryItem *)0)->m_Type ) },
	{ "LootType", "m_LootType", (ptrdiff_t)(&((CInventoryItem *)0)->m_LootType), sizeof( ((CInventoryItem *)0)->m_LootType ) },
	{ "int", "m_Value", (ptrdiff_t)(&((CInventoryItem *)0)->m_Value), sizeof( ((CInventoryItem *)0)->m_Value ) },
	{ "int", "m_Overlay", (ptrdiff_t)(&((CInventoryItem *)0)->m_Overlay), sizeof( ((CInventoryItem *)0)->m_Overlay ) },
	{ "int", "m_Count", (ptrdiff_t)(&((CInventoryItem *)0)->m_Count), sizeof( ((CInventoryItem *)0)->m_Count ) },
	{ "bool", "m_Stackable", (ptrdiff_t)(&((CInventoryItem *)0)->m_Stackable), sizeof( ((CInventoryItem *)0)->m_Stackable ) },
	{ "bool", "m_Droppable", (ptrdiff_t)(&((CInventoryItem *)0)->m_Droppable), sizeof( ((CInventoryItem *)0)->m_Droppable ) },
	{ "bool", "m_Hud", (ptrdiff_t)(&((CInventoryItem *)0)->m_Hud), sizeof( ((CInventoryItem *)0)->m_Hud ) },
	{ "idStr", "m_Icon", (ptrdiff_t)(&((CInventoryItem *)0)->m_Icon), sizeof( ((CInventoryItem *)0)->m_Icon ) },
	{ "bool", "m_Orientated", (ptrdiff_t)(&((CInventoryItem *)0)->m_Orientated), sizeof( ((CInventoryItem *)0)->m_Orientated ) },
	{ "bool", "m_Persistent", (ptrdiff_t)(&((CInventoryItem *)0)->m_Persistent), sizeof( ((CInventoryItem *)0)->m_Persistent ) },
	{ "int", "m_LightgemModifier", (ptrdiff_t)(&((CInventoryItem *)0)->m_LightgemModifier), sizeof( ((CInventoryItem *)0)->m_LightgemModifier ) },
	{ "float", "m_MovementModifier", (ptrdiff_t)(&((CInventoryItem *)0)->m_MovementModifier), sizeof( ((CInventoryItem *)0)->m_MovementModifier ) },
	{ "float", "m_FrobDistanceCap", (ptrdiff_t)(&((CInventoryItem *)0)->m_FrobDistanceCap), sizeof( ((CInventoryItem *)0)->m_FrobDistanceCap ) },
	{ "bool", "m_UseOnFrob", (ptrdiff_t)(&((CInventoryItem *)0)->m_UseOnFrob), sizeof( ((CInventoryItem *)0)->m_UseOnFrob ) },
	{ "idMat3", "m_DropOrientation", (ptrdiff_t)(&((CInventoryItem *)0)->m_DropOrientation), sizeof( ((CInventoryItem *)0)->m_DropOrientation ) },
	{ NULL, 0 }
};

static classVariableInfo_t CInventoryCategory_typeInfo[] = {
	{ "CInventory *", "m_Inventory", (ptrdiff_t)(&((CInventoryCategory *)0)->m_Inventory), sizeof( ((CInventoryCategory *)0)->m_Inventory ) },
	{ "idEntityPtr < idEntity >", "m_Owner", (ptrdiff_t)(&((CInventoryCategory *)0)->m_Owner), sizeof( ((CInventoryCategory *)0)->m_Owner ) },
	{ "idStr", "m_Name", (ptrdiff_t)(&((CInventoryCategory *)0)->m_Name), sizeof( ((CInventoryCategory *)0)->m_Name ) },
	{ "idList < CInventoryItemPtr >", "m_Item", (ptrdiff_t)(&((CInventoryCategory *)0)->m_Item), sizeof( ((CInventoryCategory *)0)->m_Item ) },
	{ NULL, 0 }
};

static classVariableInfo_t SFinalProjData_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "Owner", (ptrdiff_t)(&((SFinalProjData *)0)->Owner), sizeof( ((SFinalProjData *)0)->Owner ) },
	{ "idVec3", "FinalOrigin", (ptrdiff_t)(&((SFinalProjData *)0)->FinalOrigin), sizeof( ((SFinalProjData *)0)->FinalOrigin ) },
	{ "idMat3", "FinalAxis", (ptrdiff_t)(&((SFinalProjData *)0)->FinalAxis), sizeof( ((SFinalProjData *)0)->FinalAxis ) },
	{ "idVec3", "LinVelocity", (ptrdiff_t)(&((SFinalProjData *)0)->LinVelocity), sizeof( ((SFinalProjData *)0)->LinVelocity ) },
	{ "idVec3", "AngVelocity", (ptrdiff_t)(&((SFinalProjData *)0)->AngVelocity), sizeof( ((SFinalProjData *)0)->AngVelocity ) },
	{ "idVec3", "AxialDir", (ptrdiff_t)(&((SFinalProjData *)0)->AxialDir), sizeof( ((SFinalProjData *)0)->AxialDir ) },
	{ "float", "IncidenceAngle", (ptrdiff_t)(&((SFinalProjData *)0)->IncidenceAngle), sizeof( ((SFinalProjData *)0)->IncidenceAngle ) },
	{ "float", "mass", (ptrdiff_t)(&((SFinalProjData *)0)->mass), sizeof( ((SFinalProjData *)0)->mass ) },
	{ "idStr", "SurfaceType", (ptrdiff_t)(&((SFinalProjData *)0)->SurfaceType), sizeof( ((SFinalProjData *)0)->SurfaceType ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProjectile_projectileFlags_s_typeInfo[] = {
//	{ "bool", "detonate_on_world", (ptrdiff_t)(&((idProjectile::projectileFlags_s *)0)->detonate_on_world), sizeof( ((idProjectile::projectileFlags_s *)0)->detonate_on_world ) },
//	{ "bool", "detonate_on_actor", (ptrdiff_t)(&((idProjectile::projectileFlags_s *)0)->detonate_on_actor), sizeof( ((idProjectile::projectileFlags_s *)0)->detonate_on_actor ) },
//	{ "bool", "randomShaderSpin", (ptrdiff_t)(&((idProjectile::projectileFlags_s *)0)->randomShaderSpin), sizeof( ((idProjectile::projectileFlags_s *)0)->randomShaderSpin ) },
//	{ "bool", "isTracer", (ptrdiff_t)(&((idProjectile::projectileFlags_s *)0)->isTracer), sizeof( ((idProjectile::projectileFlags_s *)0)->isTracer ) },
//	{ "bool", "noSplashDamage", (ptrdiff_t)(&((idProjectile::projectileFlags_s *)0)->noSplashDamage), sizeof( ((idProjectile::projectileFlags_s *)0)->noSplashDamage ) },
//	{ "bool", "detonate_on_water", (ptrdiff_t)(&((idProjectile::projectileFlags_s *)0)->detonate_on_water), sizeof( ((idProjectile::projectileFlags_s *)0)->detonate_on_water ) },
	{ NULL, 0 }
};

static classVariableInfo_t idProjectile_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "owner", (ptrdiff_t)(&((idProjectile *)0)->owner), sizeof( ((idProjectile *)0)->owner ) },
	{ "idProjectile::projectileFlags_s", "projectileFlags", (ptrdiff_t)(&((idProjectile *)0)->projectileFlags), sizeof( ((idProjectile *)0)->projectileFlags ) },
	{ "float", "thrust", (ptrdiff_t)(&((idProjectile *)0)->thrust), sizeof( ((idProjectile *)0)->thrust ) },
	{ "int", "thrust_end", (ptrdiff_t)(&((idProjectile *)0)->thrust_end), sizeof( ((idProjectile *)0)->thrust_end ) },
	{ "float", "damagePower", (ptrdiff_t)(&((idProjectile *)0)->damagePower), sizeof( ((idProjectile *)0)->damagePower ) },
	{ "renderLight_t", "renderLight", (ptrdiff_t)(&((idProjectile *)0)->renderLight), sizeof( ((idProjectile *)0)->renderLight ) },
	{ "qhandle_t", "lightDefHandle", (ptrdiff_t)(&((idProjectile *)0)->lightDefHandle), sizeof( ((idProjectile *)0)->lightDefHandle ) },
	{ "idVec3", "lightOffset", (ptrdiff_t)(&((idProjectile *)0)->lightOffset), sizeof( ((idProjectile *)0)->lightOffset ) },
	{ "int", "lightStartTime", (ptrdiff_t)(&((idProjectile *)0)->lightStartTime), sizeof( ((idProjectile *)0)->lightStartTime ) },
	{ "int", "lightEndTime", (ptrdiff_t)(&((idProjectile *)0)->lightEndTime), sizeof( ((idProjectile *)0)->lightEndTime ) },
	{ "idVec3", "lightColor", (ptrdiff_t)(&((idProjectile *)0)->lightColor), sizeof( ((idProjectile *)0)->lightColor ) },
	{ "idForce_Constant", "thruster", (ptrdiff_t)(&((idProjectile *)0)->thruster), sizeof( ((idProjectile *)0)->thruster ) },
	{ "idPhysics_RigidBody", "physicsObj", (ptrdiff_t)(&((idProjectile *)0)->physicsObj), sizeof( ((idProjectile *)0)->physicsObj ) },
	{ "const idDeclParticle *", "smokeFly", (ptrdiff_t)(&((idProjectile *)0)->smokeFly), sizeof( ((idProjectile *)0)->smokeFly ) },
	{ "int", "smokeFlyTime", (ptrdiff_t)(&((idProjectile *)0)->smokeFlyTime), sizeof( ((idProjectile *)0)->smokeFlyTime ) },
	{ "projectileState_t", "state", (ptrdiff_t)(&((idProjectile *)0)->state), sizeof( ((idProjectile *)0)->state ) },
	{ "PickableLock *", "m_Lock", (ptrdiff_t)(&((idProjectile *)0)->m_Lock), sizeof( ((idProjectile *)0)->m_Lock ) },
	{ "bool", "isMine", (ptrdiff_t)(&((idProjectile *)0)->isMine), sizeof( ((idProjectile *)0)->isMine ) },
	{ "bool", "replaced", (ptrdiff_t)(&((idProjectile *)0)->replaced), sizeof( ((idProjectile *)0)->replaced ) },
	{ NULL, 0 }
};

static classVariableInfo_t idGuidedProjectile_typeInfo[] = {
	{ "float", "speed", (ptrdiff_t)(&((idGuidedProjectile *)0)->speed), sizeof( ((idGuidedProjectile *)0)->speed ) },
	{ "idEntityPtr < idEntity >", "enemy", (ptrdiff_t)(&((idGuidedProjectile *)0)->enemy), sizeof( ((idGuidedProjectile *)0)->enemy ) },
	{ "idAngles", "rndScale", (ptrdiff_t)(&((idGuidedProjectile *)0)->rndScale), sizeof( ((idGuidedProjectile *)0)->rndScale ) },
	{ "idAngles", "rndAng", (ptrdiff_t)(&((idGuidedProjectile *)0)->rndAng), sizeof( ((idGuidedProjectile *)0)->rndAng ) },
	{ "idAngles", "angles", (ptrdiff_t)(&((idGuidedProjectile *)0)->angles), sizeof( ((idGuidedProjectile *)0)->angles ) },
	{ "int", "rndUpdateTime", (ptrdiff_t)(&((idGuidedProjectile *)0)->rndUpdateTime), sizeof( ((idGuidedProjectile *)0)->rndUpdateTime ) },
	{ "float", "turn_max", (ptrdiff_t)(&((idGuidedProjectile *)0)->turn_max), sizeof( ((idGuidedProjectile *)0)->turn_max ) },
	{ "float", "clamp_dist", (ptrdiff_t)(&((idGuidedProjectile *)0)->clamp_dist), sizeof( ((idGuidedProjectile *)0)->clamp_dist ) },
	{ "bool", "burstMode", (ptrdiff_t)(&((idGuidedProjectile *)0)->burstMode), sizeof( ((idGuidedProjectile *)0)->burstMode ) },
	{ "bool", "unGuided", (ptrdiff_t)(&((idGuidedProjectile *)0)->unGuided), sizeof( ((idGuidedProjectile *)0)->unGuided ) },
	{ "float", "burstDist", (ptrdiff_t)(&((idGuidedProjectile *)0)->burstDist), sizeof( ((idGuidedProjectile *)0)->burstDist ) },
	{ "float", "burstVelocity", (ptrdiff_t)(&((idGuidedProjectile *)0)->burstVelocity), sizeof( ((idGuidedProjectile *)0)->burstVelocity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idDebris_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "owner", (ptrdiff_t)(&((idDebris *)0)->owner), sizeof( ((idDebris *)0)->owner ) },
	{ "idPhysics_RigidBody", "physicsObj", (ptrdiff_t)(&((idDebris *)0)->physicsObj), sizeof( ((idDebris *)0)->physicsObj ) },
	{ "const idDeclParticle *", "smokeFly", (ptrdiff_t)(&((idDebris *)0)->smokeFly), sizeof( ((idDebris *)0)->smokeFly ) },
	{ "int", "smokeFlyTime", (ptrdiff_t)(&((idDebris *)0)->smokeFlyTime), sizeof( ((idDebris *)0)->smokeFlyTime ) },
	{ "const idSoundShader *", "sndBounce", (ptrdiff_t)(&((idDebris *)0)->sndBounce), sizeof( ((idDebris *)0)->sndBounce ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWeapon_typeInfo[] = {
	{ "idScriptBool", "WEAPON_ATTACK", (ptrdiff_t)(&((idWeapon *)0)->WEAPON_ATTACK), sizeof( ((idWeapon *)0)->WEAPON_ATTACK ) },
	{ "idScriptBool", "WEAPON_BLOCK", (ptrdiff_t)(&((idWeapon *)0)->WEAPON_BLOCK), sizeof( ((idWeapon *)0)->WEAPON_BLOCK ) },
	{ "idScriptBool", "WEAPON_RELOAD", (ptrdiff_t)(&((idWeapon *)0)->WEAPON_RELOAD), sizeof( ((idWeapon *)0)->WEAPON_RELOAD ) },
	{ "idScriptBool", "WEAPON_NETRELOAD", (ptrdiff_t)(&((idWeapon *)0)->WEAPON_NETRELOAD), sizeof( ((idWeapon *)0)->WEAPON_NETRELOAD ) },
	{ "idScriptBool", "WEAPON_NETENDRELOAD", (ptrdiff_t)(&((idWeapon *)0)->WEAPON_NETENDRELOAD), sizeof( ((idWeapon *)0)->WEAPON_NETENDRELOAD ) },
	{ "idScriptBool", "WEAPON_NETFIRING", (ptrdiff_t)(&((idWeapon *)0)->WEAPON_NETFIRING), sizeof( ((idWeapon *)0)->WEAPON_NETFIRING ) },
	{ "idScriptBool", "WEAPON_RAISEWEAPON", (ptrdiff_t)(&((idWeapon *)0)->WEAPON_RAISEWEAPON), sizeof( ((idWeapon *)0)->WEAPON_RAISEWEAPON ) },
	{ "idScriptBool", "WEAPON_LOWERWEAPON", (ptrdiff_t)(&((idWeapon *)0)->WEAPON_LOWERWEAPON), sizeof( ((idWeapon *)0)->WEAPON_LOWERWEAPON ) },
	{ "weaponStatus_t", "status", (ptrdiff_t)(&((idWeapon *)0)->status), sizeof( ((idWeapon *)0)->status ) },
	{ "idThread *", "thread", (ptrdiff_t)(&((idWeapon *)0)->thread), sizeof( ((idWeapon *)0)->thread ) },
	{ "idStr", "state", (ptrdiff_t)(&((idWeapon *)0)->state), sizeof( ((idWeapon *)0)->state ) },
	{ "idStr", "idealState", (ptrdiff_t)(&((idWeapon *)0)->idealState), sizeof( ((idWeapon *)0)->idealState ) },
	{ "int", "animBlendFrames", (ptrdiff_t)(&((idWeapon *)0)->animBlendFrames), sizeof( ((idWeapon *)0)->animBlendFrames ) },
	{ "int", "animDoneTime", (ptrdiff_t)(&((idWeapon *)0)->animDoneTime), sizeof( ((idWeapon *)0)->animDoneTime ) },
	{ "bool", "isLinked", (ptrdiff_t)(&((idWeapon *)0)->isLinked), sizeof( ((idWeapon *)0)->isLinked ) },
	{ "idEntity *", "projectileEnt", (ptrdiff_t)(&((idWeapon *)0)->projectileEnt), sizeof( ((idWeapon *)0)->projectileEnt ) },
	{ "idPlayer *", "owner", (ptrdiff_t)(&((idWeapon *)0)->owner), sizeof( ((idWeapon *)0)->owner ) },
	{ "idEntityPtr < idAnimatedEntity >", "worldModel", (ptrdiff_t)(&((idWeapon *)0)->worldModel), sizeof( ((idWeapon *)0)->worldModel ) },
	{ "int", "hideTime", (ptrdiff_t)(&((idWeapon *)0)->hideTime), sizeof( ((idWeapon *)0)->hideTime ) },
	{ "float", "hideDistance", (ptrdiff_t)(&((idWeapon *)0)->hideDistance), sizeof( ((idWeapon *)0)->hideDistance ) },
	{ "int", "hideStartTime", (ptrdiff_t)(&((idWeapon *)0)->hideStartTime), sizeof( ((idWeapon *)0)->hideStartTime ) },
	{ "float", "hideStart", (ptrdiff_t)(&((idWeapon *)0)->hideStart), sizeof( ((idWeapon *)0)->hideStart ) },
	{ "float", "hideEnd", (ptrdiff_t)(&((idWeapon *)0)->hideEnd), sizeof( ((idWeapon *)0)->hideEnd ) },
	{ "float", "hideOffset", (ptrdiff_t)(&((idWeapon *)0)->hideOffset), sizeof( ((idWeapon *)0)->hideOffset ) },
	{ "bool", "hide", (ptrdiff_t)(&((idWeapon *)0)->hide), sizeof( ((idWeapon *)0)->hide ) },
	{ "bool", "disabled", (ptrdiff_t)(&((idWeapon *)0)->disabled), sizeof( ((idWeapon *)0)->disabled ) },
	{ "idVec3", "playerViewOrigin", (ptrdiff_t)(&((idWeapon *)0)->playerViewOrigin), sizeof( ((idWeapon *)0)->playerViewOrigin ) },
	{ "idMat3", "playerViewAxis", (ptrdiff_t)(&((idWeapon *)0)->playerViewAxis), sizeof( ((idWeapon *)0)->playerViewAxis ) },
	{ "idVec3", "viewWeaponOrigin", (ptrdiff_t)(&((idWeapon *)0)->viewWeaponOrigin), sizeof( ((idWeapon *)0)->viewWeaponOrigin ) },
	{ "idMat3", "viewWeaponAxis", (ptrdiff_t)(&((idWeapon *)0)->viewWeaponAxis), sizeof( ((idWeapon *)0)->viewWeaponAxis ) },
	{ "idVec3", "muzzleOrigin", (ptrdiff_t)(&((idWeapon *)0)->muzzleOrigin), sizeof( ((idWeapon *)0)->muzzleOrigin ) },
	{ "idMat3", "muzzleAxis", (ptrdiff_t)(&((idWeapon *)0)->muzzleAxis), sizeof( ((idWeapon *)0)->muzzleAxis ) },
	{ "idVec3", "pushVelocity", (ptrdiff_t)(&((idWeapon *)0)->pushVelocity), sizeof( ((idWeapon *)0)->pushVelocity ) },
	{ "const idDeclEntityDef *", "weaponDef", (ptrdiff_t)(&((idWeapon *)0)->weaponDef), sizeof( ((idWeapon *)0)->weaponDef ) },
	{ "const idDeclEntityDef *", "meleeDef", (ptrdiff_t)(&((idWeapon *)0)->meleeDef), sizeof( ((idWeapon *)0)->meleeDef ) },
	{ "float", "meleeDistance", (ptrdiff_t)(&((idWeapon *)0)->meleeDistance), sizeof( ((idWeapon *)0)->meleeDistance ) },
	{ "idStr", "meleeDefName", (ptrdiff_t)(&((idWeapon *)0)->meleeDefName), sizeof( ((idWeapon *)0)->meleeDefName ) },
	{ "idDict", "brassDict", (ptrdiff_t)(&((idWeapon *)0)->brassDict), sizeof( ((idWeapon *)0)->brassDict ) },
	{ "int", "brassDelay", (ptrdiff_t)(&((idWeapon *)0)->brassDelay), sizeof( ((idWeapon *)0)->brassDelay ) },
	{ "idStr", "icon", (ptrdiff_t)(&((idWeapon *)0)->icon), sizeof( ((idWeapon *)0)->icon ) },
	{ "renderLight_t", "guiLight", (ptrdiff_t)(&((idWeapon *)0)->guiLight), sizeof( ((idWeapon *)0)->guiLight ) },
	{ "int", "guiLightHandle", (ptrdiff_t)(&((idWeapon *)0)->guiLightHandle), sizeof( ((idWeapon *)0)->guiLightHandle ) },
	{ "renderLight_t", "muzzleFlash", (ptrdiff_t)(&((idWeapon *)0)->muzzleFlash), sizeof( ((idWeapon *)0)->muzzleFlash ) },
	{ "int", "muzzleFlashHandle", (ptrdiff_t)(&((idWeapon *)0)->muzzleFlashHandle), sizeof( ((idWeapon *)0)->muzzleFlashHandle ) },
	{ "renderLight_t", "worldMuzzleFlash", (ptrdiff_t)(&((idWeapon *)0)->worldMuzzleFlash), sizeof( ((idWeapon *)0)->worldMuzzleFlash ) },
	{ "int", "worldMuzzleFlashHandle", (ptrdiff_t)(&((idWeapon *)0)->worldMuzzleFlashHandle), sizeof( ((idWeapon *)0)->worldMuzzleFlashHandle ) },
	{ "idVec3", "flashColor", (ptrdiff_t)(&((idWeapon *)0)->flashColor), sizeof( ((idWeapon *)0)->flashColor ) },
	{ "int", "muzzleFlashEnd", (ptrdiff_t)(&((idWeapon *)0)->muzzleFlashEnd), sizeof( ((idWeapon *)0)->muzzleFlashEnd ) },
	{ "int", "flashTime", (ptrdiff_t)(&((idWeapon *)0)->flashTime), sizeof( ((idWeapon *)0)->flashTime ) },
	{ "bool", "lightOn", (ptrdiff_t)(&((idWeapon *)0)->lightOn), sizeof( ((idWeapon *)0)->lightOn ) },
	{ "bool", "allowDrop", (ptrdiff_t)(&((idWeapon *)0)->allowDrop), sizeof( ((idWeapon *)0)->allowDrop ) },
	{ "int", "hideUntilTime", (ptrdiff_t)(&((idWeapon *)0)->hideUntilTime), sizeof( ((idWeapon *)0)->hideUntilTime ) },
	{ "bool", "hasBloodSplat", (ptrdiff_t)(&((idWeapon *)0)->hasBloodSplat), sizeof( ((idWeapon *)0)->hasBloodSplat ) },
	{ "int", "kick_endtime", (ptrdiff_t)(&((idWeapon *)0)->kick_endtime), sizeof( ((idWeapon *)0)->kick_endtime ) },
	{ "int", "muzzle_kick_time", (ptrdiff_t)(&((idWeapon *)0)->muzzle_kick_time), sizeof( ((idWeapon *)0)->muzzle_kick_time ) },
	{ "int", "muzzle_kick_maxtime", (ptrdiff_t)(&((idWeapon *)0)->muzzle_kick_maxtime), sizeof( ((idWeapon *)0)->muzzle_kick_maxtime ) },
	{ "idAngles", "muzzle_kick_angles", (ptrdiff_t)(&((idWeapon *)0)->muzzle_kick_angles), sizeof( ((idWeapon *)0)->muzzle_kick_angles ) },
	{ "idVec3", "muzzle_kick_offset", (ptrdiff_t)(&((idWeapon *)0)->muzzle_kick_offset), sizeof( ((idWeapon *)0)->muzzle_kick_offset ) },
	{ "int", "ammoRequired", (ptrdiff_t)(&((idWeapon *)0)->ammoRequired), sizeof( ((idWeapon *)0)->ammoRequired ) },
	{ "int", "clipSize", (ptrdiff_t)(&((idWeapon *)0)->clipSize), sizeof( ((idWeapon *)0)->clipSize ) },
	{ "int", "ammoClip", (ptrdiff_t)(&((idWeapon *)0)->ammoClip), sizeof( ((idWeapon *)0)->ammoClip ) },
	{ "int", "lowAmmo", (ptrdiff_t)(&((idWeapon *)0)->lowAmmo), sizeof( ((idWeapon *)0)->lowAmmo ) },
	{ "bool", "powerAmmo", (ptrdiff_t)(&((idWeapon *)0)->powerAmmo), sizeof( ((idWeapon *)0)->powerAmmo ) },
	{ "bool", "isFiring", (ptrdiff_t)(&((idWeapon *)0)->isFiring), sizeof( ((idWeapon *)0)->isFiring ) },
	{ "int", "zoomFov", (ptrdiff_t)(&((idWeapon *)0)->zoomFov), sizeof( ((idWeapon *)0)->zoomFov ) },
	{ "jointHandle_t", "barrelJointView", (ptrdiff_t)(&((idWeapon *)0)->barrelJointView), sizeof( ((idWeapon *)0)->barrelJointView ) },
	{ "jointHandle_t", "flashJointView", (ptrdiff_t)(&((idWeapon *)0)->flashJointView), sizeof( ((idWeapon *)0)->flashJointView ) },
	{ "jointHandle_t", "ejectJointView", (ptrdiff_t)(&((idWeapon *)0)->ejectJointView), sizeof( ((idWeapon *)0)->ejectJointView ) },
	{ "jointHandle_t", "guiLightJointView", (ptrdiff_t)(&((idWeapon *)0)->guiLightJointView), sizeof( ((idWeapon *)0)->guiLightJointView ) },
	{ "jointHandle_t", "ventLightJointView", (ptrdiff_t)(&((idWeapon *)0)->ventLightJointView), sizeof( ((idWeapon *)0)->ventLightJointView ) },
	{ "jointHandle_t", "flashJointWorld", (ptrdiff_t)(&((idWeapon *)0)->flashJointWorld), sizeof( ((idWeapon *)0)->flashJointWorld ) },
	{ "jointHandle_t", "barrelJointWorld", (ptrdiff_t)(&((idWeapon *)0)->barrelJointWorld), sizeof( ((idWeapon *)0)->barrelJointWorld ) },
	{ "jointHandle_t", "ejectJointWorld", (ptrdiff_t)(&((idWeapon *)0)->ejectJointWorld), sizeof( ((idWeapon *)0)->ejectJointWorld ) },
	{ "const idSoundShader *", "sndHum", (ptrdiff_t)(&((idWeapon *)0)->sndHum), sizeof( ((idWeapon *)0)->sndHum ) },
	{ "const idDeclParticle *", "weaponSmoke", (ptrdiff_t)(&((idWeapon *)0)->weaponSmoke), sizeof( ((idWeapon *)0)->weaponSmoke ) },
	{ "int", "weaponSmokeStartTime", (ptrdiff_t)(&((idWeapon *)0)->weaponSmokeStartTime), sizeof( ((idWeapon *)0)->weaponSmokeStartTime ) },
	{ "bool", "continuousSmoke", (ptrdiff_t)(&((idWeapon *)0)->continuousSmoke), sizeof( ((idWeapon *)0)->continuousSmoke ) },
	{ "const idDeclParticle *", "strikeSmoke", (ptrdiff_t)(&((idWeapon *)0)->strikeSmoke), sizeof( ((idWeapon *)0)->strikeSmoke ) },
	{ "int", "strikeSmokeStartTime", (ptrdiff_t)(&((idWeapon *)0)->strikeSmokeStartTime), sizeof( ((idWeapon *)0)->strikeSmokeStartTime ) },
	{ "idVec3", "strikePos", (ptrdiff_t)(&((idWeapon *)0)->strikePos), sizeof( ((idWeapon *)0)->strikePos ) },
	{ "idMat3", "strikeAxis", (ptrdiff_t)(&((idWeapon *)0)->strikeAxis), sizeof( ((idWeapon *)0)->strikeAxis ) },
	{ "int", "nextStrikeFx", (ptrdiff_t)(&((idWeapon *)0)->nextStrikeFx), sizeof( ((idWeapon *)0)->nextStrikeFx ) },
	{ "bool", "nozzleFx", (ptrdiff_t)(&((idWeapon *)0)->nozzleFx), sizeof( ((idWeapon *)0)->nozzleFx ) },
	{ "int", "nozzleFxFade", (ptrdiff_t)(&((idWeapon *)0)->nozzleFxFade), sizeof( ((idWeapon *)0)->nozzleFxFade ) },
	{ "int", "lastAttack", (ptrdiff_t)(&((idWeapon *)0)->lastAttack), sizeof( ((idWeapon *)0)->lastAttack ) },
	{ "int", "lastBlock", (ptrdiff_t)(&((idWeapon *)0)->lastBlock), sizeof( ((idWeapon *)0)->lastBlock ) },
	{ "renderLight_t", "nozzleGlow", (ptrdiff_t)(&((idWeapon *)0)->nozzleGlow), sizeof( ((idWeapon *)0)->nozzleGlow ) },
	{ "int", "nozzleGlowHandle", (ptrdiff_t)(&((idWeapon *)0)->nozzleGlowHandle), sizeof( ((idWeapon *)0)->nozzleGlowHandle ) },
	{ "idVec3", "nozzleGlowColor", (ptrdiff_t)(&((idWeapon *)0)->nozzleGlowColor), sizeof( ((idWeapon *)0)->nozzleGlowColor ) },
	{ "const idMaterial *", "nozzleGlowShader", (ptrdiff_t)(&((idWeapon *)0)->nozzleGlowShader), sizeof( ((idWeapon *)0)->nozzleGlowShader ) },
	{ "float", "nozzleGlowRadius", (ptrdiff_t)(&((idWeapon *)0)->nozzleGlowRadius), sizeof( ((idWeapon *)0)->nozzleGlowRadius ) },
	{ "int", "weaponAngleOffsetAverages", (ptrdiff_t)(&((idWeapon *)0)->weaponAngleOffsetAverages), sizeof( ((idWeapon *)0)->weaponAngleOffsetAverages ) },
	{ "float", "weaponAngleOffsetScale", (ptrdiff_t)(&((idWeapon *)0)->weaponAngleOffsetScale), sizeof( ((idWeapon *)0)->weaponAngleOffsetScale ) },
	{ "float", "weaponAngleOffsetMax", (ptrdiff_t)(&((idWeapon *)0)->weaponAngleOffsetMax), sizeof( ((idWeapon *)0)->weaponAngleOffsetMax ) },
	{ "float", "weaponOffsetTime", (ptrdiff_t)(&((idWeapon *)0)->weaponOffsetTime), sizeof( ((idWeapon *)0)->weaponOffsetTime ) },
	{ "float", "weaponOffsetScale", (ptrdiff_t)(&((idWeapon *)0)->weaponOffsetScale), sizeof( ((idWeapon *)0)->weaponOffsetScale ) },
	{ "bool", "arrow2Arrow", (ptrdiff_t)(&((idWeapon *)0)->arrow2Arrow), sizeof( ((idWeapon *)0)->arrow2Arrow ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLight_AIBarks_typeInfo[] = {
	{ "int", "count", (ptrdiff_t)(&((idLight::AIBarks *)0)->count), sizeof( ((idLight::AIBarks *)0)->count ) },
	{ "idEntityPtr < idEntity >", "ai", (ptrdiff_t)(&((idLight::AIBarks *)0)->ai), sizeof( ((idLight::AIBarks *)0)->ai ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLight_typeInfo[] = {
	{ "renderLight_t", "renderLight", (ptrdiff_t)(&((idLight *)0)->renderLight), sizeof( ((idLight *)0)->renderLight ) },
	{ "idVec3", "localLightOrigin", (ptrdiff_t)(&((idLight *)0)->localLightOrigin), sizeof( ((idLight *)0)->localLightOrigin ) },
	{ "idMat3", "localLightAxis", (ptrdiff_t)(&((idLight *)0)->localLightAxis), sizeof( ((idLight *)0)->localLightAxis ) },
	{ "qhandle_t", "lightDefHandle", (ptrdiff_t)(&((idLight *)0)->lightDefHandle), sizeof( ((idLight *)0)->lightDefHandle ) },
	{ "int", "levels", (ptrdiff_t)(&((idLight *)0)->levels), sizeof( ((idLight *)0)->levels ) },
	{ "int", "currentLevel", (ptrdiff_t)(&((idLight *)0)->currentLevel), sizeof( ((idLight *)0)->currentLevel ) },
	{ "idVec3", "baseColor", (ptrdiff_t)(&((idLight *)0)->baseColor), sizeof( ((idLight *)0)->baseColor ) },
	{ "bool", "breakOnTrigger", (ptrdiff_t)(&((idLight *)0)->breakOnTrigger), sizeof( ((idLight *)0)->breakOnTrigger ) },
	{ "int", "count", (ptrdiff_t)(&((idLight *)0)->count), sizeof( ((idLight *)0)->count ) },
	{ "int", "triggercount", (ptrdiff_t)(&((idLight *)0)->triggercount), sizeof( ((idLight *)0)->triggercount ) },
	{ "idEntity *", "lightParent", (ptrdiff_t)(&((idLight *)0)->lightParent), sizeof( ((idLight *)0)->lightParent ) },
	{ "idList < idEntityPtr < idEntity > >", "switchList", (ptrdiff_t)(&((idLight *)0)->switchList), sizeof( ((idLight *)0)->switchList ) },
	{ "float", "chanceNegativeBark", (ptrdiff_t)(&((idLight *)0)->chanceNegativeBark), sizeof( ((idLight *)0)->chanceNegativeBark ) },
	{ "int", "whenTurnedOff", (ptrdiff_t)(&((idLight *)0)->whenTurnedOff), sizeof( ((idLight *)0)->whenTurnedOff ) },
	{ "int", "nextTimeLightOutBark", (ptrdiff_t)(&((idLight *)0)->nextTimeLightOutBark), sizeof( ((idLight *)0)->nextTimeLightOutBark ) },
	{ "int", "relightAfter", (ptrdiff_t)(&((idLight *)0)->relightAfter), sizeof( ((idLight *)0)->relightAfter ) },
	{ "float", "nextTimeVerticalCheck", (ptrdiff_t)(&((idLight *)0)->nextTimeVerticalCheck), sizeof( ((idLight *)0)->nextTimeVerticalCheck ) },
	{ "bool", "smoking", (ptrdiff_t)(&((idLight *)0)->smoking), sizeof( ((idLight *)0)->smoking ) },
	{ "int", "whenToDouse", (ptrdiff_t)(&((idLight *)0)->whenToDouse), sizeof( ((idLight *)0)->whenToDouse ) },
	{ "bool", "startedOff", (ptrdiff_t)(&((idLight *)0)->startedOff), sizeof( ((idLight *)0)->startedOff ) },
	{ "idVec4", "fadeFrom", (ptrdiff_t)(&((idLight *)0)->fadeFrom), sizeof( ((idLight *)0)->fadeFrom ) },
	{ "idVec4", "fadeTo", (ptrdiff_t)(&((idLight *)0)->fadeTo), sizeof( ((idLight *)0)->fadeTo ) },
	{ "int", "fadeStart", (ptrdiff_t)(&((idLight *)0)->fadeStart), sizeof( ((idLight *)0)->fadeStart ) },
	{ "int", "fadeEnd", (ptrdiff_t)(&((idLight *)0)->fadeEnd), sizeof( ((idLight *)0)->fadeEnd ) },
	{ "bool", "soundWasPlaying", (ptrdiff_t)(&((idLight *)0)->soundWasPlaying), sizeof( ((idLight *)0)->soundWasPlaying ) },
	{ "idList < AIBarks >", "aiBarks", (ptrdiff_t)(&((idLight *)0)->aiBarks), sizeof( ((idLight *)0)->aiBarks ) },
	{ "const idMaterial *", "m_BlendlightTexture", (ptrdiff_t)(&((idLight *)0)->m_BlendlightTexture), sizeof( ((idLight *)0)->m_BlendlightTexture ) },
	{ "float", "m_MaxLightRadius", (ptrdiff_t)(&((idLight *)0)->m_MaxLightRadius), sizeof( ((idLight *)0)->m_MaxLightRadius ) },
	{ "bool", "beingRelit", (ptrdiff_t)(&((idLight *)0)->beingRelit), sizeof( ((idLight *)0)->beingRelit ) },
	{ "int", "LASAreaIndex", (ptrdiff_t)(&((idLight *)0)->LASAreaIndex), sizeof( ((idLight *)0)->LASAreaIndex ) },
	{ NULL, 0 }
};

static classVariableInfo_t idWorldspawn_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idItem_typeInfo[] = {
	{ "int", "ownerTeam", (ptrdiff_t)(&((idItem *)0)->ownerTeam), sizeof( ((idItem *)0)->ownerTeam ) },
	{ "idVec3", "orgOrigin", (ptrdiff_t)(&((idItem *)0)->orgOrigin), sizeof( ((idItem *)0)->orgOrigin ) },
	{ "bool", "spin", (ptrdiff_t)(&((idItem *)0)->spin), sizeof( ((idItem *)0)->spin ) },
	{ "bool", "pulse", (ptrdiff_t)(&((idItem *)0)->pulse), sizeof( ((idItem *)0)->pulse ) },
	{ "bool", "canPickUp", (ptrdiff_t)(&((idItem *)0)->canPickUp), sizeof( ((idItem *)0)->canPickUp ) },
	{ "float", "noticeabilityIfAbsent", (ptrdiff_t)(&((idItem *)0)->noticeabilityIfAbsent), sizeof( ((idItem *)0)->noticeabilityIfAbsent ) },
	{ "bool", "b_orgOriginSet", (ptrdiff_t)(&((idItem *)0)->b_orgOriginSet), sizeof( ((idItem *)0)->b_orgOriginSet ) },
	{ "idEntityPtr < idEntity >", "absenceEntityPtr", (ptrdiff_t)(&((idItem *)0)->absenceEntityPtr), sizeof( ((idItem *)0)->absenceEntityPtr ) },
	{ "int", "itemShellHandle", (ptrdiff_t)(&((idItem *)0)->itemShellHandle), sizeof( ((idItem *)0)->itemShellHandle ) },
	{ "const idMaterial *", "shellMaterial", (ptrdiff_t)(&((idItem *)0)->shellMaterial), sizeof( ((idItem *)0)->shellMaterial ) },
	{ "mutable bool", "inView", (ptrdiff_t)(&((idItem *)0)->inView), sizeof( ((idItem *)0)->inView ) },
	{ "mutable int", "inViewTime", (ptrdiff_t)(&((idItem *)0)->inViewTime), sizeof( ((idItem *)0)->inViewTime ) },
	{ "mutable int", "lastCycle", (ptrdiff_t)(&((idItem *)0)->lastCycle), sizeof( ((idItem *)0)->lastCycle ) },
	{ "mutable int", "lastRenderViewTime", (ptrdiff_t)(&((idItem *)0)->lastRenderViewTime), sizeof( ((idItem *)0)->lastRenderViewTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMoveableItem_typeInfo[] = {
	{ "idPhysics_RigidBody", "physicsObj", (ptrdiff_t)(&((idMoveableItem *)0)->physicsObj), sizeof( ((idMoveableItem *)0)->physicsObj ) },
	{ "idClipModel *", "trigger", (ptrdiff_t)(&((idMoveableItem *)0)->trigger), sizeof( ((idMoveableItem *)0)->trigger ) },
	{ "const idDeclParticle *", "smoke", (ptrdiff_t)(&((idMoveableItem *)0)->smoke), sizeof( ((idMoveableItem *)0)->smoke ) },
	{ "int", "smokeTime", (ptrdiff_t)(&((idMoveableItem *)0)->smokeTime), sizeof( ((idMoveableItem *)0)->smokeTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t screenBlob_t_typeInfo[] = {
	{ "const idMaterial *", "material", (ptrdiff_t)(&((screenBlob_t *)0)->material), sizeof( ((screenBlob_t *)0)->material ) },
	{ "float", "x", (ptrdiff_t)(&((screenBlob_t *)0)->x), sizeof( ((screenBlob_t *)0)->x ) },
	{ "float", "y", (ptrdiff_t)(&((screenBlob_t *)0)->y), sizeof( ((screenBlob_t *)0)->y ) },
	{ "float", "w", (ptrdiff_t)(&((screenBlob_t *)0)->w), sizeof( ((screenBlob_t *)0)->w ) },
	{ "float", "h", (ptrdiff_t)(&((screenBlob_t *)0)->h), sizeof( ((screenBlob_t *)0)->h ) },
	{ "float", "s1", (ptrdiff_t)(&((screenBlob_t *)0)->s1), sizeof( ((screenBlob_t *)0)->s1 ) },
	{ "float", "t1", (ptrdiff_t)(&((screenBlob_t *)0)->t1), sizeof( ((screenBlob_t *)0)->t1 ) },
	{ "float", "s2", (ptrdiff_t)(&((screenBlob_t *)0)->s2), sizeof( ((screenBlob_t *)0)->s2 ) },
	{ "float", "t2", (ptrdiff_t)(&((screenBlob_t *)0)->t2), sizeof( ((screenBlob_t *)0)->t2 ) },
	{ "int", "finishTime", (ptrdiff_t)(&((screenBlob_t *)0)->finishTime), sizeof( ((screenBlob_t *)0)->finishTime ) },
	{ "int", "startFadeTime", (ptrdiff_t)(&((screenBlob_t *)0)->startFadeTime), sizeof( ((screenBlob_t *)0)->startFadeTime ) },
	{ "float", "driftAmount", (ptrdiff_t)(&((screenBlob_t *)0)->driftAmount), sizeof( ((screenBlob_t *)0)->driftAmount ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerView_dnImageWrapper_typeInfo[] = {
	{ "idStr", "m_strImage", (ptrdiff_t)(&((idPlayerView::dnImageWrapper *)0)->m_strImage), sizeof( ((idPlayerView::dnImageWrapper *)0)->m_strImage ) },
	{ "const idMaterial *", "m_matImage", (ptrdiff_t)(&((idPlayerView::dnImageWrapper *)0)->m_matImage), sizeof( ((idPlayerView::dnImageWrapper *)0)->m_matImage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerView_dnPostProcessManager_typeInfo[] = {
	{ "int", "m_ImageAnisotropyHandle", (ptrdiff_t)(&((idPlayerView::dnPostProcessManager *)0)->m_ImageAnisotropyHandle), sizeof( ((idPlayerView::dnPostProcessManager *)0)->m_ImageAnisotropyHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerView_typeInfo[] = {
	{ "screenBlob_t[8]", "screenBlobs", (ptrdiff_t)(&((idPlayerView *)0)->screenBlobs), sizeof( ((idPlayerView *)0)->screenBlobs ) },
	{ "int", "dvFinishTime", (ptrdiff_t)(&((idPlayerView *)0)->dvFinishTime), sizeof( ((idPlayerView *)0)->dvFinishTime ) },
	{ "const idMaterial *", "dvMaterial", (ptrdiff_t)(&((idPlayerView *)0)->dvMaterial), sizeof( ((idPlayerView *)0)->dvMaterial ) },
	{ "int", "kickFinishTime", (ptrdiff_t)(&((idPlayerView *)0)->kickFinishTime), sizeof( ((idPlayerView *)0)->kickFinishTime ) },
	{ "idAngles", "kickAngles", (ptrdiff_t)(&((idPlayerView *)0)->kickAngles), sizeof( ((idPlayerView *)0)->kickAngles ) },
	{ "dnPostProcessManager", "m_postProcessManager", (ptrdiff_t)(&((idPlayerView *)0)->m_postProcessManager), sizeof( ((idPlayerView *)0)->m_postProcessManager ) },
	{ "const idMaterial *", "tunnelMaterial", (ptrdiff_t)(&((idPlayerView *)0)->tunnelMaterial), sizeof( ((idPlayerView *)0)->tunnelMaterial ) },
	{ "const idMaterial *", "bloodSprayMaterial", (ptrdiff_t)(&((idPlayerView *)0)->bloodSprayMaterial), sizeof( ((idPlayerView *)0)->bloodSprayMaterial ) },
	{ "const idMaterial *", "lagoMaterial", (ptrdiff_t)(&((idPlayerView *)0)->lagoMaterial), sizeof( ((idPlayerView *)0)->lagoMaterial ) },
	{ "float", "lastDamageTime", (ptrdiff_t)(&((idPlayerView *)0)->lastDamageTime), sizeof( ((idPlayerView *)0)->lastDamageTime ) },
	{ "idVec4", "fadeColor", (ptrdiff_t)(&((idPlayerView *)0)->fadeColor), sizeof( ((idPlayerView *)0)->fadeColor ) },
	{ "idVec4", "fadeToColor", (ptrdiff_t)(&((idPlayerView *)0)->fadeToColor), sizeof( ((idPlayerView *)0)->fadeToColor ) },
	{ "idVec4", "fadeFromColor", (ptrdiff_t)(&((idPlayerView *)0)->fadeFromColor), sizeof( ((idPlayerView *)0)->fadeFromColor ) },
	{ "float", "fadeRate", (ptrdiff_t)(&((idPlayerView *)0)->fadeRate), sizeof( ((idPlayerView *)0)->fadeRate ) },
	{ "int", "fadeTime", (ptrdiff_t)(&((idPlayerView *)0)->fadeTime), sizeof( ((idPlayerView *)0)->fadeTime ) },
	{ "idAngles", "shakeAng", (ptrdiff_t)(&((idPlayerView *)0)->shakeAng), sizeof( ((idPlayerView *)0)->shakeAng ) },
	{ "idPlayer *", "player", (ptrdiff_t)(&((idPlayerView *)0)->player), sizeof( ((idPlayerView *)0)->player ) },
	{ "renderView_t", "view", (ptrdiff_t)(&((idPlayerView *)0)->view), sizeof( ((idPlayerView *)0)->view ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayerIcon_typeInfo[] = {
	{ "playerIconType_t", "iconType", (ptrdiff_t)(&((idPlayerIcon *)0)->iconType), sizeof( ((idPlayerIcon *)0)->iconType ) },
	{ "renderEntity_t", "renderEnt", (ptrdiff_t)(&((idPlayerIcon *)0)->renderEnt), sizeof( ((idPlayerIcon *)0)->renderEnt ) },
	{ "qhandle_t", "iconHandle", (ptrdiff_t)(&((idPlayerIcon *)0)->iconHandle), sizeof( ((idPlayerIcon *)0)->iconHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t ButtonStateTracker_typeInfo[] = {
	{ "idPlayer *", "_owner", (ptrdiff_t)(&((ButtonStateTracker *)0)->_owner), sizeof( ((ButtonStateTracker *)0)->_owner ) },
	{ "ButtonHoldTimeMap", "_buttons", (ptrdiff_t)(&((ButtonStateTracker *)0)->_buttons), sizeof( ((ButtonStateTracker *)0)->_buttons ) },
	{ "int", "_lastCheckTime", (ptrdiff_t)(&((ButtonStateTracker *)0)->_lastCheckTime), sizeof( ((ButtonStateTracker *)0)->_lastCheckTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idListener_typeInfo[] = {
	{ "int", "mode", (ptrdiff_t)(&((idListener *)0)->mode), sizeof( ((idListener *)0)->mode ) },
	{ "int", "loss", (ptrdiff_t)(&((idListener *)0)->loss), sizeof( ((idListener *)0)->loss ) },
	{ NULL, 0 }
};

static classVariableInfo_t CFrobHelper_typeInfo[] = {
	{ "bool", "m_bShouldBeDisplayed", (ptrdiff_t)(&((CFrobHelper *)0)->m_bShouldBeDisplayed), sizeof( ((CFrobHelper *)0)->m_bShouldBeDisplayed ) },
	{ "bool", "m_bReachedTargetAlpha", (ptrdiff_t)(&((CFrobHelper *)0)->m_bReachedTargetAlpha), sizeof( ((CFrobHelper *)0)->m_bReachedTargetAlpha ) },
	{ "float", "m_fCurrentAlpha", (ptrdiff_t)(&((CFrobHelper *)0)->m_fCurrentAlpha), sizeof( ((CFrobHelper *)0)->m_fCurrentAlpha ) },
	{ "float", "m_fLastStateChangeAlpha", (ptrdiff_t)(&((CFrobHelper *)0)->m_fLastStateChangeAlpha), sizeof( ((CFrobHelper *)0)->m_fLastStateChangeAlpha ) },
	{ "int", "m_iLastStateChangeTime", (ptrdiff_t)(&((CFrobHelper *)0)->m_iLastStateChangeTime), sizeof( ((CFrobHelper *)0)->m_iLastStateChangeTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t SMouseGesture_typeInfo[] = {
	{ "bool", "bActive", (ptrdiff_t)(&((SMouseGesture *)0)->bActive), sizeof( ((SMouseGesture *)0)->bActive ) },
	{ "EMouseTest", "test", (ptrdiff_t)(&((SMouseGesture *)0)->test), sizeof( ((SMouseGesture *)0)->test ) },
	{ "bool", "bInverted", (ptrdiff_t)(&((SMouseGesture *)0)->bInverted), sizeof( ((SMouseGesture *)0)->bInverted ) },
	{ "int", "key", (ptrdiff_t)(&((SMouseGesture *)0)->key), sizeof( ((SMouseGesture *)0)->key ) },
	{ "int", "thresh", (ptrdiff_t)(&((SMouseGesture *)0)->thresh), sizeof( ((SMouseGesture *)0)->thresh ) },
	{ "int", "DecideTime", (ptrdiff_t)(&((SMouseGesture *)0)->DecideTime), sizeof( ((SMouseGesture *)0)->DecideTime ) },
	{ "int", "DeadTime", (ptrdiff_t)(&((SMouseGesture *)0)->DeadTime), sizeof( ((SMouseGesture *)0)->DeadTime ) },
	{ "int", "started", (ptrdiff_t)(&((SMouseGesture *)0)->started), sizeof( ((SMouseGesture *)0)->started ) },
	{ "idVec2", "StartPos", (ptrdiff_t)(&((SMouseGesture *)0)->StartPos), sizeof( ((SMouseGesture *)0)->StartPos ) },
	{ "idVec2", "motion", (ptrdiff_t)(&((SMouseGesture *)0)->motion), sizeof( ((SMouseGesture *)0)->motion ) },
	{ "EMouseDir", "result", (ptrdiff_t)(&((SMouseGesture *)0)->result), sizeof( ((SMouseGesture *)0)->result ) },
	{ NULL, 0 }
};

static classVariableInfo_t loggedAccel_t_typeInfo[] = {
	{ "int", "time", (ptrdiff_t)(&((loggedAccel_t *)0)->time), sizeof( ((loggedAccel_t *)0)->time ) },
	{ "idVec3", "dir", (ptrdiff_t)(&((loggedAccel_t *)0)->dir), sizeof( ((loggedAccel_t *)0)->dir ) },
	{ NULL, 0 }
};

static classVariableInfo_t aasLocation_t_typeInfo[] = {
	{ "int", "areaNum", (ptrdiff_t)(&((aasLocation_t *)0)->areaNum), sizeof( ((aasLocation_t *)0)->areaNum ) },
	{ "idVec3", "pos", (ptrdiff_t)(&((aasLocation_t *)0)->pos), sizeof( ((aasLocation_t *)0)->pos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlayer_typeInfo[] = {
	{ "usercmd_t", "usercmd", (ptrdiff_t)(&((idPlayer *)0)->usercmd), sizeof( ((idPlayer *)0)->usercmd ) },
	{ "idPlayerView", "playerView", (ptrdiff_t)(&((idPlayer *)0)->playerView), sizeof( ((idPlayer *)0)->playerView ) },
	{ "bool", "noclip", (ptrdiff_t)(&((idPlayer *)0)->noclip), sizeof( ((idPlayer *)0)->noclip ) },
	{ "bool", "godmode", (ptrdiff_t)(&((idPlayer *)0)->godmode), sizeof( ((idPlayer *)0)->godmode ) },
	{ "bool", "spawnAnglesSet", (ptrdiff_t)(&((idPlayer *)0)->spawnAnglesSet), sizeof( ((idPlayer *)0)->spawnAnglesSet ) },
	{ "idAngles", "spawnAngles", (ptrdiff_t)(&((idPlayer *)0)->spawnAngles), sizeof( ((idPlayer *)0)->spawnAngles ) },
	{ "idAngles", "viewAngles", (ptrdiff_t)(&((idPlayer *)0)->viewAngles), sizeof( ((idPlayer *)0)->viewAngles ) },
	{ "idAngles", "cmdAngles", (ptrdiff_t)(&((idPlayer *)0)->cmdAngles), sizeof( ((idPlayer *)0)->cmdAngles ) },
	{ "int", "buttonMask", (ptrdiff_t)(&((idPlayer *)0)->buttonMask), sizeof( ((idPlayer *)0)->buttonMask ) },
	{ "int", "oldButtons", (ptrdiff_t)(&((idPlayer *)0)->oldButtons), sizeof( ((idPlayer *)0)->oldButtons ) },
	{ "int", "oldFlags", (ptrdiff_t)(&((idPlayer *)0)->oldFlags), sizeof( ((idPlayer *)0)->oldFlags ) },
	{ "int", "lastHitTime", (ptrdiff_t)(&((idPlayer *)0)->lastHitTime), sizeof( ((idPlayer *)0)->lastHitTime ) },
	{ "int", "lastSndHitTime", (ptrdiff_t)(&((idPlayer *)0)->lastSndHitTime), sizeof( ((idPlayer *)0)->lastSndHitTime ) },
	{ "int", "lockpickHUD", (ptrdiff_t)(&((idPlayer *)0)->lockpickHUD), sizeof( ((idPlayer *)0)->lockpickHUD ) },
	{ "bool", "hasLanded", (ptrdiff_t)(&((idPlayer *)0)->hasLanded), sizeof( ((idPlayer *)0)->hasLanded ) },
	{ "idScriptBool", "AI_FORWARD", (ptrdiff_t)(&((idPlayer *)0)->AI_FORWARD), sizeof( ((idPlayer *)0)->AI_FORWARD ) },
	{ "idScriptBool", "AI_BACKWARD", (ptrdiff_t)(&((idPlayer *)0)->AI_BACKWARD), sizeof( ((idPlayer *)0)->AI_BACKWARD ) },
	{ "idScriptBool", "AI_STRAFE_LEFT", (ptrdiff_t)(&((idPlayer *)0)->AI_STRAFE_LEFT), sizeof( ((idPlayer *)0)->AI_STRAFE_LEFT ) },
	{ "idScriptBool", "AI_STRAFE_RIGHT", (ptrdiff_t)(&((idPlayer *)0)->AI_STRAFE_RIGHT), sizeof( ((idPlayer *)0)->AI_STRAFE_RIGHT ) },
	{ "idScriptBool", "AI_ATTACK_HELD", (ptrdiff_t)(&((idPlayer *)0)->AI_ATTACK_HELD), sizeof( ((idPlayer *)0)->AI_ATTACK_HELD ) },
	{ "idScriptBool", "AI_BLOCK_HELD", (ptrdiff_t)(&((idPlayer *)0)->AI_BLOCK_HELD), sizeof( ((idPlayer *)0)->AI_BLOCK_HELD ) },
	{ "idScriptBool", "AI_WEAPON_FIRED", (ptrdiff_t)(&((idPlayer *)0)->AI_WEAPON_FIRED), sizeof( ((idPlayer *)0)->AI_WEAPON_FIRED ) },
	{ "idScriptBool", "AI_WEAPON_BLOCKED", (ptrdiff_t)(&((idPlayer *)0)->AI_WEAPON_BLOCKED), sizeof( ((idPlayer *)0)->AI_WEAPON_BLOCKED ) },
	{ "idScriptBool", "AI_JUMP", (ptrdiff_t)(&((idPlayer *)0)->AI_JUMP), sizeof( ((idPlayer *)0)->AI_JUMP ) },
	{ "idScriptBool", "AI_CROUCH", (ptrdiff_t)(&((idPlayer *)0)->AI_CROUCH), sizeof( ((idPlayer *)0)->AI_CROUCH ) },
	{ "idScriptBool", "AI_ONGROUND", (ptrdiff_t)(&((idPlayer *)0)->AI_ONGROUND), sizeof( ((idPlayer *)0)->AI_ONGROUND ) },
	{ "idScriptBool", "AI_ONLADDER", (ptrdiff_t)(&((idPlayer *)0)->AI_ONLADDER), sizeof( ((idPlayer *)0)->AI_ONLADDER ) },
	{ "idScriptInt", "AI_INWATER", (ptrdiff_t)(&((idPlayer *)0)->AI_INWATER), sizeof( ((idPlayer *)0)->AI_INWATER ) },
	{ "idScriptBool", "AI_RUN", (ptrdiff_t)(&((idPlayer *)0)->AI_RUN), sizeof( ((idPlayer *)0)->AI_RUN ) },
	{ "idScriptBool", "AI_PAIN", (ptrdiff_t)(&((idPlayer *)0)->AI_PAIN), sizeof( ((idPlayer *)0)->AI_PAIN ) },
	{ "idScriptBool", "AI_HARDLANDING", (ptrdiff_t)(&((idPlayer *)0)->AI_HARDLANDING), sizeof( ((idPlayer *)0)->AI_HARDLANDING ) },
	{ "idScriptBool", "AI_SOFTLANDING", (ptrdiff_t)(&((idPlayer *)0)->AI_SOFTLANDING), sizeof( ((idPlayer *)0)->AI_SOFTLANDING ) },
	{ "idScriptBool", "AI_RELOAD", (ptrdiff_t)(&((idPlayer *)0)->AI_RELOAD), sizeof( ((idPlayer *)0)->AI_RELOAD ) },
	{ "idScriptBool", "AI_TELEPORT", (ptrdiff_t)(&((idPlayer *)0)->AI_TELEPORT), sizeof( ((idPlayer *)0)->AI_TELEPORT ) },
	{ "idScriptBool", "AI_TURN_LEFT", (ptrdiff_t)(&((idPlayer *)0)->AI_TURN_LEFT), sizeof( ((idPlayer *)0)->AI_TURN_LEFT ) },
	{ "idScriptBool", "AI_TURN_RIGHT", (ptrdiff_t)(&((idPlayer *)0)->AI_TURN_RIGHT), sizeof( ((idPlayer *)0)->AI_TURN_RIGHT ) },
	{ "idScriptBool", "AI_LEAN_LEFT", (ptrdiff_t)(&((idPlayer *)0)->AI_LEAN_LEFT), sizeof( ((idPlayer *)0)->AI_LEAN_LEFT ) },
	{ "idScriptBool", "AI_LEAN_RIGHT", (ptrdiff_t)(&((idPlayer *)0)->AI_LEAN_RIGHT), sizeof( ((idPlayer *)0)->AI_LEAN_RIGHT ) },
	{ "idScriptBool", "AI_LEAN_FORWARD", (ptrdiff_t)(&((idPlayer *)0)->AI_LEAN_FORWARD), sizeof( ((idPlayer *)0)->AI_LEAN_FORWARD ) },
	{ "bool", "m_bDamagedThisFrame", (ptrdiff_t)(&((idPlayer *)0)->m_bDamagedThisFrame), sizeof( ((idPlayer *)0)->m_bDamagedThisFrame ) },
	{ "idScriptBool", "AI_CREEP", (ptrdiff_t)(&((idPlayer *)0)->AI_CREEP), sizeof( ((idPlayer *)0)->AI_CREEP ) },
	{ "ButtonStateTracker", "m_ButtonStateTracker", (ptrdiff_t)(&((idPlayer *)0)->m_ButtonStateTracker), sizeof( ((idPlayer *)0)->m_ButtonStateTracker ) },
	{ "SMouseGesture", "m_MouseGesture", (ptrdiff_t)(&((idPlayer *)0)->m_MouseGesture), sizeof( ((idPlayer *)0)->m_MouseGesture ) },
	{ "idEntityPtr < idEntity >", "m_FrobPressedTarget", (ptrdiff_t)(&((idPlayer *)0)->m_FrobPressedTarget), sizeof( ((idPlayer *)0)->m_FrobPressedTarget ) },
	{ "idEntityPtr < idEntity >", "m_FrobEntity", (ptrdiff_t)(&((idPlayer *)0)->m_FrobEntity), sizeof( ((idPlayer *)0)->m_FrobEntity ) },
	{ "jointHandle_t", "m_FrobJoint", (ptrdiff_t)(&((idPlayer *)0)->m_FrobJoint), sizeof( ((idPlayer *)0)->m_FrobJoint ) },
	{ "int", "m_FrobID", (ptrdiff_t)(&((idPlayer *)0)->m_FrobID), sizeof( ((idPlayer *)0)->m_FrobID ) },
	{ "trace_t", "m_FrobTrace", (ptrdiff_t)(&((idPlayer *)0)->m_FrobTrace), sizeof( ((idPlayer *)0)->m_FrobTrace ) },
	{ "bool", "m_bFrobOnlyUsedByInv", (ptrdiff_t)(&((idPlayer *)0)->m_bFrobOnlyUsedByInv), sizeof( ((idPlayer *)0)->m_bFrobOnlyUsedByInv ) },
	{ "bool", "m_bGrabberActive", (ptrdiff_t)(&((idPlayer *)0)->m_bGrabberActive), sizeof( ((idPlayer *)0)->m_bGrabberActive ) },
	{ "bool", "m_bShoulderingBody", (ptrdiff_t)(&((idPlayer *)0)->m_bShoulderingBody), sizeof( ((idPlayer *)0)->m_bShoulderingBody ) },
	{ "bool", "m_IdealCrouchState", (ptrdiff_t)(&((idPlayer *)0)->m_IdealCrouchState), sizeof( ((idPlayer *)0)->m_IdealCrouchState ) },
	{ "bool", "m_CrouchIntent", (ptrdiff_t)(&((idPlayer *)0)->m_CrouchIntent), sizeof( ((idPlayer *)0)->m_CrouchIntent ) },
	{ "CFrobHelper", "m_FrobHelper", (ptrdiff_t)(&((idPlayer *)0)->m_FrobHelper), sizeof( ((idPlayer *)0)->m_FrobHelper ) },
	{ "int", "m_LeanButtonTimeStamp", (ptrdiff_t)(&((idPlayer *)0)->m_LeanButtonTimeStamp), sizeof( ((idPlayer *)0)->m_LeanButtonTimeStamp ) },
	{ "idEntityPtr < idWeapon >", "weapon", (ptrdiff_t)(&((idPlayer *)0)->weapon), sizeof( ((idPlayer *)0)->weapon ) },
	{ "idUserInterface *", "hud", (ptrdiff_t)(&((idPlayer *)0)->hud), sizeof( ((idPlayer *)0)->hud ) },
	{ "bool", "inventoryHUDNeedsUpdate", (ptrdiff_t)(&((idPlayer *)0)->inventoryHUDNeedsUpdate), sizeof( ((idPlayer *)0)->inventoryHUDNeedsUpdate ) },
	{ "idList < idStr >", "hudMessages", (ptrdiff_t)(&((idPlayer *)0)->hudMessages), sizeof( ((idPlayer *)0)->hudMessages ) },
	{ "idList < idStr >", "inventoryPickedUpMessages", (ptrdiff_t)(&((idPlayer *)0)->inventoryPickedUpMessages), sizeof( ((idPlayer *)0)->inventoryPickedUpMessages ) },
	{ "int", "weapon_fists", (ptrdiff_t)(&((idPlayer *)0)->weapon_fists), sizeof( ((idPlayer *)0)->weapon_fists ) },
	{ "int", "lastDmgTime", (ptrdiff_t)(&((idPlayer *)0)->lastDmgTime), sizeof( ((idPlayer *)0)->lastDmgTime ) },
	{ "int", "deathClearContentsTime", (ptrdiff_t)(&((idPlayer *)0)->deathClearContentsTime), sizeof( ((idPlayer *)0)->deathClearContentsTime ) },
	{ "bool", "doingDeathSkin", (ptrdiff_t)(&((idPlayer *)0)->doingDeathSkin), sizeof( ((idPlayer *)0)->doingDeathSkin ) },
	{ "float", "stamina", (ptrdiff_t)(&((idPlayer *)0)->stamina), sizeof( ((idPlayer *)0)->stamina ) },
	{ "float", "healthPool", (ptrdiff_t)(&((idPlayer *)0)->healthPool), sizeof( ((idPlayer *)0)->healthPool ) },
	{ "int", "nextHealthPulse", (ptrdiff_t)(&((idPlayer *)0)->nextHealthPulse), sizeof( ((idPlayer *)0)->nextHealthPulse ) },
	{ "bool", "healthPulse", (ptrdiff_t)(&((idPlayer *)0)->healthPulse), sizeof( ((idPlayer *)0)->healthPulse ) },
	{ "int", "healthPoolStepAmount", (ptrdiff_t)(&((idPlayer *)0)->healthPoolStepAmount), sizeof( ((idPlayer *)0)->healthPoolStepAmount ) },
	{ "int", "healthPoolTimeInterval", (ptrdiff_t)(&((idPlayer *)0)->healthPoolTimeInterval), sizeof( ((idPlayer *)0)->healthPoolTimeInterval ) },
	{ "float", "healthPoolTimeIntervalFactor", (ptrdiff_t)(&((idPlayer *)0)->healthPoolTimeIntervalFactor), sizeof( ((idPlayer *)0)->healthPoolTimeIntervalFactor ) },
	{ "bool", "hiddenWeapon", (ptrdiff_t)(&((idPlayer *)0)->hiddenWeapon), sizeof( ((idPlayer *)0)->hiddenWeapon ) },
	{ "int", "spectator", (ptrdiff_t)(&((idPlayer *)0)->spectator), sizeof( ((idPlayer *)0)->spectator ) },
	{ "idVec3", "colorBar", (ptrdiff_t)(&((idPlayer *)0)->colorBar), sizeof( ((idPlayer *)0)->colorBar ) },
	{ "int", "colorBarIndex", (ptrdiff_t)(&((idPlayer *)0)->colorBarIndex), sizeof( ((idPlayer *)0)->colorBarIndex ) },
	{ "bool", "scoreBoardOpen", (ptrdiff_t)(&((idPlayer *)0)->scoreBoardOpen), sizeof( ((idPlayer *)0)->scoreBoardOpen ) },
	{ "bool", "forceScoreBoard", (ptrdiff_t)(&((idPlayer *)0)->forceScoreBoard), sizeof( ((idPlayer *)0)->forceScoreBoard ) },
	{ "bool", "forceRespawn", (ptrdiff_t)(&((idPlayer *)0)->forceRespawn), sizeof( ((idPlayer *)0)->forceRespawn ) },
	{ "bool", "spectating", (ptrdiff_t)(&((idPlayer *)0)->spectating), sizeof( ((idPlayer *)0)->spectating ) },
	{ "int", "lastSpectateTeleport", (ptrdiff_t)(&((idPlayer *)0)->lastSpectateTeleport), sizeof( ((idPlayer *)0)->lastSpectateTeleport ) },
	{ "bool", "lastHitToggle", (ptrdiff_t)(&((idPlayer *)0)->lastHitToggle), sizeof( ((idPlayer *)0)->lastHitToggle ) },
	{ "bool", "forcedReady", (ptrdiff_t)(&((idPlayer *)0)->forcedReady), sizeof( ((idPlayer *)0)->forcedReady ) },
	{ "bool", "wantSpectate", (ptrdiff_t)(&((idPlayer *)0)->wantSpectate), sizeof( ((idPlayer *)0)->wantSpectate ) },
	{ "bool", "weaponGone", (ptrdiff_t)(&((idPlayer *)0)->weaponGone), sizeof( ((idPlayer *)0)->weaponGone ) },
	{ "bool", "useInitialSpawns", (ptrdiff_t)(&((idPlayer *)0)->useInitialSpawns), sizeof( ((idPlayer *)0)->useInitialSpawns ) },
	{ "int", "latchedTeam", (ptrdiff_t)(&((idPlayer *)0)->latchedTeam), sizeof( ((idPlayer *)0)->latchedTeam ) },
	{ "int", "tourneyRank", (ptrdiff_t)(&((idPlayer *)0)->tourneyRank), sizeof( ((idPlayer *)0)->tourneyRank ) },
	{ "int", "tourneyLine", (ptrdiff_t)(&((idPlayer *)0)->tourneyLine), sizeof( ((idPlayer *)0)->tourneyLine ) },
	{ "int", "spawnedTime", (ptrdiff_t)(&((idPlayer *)0)->spawnedTime), sizeof( ((idPlayer *)0)->spawnedTime ) },
	{ "idEntityPtr < idEntity >", "teleportEntity", (ptrdiff_t)(&((idPlayer *)0)->teleportEntity), sizeof( ((idPlayer *)0)->teleportEntity ) },
	{ "int", "teleportKiller", (ptrdiff_t)(&((idPlayer *)0)->teleportKiller), sizeof( ((idPlayer *)0)->teleportKiller ) },
	{ "bool", "lastManOver", (ptrdiff_t)(&((idPlayer *)0)->lastManOver), sizeof( ((idPlayer *)0)->lastManOver ) },
	{ "bool", "lastManPlayAgain", (ptrdiff_t)(&((idPlayer *)0)->lastManPlayAgain), sizeof( ((idPlayer *)0)->lastManPlayAgain ) },
	{ "bool", "lastManPresent", (ptrdiff_t)(&((idPlayer *)0)->lastManPresent), sizeof( ((idPlayer *)0)->lastManPresent ) },
	{ "bool", "isLagged", (ptrdiff_t)(&((idPlayer *)0)->isLagged), sizeof( ((idPlayer *)0)->isLagged ) },
	{ "bool", "isChatting", (ptrdiff_t)(&((idPlayer *)0)->isChatting), sizeof( ((idPlayer *)0)->isChatting ) },
	{ "int", "minRespawnTime", (ptrdiff_t)(&((idPlayer *)0)->minRespawnTime), sizeof( ((idPlayer *)0)->minRespawnTime ) },
	{ "int", "maxRespawnTime", (ptrdiff_t)(&((idPlayer *)0)->maxRespawnTime), sizeof( ((idPlayer *)0)->maxRespawnTime ) },
	{ "idVec3", "firstPersonViewOrigin", (ptrdiff_t)(&((idPlayer *)0)->firstPersonViewOrigin), sizeof( ((idPlayer *)0)->firstPersonViewOrigin ) },
	{ "idMat3", "firstPersonViewAxis", (ptrdiff_t)(&((idPlayer *)0)->firstPersonViewAxis), sizeof( ((idPlayer *)0)->firstPersonViewAxis ) },
	{ "idDragEntity", "dragEntity", (ptrdiff_t)(&((idPlayer *)0)->dragEntity), sizeof( ((idPlayer *)0)->dragEntity ) },
	{ "CInventoryCursorPtr", "m_WeaponCursor", (ptrdiff_t)(&((idPlayer *)0)->m_WeaponCursor), sizeof( ((idPlayer *)0)->m_WeaponCursor ) },
	{ "int", "m_MapCursorIdx", (ptrdiff_t)(&((idPlayer *)0)->m_MapCursorIdx), sizeof( ((idPlayer *)0)->m_MapCursorIdx ) },
	{ "idStr", "m_LastItemNameBeforeClear", (ptrdiff_t)(&((idPlayer *)0)->m_LastItemNameBeforeClear), sizeof( ((idPlayer *)0)->m_LastItemNameBeforeClear ) },
	{ "idEntityPtr < idEntity >", "m_ActiveInventoryMapEnt", (ptrdiff_t)(&((idPlayer *)0)->m_ActiveInventoryMapEnt), sizeof( ((idPlayer *)0)->m_ActiveInventoryMapEnt ) },
	{ "int", "m_WaitUntilReadyGuiHandle", (ptrdiff_t)(&((idPlayer *)0)->m_WaitUntilReadyGuiHandle), sizeof( ((idPlayer *)0)->m_WaitUntilReadyGuiHandle ) },
	{ "int", "m_WaitUntilReadyGuiTime", (ptrdiff_t)(&((idPlayer *)0)->m_WaitUntilReadyGuiTime), sizeof( ((idPlayer *)0)->m_WaitUntilReadyGuiTime ) },
	{ "int", "timeEvidenceIntruders", (ptrdiff_t)(&((idPlayer *)0)->timeEvidenceIntruders), sizeof( ((idPlayer *)0)->timeEvidenceIntruders ) },
	{ "int", "savePermissions", (ptrdiff_t)(&((idPlayer *)0)->savePermissions), sizeof( ((idPlayer *)0)->savePermissions ) },
	{ "idEntityPtr < idListener >", "m_Listener", (ptrdiff_t)(&((idPlayer *)0)->m_Listener), sizeof( ((idPlayer *)0)->m_Listener ) },
	{ "int", "usePeekView", (ptrdiff_t)(&((idPlayer *)0)->usePeekView), sizeof( ((idPlayer *)0)->usePeekView ) },
	{ "idVec3", "normalViewOrigin", (ptrdiff_t)(&((idPlayer *)0)->normalViewOrigin), sizeof( ((idPlayer *)0)->normalViewOrigin ) },
	{ "idVec3", "peekEntityViewOrigin", (ptrdiff_t)(&((idPlayer *)0)->peekEntityViewOrigin), sizeof( ((idPlayer *)0)->peekEntityViewOrigin ) },
	{ "jointHandle_t", "hipJoint", (ptrdiff_t)(&((idPlayer *)0)->hipJoint), sizeof( ((idPlayer *)0)->hipJoint ) },
	{ "jointHandle_t", "chestJoint", (ptrdiff_t)(&((idPlayer *)0)->chestJoint), sizeof( ((idPlayer *)0)->chestJoint ) },
	{ "jointHandle_t", "headJoint", (ptrdiff_t)(&((idPlayer *)0)->headJoint), sizeof( ((idPlayer *)0)->headJoint ) },
	{ "idPhysics_Player", "physicsObj", (ptrdiff_t)(&((idPlayer *)0)->physicsObj), sizeof( ((idPlayer *)0)->physicsObj ) },
	{ "idList < aasLocation_t >", "aasLocation", (ptrdiff_t)(&((idPlayer *)0)->aasLocation), sizeof( ((idPlayer *)0)->aasLocation ) },
	{ "int", "bobFoot", (ptrdiff_t)(&((idPlayer *)0)->bobFoot), sizeof( ((idPlayer *)0)->bobFoot ) },
	{ "float", "bobFrac", (ptrdiff_t)(&((idPlayer *)0)->bobFrac), sizeof( ((idPlayer *)0)->bobFrac ) },
	{ "float", "bobfracsin", (ptrdiff_t)(&((idPlayer *)0)->bobfracsin), sizeof( ((idPlayer *)0)->bobfracsin ) },
	{ "int", "bobCycle", (ptrdiff_t)(&((idPlayer *)0)->bobCycle), sizeof( ((idPlayer *)0)->bobCycle ) },
	{ "float", "xyspeed", (ptrdiff_t)(&((idPlayer *)0)->xyspeed), sizeof( ((idPlayer *)0)->xyspeed ) },
	{ "int", "stepUpTime", (ptrdiff_t)(&((idPlayer *)0)->stepUpTime), sizeof( ((idPlayer *)0)->stepUpTime ) },
	{ "float", "stepUpDelta", (ptrdiff_t)(&((idPlayer *)0)->stepUpDelta), sizeof( ((idPlayer *)0)->stepUpDelta ) },
	{ "float", "idealLegsYaw", (ptrdiff_t)(&((idPlayer *)0)->idealLegsYaw), sizeof( ((idPlayer *)0)->idealLegsYaw ) },
	{ "float", "legsYaw", (ptrdiff_t)(&((idPlayer *)0)->legsYaw), sizeof( ((idPlayer *)0)->legsYaw ) },
	{ "bool", "legsForward", (ptrdiff_t)(&((idPlayer *)0)->legsForward), sizeof( ((idPlayer *)0)->legsForward ) },
	{ "float", "oldViewYaw", (ptrdiff_t)(&((idPlayer *)0)->oldViewYaw), sizeof( ((idPlayer *)0)->oldViewYaw ) },
	{ "idAngles", "viewBobAngles", (ptrdiff_t)(&((idPlayer *)0)->viewBobAngles), sizeof( ((idPlayer *)0)->viewBobAngles ) },
	{ "idVec3", "viewBob", (ptrdiff_t)(&((idPlayer *)0)->viewBob), sizeof( ((idPlayer *)0)->viewBob ) },
	{ "int", "landChange", (ptrdiff_t)(&((idPlayer *)0)->landChange), sizeof( ((idPlayer *)0)->landChange ) },
	{ "int", "landTime", (ptrdiff_t)(&((idPlayer *)0)->landTime), sizeof( ((idPlayer *)0)->landTime ) },
	{ "int", "lastFootstepPlaytime", (ptrdiff_t)(&((idPlayer *)0)->lastFootstepPlaytime), sizeof( ((idPlayer *)0)->lastFootstepPlaytime ) },
	{ "bool", "isPushing", (ptrdiff_t)(&((idPlayer *)0)->isPushing), sizeof( ((idPlayer *)0)->isPushing ) },
	{ "int", "currentWeapon", (ptrdiff_t)(&((idPlayer *)0)->currentWeapon), sizeof( ((idPlayer *)0)->currentWeapon ) },
	{ "int", "idealWeapon", (ptrdiff_t)(&((idPlayer *)0)->idealWeapon), sizeof( ((idPlayer *)0)->idealWeapon ) },
	{ "int", "previousWeapon", (ptrdiff_t)(&((idPlayer *)0)->previousWeapon), sizeof( ((idPlayer *)0)->previousWeapon ) },
	{ "int", "weaponSwitchTime", (ptrdiff_t)(&((idPlayer *)0)->weaponSwitchTime), sizeof( ((idPlayer *)0)->weaponSwitchTime ) },
	{ "bool", "weaponEnabled", (ptrdiff_t)(&((idPlayer *)0)->weaponEnabled), sizeof( ((idPlayer *)0)->weaponEnabled ) },
	{ "bool", "showWeaponViewModel", (ptrdiff_t)(&((idPlayer *)0)->showWeaponViewModel), sizeof( ((idPlayer *)0)->showWeaponViewModel ) },
	{ "const idDeclSkin *", "skin", (ptrdiff_t)(&((idPlayer *)0)->skin), sizeof( ((idPlayer *)0)->skin ) },
	{ "idStr", "baseSkinName", (ptrdiff_t)(&((idPlayer *)0)->baseSkinName), sizeof( ((idPlayer *)0)->baseSkinName ) },
	{ "int", "numProjectilesFired", (ptrdiff_t)(&((idPlayer *)0)->numProjectilesFired), sizeof( ((idPlayer *)0)->numProjectilesFired ) },
	{ "int", "numProjectileHits", (ptrdiff_t)(&((idPlayer *)0)->numProjectileHits), sizeof( ((idPlayer *)0)->numProjectileHits ) },
	{ "bool", "airless", (ptrdiff_t)(&((idPlayer *)0)->airless), sizeof( ((idPlayer *)0)->airless ) },
	{ "int", "airTics", (ptrdiff_t)(&((idPlayer *)0)->airTics), sizeof( ((idPlayer *)0)->airTics ) },
	{ "int", "lastAirDamage", (ptrdiff_t)(&((idPlayer *)0)->lastAirDamage), sizeof( ((idPlayer *)0)->lastAirDamage ) },
	{ "int", "lastAirCheck", (ptrdiff_t)(&((idPlayer *)0)->lastAirCheck), sizeof( ((idPlayer *)0)->lastAirCheck ) },
	{ "bool", "underWaterEffectsActive", (ptrdiff_t)(&((idPlayer *)0)->underWaterEffectsActive), sizeof( ((idPlayer *)0)->underWaterEffectsActive ) },
	{ "int", "underWaterGUIHandle", (ptrdiff_t)(&((idPlayer *)0)->underWaterGUIHandle), sizeof( ((idPlayer *)0)->underWaterGUIHandle ) },
	{ "bool", "gibDeath", (ptrdiff_t)(&((idPlayer *)0)->gibDeath), sizeof( ((idPlayer *)0)->gibDeath ) },
	{ "bool", "gibsLaunched", (ptrdiff_t)(&((idPlayer *)0)->gibsLaunched), sizeof( ((idPlayer *)0)->gibsLaunched ) },
	{ "idVec3", "gibsDir", (ptrdiff_t)(&((idPlayer *)0)->gibsDir), sizeof( ((idPlayer *)0)->gibsDir ) },
	{ "int", "m_InventoryOverlay", (ptrdiff_t)(&((idPlayer *)0)->m_InventoryOverlay), sizeof( ((idPlayer *)0)->m_InventoryOverlay ) },
	{ "int", "objectivesOverlay", (ptrdiff_t)(&((idPlayer *)0)->objectivesOverlay), sizeof( ((idPlayer *)0)->objectivesOverlay ) },
	{ "int", "inventoryGridOverlay", (ptrdiff_t)(&((idPlayer *)0)->inventoryGridOverlay), sizeof( ((idPlayer *)0)->inventoryGridOverlay ) },
	{ "int", "subtitlesOverlay", (ptrdiff_t)(&((idPlayer *)0)->subtitlesOverlay), sizeof( ((idPlayer *)0)->subtitlesOverlay ) },
	{ "idInterpolate < float >", "zoomFov", (ptrdiff_t)(&((idPlayer *)0)->zoomFov), sizeof( ((idPlayer *)0)->zoomFov ) },
	{ "idInterpolate < float >", "centerView", (ptrdiff_t)(&((idPlayer *)0)->centerView), sizeof( ((idPlayer *)0)->centerView ) },
	{ "bool", "fxFov", (ptrdiff_t)(&((idPlayer *)0)->fxFov), sizeof( ((idPlayer *)0)->fxFov ) },
	{ "float", "influenceFov", (ptrdiff_t)(&((idPlayer *)0)->influenceFov), sizeof( ((idPlayer *)0)->influenceFov ) },
	{ "int", "influenceActive", (ptrdiff_t)(&((idPlayer *)0)->influenceActive), sizeof( ((idPlayer *)0)->influenceActive ) },
	{ "idEntity *", "influenceEntity", (ptrdiff_t)(&((idPlayer *)0)->influenceEntity), sizeof( ((idPlayer *)0)->influenceEntity ) },
	{ "const idMaterial *", "influenceMaterial", (ptrdiff_t)(&((idPlayer *)0)->influenceMaterial), sizeof( ((idPlayer *)0)->influenceMaterial ) },
	{ "float", "influenceRadius", (ptrdiff_t)(&((idPlayer *)0)->influenceRadius), sizeof( ((idPlayer *)0)->influenceRadius ) },
	{ "const idDeclSkin *", "influenceSkin", (ptrdiff_t)(&((idPlayer *)0)->influenceSkin), sizeof( ((idPlayer *)0)->influenceSkin ) },
	{ "idCamera *", "privateCameraView", (ptrdiff_t)(&((idPlayer *)0)->privateCameraView), sizeof( ((idPlayer *)0)->privateCameraView ) },
	{ "idVec3", "m_PrimaryListenerLoc", (ptrdiff_t)(&((idPlayer *)0)->m_PrimaryListenerLoc), sizeof( ((idPlayer *)0)->m_PrimaryListenerLoc ) },
	{ "idVec3", "m_ListenLoc", (ptrdiff_t)(&((idPlayer *)0)->m_ListenLoc), sizeof( ((idPlayer *)0)->m_ListenLoc ) },
	{ "idVec3", "m_SecondaryListenerLoc", (ptrdiff_t)(&((idPlayer *)0)->m_SecondaryListenerLoc), sizeof( ((idPlayer *)0)->m_SecondaryListenerLoc ) },
	{ "idDict", "m_immobilization", (ptrdiff_t)(&((idPlayer *)0)->m_immobilization), sizeof( ((idPlayer *)0)->m_immobilization ) },
	{ "int", "m_immobilizationCache", (ptrdiff_t)(&((idPlayer *)0)->m_immobilizationCache), sizeof( ((idPlayer *)0)->m_immobilizationCache ) },
	{ "idDict", "m_hinderance", (ptrdiff_t)(&((idPlayer *)0)->m_hinderance), sizeof( ((idPlayer *)0)->m_hinderance ) },
	{ "float", "m_hinderanceCache", (ptrdiff_t)(&((idPlayer *)0)->m_hinderanceCache), sizeof( ((idPlayer *)0)->m_hinderanceCache ) },
	{ "idDict", "m_TurnHinderance", (ptrdiff_t)(&((idPlayer *)0)->m_TurnHinderance), sizeof( ((idPlayer *)0)->m_TurnHinderance ) },
	{ "float", "m_TurnHinderanceCache", (ptrdiff_t)(&((idPlayer *)0)->m_TurnHinderanceCache), sizeof( ((idPlayer *)0)->m_TurnHinderanceCache ) },
	{ "idDict", "m_JumpHinderance", (ptrdiff_t)(&((idPlayer *)0)->m_JumpHinderance), sizeof( ((idPlayer *)0)->m_JumpHinderance ) },
	{ "float", "m_JumpHinderanceCache", (ptrdiff_t)(&((idPlayer *)0)->m_JumpHinderanceCache), sizeof( ((idPlayer *)0)->m_JumpHinderanceCache ) },
	{ "std :: map < std :: string , int >", "m_LightgemModifierList", (ptrdiff_t)(&((idPlayer *)0)->m_LightgemModifierList), sizeof( ((idPlayer *)0)->m_LightgemModifierList ) },
	{ "int", "m_LightgemModifier", (ptrdiff_t)(&((idPlayer *)0)->m_LightgemModifier), sizeof( ((idPlayer *)0)->m_LightgemModifier ) },
	{ "idList < idLight * >", "m_LightList", (ptrdiff_t)(&((idPlayer *)0)->m_LightList), sizeof( ((idPlayer *)0)->m_LightList ) },
	{ "int", "m_LightgemValue", (ptrdiff_t)(&((idPlayer *)0)->m_LightgemValue), sizeof( ((idPlayer *)0)->m_LightgemValue ) },
	{ "float", "m_fColVal", (ptrdiff_t)(&((idPlayer *)0)->m_fColVal), sizeof( ((idPlayer *)0)->m_fColVal ) },
	{ "float", "m_fBlendColVal", (ptrdiff_t)(&((idPlayer *)0)->m_fBlendColVal), sizeof( ((idPlayer *)0)->m_fBlendColVal ) },
	{ "int", "m_LightgemInterleave", (ptrdiff_t)(&((idPlayer *)0)->m_LightgemInterleave), sizeof( ((idPlayer *)0)->m_LightgemInterleave ) },
	{ "bool", "ignoreWeaponAttack", (ptrdiff_t)(&((idPlayer *)0)->ignoreWeaponAttack), sizeof( ((idPlayer *)0)->ignoreWeaponAttack ) },
	{ "bool", "displayAASAreas", (ptrdiff_t)(&((idPlayer *)0)->displayAASAreas), sizeof( ((idPlayer *)0)->displayAASAreas ) },
	{ "idAngles[64]", "loggedViewAngles", (ptrdiff_t)(&((idPlayer *)0)->loggedViewAngles), sizeof( ((idPlayer *)0)->loggedViewAngles ) },
	{ "loggedAccel_t[16]", "loggedAccel", (ptrdiff_t)(&((idPlayer *)0)->loggedAccel), sizeof( ((idPlayer *)0)->loggedAccel ) },
	{ "int", "currentLoggedAccel", (ptrdiff_t)(&((idPlayer *)0)->currentLoggedAccel), sizeof( ((idPlayer *)0)->currentLoggedAccel ) },
	{ "idUserInterface *", "cursor", (ptrdiff_t)(&((idPlayer *)0)->cursor), sizeof( ((idPlayer *)0)->cursor ) },
	{ "int", "oldMouseX", (ptrdiff_t)(&((idPlayer *)0)->oldMouseX), sizeof( ((idPlayer *)0)->oldMouseX ) },
	{ "int", "oldMouseY", (ptrdiff_t)(&((idPlayer *)0)->oldMouseY), sizeof( ((idPlayer *)0)->oldMouseY ) },
	{ "bool", "tipUp", (ptrdiff_t)(&((idPlayer *)0)->tipUp), sizeof( ((idPlayer *)0)->tipUp ) },
	{ "int", "lastDamageDef", (ptrdiff_t)(&((idPlayer *)0)->lastDamageDef), sizeof( ((idPlayer *)0)->lastDamageDef ) },
	{ "idVec3", "lastDamageDir", (ptrdiff_t)(&((idPlayer *)0)->lastDamageDir), sizeof( ((idPlayer *)0)->lastDamageDir ) },
	{ "int", "lastDamageLocation", (ptrdiff_t)(&((idPlayer *)0)->lastDamageLocation), sizeof( ((idPlayer *)0)->lastDamageLocation ) },
	{ "int", "smoothedFrame", (ptrdiff_t)(&((idPlayer *)0)->smoothedFrame), sizeof( ((idPlayer *)0)->smoothedFrame ) },
	{ "bool", "smoothedOriginUpdated", (ptrdiff_t)(&((idPlayer *)0)->smoothedOriginUpdated), sizeof( ((idPlayer *)0)->smoothedOriginUpdated ) },
	{ "idVec3", "smoothedOrigin", (ptrdiff_t)(&((idPlayer *)0)->smoothedOrigin), sizeof( ((idPlayer *)0)->smoothedOrigin ) },
	{ "idAngles", "smoothedAngles", (ptrdiff_t)(&((idPlayer *)0)->smoothedAngles), sizeof( ((idPlayer *)0)->smoothedAngles ) },
	{ "bool", "ready", (ptrdiff_t)(&((idPlayer *)0)->ready), sizeof( ((idPlayer *)0)->ready ) },
	{ "bool", "respawning", (ptrdiff_t)(&((idPlayer *)0)->respawning), sizeof( ((idPlayer *)0)->respawning ) },
	{ "bool", "leader", (ptrdiff_t)(&((idPlayer *)0)->leader), sizeof( ((idPlayer *)0)->leader ) },
	{ "int", "lastSpectateChange", (ptrdiff_t)(&((idPlayer *)0)->lastSpectateChange), sizeof( ((idPlayer *)0)->lastSpectateChange ) },
	{ "unsigned int", "lastSnapshotSequence", (ptrdiff_t)(&((idPlayer *)0)->lastSnapshotSequence), sizeof( ((idPlayer *)0)->lastSnapshotSequence ) },
	{ "bool", "weaponCatchup", (ptrdiff_t)(&((idPlayer *)0)->weaponCatchup), sizeof( ((idPlayer *)0)->weaponCatchup ) },
	{ "bool", "selfSmooth", (ptrdiff_t)(&((idPlayer *)0)->selfSmooth), sizeof( ((idPlayer *)0)->selfSmooth ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_moveState_t_typeInfo[] = {
	{ "moveStage_t", "stage", (ptrdiff_t)(&((idMover::moveState_t *)0)->stage), sizeof( ((idMover::moveState_t *)0)->stage ) },
	{ "int", "acceleration", (ptrdiff_t)(&((idMover::moveState_t *)0)->acceleration), sizeof( ((idMover::moveState_t *)0)->acceleration ) },
	{ "int", "movetime", (ptrdiff_t)(&((idMover::moveState_t *)0)->movetime), sizeof( ((idMover::moveState_t *)0)->movetime ) },
	{ "int", "deceleration", (ptrdiff_t)(&((idMover::moveState_t *)0)->deceleration), sizeof( ((idMover::moveState_t *)0)->deceleration ) },
	{ "idVec3", "dir", (ptrdiff_t)(&((idMover::moveState_t *)0)->dir), sizeof( ((idMover::moveState_t *)0)->dir ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_rotationState_t_typeInfo[] = {
	{ "moveStage_t", "stage", (ptrdiff_t)(&((idMover::rotationState_t *)0)->stage), sizeof( ((idMover::rotationState_t *)0)->stage ) },
	{ "int", "acceleration", (ptrdiff_t)(&((idMover::rotationState_t *)0)->acceleration), sizeof( ((idMover::rotationState_t *)0)->acceleration ) },
	{ "int", "movetime", (ptrdiff_t)(&((idMover::rotationState_t *)0)->movetime), sizeof( ((idMover::rotationState_t *)0)->movetime ) },
	{ "int", "deceleration", (ptrdiff_t)(&((idMover::rotationState_t *)0)->deceleration), sizeof( ((idMover::rotationState_t *)0)->deceleration ) },
	{ "idAngles", "rot", (ptrdiff_t)(&((idMover::rotationState_t *)0)->rot), sizeof( ((idMover::rotationState_t *)0)->rot ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_typeInfo[] = {
	{ "idPhysics_Parametric", "physicsObj", (ptrdiff_t)(&((idMover *)0)->physicsObj), sizeof( ((idMover *)0)->physicsObj ) },
	{ "moveState_t", "move", (ptrdiff_t)(&((idMover *)0)->move), sizeof( ((idMover *)0)->move ) },
	{ "rotationState_t", "rot", (ptrdiff_t)(&((idMover *)0)->rot), sizeof( ((idMover *)0)->rot ) },
	{ "int", "move_thread", (ptrdiff_t)(&((idMover *)0)->move_thread), sizeof( ((idMover *)0)->move_thread ) },
	{ "int", "rotate_thread", (ptrdiff_t)(&((idMover *)0)->rotate_thread), sizeof( ((idMover *)0)->rotate_thread ) },
	{ "idAngles", "dest_angles", (ptrdiff_t)(&((idMover *)0)->dest_angles), sizeof( ((idMover *)0)->dest_angles ) },
	{ "idAngles", "angle_delta", (ptrdiff_t)(&((idMover *)0)->angle_delta), sizeof( ((idMover *)0)->angle_delta ) },
	{ "idVec3", "dest_position", (ptrdiff_t)(&((idMover *)0)->dest_position), sizeof( ((idMover *)0)->dest_position ) },
	{ "idVec3", "move_delta", (ptrdiff_t)(&((idMover *)0)->move_delta), sizeof( ((idMover *)0)->move_delta ) },
	{ "float", "move_speed", (ptrdiff_t)(&((idMover *)0)->move_speed), sizeof( ((idMover *)0)->move_speed ) },
	{ "int", "move_time", (ptrdiff_t)(&((idMover *)0)->move_time), sizeof( ((idMover *)0)->move_time ) },
	{ "int", "prevMoveTime", (ptrdiff_t)(&((idMover *)0)->prevMoveTime), sizeof( ((idMover *)0)->prevMoveTime ) },
	{ "float", "prevTransSpeed", (ptrdiff_t)(&((idMover *)0)->prevTransSpeed), sizeof( ((idMover *)0)->prevTransSpeed ) },
	{ "int", "deceltime", (ptrdiff_t)(&((idMover *)0)->deceltime), sizeof( ((idMover *)0)->deceltime ) },
	{ "int", "acceltime", (ptrdiff_t)(&((idMover *)0)->acceltime), sizeof( ((idMover *)0)->acceltime ) },
	{ "bool", "stopRotation", (ptrdiff_t)(&((idMover *)0)->stopRotation), sizeof( ((idMover *)0)->stopRotation ) },
	{ "bool", "useSplineAngles", (ptrdiff_t)(&((idMover *)0)->useSplineAngles), sizeof( ((idMover *)0)->useSplineAngles ) },
	{ "idEntityPtr < idEntity >", "splineEnt", (ptrdiff_t)(&((idMover *)0)->splineEnt), sizeof( ((idMover *)0)->splineEnt ) },
	{ "moverCommand_t", "lastCommand", (ptrdiff_t)(&((idMover *)0)->lastCommand), sizeof( ((idMover *)0)->lastCommand ) },
	{ "float", "damage", (ptrdiff_t)(&((idMover *)0)->damage), sizeof( ((idMover *)0)->damage ) },
	{ "int", "nextBounceTime", (ptrdiff_t)(&((idMover *)0)->nextBounceTime), sizeof( ((idMover *)0)->nextBounceTime ) },
	{ "qhandle_t", "areaPortal", (ptrdiff_t)(&((idMover *)0)->areaPortal), sizeof( ((idMover *)0)->areaPortal ) },
	{ "idList < idEntityPtr < idEntity > >", "guiTargets", (ptrdiff_t)(&((idMover *)0)->guiTargets), sizeof( ((idMover *)0)->guiTargets ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSplinePath_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t floorInfo_s_typeInfo[] = {
	{ "idVec3", "pos", (ptrdiff_t)(&((floorInfo_s *)0)->pos), sizeof( ((floorInfo_s *)0)->pos ) },
	{ "idStr", "door", (ptrdiff_t)(&((floorInfo_s *)0)->door), sizeof( ((floorInfo_s *)0)->door ) },
	{ "int", "floor", (ptrdiff_t)(&((floorInfo_s *)0)->floor), sizeof( ((floorInfo_s *)0)->floor ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_Binary_typeInfo[] = {
	{ "idVec3", "pos1", (ptrdiff_t)(&((idMover_Binary *)0)->pos1), sizeof( ((idMover_Binary *)0)->pos1 ) },
	{ "idVec3", "pos2", (ptrdiff_t)(&((idMover_Binary *)0)->pos2), sizeof( ((idMover_Binary *)0)->pos2 ) },
	{ "moverState_t", "moverState", (ptrdiff_t)(&((idMover_Binary *)0)->moverState), sizeof( ((idMover_Binary *)0)->moverState ) },
	{ "idMover_Binary *", "moveMaster", (ptrdiff_t)(&((idMover_Binary *)0)->moveMaster), sizeof( ((idMover_Binary *)0)->moveMaster ) },
	{ "idMover_Binary *", "activateChain", (ptrdiff_t)(&((idMover_Binary *)0)->activateChain), sizeof( ((idMover_Binary *)0)->activateChain ) },
	{ "int", "soundPos1", (ptrdiff_t)(&((idMover_Binary *)0)->soundPos1), sizeof( ((idMover_Binary *)0)->soundPos1 ) },
	{ "int", "sound1to2", (ptrdiff_t)(&((idMover_Binary *)0)->sound1to2), sizeof( ((idMover_Binary *)0)->sound1to2 ) },
	{ "int", "sound2to1", (ptrdiff_t)(&((idMover_Binary *)0)->sound2to1), sizeof( ((idMover_Binary *)0)->sound2to1 ) },
	{ "int", "soundPos2", (ptrdiff_t)(&((idMover_Binary *)0)->soundPos2), sizeof( ((idMover_Binary *)0)->soundPos2 ) },
	{ "int", "soundLoop", (ptrdiff_t)(&((idMover_Binary *)0)->soundLoop), sizeof( ((idMover_Binary *)0)->soundLoop ) },
	{ "float", "wait", (ptrdiff_t)(&((idMover_Binary *)0)->wait), sizeof( ((idMover_Binary *)0)->wait ) },
	{ "float", "damage", (ptrdiff_t)(&((idMover_Binary *)0)->damage), sizeof( ((idMover_Binary *)0)->damage ) },
	{ "int", "duration", (ptrdiff_t)(&((idMover_Binary *)0)->duration), sizeof( ((idMover_Binary *)0)->duration ) },
	{ "int", "accelTime", (ptrdiff_t)(&((idMover_Binary *)0)->accelTime), sizeof( ((idMover_Binary *)0)->accelTime ) },
	{ "int", "decelTime", (ptrdiff_t)(&((idMover_Binary *)0)->decelTime), sizeof( ((idMover_Binary *)0)->decelTime ) },
	{ "idEntityPtr < idEntity >", "activatedBy", (ptrdiff_t)(&((idMover_Binary *)0)->activatedBy), sizeof( ((idMover_Binary *)0)->activatedBy ) },
	{ "int", "stateStartTime", (ptrdiff_t)(&((idMover_Binary *)0)->stateStartTime), sizeof( ((idMover_Binary *)0)->stateStartTime ) },
	{ "idStr", "team", (ptrdiff_t)(&((idMover_Binary *)0)->team), sizeof( ((idMover_Binary *)0)->team ) },
	{ "bool", "enabled", (ptrdiff_t)(&((idMover_Binary *)0)->enabled), sizeof( ((idMover_Binary *)0)->enabled ) },
	{ "int", "move_thread", (ptrdiff_t)(&((idMover_Binary *)0)->move_thread), sizeof( ((idMover_Binary *)0)->move_thread ) },
	{ "int", "updateStatus", (ptrdiff_t)(&((idMover_Binary *)0)->updateStatus), sizeof( ((idMover_Binary *)0)->updateStatus ) },
	{ "idStrList", "buddies", (ptrdiff_t)(&((idMover_Binary *)0)->buddies), sizeof( ((idMover_Binary *)0)->buddies ) },
	{ "idPhysics_Parametric", "physicsObj", (ptrdiff_t)(&((idMover_Binary *)0)->physicsObj), sizeof( ((idMover_Binary *)0)->physicsObj ) },
	{ "qhandle_t", "areaPortal", (ptrdiff_t)(&((idMover_Binary *)0)->areaPortal), sizeof( ((idMover_Binary *)0)->areaPortal ) },
	{ "bool", "blocked", (ptrdiff_t)(&((idMover_Binary *)0)->blocked), sizeof( ((idMover_Binary *)0)->blocked ) },
	{ "idList < idEntityPtr < idEntity > >", "guiTargets", (ptrdiff_t)(&((idMover_Binary *)0)->guiTargets), sizeof( ((idMover_Binary *)0)->guiTargets ) },
	{ NULL, 0 }
};

static classVariableInfo_t idPlat_typeInfo[] = {
	{ "idClipModel *", "trigger", (ptrdiff_t)(&((idPlat *)0)->trigger), sizeof( ((idPlat *)0)->trigger ) },
	{ "idVec3", "localTriggerOrigin", (ptrdiff_t)(&((idPlat *)0)->localTriggerOrigin), sizeof( ((idPlat *)0)->localTriggerOrigin ) },
	{ "idMat3", "localTriggerAxis", (ptrdiff_t)(&((idPlat *)0)->localTriggerAxis), sizeof( ((idPlat *)0)->localTriggerAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMover_Periodic_typeInfo[] = {
	{ "idPhysics_Parametric", "physicsObj", (ptrdiff_t)(&((idMover_Periodic *)0)->physicsObj), sizeof( ((idMover_Periodic *)0)->physicsObj ) },
	{ "float", "damage", (ptrdiff_t)(&((idMover_Periodic *)0)->damage), sizeof( ((idMover_Periodic *)0)->damage ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRotater_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "activatedBy", (ptrdiff_t)(&((idRotater *)0)->activatedBy), sizeof( ((idRotater *)0)->activatedBy ) },
	{ "bool", "nextTriggerDirectionIsForward", (ptrdiff_t)(&((idRotater *)0)->nextTriggerDirectionIsForward), sizeof( ((idRotater *)0)->nextTriggerDirectionIsForward ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBobber_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idPendulum_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idRiser_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCamera_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idCameraView_typeInfo[] = {
	{ "float", "fov", (ptrdiff_t)(&((idCameraView *)0)->fov), sizeof( ((idCameraView *)0)->fov ) },
	{ "idEntity *", "attachedTo", (ptrdiff_t)(&((idCameraView *)0)->attachedTo), sizeof( ((idCameraView *)0)->attachedTo ) },
	{ "idEntity *", "attachedView", (ptrdiff_t)(&((idCameraView *)0)->attachedView), sizeof( ((idCameraView *)0)->attachedView ) },
	{ NULL, 0 }
};

static classVariableInfo_t cameraFrame_t_typeInfo[] = {
	{ "idCQuat", "q", (ptrdiff_t)(&((cameraFrame_t *)0)->q), sizeof( ((cameraFrame_t *)0)->q ) },
	{ "idVec3", "t", (ptrdiff_t)(&((cameraFrame_t *)0)->t), sizeof( ((cameraFrame_t *)0)->t ) },
	{ "float", "fov", (ptrdiff_t)(&((cameraFrame_t *)0)->fov), sizeof( ((cameraFrame_t *)0)->fov ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCameraAnim_typeInfo[] = {
	{ "int", "threadNum", (ptrdiff_t)(&((idCameraAnim *)0)->threadNum), sizeof( ((idCameraAnim *)0)->threadNum ) },
	{ "idVec3", "offset", (ptrdiff_t)(&((idCameraAnim *)0)->offset), sizeof( ((idCameraAnim *)0)->offset ) },
	{ "int", "frameRate", (ptrdiff_t)(&((idCameraAnim *)0)->frameRate), sizeof( ((idCameraAnim *)0)->frameRate ) },
	{ "int", "starttime", (ptrdiff_t)(&((idCameraAnim *)0)->starttime), sizeof( ((idCameraAnim *)0)->starttime ) },
	{ "int", "cycle", (ptrdiff_t)(&((idCameraAnim *)0)->cycle), sizeof( ((idCameraAnim *)0)->cycle ) },
	{ "idList < int >", "cameraCuts", (ptrdiff_t)(&((idCameraAnim *)0)->cameraCuts), sizeof( ((idCameraAnim *)0)->cameraCuts ) },
	{ "idList < cameraFrame_t >", "camera", (ptrdiff_t)(&((idCameraAnim *)0)->camera), sizeof( ((idCameraAnim *)0)->camera ) },
	{ "idEntityPtr < idEntity >", "activator", (ptrdiff_t)(&((idCameraAnim *)0)->activator), sizeof( ((idCameraAnim *)0)->activator ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMoveable_typeInfo[] = {
	{ "idPhysics_RigidBody", "physicsObj", (ptrdiff_t)(&((idMoveable *)0)->physicsObj), sizeof( ((idMoveable *)0)->physicsObj ) },
	{ "idStr", "damage", (ptrdiff_t)(&((idMoveable *)0)->damage), sizeof( ((idMoveable *)0)->damage ) },
	{ "idStr", "fxCollide", (ptrdiff_t)(&((idMoveable *)0)->fxCollide), sizeof( ((idMoveable *)0)->fxCollide ) },
	{ "int", "nextCollideFxTime", (ptrdiff_t)(&((idMoveable *)0)->nextCollideFxTime), sizeof( ((idMoveable *)0)->nextCollideFxTime ) },
	{ "idStr", "m_scriptCollide", (ptrdiff_t)(&((idMoveable *)0)->m_scriptCollide), sizeof( ((idMoveable *)0)->m_scriptCollide ) },
	{ "int", "m_nextCollideScriptTime", (ptrdiff_t)(&((idMoveable *)0)->m_nextCollideScriptTime), sizeof( ((idMoveable *)0)->m_nextCollideScriptTime ) },
	{ "int", "m_collideScriptCounter", (ptrdiff_t)(&((idMoveable *)0)->m_collideScriptCounter), sizeof( ((idMoveable *)0)->m_collideScriptCounter ) },
	{ "float", "m_minScriptVelocity", (ptrdiff_t)(&((idMoveable *)0)->m_minScriptVelocity), sizeof( ((idMoveable *)0)->m_minScriptVelocity ) },
	{ "float", "minDamageVelocity", (ptrdiff_t)(&((idMoveable *)0)->minDamageVelocity), sizeof( ((idMoveable *)0)->minDamageVelocity ) },
	{ "float", "maxDamageVelocity", (ptrdiff_t)(&((idMoveable *)0)->maxDamageVelocity), sizeof( ((idMoveable *)0)->maxDamageVelocity ) },
	{ "idCurve_Spline < idVec3 > *", "initialSpline", (ptrdiff_t)(&((idMoveable *)0)->initialSpline), sizeof( ((idMoveable *)0)->initialSpline ) },
	{ "idVec3", "initialSplineDir", (ptrdiff_t)(&((idMoveable *)0)->initialSplineDir), sizeof( ((idMoveable *)0)->initialSplineDir ) },
	{ "bool", "explode", (ptrdiff_t)(&((idMoveable *)0)->explode), sizeof( ((idMoveable *)0)->explode ) },
	{ "bool", "unbindOnDeath", (ptrdiff_t)(&((idMoveable *)0)->unbindOnDeath), sizeof( ((idMoveable *)0)->unbindOnDeath ) },
	{ "bool", "allowStep", (ptrdiff_t)(&((idMoveable *)0)->allowStep), sizeof( ((idMoveable *)0)->allowStep ) },
	{ "bool", "canDamage", (ptrdiff_t)(&((idMoveable *)0)->canDamage), sizeof( ((idMoveable *)0)->canDamage ) },
	{ "int", "nextDamageTime", (ptrdiff_t)(&((idMoveable *)0)->nextDamageTime), sizeof( ((idMoveable *)0)->nextDamageTime ) },
	{ "int", "nextSoundTime", (ptrdiff_t)(&((idMoveable *)0)->nextSoundTime), sizeof( ((idMoveable *)0)->nextSoundTime ) },
	{ "trace_t", "lastCollision", (ptrdiff_t)(&((idMoveable *)0)->lastCollision), sizeof( ((idMoveable *)0)->lastCollision ) },
	{ "bool", "isPushed", (ptrdiff_t)(&((idMoveable *)0)->isPushed), sizeof( ((idMoveable *)0)->isPushed ) },
	{ "bool", "wasPushedLastFrame", (ptrdiff_t)(&((idMoveable *)0)->wasPushedLastFrame), sizeof( ((idMoveable *)0)->wasPushedLastFrame ) },
	{ "idVec3", "pushDirection", (ptrdiff_t)(&((idMoveable *)0)->pushDirection), sizeof( ((idMoveable *)0)->pushDirection ) },
	{ "idVec3", "lastPushOrigin", (ptrdiff_t)(&((idMoveable *)0)->lastPushOrigin), sizeof( ((idMoveable *)0)->lastPushOrigin ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBarrel_typeInfo[] = {
	{ "float", "radius", (ptrdiff_t)(&((idBarrel *)0)->radius), sizeof( ((idBarrel *)0)->radius ) },
	{ "int", "barrelAxis", (ptrdiff_t)(&((idBarrel *)0)->barrelAxis), sizeof( ((idBarrel *)0)->barrelAxis ) },
	{ "idVec3", "lastOrigin", (ptrdiff_t)(&((idBarrel *)0)->lastOrigin), sizeof( ((idBarrel *)0)->lastOrigin ) },
	{ "idMat3", "lastAxis", (ptrdiff_t)(&((idBarrel *)0)->lastAxis), sizeof( ((idBarrel *)0)->lastAxis ) },
	{ "float", "additionalRotation", (ptrdiff_t)(&((idBarrel *)0)->additionalRotation), sizeof( ((idBarrel *)0)->additionalRotation ) },
	{ "idMat3", "additionalAxis", (ptrdiff_t)(&((idBarrel *)0)->additionalAxis), sizeof( ((idBarrel *)0)->additionalAxis ) },
	{ NULL, 0 }
};

static classVariableInfo_t idExplodingBarrel_typeInfo[] = {
	{ "explode_state_t", "state", (ptrdiff_t)(&((idExplodingBarrel *)0)->state), sizeof( ((idExplodingBarrel *)0)->state ) },
	{ "idVec3", "spawnOrigin", (ptrdiff_t)(&((idExplodingBarrel *)0)->spawnOrigin), sizeof( ((idExplodingBarrel *)0)->spawnOrigin ) },
	{ "idMat3", "spawnAxis", (ptrdiff_t)(&((idExplodingBarrel *)0)->spawnAxis), sizeof( ((idExplodingBarrel *)0)->spawnAxis ) },
	{ "qhandle_t", "particleModelDefHandle", (ptrdiff_t)(&((idExplodingBarrel *)0)->particleModelDefHandle), sizeof( ((idExplodingBarrel *)0)->particleModelDefHandle ) },
	{ "qhandle_t", "lightDefHandle", (ptrdiff_t)(&((idExplodingBarrel *)0)->lightDefHandle), sizeof( ((idExplodingBarrel *)0)->lightDefHandle ) },
	{ "renderEntity_t", "particleRenderEntity", (ptrdiff_t)(&((idExplodingBarrel *)0)->particleRenderEntity), sizeof( ((idExplodingBarrel *)0)->particleRenderEntity ) },
	{ "renderLight_t", "light", (ptrdiff_t)(&((idExplodingBarrel *)0)->light), sizeof( ((idExplodingBarrel *)0)->light ) },
	{ "int", "particleTime", (ptrdiff_t)(&((idExplodingBarrel *)0)->particleTime), sizeof( ((idExplodingBarrel *)0)->particleTime ) },
	{ "int", "lightTime", (ptrdiff_t)(&((idExplodingBarrel *)0)->lightTime), sizeof( ((idExplodingBarrel *)0)->lightTime ) },
	{ "float", "time", (ptrdiff_t)(&((idExplodingBarrel *)0)->time), sizeof( ((idExplodingBarrel *)0)->time ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Remove_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Show_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Damage_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SessionCommand_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_EndLevel_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_WaitForButton_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetGlobalShaderTime_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetShaderParm_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetShaderTime_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_FadeEntity_typeInfo[] = {
	{ "idVec4", "fadeFrom", (ptrdiff_t)(&((idTarget_FadeEntity *)0)->fadeFrom), sizeof( ((idTarget_FadeEntity *)0)->fadeFrom ) },
	{ "int", "fadeStart", (ptrdiff_t)(&((idTarget_FadeEntity *)0)->fadeStart), sizeof( ((idTarget_FadeEntity *)0)->fadeStart ) },
	{ "int", "fadeEnd", (ptrdiff_t)(&((idTarget_FadeEntity *)0)->fadeEnd), sizeof( ((idTarget_FadeEntity *)0)->fadeEnd ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LightFadeIn_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_LightFadeOut_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Give_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetModel_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetInfluence_typeInfo[] = {
	{ "idList < int >", "lightList", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->lightList), sizeof( ((idTarget_SetInfluence *)0)->lightList ) },
	{ "idList < int >", "guiList", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->guiList), sizeof( ((idTarget_SetInfluence *)0)->guiList ) },
	{ "idList < int >", "soundList", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->soundList), sizeof( ((idTarget_SetInfluence *)0)->soundList ) },
	{ "idList < int >", "genericList", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->genericList), sizeof( ((idTarget_SetInfluence *)0)->genericList ) },
	{ "float", "flashIn", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->flashIn), sizeof( ((idTarget_SetInfluence *)0)->flashIn ) },
	{ "float", "flashOut", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->flashOut), sizeof( ((idTarget_SetInfluence *)0)->flashOut ) },
	{ "float", "delay", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->delay), sizeof( ((idTarget_SetInfluence *)0)->delay ) },
	{ "idStr", "flashInSound", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->flashInSound), sizeof( ((idTarget_SetInfluence *)0)->flashInSound ) },
	{ "idStr", "flashOutSound", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->flashOutSound), sizeof( ((idTarget_SetInfluence *)0)->flashOutSound ) },
	{ "idEntity *", "switchToCamera", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->switchToCamera), sizeof( ((idTarget_SetInfluence *)0)->switchToCamera ) },
	{ "idInterpolate < float >", "fovSetting", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->fovSetting), sizeof( ((idTarget_SetInfluence *)0)->fovSetting ) },
	{ "bool", "soundFaded", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->soundFaded), sizeof( ((idTarget_SetInfluence *)0)->soundFaded ) },
	{ "bool", "restoreOnTrigger", (ptrdiff_t)(&((idTarget_SetInfluence *)0)->restoreOnTrigger), sizeof( ((idTarget_SetInfluence *)0)->restoreOnTrigger ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetKeyVal_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_SetFov_typeInfo[] = {
	{ "idInterpolate < int >", "fovSetting", (ptrdiff_t)(&((idTarget_SetFov *)0)->fovSetting), sizeof( ((idTarget_SetFov *)0)->fovSetting ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_CallObjectFunction_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_PostScriptEvent_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_EnableLevelWeapons_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_Tip_typeInfo[] = {
	{ "idVec3", "playerPos", (ptrdiff_t)(&((idTarget_Tip *)0)->playerPos), sizeof( ((idTarget_Tip *)0)->playerPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_RemoveWeapons_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTarget_FadeSoundClass_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_AddObjectives_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_SetObjectiveState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_SetObjectiveVisibility_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_SetObjectiveComponentState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_StartConversation_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_SetFrobable_typeInfo[] = {
	{ "bool", "m_bCurFrobState", (ptrdiff_t)(&((CTarget_SetFrobable *)0)->m_bCurFrobState), sizeof( ((CTarget_SetFrobable *)0)->m_bCurFrobState ) },
	{ "idStrList", "m_EntsSetUnfrobable", (ptrdiff_t)(&((CTarget_SetFrobable *)0)->m_EntsSetUnfrobable), sizeof( ((CTarget_SetFrobable *)0)->m_EntsSetUnfrobable ) },
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_CallScriptFunction_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_ChangeLockState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_ChangeTarget_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_InterMissionTrigger_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_SetTeam_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_ItemRemove_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_typeInfo[] = {
	{ "const function_t *", "scriptFunction", (ptrdiff_t)(&((idTrigger *)0)->scriptFunction), sizeof( ((idTrigger *)0)->scriptFunction ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Multi_typeInfo[] = {
	{ "float", "wait", (ptrdiff_t)(&((idTrigger_Multi *)0)->wait), sizeof( ((idTrigger_Multi *)0)->wait ) },
	{ "float", "random", (ptrdiff_t)(&((idTrigger_Multi *)0)->random), sizeof( ((idTrigger_Multi *)0)->random ) },
	{ "float", "delay", (ptrdiff_t)(&((idTrigger_Multi *)0)->delay), sizeof( ((idTrigger_Multi *)0)->delay ) },
	{ "float", "random_delay", (ptrdiff_t)(&((idTrigger_Multi *)0)->random_delay), sizeof( ((idTrigger_Multi *)0)->random_delay ) },
	{ "int", "nextTriggerTime", (ptrdiff_t)(&((idTrigger_Multi *)0)->nextTriggerTime), sizeof( ((idTrigger_Multi *)0)->nextTriggerTime ) },
	{ "idStr", "requires", (ptrdiff_t)(&((idTrigger_Multi *)0)->requires), sizeof( ((idTrigger_Multi *)0)->requires ) },
	{ "int", "removeItem", (ptrdiff_t)(&((idTrigger_Multi *)0)->removeItem), sizeof( ((idTrigger_Multi *)0)->removeItem ) },
	{ "bool", "touchClient", (ptrdiff_t)(&((idTrigger_Multi *)0)->touchClient), sizeof( ((idTrigger_Multi *)0)->touchClient ) },
	{ "bool", "touchOther", (ptrdiff_t)(&((idTrigger_Multi *)0)->touchOther), sizeof( ((idTrigger_Multi *)0)->touchOther ) },
	{ "bool", "triggerFirst", (ptrdiff_t)(&((idTrigger_Multi *)0)->triggerFirst), sizeof( ((idTrigger_Multi *)0)->triggerFirst ) },
	{ "bool", "triggerWithSelf", (ptrdiff_t)(&((idTrigger_Multi *)0)->triggerWithSelf), sizeof( ((idTrigger_Multi *)0)->triggerWithSelf ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_EntityName_typeInfo[] = {
	{ "float", "wait", (ptrdiff_t)(&((idTrigger_EntityName *)0)->wait), sizeof( ((idTrigger_EntityName *)0)->wait ) },
	{ "float", "random", (ptrdiff_t)(&((idTrigger_EntityName *)0)->random), sizeof( ((idTrigger_EntityName *)0)->random ) },
	{ "float", "delay", (ptrdiff_t)(&((idTrigger_EntityName *)0)->delay), sizeof( ((idTrigger_EntityName *)0)->delay ) },
	{ "float", "random_delay", (ptrdiff_t)(&((idTrigger_EntityName *)0)->random_delay), sizeof( ((idTrigger_EntityName *)0)->random_delay ) },
	{ "int", "nextTriggerTime", (ptrdiff_t)(&((idTrigger_EntityName *)0)->nextTriggerTime), sizeof( ((idTrigger_EntityName *)0)->nextTriggerTime ) },
	{ "bool", "triggerFirst", (ptrdiff_t)(&((idTrigger_EntityName *)0)->triggerFirst), sizeof( ((idTrigger_EntityName *)0)->triggerFirst ) },
	{ "idStr", "entityName", (ptrdiff_t)(&((idTrigger_EntityName *)0)->entityName), sizeof( ((idTrigger_EntityName *)0)->entityName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Timer_typeInfo[] = {
	{ "float", "random", (ptrdiff_t)(&((idTrigger_Timer *)0)->random), sizeof( ((idTrigger_Timer *)0)->random ) },
	{ "float", "wait", (ptrdiff_t)(&((idTrigger_Timer *)0)->wait), sizeof( ((idTrigger_Timer *)0)->wait ) },
	{ "bool", "on", (ptrdiff_t)(&((idTrigger_Timer *)0)->on), sizeof( ((idTrigger_Timer *)0)->on ) },
	{ "float", "delay", (ptrdiff_t)(&((idTrigger_Timer *)0)->delay), sizeof( ((idTrigger_Timer *)0)->delay ) },
	{ "idStr", "onName", (ptrdiff_t)(&((idTrigger_Timer *)0)->onName), sizeof( ((idTrigger_Timer *)0)->onName ) },
	{ "idStr", "offName", (ptrdiff_t)(&((idTrigger_Timer *)0)->offName), sizeof( ((idTrigger_Timer *)0)->offName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Count_typeInfo[] = {
	{ "int", "goal", (ptrdiff_t)(&((idTrigger_Count *)0)->goal), sizeof( ((idTrigger_Count *)0)->goal ) },
	{ "int", "count", (ptrdiff_t)(&((idTrigger_Count *)0)->count), sizeof( ((idTrigger_Count *)0)->count ) },
	{ "float", "delay", (ptrdiff_t)(&((idTrigger_Count *)0)->delay), sizeof( ((idTrigger_Count *)0)->delay ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Hurt_typeInfo[] = {
	{ "bool", "on", (ptrdiff_t)(&((idTrigger_Hurt *)0)->on), sizeof( ((idTrigger_Hurt *)0)->on ) },
	{ "float", "delay", (ptrdiff_t)(&((idTrigger_Hurt *)0)->delay), sizeof( ((idTrigger_Hurt *)0)->delay ) },
	{ "int", "nextTime", (ptrdiff_t)(&((idTrigger_Hurt *)0)->nextTime), sizeof( ((idTrigger_Hurt *)0)->nextTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Fade_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idTrigger_Touch_typeInfo[] = {
	{ "float", "wait", (ptrdiff_t)(&((idTrigger_Touch *)0)->wait), sizeof( ((idTrigger_Touch *)0)->wait ) },
	{ "float", "random", (ptrdiff_t)(&((idTrigger_Touch *)0)->random), sizeof( ((idTrigger_Touch *)0)->random ) },
	{ "float", "delay", (ptrdiff_t)(&((idTrigger_Touch *)0)->delay), sizeof( ((idTrigger_Touch *)0)->delay ) },
	{ "float", "random_delay", (ptrdiff_t)(&((idTrigger_Touch *)0)->random_delay), sizeof( ((idTrigger_Touch *)0)->random_delay ) },
	{ "int", "nextTriggerTime", (ptrdiff_t)(&((idTrigger_Touch *)0)->nextTriggerTime), sizeof( ((idTrigger_Touch *)0)->nextTriggerTime ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((idTrigger_Touch *)0)->clipModel), sizeof( ((idTrigger_Touch *)0)->clipModel ) },
	{ NULL, 0 }
};

static classVariableInfo_t idSound_typeInfo[] = {
	{ "float", "lastSoundVol", (ptrdiff_t)(&((idSound *)0)->lastSoundVol), sizeof( ((idSound *)0)->lastSoundVol ) },
	{ "float", "soundVol", (ptrdiff_t)(&((idSound *)0)->soundVol), sizeof( ((idSound *)0)->soundVol ) },
	{ "float", "random", (ptrdiff_t)(&((idSound *)0)->random), sizeof( ((idSound *)0)->random ) },
	{ "float", "wait", (ptrdiff_t)(&((idSound *)0)->wait), sizeof( ((idSound *)0)->wait ) },
	{ "bool", "timerOn", (ptrdiff_t)(&((idSound *)0)->timerOn), sizeof( ((idSound *)0)->timerOn ) },
	{ "idVec3", "shakeTranslate", (ptrdiff_t)(&((idSound *)0)->shakeTranslate), sizeof( ((idSound *)0)->shakeTranslate ) },
	{ "idAngles", "shakeRotate", (ptrdiff_t)(&((idSound *)0)->shakeRotate), sizeof( ((idSound *)0)->shakeRotate ) },
	{ "int", "playingUntilTime", (ptrdiff_t)(&((idSound *)0)->playingUntilTime), sizeof( ((idSound *)0)->playingUntilTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFXLocalAction_typeInfo[] = {
	{ "renderLight_t", "renderLight", (ptrdiff_t)(&((idFXLocalAction *)0)->renderLight), sizeof( ((idFXLocalAction *)0)->renderLight ) },
	{ "qhandle_t", "lightDefHandle", (ptrdiff_t)(&((idFXLocalAction *)0)->lightDefHandle), sizeof( ((idFXLocalAction *)0)->lightDefHandle ) },
	{ "renderEntity_t", "renderEntity", (ptrdiff_t)(&((idFXLocalAction *)0)->renderEntity), sizeof( ((idFXLocalAction *)0)->renderEntity ) },
	{ "int", "modelDefHandle", (ptrdiff_t)(&((idFXLocalAction *)0)->modelDefHandle), sizeof( ((idFXLocalAction *)0)->modelDefHandle ) },
	{ "float", "delay", (ptrdiff_t)(&((idFXLocalAction *)0)->delay), sizeof( ((idFXLocalAction *)0)->delay ) },
	{ "int", "particleSystem", (ptrdiff_t)(&((idFXLocalAction *)0)->particleSystem), sizeof( ((idFXLocalAction *)0)->particleSystem ) },
	{ "int", "start", (ptrdiff_t)(&((idFXLocalAction *)0)->start), sizeof( ((idFXLocalAction *)0)->start ) },
	{ "bool", "soundStarted", (ptrdiff_t)(&((idFXLocalAction *)0)->soundStarted), sizeof( ((idFXLocalAction *)0)->soundStarted ) },
	{ "bool", "shakeStarted", (ptrdiff_t)(&((idFXLocalAction *)0)->shakeStarted), sizeof( ((idFXLocalAction *)0)->shakeStarted ) },
	{ "bool", "decalDropped", (ptrdiff_t)(&((idFXLocalAction *)0)->decalDropped), sizeof( ((idFXLocalAction *)0)->decalDropped ) },
	{ "bool", "launched", (ptrdiff_t)(&((idFXLocalAction *)0)->launched), sizeof( ((idFXLocalAction *)0)->launched ) },
	{ NULL, 0 }
};

static classVariableInfo_t idEntityFx_typeInfo[] = {
	{ "int", "started", (ptrdiff_t)(&((idEntityFx *)0)->started), sizeof( ((idEntityFx *)0)->started ) },
	{ "int", "nextTriggerTime", (ptrdiff_t)(&((idEntityFx *)0)->nextTriggerTime), sizeof( ((idEntityFx *)0)->nextTriggerTime ) },
	{ "const idDeclFX *", "fxEffect", (ptrdiff_t)(&((idEntityFx *)0)->fxEffect), sizeof( ((idEntityFx *)0)->fxEffect ) },
	{ "idList < idFXLocalAction >", "actions", (ptrdiff_t)(&((idEntityFx *)0)->actions), sizeof( ((idEntityFx *)0)->actions ) },
	{ "idStr", "systemName", (ptrdiff_t)(&((idEntityFx *)0)->systemName), sizeof( ((idEntityFx *)0)->systemName ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTeleporter_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t idSecurityCamera_typeInfo[] = {
	{ "bool", "rotate", (ptrdiff_t)(&((idSecurityCamera *)0)->rotate), sizeof( ((idSecurityCamera *)0)->rotate ) },
	{ "bool", "stationary", (ptrdiff_t)(&((idSecurityCamera *)0)->stationary), sizeof( ((idSecurityCamera *)0)->stationary ) },
	{ "bool", "sweeping", (ptrdiff_t)(&((idSecurityCamera *)0)->sweeping), sizeof( ((idSecurityCamera *)0)->sweeping ) },
	{ "bool", "negativeSweep", (ptrdiff_t)(&((idSecurityCamera *)0)->negativeSweep), sizeof( ((idSecurityCamera *)0)->negativeSweep ) },
	{ "float", "sweepAngle", (ptrdiff_t)(&((idSecurityCamera *)0)->sweepAngle), sizeof( ((idSecurityCamera *)0)->sweepAngle ) },
	{ "float", "sweepSpeed", (ptrdiff_t)(&((idSecurityCamera *)0)->sweepSpeed), sizeof( ((idSecurityCamera *)0)->sweepSpeed ) },
	{ "float", "sweepStartTime", (ptrdiff_t)(&((idSecurityCamera *)0)->sweepStartTime), sizeof( ((idSecurityCamera *)0)->sweepStartTime ) },
	{ "float", "sweepEndTime", (ptrdiff_t)(&((idSecurityCamera *)0)->sweepEndTime), sizeof( ((idSecurityCamera *)0)->sweepEndTime ) },
	{ "float", "percentSwept", (ptrdiff_t)(&((idSecurityCamera *)0)->percentSwept), sizeof( ((idSecurityCamera *)0)->percentSwept ) },
	{ "bool", "negativeIncline", (ptrdiff_t)(&((idSecurityCamera *)0)->negativeIncline), sizeof( ((idSecurityCamera *)0)->negativeIncline ) },
	{ "float", "inclineAngle", (ptrdiff_t)(&((idSecurityCamera *)0)->inclineAngle), sizeof( ((idSecurityCamera *)0)->inclineAngle ) },
	{ "float", "inclineSpeed", (ptrdiff_t)(&((idSecurityCamera *)0)->inclineSpeed), sizeof( ((idSecurityCamera *)0)->inclineSpeed ) },
	{ "float", "inclineStartTime", (ptrdiff_t)(&((idSecurityCamera *)0)->inclineStartTime), sizeof( ((idSecurityCamera *)0)->inclineStartTime ) },
	{ "float", "inclineEndTime", (ptrdiff_t)(&((idSecurityCamera *)0)->inclineEndTime), sizeof( ((idSecurityCamera *)0)->inclineEndTime ) },
	{ "float", "percentInclined", (ptrdiff_t)(&((idSecurityCamera *)0)->percentInclined), sizeof( ((idSecurityCamera *)0)->percentInclined ) },
	{ "float", "angle", (ptrdiff_t)(&((idSecurityCamera *)0)->angle), sizeof( ((idSecurityCamera *)0)->angle ) },
	{ "float", "angleTarget", (ptrdiff_t)(&((idSecurityCamera *)0)->angleTarget), sizeof( ((idSecurityCamera *)0)->angleTarget ) },
	{ "float", "anglePos1", (ptrdiff_t)(&((idSecurityCamera *)0)->anglePos1), sizeof( ((idSecurityCamera *)0)->anglePos1 ) },
	{ "float", "anglePos2", (ptrdiff_t)(&((idSecurityCamera *)0)->anglePos2), sizeof( ((idSecurityCamera *)0)->anglePos2 ) },
	{ "float", "angleToPlayer", (ptrdiff_t)(&((idSecurityCamera *)0)->angleToPlayer), sizeof( ((idSecurityCamera *)0)->angleToPlayer ) },
	{ "float", "incline", (ptrdiff_t)(&((idSecurityCamera *)0)->incline), sizeof( ((idSecurityCamera *)0)->incline ) },
	{ "float", "inclineTarget", (ptrdiff_t)(&((idSecurityCamera *)0)->inclineTarget), sizeof( ((idSecurityCamera *)0)->inclineTarget ) },
	{ "float", "inclinePos1", (ptrdiff_t)(&((idSecurityCamera *)0)->inclinePos1), sizeof( ((idSecurityCamera *)0)->inclinePos1 ) },
	{ "float", "inclineToPlayer", (ptrdiff_t)(&((idSecurityCamera *)0)->inclineToPlayer), sizeof( ((idSecurityCamera *)0)->inclineToPlayer ) },
	{ "bool", "follow", (ptrdiff_t)(&((idSecurityCamera *)0)->follow), sizeof( ((idSecurityCamera *)0)->follow ) },
	{ "bool", "following", (ptrdiff_t)(&((idSecurityCamera *)0)->following), sizeof( ((idSecurityCamera *)0)->following ) },
	{ "float", "followSpeedMult", (ptrdiff_t)(&((idSecurityCamera *)0)->followSpeedMult), sizeof( ((idSecurityCamera *)0)->followSpeedMult ) },
	{ "bool", "followIncline", (ptrdiff_t)(&((idSecurityCamera *)0)->followIncline), sizeof( ((idSecurityCamera *)0)->followIncline ) },
	{ "float", "followTolerance", (ptrdiff_t)(&((idSecurityCamera *)0)->followTolerance), sizeof( ((idSecurityCamera *)0)->followTolerance ) },
	{ "float", "followInclineTolerance", (ptrdiff_t)(&((idSecurityCamera *)0)->followInclineTolerance), sizeof( ((idSecurityCamera *)0)->followInclineTolerance ) },
	{ "float", "constrainUp", (ptrdiff_t)(&((idSecurityCamera *)0)->constrainUp), sizeof( ((idSecurityCamera *)0)->constrainUp ) },
	{ "float", "constrainDown", (ptrdiff_t)(&((idSecurityCamera *)0)->constrainDown), sizeof( ((idSecurityCamera *)0)->constrainDown ) },
	{ "float", "constrainPositive", (ptrdiff_t)(&((idSecurityCamera *)0)->constrainPositive), sizeof( ((idSecurityCamera *)0)->constrainPositive ) },
	{ "float", "constrainNegative", (ptrdiff_t)(&((idSecurityCamera *)0)->constrainNegative), sizeof( ((idSecurityCamera *)0)->constrainNegative ) },
	{ "float", "scanDist", (ptrdiff_t)(&((idSecurityCamera *)0)->scanDist), sizeof( ((idSecurityCamera *)0)->scanDist ) },
	{ "float", "scanFov", (ptrdiff_t)(&((idSecurityCamera *)0)->scanFov), sizeof( ((idSecurityCamera *)0)->scanFov ) },
	{ "float", "scanFovCos", (ptrdiff_t)(&((idSecurityCamera *)0)->scanFovCos), sizeof( ((idSecurityCamera *)0)->scanFovCos ) },
	{ "float", "sightThreshold", (ptrdiff_t)(&((idSecurityCamera *)0)->sightThreshold), sizeof( ((idSecurityCamera *)0)->sightThreshold ) },
	{ "int", "modelAxis", (ptrdiff_t)(&((idSecurityCamera *)0)->modelAxis), sizeof( ((idSecurityCamera *)0)->modelAxis ) },
	{ "bool", "flipAxis", (ptrdiff_t)(&((idSecurityCamera *)0)->flipAxis), sizeof( ((idSecurityCamera *)0)->flipAxis ) },
	{ "idVec3", "viewOffset", (ptrdiff_t)(&((idSecurityCamera *)0)->viewOffset), sizeof( ((idSecurityCamera *)0)->viewOffset ) },
	{ "int", "pvsArea", (ptrdiff_t)(&((idSecurityCamera *)0)->pvsArea), sizeof( ((idSecurityCamera *)0)->pvsArea ) },
	{ "idPhysics_RigidBody", "physicsObj", (ptrdiff_t)(&((idSecurityCamera *)0)->physicsObj), sizeof( ((idSecurityCamera *)0)->physicsObj ) },
	{ "idTraceModel", "trm", (ptrdiff_t)(&((idSecurityCamera *)0)->trm), sizeof( ((idSecurityCamera *)0)->trm ) },
	{ "idEntityPtr < idLight >", "spotLight", (ptrdiff_t)(&((idSecurityCamera *)0)->spotLight), sizeof( ((idSecurityCamera *)0)->spotLight ) },
	{ "idEntityPtr < idEntity >", "sparks", (ptrdiff_t)(&((idSecurityCamera *)0)->sparks), sizeof( ((idSecurityCamera *)0)->sparks ) },
	{ "idEntityPtr < idEntity >", "cameraDisplay", (ptrdiff_t)(&((idSecurityCamera *)0)->cameraDisplay), sizeof( ((idSecurityCamera *)0)->cameraDisplay ) },
	{ "int", "state", (ptrdiff_t)(&((idSecurityCamera *)0)->state), sizeof( ((idSecurityCamera *)0)->state ) },
	{ "int", "alertMode", (ptrdiff_t)(&((idSecurityCamera *)0)->alertMode), sizeof( ((idSecurityCamera *)0)->alertMode ) },
	{ "bool", "powerOn", (ptrdiff_t)(&((idSecurityCamera *)0)->powerOn), sizeof( ((idSecurityCamera *)0)->powerOn ) },
	{ "bool", "spotlightPowerOn", (ptrdiff_t)(&((idSecurityCamera *)0)->spotlightPowerOn), sizeof( ((idSecurityCamera *)0)->spotlightPowerOn ) },
	{ "bool", "flinderized", (ptrdiff_t)(&((idSecurityCamera *)0)->flinderized), sizeof( ((idSecurityCamera *)0)->flinderized ) },
	{ "float", "timeLastSeen", (ptrdiff_t)(&((idSecurityCamera *)0)->timeLastSeen), sizeof( ((idSecurityCamera *)0)->timeLastSeen ) },
	{ "float", "lostInterestEndTime", (ptrdiff_t)(&((idSecurityCamera *)0)->lostInterestEndTime), sizeof( ((idSecurityCamera *)0)->lostInterestEndTime ) },
	{ "float", "nextAlertTime", (ptrdiff_t)(&((idSecurityCamera *)0)->nextAlertTime), sizeof( ((idSecurityCamera *)0)->nextAlertTime ) },
	{ "float", "startAlertTime", (ptrdiff_t)(&((idSecurityCamera *)0)->startAlertTime), sizeof( ((idSecurityCamera *)0)->startAlertTime ) },
	{ "float", "endAlertTime", (ptrdiff_t)(&((idSecurityCamera *)0)->endAlertTime), sizeof( ((idSecurityCamera *)0)->endAlertTime ) },
	{ "float", "alertDuration", (ptrdiff_t)(&((idSecurityCamera *)0)->alertDuration), sizeof( ((idSecurityCamera *)0)->alertDuration ) },
	{ "bool", "emitPauseSound", (ptrdiff_t)(&((idSecurityCamera *)0)->emitPauseSound), sizeof( ((idSecurityCamera *)0)->emitPauseSound ) },
	{ "float", "emitPauseSoundTime", (ptrdiff_t)(&((idSecurityCamera *)0)->emitPauseSoundTime), sizeof( ((idSecurityCamera *)0)->emitPauseSoundTime ) },
	{ "float", "pauseEndTime", (ptrdiff_t)(&((idSecurityCamera *)0)->pauseEndTime), sizeof( ((idSecurityCamera *)0)->pauseEndTime ) },
	{ "float", "nextSparkTime", (ptrdiff_t)(&((idSecurityCamera *)0)->nextSparkTime), sizeof( ((idSecurityCamera *)0)->nextSparkTime ) },
	{ "bool", "sparksOn", (ptrdiff_t)(&((idSecurityCamera *)0)->sparksOn), sizeof( ((idSecurityCamera *)0)->sparksOn ) },
	{ "bool", "sparksPowerDependent", (ptrdiff_t)(&((idSecurityCamera *)0)->sparksPowerDependent), sizeof( ((idSecurityCamera *)0)->sparksPowerDependent ) },
	{ "bool", "sparksPeriodic", (ptrdiff_t)(&((idSecurityCamera *)0)->sparksPeriodic), sizeof( ((idSecurityCamera *)0)->sparksPeriodic ) },
	{ "float", "sparksInterval", (ptrdiff_t)(&((idSecurityCamera *)0)->sparksInterval), sizeof( ((idSecurityCamera *)0)->sparksInterval ) },
	{ "float", "sparksIntervalRand", (ptrdiff_t)(&((idSecurityCamera *)0)->sparksIntervalRand), sizeof( ((idSecurityCamera *)0)->sparksIntervalRand ) },
	{ "bool", "useColors", (ptrdiff_t)(&((idSecurityCamera *)0)->useColors), sizeof( ((idSecurityCamera *)0)->useColors ) },
	{ "idVec3", "colorSweeping", (ptrdiff_t)(&((idSecurityCamera *)0)->colorSweeping), sizeof( ((idSecurityCamera *)0)->colorSweeping ) },
	{ "idVec3", "colorSighted", (ptrdiff_t)(&((idSecurityCamera *)0)->colorSighted), sizeof( ((idSecurityCamera *)0)->colorSighted ) },
	{ "idVec3", "colorAlerted", (ptrdiff_t)(&((idSecurityCamera *)0)->colorAlerted), sizeof( ((idSecurityCamera *)0)->colorAlerted ) },
	{ NULL, 0 }
};

static classVariableInfo_t shard_t_typeInfo[] = {
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((shard_t *)0)->clipModel), sizeof( ((shard_t *)0)->clipModel ) },
	{ "idFixedWinding", "winding", (ptrdiff_t)(&((shard_t *)0)->winding), sizeof( ((shard_t *)0)->winding ) },
	{ "idList < idFixedWinding * >", "decals", (ptrdiff_t)(&((shard_t *)0)->decals), sizeof( ((shard_t *)0)->decals ) },
	{ "idList < bool >", "edgeHasNeighbour", (ptrdiff_t)(&((shard_t *)0)->edgeHasNeighbour), sizeof( ((shard_t *)0)->edgeHasNeighbour ) },
	{ "idList < struct shard_s * >", "neighbours", (ptrdiff_t)(&((shard_t *)0)->neighbours), sizeof( ((shard_t *)0)->neighbours ) },
	{ "idPhysics_RigidBody", "physicsObj", (ptrdiff_t)(&((shard_t *)0)->physicsObj), sizeof( ((shard_t *)0)->physicsObj ) },
	{ "int", "droppedTime", (ptrdiff_t)(&((shard_t *)0)->droppedTime), sizeof( ((shard_t *)0)->droppedTime ) },
	{ "bool", "atEdge", (ptrdiff_t)(&((shard_t *)0)->atEdge), sizeof( ((shard_t *)0)->atEdge ) },
	{ "int", "islandNum", (ptrdiff_t)(&((shard_t *)0)->islandNum), sizeof( ((shard_t *)0)->islandNum ) },
	{ NULL, 0 }
};

static classVariableInfo_t idBrittleFracture_typeInfo[] = {
	{ "const idMaterial *", "material", (ptrdiff_t)(&((idBrittleFracture *)0)->material), sizeof( ((idBrittleFracture *)0)->material ) },
	{ "const idMaterial *", "decalMaterial", (ptrdiff_t)(&((idBrittleFracture *)0)->decalMaterial), sizeof( ((idBrittleFracture *)0)->decalMaterial ) },
	{ "float", "decalSize", (ptrdiff_t)(&((idBrittleFracture *)0)->decalSize), sizeof( ((idBrittleFracture *)0)->decalSize ) },
	{ "float", "maxShardArea", (ptrdiff_t)(&((idBrittleFracture *)0)->maxShardArea), sizeof( ((idBrittleFracture *)0)->maxShardArea ) },
	{ "float", "maxShatterRadius", (ptrdiff_t)(&((idBrittleFracture *)0)->maxShatterRadius), sizeof( ((idBrittleFracture *)0)->maxShatterRadius ) },
	{ "float", "minShatterRadius", (ptrdiff_t)(&((idBrittleFracture *)0)->minShatterRadius), sizeof( ((idBrittleFracture *)0)->minShatterRadius ) },
	{ "float", "linearVelocityScale", (ptrdiff_t)(&((idBrittleFracture *)0)->linearVelocityScale), sizeof( ((idBrittleFracture *)0)->linearVelocityScale ) },
	{ "float", "angularVelocityScale", (ptrdiff_t)(&((idBrittleFracture *)0)->angularVelocityScale), sizeof( ((idBrittleFracture *)0)->angularVelocityScale ) },
	{ "float", "shardMass", (ptrdiff_t)(&((idBrittleFracture *)0)->shardMass), sizeof( ((idBrittleFracture *)0)->shardMass ) },
	{ "float", "density", (ptrdiff_t)(&((idBrittleFracture *)0)->density), sizeof( ((idBrittleFracture *)0)->density ) },
	{ "float", "friction", (ptrdiff_t)(&((idBrittleFracture *)0)->friction), sizeof( ((idBrittleFracture *)0)->friction ) },
	{ "float", "bouncyness", (ptrdiff_t)(&((idBrittleFracture *)0)->bouncyness), sizeof( ((idBrittleFracture *)0)->bouncyness ) },
	{ "idStr", "fxFracture", (ptrdiff_t)(&((idBrittleFracture *)0)->fxFracture), sizeof( ((idBrittleFracture *)0)->fxFracture ) },
	{ "float", "shardAliveTime", (ptrdiff_t)(&((idBrittleFracture *)0)->shardAliveTime), sizeof( ((idBrittleFracture *)0)->shardAliveTime ) },
	{ "float", "shardFadeStart", (ptrdiff_t)(&((idBrittleFracture *)0)->shardFadeStart), sizeof( ((idBrittleFracture *)0)->shardFadeStart ) },
	{ "idPhysics_StaticMulti", "physicsObj", (ptrdiff_t)(&((idBrittleFracture *)0)->physicsObj), sizeof( ((idBrittleFracture *)0)->physicsObj ) },
	{ "idList < shard_t * >", "shards", (ptrdiff_t)(&((idBrittleFracture *)0)->shards), sizeof( ((idBrittleFracture *)0)->shards ) },
	{ "idBounds", "bounds", (ptrdiff_t)(&((idBrittleFracture *)0)->bounds), sizeof( ((idBrittleFracture *)0)->bounds ) },
	{ "bool", "disableFracture", (ptrdiff_t)(&((idBrittleFracture *)0)->disableFracture), sizeof( ((idBrittleFracture *)0)->disableFracture ) },
	{ "bool", "m_bSoundDamped", (ptrdiff_t)(&((idBrittleFracture *)0)->m_bSoundDamped), sizeof( ((idBrittleFracture *)0)->m_bSoundDamped ) },
	{ "mutable int", "lastRenderEntityUpdate", (ptrdiff_t)(&((idBrittleFracture *)0)->lastRenderEntityUpdate), sizeof( ((idBrittleFracture *)0)->lastRenderEntityUpdate ) },
	{ "mutable bool", "changed", (ptrdiff_t)(&((idBrittleFracture *)0)->changed), sizeof( ((idBrittleFracture *)0)->changed ) },
	{ "int", "m_lastCrackFrameNum", (ptrdiff_t)(&((idBrittleFracture *)0)->m_lastCrackFrameNum), sizeof( ((idBrittleFracture *)0)->m_lastCrackFrameNum ) },
	{ "qhandle_t", "m_AreaPortal", (ptrdiff_t)(&((idBrittleFracture *)0)->m_AreaPortal), sizeof( ((idBrittleFracture *)0)->m_AreaPortal ) },
	{ "float", "m_lossBaseAI", (ptrdiff_t)(&((idBrittleFracture *)0)->m_lossBaseAI), sizeof( ((idBrittleFracture *)0)->m_lossBaseAI ) },
	{ "float", "m_lossBasePlayer", (ptrdiff_t)(&((idBrittleFracture *)0)->m_lossBasePlayer), sizeof( ((idBrittleFracture *)0)->m_lossBasePlayer ) },
	{ NULL, 0 }
};

static classVariableInfo_t idLiquid_typeInfo[] = {
	{ "idPhysics_Liquid", "physicsObj", (ptrdiff_t)(&((idLiquid *)0)->physicsObj), sizeof( ((idLiquid *)0)->physicsObj ) },
	{ "idRenderModelLiquid *", "model", (ptrdiff_t)(&((idLiquid *)0)->model), sizeof( ((idLiquid *)0)->model ) },
	{ "const idDeclParticle *[3]", "splash", (ptrdiff_t)(&((idLiquid *)0)->splash), sizeof( ((idLiquid *)0)->splash ) },
	{ "const idDeclParticle *", "waves", (ptrdiff_t)(&((idLiquid *)0)->waves), sizeof( ((idLiquid *)0)->waves ) },
	{ "idStr", "smokeName", (ptrdiff_t)(&((idLiquid *)0)->smokeName), sizeof( ((idLiquid *)0)->smokeName ) },
	{ "idStr", "soundName", (ptrdiff_t)(&((idLiquid *)0)->soundName), sizeof( ((idLiquid *)0)->soundName ) },
	{ NULL, 0 }
};

static classVariableInfo_t CAbsenceMarker_typeInfo[] = {
	{ "int", "ownerTeam", (ptrdiff_t)(&((CAbsenceMarker *)0)->ownerTeam), sizeof( ((CAbsenceMarker *)0)->ownerTeam ) },
	{ "idStr", "referenced_entityDefName", (ptrdiff_t)(&((CAbsenceMarker *)0)->referenced_entityDefName), sizeof( ((CAbsenceMarker *)0)->referenced_entityDefName ) },
	{ "int", "referenced_entityDefNumber", (ptrdiff_t)(&((CAbsenceMarker *)0)->referenced_entityDefNumber), sizeof( ((CAbsenceMarker *)0)->referenced_entityDefNumber ) },
	{ "idStr", "referenced_entityName", (ptrdiff_t)(&((CAbsenceMarker *)0)->referenced_entityName), sizeof( ((CAbsenceMarker *)0)->referenced_entityName ) },
	{ "idDict", "referenced_spawnArgs", (ptrdiff_t)(&((CAbsenceMarker *)0)->referenced_spawnArgs), sizeof( ((CAbsenceMarker *)0)->referenced_spawnArgs ) },
	{ NULL, 0 }
};

static classVariableInfo_t PVSToAASMappingNode_typeInfo[] = {
	{ "tagPVSToAASMappingNode *", "p_next", (ptrdiff_t)(&((PVSToAASMappingNode *)0)->p_next), sizeof( ((PVSToAASMappingNode *)0)->p_next ) },
	{ "int", "AASAreaIndex", (ptrdiff_t)(&((PVSToAASMappingNode *)0)->AASAreaIndex), sizeof( ((PVSToAASMappingNode *)0)->AASAreaIndex ) },
	{ NULL, 0 }
};

static classVariableInfo_t PVSToAASMapping_typeInfo[] = {
	{ "int", "numPVSAreas", (ptrdiff_t)(&((PVSToAASMapping *)0)->numPVSAreas), sizeof( ((PVSToAASMapping *)0)->numPVSAreas ) },
	{ "PVSToAASMappingNode * *", "m_p_AASAreaIndicesPerPVSArea", (ptrdiff_t)(&((PVSToAASMapping *)0)->m_p_AASAreaIndicesPerPVSArea), sizeof( ((PVSToAASMapping *)0)->m_p_AASAreaIndicesPerPVSArea ) },
	{ "idStr", "aasName", (ptrdiff_t)(&((PVSToAASMapping *)0)->aasName), sizeof( ((PVSToAASMapping *)0)->aasName ) },
	{ NULL, 0 }
};

static classVariableInfo_t darkModLightRecord_t_typeInfo[] = {
	{ "idLight *", "p_idLight", (ptrdiff_t)(&((darkModLightRecord_t *)0)->p_idLight), sizeof( ((darkModLightRecord_t *)0)->p_idLight ) },
	{ "int", "areaIndex", (ptrdiff_t)(&((darkModLightRecord_t *)0)->areaIndex), sizeof( ((darkModLightRecord_t *)0)->areaIndex ) },
	{ "idVec3", "lastWorldPos", (ptrdiff_t)(&((darkModLightRecord_t *)0)->lastWorldPos), sizeof( ((darkModLightRecord_t *)0)->lastWorldPos ) },
	{ "unsigned int", "lastFrameUpdated", (ptrdiff_t)(&((darkModLightRecord_t *)0)->lastFrameUpdated), sizeof( ((darkModLightRecord_t *)0)->lastFrameUpdated ) },
	{ NULL, 0 }
};

static classVariableInfo_t darkModLAS_typeInfo[] = {
	{ "int", "m_numAreas", (ptrdiff_t)(&((darkModLAS *)0)->m_numAreas), sizeof( ((darkModLAS *)0)->m_numAreas ) },
	{ "idLinkList < darkModLightRecord_t > * *", "m_pp_areaLightLists", (ptrdiff_t)(&((darkModLAS *)0)->m_pp_areaLightLists), sizeof( ((darkModLAS *)0)->m_pp_areaLightLists ) },
	{ "unsigned int", "m_updateFrameIndex", (ptrdiff_t)(&((darkModLAS *)0)->m_updateFrameIndex), sizeof( ((darkModLAS *)0)->m_updateFrameIndex ) },
	{ "PVSToAASMapping", "pvsToAASMappingTable", (ptrdiff_t)(&((darkModLAS *)0)->pvsToAASMappingTable), sizeof( ((darkModLAS *)0)->pvsToAASMappingTable ) },
	{ NULL, 0 }
};

static classVariableInfo_t CGlobal_typeInfo[] = {
	{ "idHashIndex", "m_SurfaceHardnessHash", (ptrdiff_t)(&((CGlobal *)0)->m_SurfaceHardnessHash), sizeof( ((CGlobal *)0)->m_SurfaceHardnessHash ) },
	{ "idStringList", "m_SurfaceHardness", (ptrdiff_t)(&((CGlobal *)0)->m_SurfaceHardness), sizeof( ((CGlobal *)0)->m_SurfaceHardness ) },
	{ "FILE *", "m_LogFile", (ptrdiff_t)(&((CGlobal *)0)->m_LogFile), sizeof( ((CGlobal *)0)->m_LogFile ) },
	{ "bool[8]", "m_LogArray", (ptrdiff_t)(&((CGlobal *)0)->m_LogArray), sizeof( ((CGlobal *)0)->m_LogArray ) },
	{ "bool[23]", "m_ClassArray", (ptrdiff_t)(&((CGlobal *)0)->m_ClassArray), sizeof( ((CGlobal *)0)->m_ClassArray ) },
	{ "LC_LogClass", "m_LogClass", (ptrdiff_t)(&((CGlobal *)0)->m_LogClass), sizeof( ((CGlobal *)0)->m_LogClass ) },
	{ "LT_LogType", "m_LogType", (ptrdiff_t)(&((CGlobal *)0)->m_LogType), sizeof( ((CGlobal *)0)->m_LogType ) },
	{ "int", "m_Frame", (ptrdiff_t)(&((CGlobal *)0)->m_Frame), sizeof( ((CGlobal *)0)->m_Frame ) },
	{ "const char *", "m_Filename", (ptrdiff_t)(&((CGlobal *)0)->m_Filename), sizeof( ((CGlobal *)0)->m_Filename ) },
	{ "char", "m_DriveLetter", (ptrdiff_t)(&((CGlobal *)0)->m_DriveLetter), sizeof( ((CGlobal *)0)->m_DriveLetter ) },
	{ "int", "m_Linenumber", (ptrdiff_t)(&((CGlobal *)0)->m_Linenumber), sizeof( ((CGlobal *)0)->m_Linenumber ) },
	{ "float", "m_MaxFrobDistance", (ptrdiff_t)(&((CGlobal *)0)->m_MaxFrobDistance), sizeof( ((CGlobal *)0)->m_MaxFrobDistance ) },
	{ "idStrList", "m_AcuityNames", (ptrdiff_t)(&((CGlobal *)0)->m_AcuityNames), sizeof( ((CGlobal *)0)->m_AcuityNames ) },
	{ "idHashIndex", "m_AcuityHash", (ptrdiff_t)(&((CGlobal *)0)->m_AcuityHash), sizeof( ((CGlobal *)0)->m_AcuityHash ) },
	{ NULL, 0 }
};

static classVariableInfo_t CMatrixSq_class_Type__typeInfo[] = {
//	{ "std :: size_t", "m_Dim", (ptrdiff_t)(&((CMatrixSq< class Type > *)0)->m_Dim), sizeof( ((CMatrixSq< class Type > *)0)->m_Dim ) },
//	{ "std :: vector < Type >", "m_Data", (ptrdiff_t)(&((CMatrixSq< class Type > *)0)->m_Data), sizeof( ((CMatrixSq< class Type > *)0)->m_Data ) },
	{ NULL, 0 }
};

static classVariableInfo_t CMatRUT_class_Type__typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CRelations_SEntryData_typeInfo[] = {
	{ "int", "row", (ptrdiff_t)(&((CRelations::SEntryData *)0)->row), sizeof( ((CRelations::SEntryData *)0)->row ) },
	{ "int", "col", (ptrdiff_t)(&((CRelations::SEntryData *)0)->col), sizeof( ((CRelations::SEntryData *)0)->col ) },
	{ "int", "val", (ptrdiff_t)(&((CRelations::SEntryData *)0)->val), sizeof( ((CRelations::SEntryData *)0)->val ) },
	{ NULL, 0 }
};

static classVariableInfo_t CRelations_typeInfo[] = {
	{ "CMatrixSq < int >", "m_RelMat", (ptrdiff_t)(&((CRelations *)0)->m_RelMat), sizeof( ((CRelations *)0)->m_RelMat ) },
	{ NULL, 0 }
};

static classVariableInfo_t CRelationsEntity_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_SetRelations_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_SetEntityRelation_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CTarget_ChangeEntityRelation_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CBinaryFrobMover_typeInfo[] = {
	{ "PickableLock *", "m_Lock", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_Lock), sizeof( ((CBinaryFrobMover *)0)->m_Lock ) },
	{ "bool", "m_Open", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_Open), sizeof( ((CBinaryFrobMover *)0)->m_Open ) },
	{ "bool", "m_bIntentOpen", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_bIntentOpen), sizeof( ((CBinaryFrobMover *)0)->m_bIntentOpen ) },
	{ "bool", "m_StateChange", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_StateChange), sizeof( ((CBinaryFrobMover *)0)->m_StateChange ) },
	{ "bool", "m_bInterruptable", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_bInterruptable), sizeof( ((CBinaryFrobMover *)0)->m_bInterruptable ) },
	{ "bool", "m_bInterrupted", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_bInterrupted), sizeof( ((CBinaryFrobMover *)0)->m_bInterrupted ) },
	{ "bool", "m_StoppedDueToBlock", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_StoppedDueToBlock), sizeof( ((CBinaryFrobMover *)0)->m_StoppedDueToBlock ) },
	{ "int", "m_nextBounceTime", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_nextBounceTime), sizeof( ((CBinaryFrobMover *)0)->m_nextBounceTime ) },
	{ "idEntityPtr < idEntity >", "m_LastBlockingEnt", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_LastBlockingEnt), sizeof( ((CBinaryFrobMover *)0)->m_LastBlockingEnt ) },
	{ "idAngles", "m_Rotate", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_Rotate), sizeof( ((CBinaryFrobMover *)0)->m_Rotate ) },
	{ "idVec3", "m_StartPos", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_StartPos), sizeof( ((CBinaryFrobMover *)0)->m_StartPos ) },
	{ "idVec3", "m_Translation", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_Translation), sizeof( ((CBinaryFrobMover *)0)->m_Translation ) },
	{ "float", "m_TransSpeed", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_TransSpeed), sizeof( ((CBinaryFrobMover *)0)->m_TransSpeed ) },
	{ "idAngles", "m_ClosedAngles", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_ClosedAngles), sizeof( ((CBinaryFrobMover *)0)->m_ClosedAngles ) },
	{ "idAngles", "m_OpenAngles", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_OpenAngles), sizeof( ((CBinaryFrobMover *)0)->m_OpenAngles ) },
	{ "idVec3", "m_ClosedOrigin", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_ClosedOrigin), sizeof( ((CBinaryFrobMover *)0)->m_ClosedOrigin ) },
	{ "idVec3", "m_OpenOrigin", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_OpenOrigin), sizeof( ((CBinaryFrobMover *)0)->m_OpenOrigin ) },
	{ "idVec3", "m_ClosedPos", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_ClosedPos), sizeof( ((CBinaryFrobMover *)0)->m_ClosedPos ) },
	{ "idVec3", "m_OpenPos", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_OpenPos), sizeof( ((CBinaryFrobMover *)0)->m_OpenPos ) },
	{ "idVec3", "m_OpenDir", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_OpenDir), sizeof( ((CBinaryFrobMover *)0)->m_OpenDir ) },
	{ "idStr", "m_CompletionScript", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_CompletionScript), sizeof( ((CBinaryFrobMover *)0)->m_CompletionScript ) },
	{ "bool", "m_Rotating", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_Rotating), sizeof( ((CBinaryFrobMover *)0)->m_Rotating ) },
	{ "bool", "m_Translating", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_Translating), sizeof( ((CBinaryFrobMover *)0)->m_Translating ) },
	{ "float", "m_ImpulseThreshCloseSq", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_ImpulseThreshCloseSq), sizeof( ((CBinaryFrobMover *)0)->m_ImpulseThreshCloseSq ) },
	{ "float", "m_ImpulseThreshOpenSq", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_ImpulseThreshOpenSq), sizeof( ((CBinaryFrobMover *)0)->m_ImpulseThreshOpenSq ) },
	{ "idVec3", "m_vImpulseDirOpen", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_vImpulseDirOpen), sizeof( ((CBinaryFrobMover *)0)->m_vImpulseDirOpen ) },
	{ "idVec3", "m_vImpulseDirClose", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_vImpulseDirClose), sizeof( ((CBinaryFrobMover *)0)->m_vImpulseDirClose ) },
	{ "bool", "m_stopWhenBlocked", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_stopWhenBlocked), sizeof( ((CBinaryFrobMover *)0)->m_stopWhenBlocked ) },
	{ "bool", "m_LockOnClose", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_LockOnClose), sizeof( ((CBinaryFrobMover *)0)->m_LockOnClose ) },
	{ "idVec2", "m_mousePosition", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_mousePosition), sizeof( ((CBinaryFrobMover *)0)->m_mousePosition ) },
	{ "bool", "m_bFineControlStarting", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_bFineControlStarting), sizeof( ((CBinaryFrobMover *)0)->m_bFineControlStarting ) },
	{ "idBox", "m_closedBox", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_closedBox), sizeof( ((CBinaryFrobMover *)0)->m_closedBox ) },
	{ "idList < idEntityPtr < idAI > >", "m_registeredAI", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_registeredAI), sizeof( ((CBinaryFrobMover *)0)->m_registeredAI ) },
	{ "idEntityPtr < idEntity >", "m_lastUsedBy", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_lastUsedBy), sizeof( ((CBinaryFrobMover *)0)->m_lastUsedBy ) },
	{ "idEntityPtr < idEntity >", "m_searching", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_searching), sizeof( ((CBinaryFrobMover *)0)->m_searching ) },
	{ "bool", "m_targetingOff", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_targetingOff), sizeof( ((CBinaryFrobMover *)0)->m_targetingOff ) },
	{ "bool", "m_wasFoundLocked", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_wasFoundLocked), sizeof( ((CBinaryFrobMover *)0)->m_wasFoundLocked ) },
	{ "int", "m_timeDoorStartedMoving", (ptrdiff_t)(&((CBinaryFrobMover *)0)->m_timeDoorStartedMoving), sizeof( ((CBinaryFrobMover *)0)->m_timeDoorStartedMoving ) },
	{ NULL, 0 }
};

static classVariableInfo_t CFrobDoor_typeInfo[] = {
	{ "idList < idStr >", "m_OpenPeers", (ptrdiff_t)(&((CFrobDoor *)0)->m_OpenPeers), sizeof( ((CFrobDoor *)0)->m_OpenPeers ) },
	{ "idList < idStr >", "m_LockPeers", (ptrdiff_t)(&((CFrobDoor *)0)->m_LockPeers), sizeof( ((CFrobDoor *)0)->m_LockPeers ) },
	{ "idEntityPtr < CFrobDoor >", "m_DoubleDoor", (ptrdiff_t)(&((CFrobDoor *)0)->m_DoubleDoor), sizeof( ((CFrobDoor *)0)->m_DoubleDoor ) },
	{ "idList < idEntityPtr < CFrobDoorHandle > >", "m_Doorhandles", (ptrdiff_t)(&((CFrobDoor *)0)->m_Doorhandles), sizeof( ((CFrobDoor *)0)->m_Doorhandles ) },
	{ "int", "m_LastHandleUpdateTime", (ptrdiff_t)(&((CFrobDoor *)0)->m_LastHandleUpdateTime), sizeof( ((CFrobDoor *)0)->m_LastHandleUpdateTime ) },
	{ "float", "m_lossOpen", (ptrdiff_t)(&((CFrobDoor *)0)->m_lossOpen), sizeof( ((CFrobDoor *)0)->m_lossOpen ) },
	{ "float", "m_lossDoubleOpen", (ptrdiff_t)(&((CFrobDoor *)0)->m_lossDoubleOpen), sizeof( ((CFrobDoor *)0)->m_lossDoubleOpen ) },
	{ "float", "m_lossClosed", (ptrdiff_t)(&((CFrobDoor *)0)->m_lossClosed), sizeof( ((CFrobDoor *)0)->m_lossClosed ) },
	{ "float", "m_lossBaseAI", (ptrdiff_t)(&((CFrobDoor *)0)->m_lossBaseAI), sizeof( ((CFrobDoor *)0)->m_lossBaseAI ) },
	{ "float", "m_lossBasePlayer", (ptrdiff_t)(&((CFrobDoor *)0)->m_lossBasePlayer), sizeof( ((CFrobDoor *)0)->m_lossBasePlayer ) },
	{ "bool", "m_isTransparent", (ptrdiff_t)(&((CFrobDoor *)0)->m_isTransparent), sizeof( ((CFrobDoor *)0)->m_isTransparent ) },
	{ "idVec3[8]", "m_doorPositions", (ptrdiff_t)(&((CFrobDoor *)0)->m_doorPositions), sizeof( ((CFrobDoor *)0)->m_doorPositions ) },
	{ "idList < idEntityPtr < idEntity > >", "m_controllers", (ptrdiff_t)(&((CFrobDoor *)0)->m_controllers), sizeof( ((CFrobDoor *)0)->m_controllers ) },
	{ "idEntityPtr < idPeek >", "m_peek", (ptrdiff_t)(&((CFrobDoor *)0)->m_peek), sizeof( ((CFrobDoor *)0)->m_peek ) },
	{ "idList < idEntityPtr < idEntity > >", "m_doorHandlingPositions", (ptrdiff_t)(&((CFrobDoor *)0)->m_doorHandlingPositions), sizeof( ((CFrobDoor *)0)->m_doorHandlingPositions ) },
	{ "bool", "m_rotates", (ptrdiff_t)(&((CFrobDoor *)0)->m_rotates), sizeof( ((CFrobDoor *)0)->m_rotates ) },
	{ "bool", "m_previouslyPushingPlayer", (ptrdiff_t)(&((CFrobDoor *)0)->m_previouslyPushingPlayer), sizeof( ((CFrobDoor *)0)->m_previouslyPushingPlayer ) },
	{ "bool", "m_previouslyFrobable", (ptrdiff_t)(&((CFrobDoor *)0)->m_previouslyFrobable), sizeof( ((CFrobDoor *)0)->m_previouslyFrobable ) },
	{ "bool", "m_AIPushingDoor", (ptrdiff_t)(&((CFrobDoor *)0)->m_AIPushingDoor), sizeof( ((CFrobDoor *)0)->m_AIPushingDoor ) },
	{ "float", "m_speedFactor", (ptrdiff_t)(&((CFrobDoor *)0)->m_speedFactor), sizeof( ((CFrobDoor *)0)->m_speedFactor ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_DoorInfo_typeInfo[] = {
	{ "int", "areaNum", (ptrdiff_t)(&((ai::DoorInfo *)0)->areaNum), sizeof( ((ai::DoorInfo *)0)->areaNum ) },
	{ "int", "timeCanUseAgain", (ptrdiff_t)(&((ai::DoorInfo *)0)->timeCanUseAgain), sizeof( ((ai::DoorInfo *)0)->timeCanUseAgain ) },
	{ "int", "lastTimeTriedToOpen", (ptrdiff_t)(&((ai::DoorInfo *)0)->lastTimeTriedToOpen), sizeof( ((ai::DoorInfo *)0)->lastTimeTriedToOpen ) },
	{ "bool", "wasOpen", (ptrdiff_t)(&((ai::DoorInfo *)0)->wasOpen), sizeof( ((ai::DoorInfo *)0)->wasOpen ) },
	{ "bool", "wasLocked", (ptrdiff_t)(&((ai::DoorInfo *)0)->wasLocked), sizeof( ((ai::DoorInfo *)0)->wasLocked ) },
	{ "bool", "wasBlocked", (ptrdiff_t)(&((ai::DoorInfo *)0)->wasBlocked), sizeof( ((ai::DoorInfo *)0)->wasBlocked ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_Memory_DoorRelatedVariables_typeInfo[] = {
	{ "idEntityPtr < CFrobDoor >", "currentDoor", (ptrdiff_t)(&((ai::Memory::DoorRelatedVariables *)0)->currentDoor), sizeof( ((ai::Memory::DoorRelatedVariables *)0)->currentDoor ) },
	{ "DoorInfoMap", "doorInfo", (ptrdiff_t)(&((ai::Memory::DoorRelatedVariables *)0)->doorInfo), sizeof( ((ai::Memory::DoorRelatedVariables *)0)->doorInfo ) },
	{ "AreaToDoorInfoMap", "areaDoorInfoMap", (ptrdiff_t)(&((ai::Memory::DoorRelatedVariables *)0)->areaDoorInfoMap), sizeof( ((ai::Memory::DoorRelatedVariables *)0)->areaDoorInfoMap ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_Memory_GreetingInfo_typeInfo[] = {
	{ "int", "nextGreetingTime", (ptrdiff_t)(&((ai::Memory::GreetingInfo *)0)->nextGreetingTime), sizeof( ((ai::Memory::GreetingInfo *)0)->nextGreetingTime ) },
	{ "int", "nextWarningTime", (ptrdiff_t)(&((ai::Memory::GreetingInfo *)0)->nextWarningTime), sizeof( ((ai::Memory::GreetingInfo *)0)->nextWarningTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_Memory_typeInfo[] = {
	{ "idAI *", "owner", (ptrdiff_t)(&((ai::Memory *)0)->owner), sizeof( ((ai::Memory *)0)->owner ) },
	{ "idEntityPtr < idPathCorner >", "currentPath", (ptrdiff_t)(&((ai::Memory *)0)->currentPath), sizeof( ((ai::Memory *)0)->currentPath ) },
	{ "idEntityPtr < idPathCorner >", "nextPath", (ptrdiff_t)(&((ai::Memory *)0)->nextPath), sizeof( ((ai::Memory *)0)->nextPath ) },
	{ "idEntityPtr < idPathCorner >", "lastPath", (ptrdiff_t)(&((ai::Memory *)0)->lastPath), sizeof( ((ai::Memory *)0)->lastPath ) },
	{ "int", "lastAlertRiseTime", (ptrdiff_t)(&((ai::Memory *)0)->lastAlertRiseTime), sizeof( ((ai::Memory *)0)->lastAlertRiseTime ) },
	{ "int", "deadTimeAfterAlertRise", (ptrdiff_t)(&((ai::Memory *)0)->deadTimeAfterAlertRise), sizeof( ((ai::Memory *)0)->deadTimeAfterAlertRise ) },
	{ "int", "lastPatrolChatTime", (ptrdiff_t)(&((ai::Memory *)0)->lastPatrolChatTime), sizeof( ((ai::Memory *)0)->lastPatrolChatTime ) },
	{ "int", "lastTimeFriendlyAISeen", (ptrdiff_t)(&((ai::Memory *)0)->lastTimeFriendlyAISeen), sizeof( ((ai::Memory *)0)->lastTimeFriendlyAISeen ) },
	{ "int", "lastTimeEnemySeen", (ptrdiff_t)(&((ai::Memory *)0)->lastTimeEnemySeen), sizeof( ((ai::Memory *)0)->lastTimeEnemySeen ) },
	{ "int", "lastTimeVisualStimBark", (ptrdiff_t)(&((ai::Memory *)0)->lastTimeVisualStimBark), sizeof( ((ai::Memory *)0)->lastTimeVisualStimBark ) },
	{ "int", "lastTimeAlertBark", (ptrdiff_t)(&((ai::Memory *)0)->lastTimeAlertBark), sizeof( ((ai::Memory *)0)->lastTimeAlertBark ) },
	{ "bool", "agitatedSearched", (ptrdiff_t)(&((ai::Memory *)0)->agitatedSearched), sizeof( ((ai::Memory *)0)->agitatedSearched ) },
	{ "bool", "mightHaveSeenPlayer", (ptrdiff_t)(&((ai::Memory *)0)->mightHaveSeenPlayer), sizeof( ((ai::Memory *)0)->mightHaveSeenPlayer ) },
	{ "int", "nextTimeLightStimBark", (ptrdiff_t)(&((ai::Memory *)0)->nextTimeLightStimBark), sizeof( ((ai::Memory *)0)->nextTimeLightStimBark ) },
	{ "int", "countEvidenceOfIntruders", (ptrdiff_t)(&((ai::Memory *)0)->countEvidenceOfIntruders), sizeof( ((ai::Memory *)0)->countEvidenceOfIntruders ) },
	{ "int", "nextHeadTurnCheckTime", (ptrdiff_t)(&((ai::Memory *)0)->nextHeadTurnCheckTime), sizeof( ((ai::Memory *)0)->nextHeadTurnCheckTime ) },
	{ "bool", "currentlyHeadTurning", (ptrdiff_t)(&((ai::Memory *)0)->currentlyHeadTurning), sizeof( ((ai::Memory *)0)->currentlyHeadTurning ) },
	{ "bool", "currentlyBarking", (ptrdiff_t)(&((ai::Memory *)0)->currentlyBarking), sizeof( ((ai::Memory *)0)->currentlyBarking ) },
	{ "int", "headTurnEndTime", (ptrdiff_t)(&((ai::Memory *)0)->headTurnEndTime), sizeof( ((ai::Memory *)0)->headTurnEndTime ) },
	{ "idVec3", "idlePosition", (ptrdiff_t)(&((ai::Memory *)0)->idlePosition), sizeof( ((ai::Memory *)0)->idlePosition ) },
	{ "idVec3", "returnSitPosition", (ptrdiff_t)(&((ai::Memory *)0)->returnSitPosition), sizeof( ((ai::Memory *)0)->returnSitPosition ) },
	{ "float", "idleYaw", (ptrdiff_t)(&((ai::Memory *)0)->idleYaw), sizeof( ((ai::Memory *)0)->idleYaw ) },
	{ "bool", "playIdleAnimations", (ptrdiff_t)(&((ai::Memory *)0)->playIdleAnimations), sizeof( ((ai::Memory *)0)->playIdleAnimations ) },
	{ "bool", "enemiesHaveBeenSeen", (ptrdiff_t)(&((ai::Memory *)0)->enemiesHaveBeenSeen), sizeof( ((ai::Memory *)0)->enemiesHaveBeenSeen ) },
	{ "bool", "hasBeenAttackedByEnemy", (ptrdiff_t)(&((ai::Memory *)0)->hasBeenAttackedByEnemy), sizeof( ((ai::Memory *)0)->hasBeenAttackedByEnemy ) },
	{ "bool", "itemsHaveBeenStolen", (ptrdiff_t)(&((ai::Memory *)0)->itemsHaveBeenStolen), sizeof( ((ai::Memory *)0)->itemsHaveBeenStolen ) },
	{ "bool", "itemsHaveBeenBroken", (ptrdiff_t)(&((ai::Memory *)0)->itemsHaveBeenBroken), sizeof( ((ai::Memory *)0)->itemsHaveBeenBroken ) },
	{ "bool", "unconsciousPeopleHaveBeenFound", (ptrdiff_t)(&((ai::Memory *)0)->unconsciousPeopleHaveBeenFound), sizeof( ((ai::Memory *)0)->unconsciousPeopleHaveBeenFound ) },
	{ "bool", "deadPeopleHaveBeenFound", (ptrdiff_t)(&((ai::Memory *)0)->deadPeopleHaveBeenFound), sizeof( ((ai::Memory *)0)->deadPeopleHaveBeenFound ) },
	{ "bool", "stayPut", (ptrdiff_t)(&((ai::Memory *)0)->stayPut), sizeof( ((ai::Memory *)0)->stayPut ) },
	{ "idVec3", "alertPos", (ptrdiff_t)(&((ai::Memory *)0)->alertPos), sizeof( ((ai::Memory *)0)->alertPos ) },
	{ "idVec3", "posEnemySeen", (ptrdiff_t)(&((ai::Memory *)0)->posEnemySeen), sizeof( ((ai::Memory *)0)->posEnemySeen ) },
	{ "idVec3", "posMissingItem", (ptrdiff_t)(&((ai::Memory *)0)->posMissingItem), sizeof( ((ai::Memory *)0)->posMissingItem ) },
	{ "idVec3", "posEvidenceIntruders", (ptrdiff_t)(&((ai::Memory *)0)->posEvidenceIntruders), sizeof( ((ai::Memory *)0)->posEvidenceIntruders ) },
	{ "EPainCause", "causeOfPain", (ptrdiff_t)(&((ai::Memory *)0)->causeOfPain), sizeof( ((ai::Memory *)0)->causeOfPain ) },
	{ "bool", "painStatePushedThisFrame", (ptrdiff_t)(&((ai::Memory *)0)->painStatePushedThisFrame), sizeof( ((ai::Memory *)0)->painStatePushedThisFrame ) },
	{ "bool", "mandatory", (ptrdiff_t)(&((ai::Memory *)0)->mandatory), sizeof( ((ai::Memory *)0)->mandatory ) },
	{ "bool", "respondingToSomethingSuspiciousMsg", (ptrdiff_t)(&((ai::Memory *)0)->respondingToSomethingSuspiciousMsg), sizeof( ((ai::Memory *)0)->respondingToSomethingSuspiciousMsg ) },
	{ "int", "timeEvidenceIntruders", (ptrdiff_t)(&((ai::Memory *)0)->timeEvidenceIntruders), sizeof( ((ai::Memory *)0)->timeEvidenceIntruders ) },
	{ "idEntityPtr < idEntity >", "corpseFound", (ptrdiff_t)(&((ai::Memory *)0)->corpseFound), sizeof( ((ai::Memory *)0)->corpseFound ) },
	{ "idEntityPtr < idEntity >", "unconsciousPersonFound", (ptrdiff_t)(&((ai::Memory *)0)->unconsciousPersonFound), sizeof( ((ai::Memory *)0)->unconsciousPersonFound ) },
	{ "bool", "stopRelight", (ptrdiff_t)(&((ai::Memory *)0)->stopRelight), sizeof( ((ai::Memory *)0)->stopRelight ) },
	{ "bool", "stopExaminingRope", (ptrdiff_t)(&((ai::Memory *)0)->stopExaminingRope), sizeof( ((ai::Memory *)0)->stopExaminingRope ) },
	{ "bool", "stopReactingToHit", (ptrdiff_t)(&((ai::Memory *)0)->stopReactingToHit), sizeof( ((ai::Memory *)0)->stopReactingToHit ) },
	{ "bool", "stopReactingToPickedPocket", (ptrdiff_t)(&((ai::Memory *)0)->stopReactingToPickedPocket), sizeof( ((ai::Memory *)0)->stopReactingToPickedPocket ) },
	{ "bool", "latchPickedPocket", (ptrdiff_t)(&((ai::Memory *)0)->latchPickedPocket), sizeof( ((ai::Memory *)0)->latchPickedPocket ) },
	{ "bool", "insideAlertWindow", (ptrdiff_t)(&((ai::Memory *)0)->insideAlertWindow), sizeof( ((ai::Memory *)0)->insideAlertWindow ) },
	{ "bool", "stopHandlingDoor", (ptrdiff_t)(&((ai::Memory *)0)->stopHandlingDoor), sizeof( ((ai::Memory *)0)->stopHandlingDoor ) },
	{ "bool", "stopHandlingElevator", (ptrdiff_t)(&((ai::Memory *)0)->stopHandlingElevator), sizeof( ((ai::Memory *)0)->stopHandlingElevator ) },
	{ "int", "nextTime2GenRandomSpot", (ptrdiff_t)(&((ai::Memory *)0)->nextTime2GenRandomSpot), sizeof( ((ai::Memory *)0)->nextTime2GenRandomSpot ) },
	{ "idEntityPtr < idLight >", "relightLight", (ptrdiff_t)(&((ai::Memory *)0)->relightLight), sizeof( ((ai::Memory *)0)->relightLight ) },
	{ "EAlertClass", "alertClass", (ptrdiff_t)(&((ai::Memory *)0)->alertClass), sizeof( ((ai::Memory *)0)->alertClass ) },
	{ "EAlertType", "alertType", (ptrdiff_t)(&((ai::Memory *)0)->alertType), sizeof( ((ai::Memory *)0)->alertType ) },
	{ "int", "lastAudioAlertTime", (ptrdiff_t)(&((ai::Memory *)0)->lastAudioAlertTime), sizeof( ((ai::Memory *)0)->lastAudioAlertTime ) },
	{ "bool", "stimulusLocationItselfShouldBeSearched", (ptrdiff_t)(&((ai::Memory *)0)->stimulusLocationItselfShouldBeSearched), sizeof( ((ai::Memory *)0)->stimulusLocationItselfShouldBeSearched ) },
	{ "bool", "investigateStimulusLocationClosely", (ptrdiff_t)(&((ai::Memory *)0)->investigateStimulusLocationClosely), sizeof( ((ai::Memory *)0)->investigateStimulusLocationClosely ) },
	{ "bool", "alertedDueToCommunication", (ptrdiff_t)(&((ai::Memory *)0)->alertedDueToCommunication), sizeof( ((ai::Memory *)0)->alertedDueToCommunication ) },
	{ "idVec3", "lastAlertPosSearched", (ptrdiff_t)(&((ai::Memory *)0)->lastAlertPosSearched), sizeof( ((ai::Memory *)0)->lastAlertPosSearched ) },
	{ "idVec3", "alertSearchCenter", (ptrdiff_t)(&((ai::Memory *)0)->alertSearchCenter), sizeof( ((ai::Memory *)0)->alertSearchCenter ) },
	{ "idVec3", "alertSearchVolume", (ptrdiff_t)(&((ai::Memory *)0)->alertSearchVolume), sizeof( ((ai::Memory *)0)->alertSearchVolume ) },
	{ "idVec3", "alertSearchExclusionVolume", (ptrdiff_t)(&((ai::Memory *)0)->alertSearchExclusionVolume), sizeof( ((ai::Memory *)0)->alertSearchExclusionVolume ) },
	{ "idVec3", "lastEnemyPos", (ptrdiff_t)(&((ai::Memory *)0)->lastEnemyPos), sizeof( ((ai::Memory *)0)->lastEnemyPos ) },
	{ "bool", "canHitEnemy", (ptrdiff_t)(&((ai::Memory *)0)->canHitEnemy), sizeof( ((ai::Memory *)0)->canHitEnemy ) },
	{ "bool", "willBeAbleToHitEnemy", (ptrdiff_t)(&((ai::Memory *)0)->willBeAbleToHitEnemy), sizeof( ((ai::Memory *)0)->willBeAbleToHitEnemy ) },
	{ "bool", "canBeHitByEnemy", (ptrdiff_t)(&((ai::Memory *)0)->canBeHitByEnemy), sizeof( ((ai::Memory *)0)->canBeHitByEnemy ) },
	{ "idVec3", "currentSearchSpot", (ptrdiff_t)(&((ai::Memory *)0)->currentSearchSpot), sizeof( ((ai::Memory *)0)->currentSearchSpot ) },
	{ "bool", "hidingSpotTestStarted", (ptrdiff_t)(&((ai::Memory *)0)->hidingSpotTestStarted), sizeof( ((ai::Memory *)0)->hidingSpotTestStarted ) },
	{ "bool", "hidingSpotSearchDone", (ptrdiff_t)(&((ai::Memory *)0)->hidingSpotSearchDone), sizeof( ((ai::Memory *)0)->hidingSpotSearchDone ) },
	{ "bool", "noMoreHidingSpots", (ptrdiff_t)(&((ai::Memory *)0)->noMoreHidingSpots), sizeof( ((ai::Memory *)0)->noMoreHidingSpots ) },
	{ "bool", "restartSearchForHidingSpots", (ptrdiff_t)(&((ai::Memory *)0)->restartSearchForHidingSpots), sizeof( ((ai::Memory *)0)->restartSearchForHidingSpots ) },
	{ "int", "hidingSpotThinkFrameCount", (ptrdiff_t)(&((ai::Memory *)0)->hidingSpotThinkFrameCount), sizeof( ((ai::Memory *)0)->hidingSpotThinkFrameCount ) },
	{ "bool", "hidingSpotInvestigationInProgress", (ptrdiff_t)(&((ai::Memory *)0)->hidingSpotInvestigationInProgress), sizeof( ((ai::Memory *)0)->hidingSpotInvestigationInProgress ) },
	{ "bool", "guardingInProgress", (ptrdiff_t)(&((ai::Memory *)0)->guardingInProgress), sizeof( ((ai::Memory *)0)->guardingInProgress ) },
	{ "bool", "millingInProgress", (ptrdiff_t)(&((ai::Memory *)0)->millingInProgress), sizeof( ((ai::Memory *)0)->millingInProgress ) },
	{ "bool", "stopHidingSpotInvestigation", (ptrdiff_t)(&((ai::Memory *)0)->stopHidingSpotInvestigation), sizeof( ((ai::Memory *)0)->stopHidingSpotInvestigation ) },
	{ "bool", "stopGuarding", (ptrdiff_t)(&((ai::Memory *)0)->stopGuarding), sizeof( ((ai::Memory *)0)->stopGuarding ) },
	{ "bool", "stopMilling", (ptrdiff_t)(&((ai::Memory *)0)->stopMilling), sizeof( ((ai::Memory *)0)->stopMilling ) },
	{ "bool", "shouldMill", (ptrdiff_t)(&((ai::Memory *)0)->shouldMill), sizeof( ((ai::Memory *)0)->shouldMill ) },
	{ "float", "guardingAngle", (ptrdiff_t)(&((ai::Memory *)0)->guardingAngle), sizeof( ((ai::Memory *)0)->guardingAngle ) },
	{ "int", "consecutiveRadialSpotFailures", (ptrdiff_t)(&((ai::Memory *)0)->consecutiveRadialSpotFailures), sizeof( ((ai::Memory *)0)->consecutiveRadialSpotFailures ) },
	{ "ERepeatedBarkState", "repeatedBarkState", (ptrdiff_t)(&((ai::Memory *)0)->repeatedBarkState), sizeof( ((ai::Memory *)0)->repeatedBarkState ) },
	{ "bool", "fleeing", (ptrdiff_t)(&((ai::Memory *)0)->fleeing), sizeof( ((ai::Memory *)0)->fleeing ) },
	{ "idVec3", "positionBeforeTakingCover", (ptrdiff_t)(&((ai::Memory *)0)->positionBeforeTakingCover), sizeof( ((ai::Memory *)0)->positionBeforeTakingCover ) },
	{ "bool", "resolvingMovementBlock", (ptrdiff_t)(&((ai::Memory *)0)->resolvingMovementBlock), sizeof( ((ai::Memory *)0)->resolvingMovementBlock ) },
	{ "idEntityPtr < CFrobDoor >", "lastDoorHandled", (ptrdiff_t)(&((ai::Memory *)0)->lastDoorHandled), sizeof( ((ai::Memory *)0)->lastDoorHandled ) },
	{ "idEntityPtr < idEntity >", "hitByThisMoveable", (ptrdiff_t)(&((ai::Memory *)0)->hitByThisMoveable), sizeof( ((ai::Memory *)0)->hitByThisMoveable ) },
	{ "bool", "issueMoveToPositionTask", (ptrdiff_t)(&((ai::Memory *)0)->issueMoveToPositionTask), sizeof( ((ai::Memory *)0)->issueMoveToPositionTask ) },
	{ "idEntityPtr < CFrobDoor >", "closeMe", (ptrdiff_t)(&((ai::Memory *)0)->closeMe), sizeof( ((ai::Memory *)0)->closeMe ) },
	{ "idEntityPtr < idEntity >", "frontPos", (ptrdiff_t)(&((ai::Memory *)0)->frontPos), sizeof( ((ai::Memory *)0)->frontPos ) },
	{ "idEntityPtr < idEntity >", "backPos", (ptrdiff_t)(&((ai::Memory *)0)->backPos), sizeof( ((ai::Memory *)0)->backPos ) },
	{ "bool", "closeSuspiciousDoor", (ptrdiff_t)(&((ai::Memory *)0)->closeSuspiciousDoor), sizeof( ((ai::Memory *)0)->closeSuspiciousDoor ) },
	{ "bool", "doorSwingsToward", (ptrdiff_t)(&((ai::Memory *)0)->doorSwingsToward), sizeof( ((ai::Memory *)0)->doorSwingsToward ) },
	{ "bool", "closeFromAwayPos", (ptrdiff_t)(&((ai::Memory *)0)->closeFromAwayPos), sizeof( ((ai::Memory *)0)->closeFromAwayPos ) },
	{ "int", "susDoorCloseFromThisSide", (ptrdiff_t)(&((ai::Memory *)0)->susDoorCloseFromThisSide), sizeof( ((ai::Memory *)0)->susDoorCloseFromThisSide ) },
	{ "bool", "susDoorSameAsCurrentDoor", (ptrdiff_t)(&((ai::Memory *)0)->susDoorSameAsCurrentDoor), sizeof( ((ai::Memory *)0)->susDoorSameAsCurrentDoor ) },
	{ "int", "blockedDoorCount", (ptrdiff_t)(&((ai::Memory *)0)->blockedDoorCount), sizeof( ((ai::Memory *)0)->blockedDoorCount ) },
	{ "float", "savedAlertLevelDecreaseRate", (ptrdiff_t)(&((ai::Memory *)0)->savedAlertLevelDecreaseRate), sizeof( ((ai::Memory *)0)->savedAlertLevelDecreaseRate ) },
	{ "int", "currentSearchEventID", (ptrdiff_t)(&((ai::Memory *)0)->currentSearchEventID), sizeof( ((ai::Memory *)0)->currentSearchEventID ) },
	{ "int", "searchStartTime", (ptrdiff_t)(&((ai::Memory *)0)->searchStartTime), sizeof( ((ai::Memory *)0)->searchStartTime ) },
	{ "idEntityPtr < idEntity >", "attacker", (ptrdiff_t)(&((ai::Memory *)0)->attacker), sizeof( ((ai::Memory *)0)->attacker ) },
	{ "bool", "playerResponsible", (ptrdiff_t)(&((ai::Memory *)0)->playerResponsible), sizeof( ((ai::Memory *)0)->playerResponsible ) },
	{ "int", "combatState", (ptrdiff_t)(&((ai::Memory *)0)->combatState), sizeof( ((ai::Memory *)0)->combatState ) },
	{ "bool", "leaveAlertState", (ptrdiff_t)(&((ai::Memory *)0)->leaveAlertState), sizeof( ((ai::Memory *)0)->leaveAlertState ) },
	{ "ai::Memory::DoorRelatedVariables", "doorRelated", (ptrdiff_t)(&((ai::Memory *)0)->doorRelated), sizeof( ((ai::Memory *)0)->doorRelated ) },
	{ "ActorGreetingInfoMap", "greetingInfo", (ptrdiff_t)(&((ai::Memory *)0)->greetingInfo), sizeof( ((ai::Memory *)0)->greetingInfo ) },
	{ NULL, 0 }
};

static classVariableInfo_t CStimResponse_typeInfo[] = {
	{ "int", "m_UniqueId", (ptrdiff_t)(&((CStimResponse *)0)->m_UniqueId), sizeof( ((CStimResponse *)0)->m_UniqueId ) },
	{ "StimType", "m_StimTypeId", (ptrdiff_t)(&((CStimResponse *)0)->m_StimTypeId), sizeof( ((CStimResponse *)0)->m_StimTypeId ) },
	{ "idStr", "m_StimTypeName", (ptrdiff_t)(&((CStimResponse *)0)->m_StimTypeName), sizeof( ((CStimResponse *)0)->m_StimTypeName ) },
	{ "bool", "m_Removable", (ptrdiff_t)(&((CStimResponse *)0)->m_Removable), sizeof( ((CStimResponse *)0)->m_Removable ) },
	{ "StimState", "m_State", (ptrdiff_t)(&((CStimResponse *)0)->m_State), sizeof( ((CStimResponse *)0)->m_State ) },
	{ "float", "m_Chance", (ptrdiff_t)(&((CStimResponse *)0)->m_Chance), sizeof( ((CStimResponse *)0)->m_Chance ) },
	{ "int", "m_ChanceTimer", (ptrdiff_t)(&((CStimResponse *)0)->m_ChanceTimer), sizeof( ((CStimResponse *)0)->m_ChanceTimer ) },
	{ "int", "m_NextChanceTime", (ptrdiff_t)(&((CStimResponse *)0)->m_NextChanceTime), sizeof( ((CStimResponse *)0)->m_NextChanceTime ) },
	{ "bool", "m_Default", (ptrdiff_t)(&((CStimResponse *)0)->m_Default), sizeof( ((CStimResponse *)0)->m_Default ) },
	{ "int", "m_EnabledTimeStamp", (ptrdiff_t)(&((CStimResponse *)0)->m_EnabledTimeStamp), sizeof( ((CStimResponse *)0)->m_EnabledTimeStamp ) },
	{ "int", "m_Duration", (ptrdiff_t)(&((CStimResponse *)0)->m_Duration), sizeof( ((CStimResponse *)0)->m_Duration ) },
	{ "idEntityPtr < idEntity >", "m_Owner", (ptrdiff_t)(&((CStimResponse *)0)->m_Owner), sizeof( ((CStimResponse *)0)->m_Owner ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_CommMessage_typeInfo[] = {
	{ "TCommType", "m_commType", (ptrdiff_t)(&((ai::CommMessage *)0)->m_commType), sizeof( ((ai::CommMessage *)0)->m_commType ) },
	{ "idEntityPtr < idEntity >", "m_p_issuingEntity", (ptrdiff_t)(&((ai::CommMessage *)0)->m_p_issuingEntity), sizeof( ((ai::CommMessage *)0)->m_p_issuingEntity ) },
	{ "idEntityPtr < idEntity >", "m_p_recipientEntity", (ptrdiff_t)(&((ai::CommMessage *)0)->m_p_recipientEntity), sizeof( ((ai::CommMessage *)0)->m_p_recipientEntity ) },
	{ "int", "m_msgTag", (ptrdiff_t)(&((ai::CommMessage *)0)->m_msgTag), sizeof( ((ai::CommMessage *)0)->m_msgTag ) },
	{ "idEntityPtr < idEntity >", "m_p_directObjectEntity", (ptrdiff_t)(&((ai::CommMessage *)0)->m_p_directObjectEntity), sizeof( ((ai::CommMessage *)0)->m_p_directObjectEntity ) },
	{ "idVec3", "m_directObjectLocation", (ptrdiff_t)(&((ai::CommMessage *)0)->m_directObjectLocation), sizeof( ((ai::CommMessage *)0)->m_directObjectLocation ) },
	{ "int", "m_eventID", (ptrdiff_t)(&((ai::CommMessage *)0)->m_eventID), sizeof( ((ai::CommMessage *)0)->m_eventID ) },
	{ "idVec3", "m_positionOfIssuance", (ptrdiff_t)(&((ai::CommMessage *)0)->m_positionOfIssuance), sizeof( ((ai::CommMessage *)0)->m_positionOfIssuance ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_Task_typeInfo[] = {
	{ "idEntityPtr < idAI >", "_owner", (ptrdiff_t)(&((ai::Task *)0)->_owner), sizeof( ((ai::Task *)0)->_owner ) },
	{ "bool", "_initialised", (ptrdiff_t)(&((ai::Task *)0)->_initialised), sizeof( ((ai::Task *)0)->_initialised ) },
	{ "bool", "_finished", (ptrdiff_t)(&((ai::Task *)0)->_finished), sizeof( ((ai::Task *)0)->_finished ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_Library_class_Element__Registrar_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_Library_class_Element__typeInfo[] = {
//	{ "ElementMap", "_elements", (ptrdiff_t)(&((ai::Library< class Element > *)0)->_elements), sizeof( ((ai::Library< class Element > *)0)->_elements ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_Subsystem_typeInfo[] = {
	{ "SubsystemId", "_id", (ptrdiff_t)(&((ai::Subsystem *)0)->_id), sizeof( ((ai::Subsystem *)0)->_id ) },
	{ "idEntityPtr < idAI >", "_owner", (ptrdiff_t)(&((ai::Subsystem *)0)->_owner), sizeof( ((ai::Subsystem *)0)->_owner ) },
	{ "TaskQueue", "_taskQueue", (ptrdiff_t)(&((ai::Subsystem *)0)->_taskQueue), sizeof( ((ai::Subsystem *)0)->_taskQueue ) },
	{ "TaskQueue", "_recycleBin", (ptrdiff_t)(&((ai::Subsystem *)0)->_recycleBin), sizeof( ((ai::Subsystem *)0)->_recycleBin ) },
	{ "bool", "_initTask", (ptrdiff_t)(&((ai::Subsystem *)0)->_initTask), sizeof( ((ai::Subsystem *)0)->_initTask ) },
	{ "bool", "_enabled", (ptrdiff_t)(&((ai::Subsystem *)0)->_enabled), sizeof( ((ai::Subsystem *)0)->_enabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_State_typeInfo[] = {
	{ "idEntityPtr < idAI >", "_owner", (ptrdiff_t)(&((ai::State *)0)->_owner), sizeof( ((ai::State *)0)->_owner ) },
	{ "float", "_alertLevelDecreaseRate", (ptrdiff_t)(&((ai::State *)0)->_alertLevelDecreaseRate), sizeof( ((ai::State *)0)->_alertLevelDecreaseRate ) },
	{ "int", "_drawEndTime", (ptrdiff_t)(&((ai::State *)0)->_drawEndTime), sizeof( ((ai::State *)0)->_drawEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_Mind_typeInfo[] = {
	{ "idEntityPtr < idAI >", "_owner", (ptrdiff_t)(&((ai::Mind *)0)->_owner), sizeof( ((ai::Mind *)0)->_owner ) },
	{ "StateQueue", "_stateQueue", (ptrdiff_t)(&((ai::Mind *)0)->_stateQueue), sizeof( ((ai::Mind *)0)->_stateQueue ) },
	{ "Memory", "_memory", (ptrdiff_t)(&((ai::Mind *)0)->_memory), sizeof( ((ai::Mind *)0)->_memory ) },
	{ "SubsystemId", "_subsystemIterator", (ptrdiff_t)(&((ai::Mind *)0)->_subsystemIterator), sizeof( ((ai::Mind *)0)->_subsystemIterator ) },
	{ "bool", "_switchState", (ptrdiff_t)(&((ai::Mind *)0)->_switchState), sizeof( ((ai::Mind *)0)->_switchState ) },
	{ "StatePtr", "_recycleBin", (ptrdiff_t)(&((ai::Mind *)0)->_recycleBin), sizeof( ((ai::Mind *)0)->_recycleBin ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_CommunicationTask_typeInfo[] = {
	{ "idStr", "_soundName", (ptrdiff_t)(&((ai::CommunicationTask *)0)->_soundName), sizeof( ((ai::CommunicationTask *)0)->_soundName ) },
	{ "int", "_priority", (ptrdiff_t)(&((ai::CommunicationTask *)0)->_priority), sizeof( ((ai::CommunicationTask *)0)->_priority ) },
	{ "int", "_barkStartTime", (ptrdiff_t)(&((ai::CommunicationTask *)0)->_barkStartTime), sizeof( ((ai::CommunicationTask *)0)->_barkStartTime ) },
	{ "int", "_barkLength", (ptrdiff_t)(&((ai::CommunicationTask *)0)->_barkLength), sizeof( ((ai::CommunicationTask *)0)->_barkLength ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_CommunicationSubsystem_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_MovementSubsystem_typeInfo[] = {
	{ "bool", "_patrolling", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_patrolling), sizeof( ((ai::MovementSubsystem *)0)->_patrolling ) },
	{ "idList < idVec3 >", "_originHistory", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_originHistory), sizeof( ((ai::MovementSubsystem *)0)->_originHistory ) },
	{ "idList < int >", "_frameHistory", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_frameHistory), sizeof( ((ai::MovementSubsystem *)0)->_frameHistory ) },
	{ "int", "_curHistoryIndex", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_curHistoryIndex), sizeof( ((ai::MovementSubsystem *)0)->_curHistoryIndex ) },
	{ "idBounds", "_historyBounds", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_historyBounds), sizeof( ((ai::MovementSubsystem *)0)->_historyBounds ) },
	{ "float", "_historyBoundsThreshold", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_historyBoundsThreshold), sizeof( ((ai::MovementSubsystem *)0)->_historyBoundsThreshold ) },
	{ "BlockedState", "_state", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_state), sizeof( ((ai::MovementSubsystem *)0)->_state ) },
	{ "int", "_lastTimeNotBlocked", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_lastTimeNotBlocked), sizeof( ((ai::MovementSubsystem *)0)->_lastTimeNotBlocked ) },
	{ "int", "_blockTimeOut", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_blockTimeOut), sizeof( ((ai::MovementSubsystem *)0)->_blockTimeOut ) },
	{ "int", "_timeBlockStarted", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_timeBlockStarted), sizeof( ((ai::MovementSubsystem *)0)->_timeBlockStarted ) },
	{ "int", "_blockTimeShouldEnd", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_blockTimeShouldEnd), sizeof( ((ai::MovementSubsystem *)0)->_blockTimeShouldEnd ) },
	{ "int", "_timePauseStarted", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_timePauseStarted), sizeof( ((ai::MovementSubsystem *)0)->_timePauseStarted ) },
	{ "int", "_pauseTimeOut", (ptrdiff_t)(&((ai::MovementSubsystem *)0)->_pauseTimeOut), sizeof( ((ai::MovementSubsystem *)0)->_pauseTimeOut ) },
	{ NULL, 0 }
};

static classVariableInfo_t CDarkmodAASHidingSpotFinder_typeInfo[] = {
	{ "float", "hidingSpotRedundancyDistance", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->hidingSpotRedundancyDistance), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->hidingSpotRedundancyDistance ) },
	{ "ESearchState", "searchState", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->searchState), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->searchState ) },
	{ "idVec3", "hideFromPosition", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->hideFromPosition), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->hideFromPosition ) },
	{ "int[4]", "hideFromPVSAreas", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->hideFromPVSAreas), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->hideFromPVSAreas ) },
	{ "int", "numHideFromPVSAreas", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->numHideFromPVSAreas), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->numHideFromPVSAreas ) },
	{ "mutable pvsHandle_t", "h_hideFromPVS", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->h_hideFromPVS), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->h_hideFromPVS ) },
	{ "int", "numPVSAreas", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->numPVSAreas), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->numPVSAreas ) },
	{ "int[4]", "PVSAreas", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->PVSAreas), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->PVSAreas ) },
	{ "int", "numPVSAreasIterated", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->numPVSAreasIterated), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->numPVSAreasIterated ) },
	{ "idList < int >", "aasAreaIndices", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->aasAreaIndices), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->aasAreaIndices ) },
	{ "int", "numAASAreaIndicesSearched", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->numAASAreaIndicesSearched), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->numAASAreaIndicesSearched ) },
	{ "idAAS *", "p_aas", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->p_aas), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->p_aas ) },
	{ "float", "hidingHeight", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->hidingHeight), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->hidingHeight ) },
	{ "idBounds", "searchLimits", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->searchLimits), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->searchLimits ) },
	{ "idVec3", "searchCenter", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->searchCenter), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->searchCenter ) },
	{ "float", "searchRadius", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->searchRadius), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->searchRadius ) },
	{ "idBounds", "searchIgnoreLimits", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->searchIgnoreLimits), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->searchIgnoreLimits ) },
	{ "int", "hidingSpotTypesAllowed", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->hidingSpotTypesAllowed), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->hidingSpotTypesAllowed ) },
	{ "idEntityPtr < idEntity >", "p_ignoreEntity", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->p_ignoreEntity), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->p_ignoreEntity ) },
	{ "int", "areasTestedThisPass", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->areasTestedThisPass), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->areasTestedThisPass ) },
	{ "int", "lastProcessingFrameNumber", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->lastProcessingFrameNumber), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->lastProcessingFrameNumber ) },
	{ "int", "currentGridSearchAASAreaNum", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchAASAreaNum), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchAASAreaNum ) },
	{ "idBounds", "currentGridSearchBounds", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchBounds), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchBounds ) },
	{ "idVec3", "currentGridSearchBoundMins", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchBoundMins), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchBoundMins ) },
	{ "idVec3", "currentGridSearchBoundMaxes", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchBoundMaxes), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchBoundMaxes ) },
	{ "idVec3", "currentGridSearchPoint", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchPoint), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->currentGridSearchPoint ) },
	{ "CDarkmodHidingSpotTree", "hidingSpotList", (ptrdiff_t)(&((CDarkmodAASHidingSpotFinder *)0)->hidingSpotList), sizeof( ((CDarkmodAASHidingSpotFinder *)0)->hidingSpotList ) },
	{ NULL, 0 }
};

static classVariableInfo_t CHidingSpotSearchCollection_HidingSpotSearchNode_typeInfo[] = {
	{ "int", "searchId", (ptrdiff_t)(&((CHidingSpotSearchCollection::HidingSpotSearchNode *)0)->searchId), sizeof( ((CHidingSpotSearchCollection::HidingSpotSearchNode *)0)->searchId ) },
	{ "int", "refCount", (ptrdiff_t)(&((CHidingSpotSearchCollection::HidingSpotSearchNode *)0)->refCount), sizeof( ((CHidingSpotSearchCollection::HidingSpotSearchNode *)0)->refCount ) },
	{ "CDarkmodAASHidingSpotFinder", "search", (ptrdiff_t)(&((CHidingSpotSearchCollection::HidingSpotSearchNode *)0)->search), sizeof( ((CHidingSpotSearchCollection::HidingSpotSearchNode *)0)->search ) },
	{ NULL, 0 }
};

static classVariableInfo_t CHidingSpotSearchCollection_typeInfo[] = {
	{ "HidingSpotSearchMap", "searches", (ptrdiff_t)(&((CHidingSpotSearchCollection *)0)->searches), sizeof( ((CHidingSpotSearchCollection *)0)->searches ) },
	{ "int", "highestSearchId", (ptrdiff_t)(&((CHidingSpotSearchCollection *)0)->highestSearchId), sizeof( ((CHidingSpotSearchCollection *)0)->highestSearchId ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMoveState_typeInfo[] = {
	{ "moveType_t", "moveType", (ptrdiff_t)(&((idMoveState *)0)->moveType), sizeof( ((idMoveState *)0)->moveType ) },
	{ "moveCommand_t", "moveCommand", (ptrdiff_t)(&((idMoveState *)0)->moveCommand), sizeof( ((idMoveState *)0)->moveCommand ) },
	{ "moveStatus_t", "moveStatus", (ptrdiff_t)(&((idMoveState *)0)->moveStatus), sizeof( ((idMoveState *)0)->moveStatus ) },
	{ "idVec3", "moveDest", (ptrdiff_t)(&((idMoveState *)0)->moveDest), sizeof( ((idMoveState *)0)->moveDest ) },
	{ "idVec3", "moveDir", (ptrdiff_t)(&((idMoveState *)0)->moveDir), sizeof( ((idMoveState *)0)->moveDir ) },
	{ "idEntityPtr < idEntity >", "goalEntity", (ptrdiff_t)(&((idMoveState *)0)->goalEntity), sizeof( ((idMoveState *)0)->goalEntity ) },
	{ "idVec3", "goalEntityOrigin", (ptrdiff_t)(&((idMoveState *)0)->goalEntityOrigin), sizeof( ((idMoveState *)0)->goalEntityOrigin ) },
	{ "int", "toAreaNum", (ptrdiff_t)(&((idMoveState *)0)->toAreaNum), sizeof( ((idMoveState *)0)->toAreaNum ) },
	{ "int", "startTime", (ptrdiff_t)(&((idMoveState *)0)->startTime), sizeof( ((idMoveState *)0)->startTime ) },
	{ "int", "duration", (ptrdiff_t)(&((idMoveState *)0)->duration), sizeof( ((idMoveState *)0)->duration ) },
	{ "float", "speed", (ptrdiff_t)(&((idMoveState *)0)->speed), sizeof( ((idMoveState *)0)->speed ) },
	{ "float", "range", (ptrdiff_t)(&((idMoveState *)0)->range), sizeof( ((idMoveState *)0)->range ) },
	{ "float", "wanderYaw", (ptrdiff_t)(&((idMoveState *)0)->wanderYaw), sizeof( ((idMoveState *)0)->wanderYaw ) },
	{ "int", "nextWanderTime", (ptrdiff_t)(&((idMoveState *)0)->nextWanderTime), sizeof( ((idMoveState *)0)->nextWanderTime ) },
	{ "int", "blockTime", (ptrdiff_t)(&((idMoveState *)0)->blockTime), sizeof( ((idMoveState *)0)->blockTime ) },
	{ "idEntityPtr < idEntity >", "obstacle", (ptrdiff_t)(&((idMoveState *)0)->obstacle), sizeof( ((idMoveState *)0)->obstacle ) },
	{ "idVec3", "lastMoveOrigin", (ptrdiff_t)(&((idMoveState *)0)->lastMoveOrigin), sizeof( ((idMoveState *)0)->lastMoveOrigin ) },
	{ "int", "lastMoveTime", (ptrdiff_t)(&((idMoveState *)0)->lastMoveTime), sizeof( ((idMoveState *)0)->lastMoveTime ) },
	{ "int", "anim", (ptrdiff_t)(&((idMoveState *)0)->anim), sizeof( ((idMoveState *)0)->anim ) },
	{ "float", "accuracy", (ptrdiff_t)(&((idMoveState *)0)->accuracy), sizeof( ((idMoveState *)0)->accuracy ) },
	{ NULL, 0 }
};

static classVariableInfo_t obstaclePath_t_typeInfo[] = {
	{ "idVec3", "seekPos", (ptrdiff_t)(&((obstaclePath_t *)0)->seekPos), sizeof( ((obstaclePath_t *)0)->seekPos ) },
	{ "idEntity *", "firstObstacle", (ptrdiff_t)(&((obstaclePath_t *)0)->firstObstacle), sizeof( ((obstaclePath_t *)0)->firstObstacle ) },
	{ "idVec3", "startPosOutsideObstacles", (ptrdiff_t)(&((obstaclePath_t *)0)->startPosOutsideObstacles), sizeof( ((obstaclePath_t *)0)->startPosOutsideObstacles ) },
	{ "idEntity *", "startPosObstacle", (ptrdiff_t)(&((obstaclePath_t *)0)->startPosObstacle), sizeof( ((obstaclePath_t *)0)->startPosObstacle ) },
	{ "idVec3", "seekPosOutsideObstacles", (ptrdiff_t)(&((obstaclePath_t *)0)->seekPosOutsideObstacles), sizeof( ((obstaclePath_t *)0)->seekPosOutsideObstacles ) },
	{ "idEntity *", "seekPosObstacle", (ptrdiff_t)(&((obstaclePath_t *)0)->seekPosObstacle), sizeof( ((obstaclePath_t *)0)->seekPosObstacle ) },
	{ "CFrobDoor *", "doorObstacle", (ptrdiff_t)(&((obstaclePath_t *)0)->doorObstacle), sizeof( ((obstaclePath_t *)0)->doorObstacle ) },
	{ NULL, 0 }
};

static classVariableInfo_t predictedPath_t_typeInfo[] = {
	{ "idVec3", "endPos", (ptrdiff_t)(&((predictedPath_t *)0)->endPos), sizeof( ((predictedPath_t *)0)->endPos ) },
	{ "idVec3", "endVelocity", (ptrdiff_t)(&((predictedPath_t *)0)->endVelocity), sizeof( ((predictedPath_t *)0)->endVelocity ) },
	{ "idVec3", "endNormal", (ptrdiff_t)(&((predictedPath_t *)0)->endNormal), sizeof( ((predictedPath_t *)0)->endNormal ) },
	{ "int", "endTime", (ptrdiff_t)(&((predictedPath_t *)0)->endTime), sizeof( ((predictedPath_t *)0)->endTime ) },
	{ "int", "endEvent", (ptrdiff_t)(&((predictedPath_t *)0)->endEvent), sizeof( ((predictedPath_t *)0)->endEvent ) },
	{ "const idEntity *", "blockingEntity", (ptrdiff_t)(&((predictedPath_t *)0)->blockingEntity), sizeof( ((predictedPath_t *)0)->blockingEntity ) },
	{ NULL, 0 }
};

static classVariableInfo_t particleEmitter_t_typeInfo[] = {
	{ "const idDeclParticle *", "particle", (ptrdiff_t)(&((particleEmitter_t *)0)->particle), sizeof( ((particleEmitter_t *)0)->particle ) },
	{ "int", "time", (ptrdiff_t)(&((particleEmitter_t *)0)->time), sizeof( ((particleEmitter_t *)0)->time ) },
	{ "jointHandle_t", "joint", (ptrdiff_t)(&((particleEmitter_t *)0)->joint), sizeof( ((particleEmitter_t *)0)->joint ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindCover_typeInfo[] = {
	{ "const idActor *", "hidingActor", (ptrdiff_t)(&((idAASFindCover *)0)->hidingActor), sizeof( ((idAASFindCover *)0)->hidingActor ) },
	{ "const idEntity *", "hideFromEnt", (ptrdiff_t)(&((idAASFindCover *)0)->hideFromEnt), sizeof( ((idAASFindCover *)0)->hideFromEnt ) },
	{ "idVec3", "hideFromPos", (ptrdiff_t)(&((idAASFindCover *)0)->hideFromPos), sizeof( ((idAASFindCover *)0)->hideFromPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindAreaOutOfRange_typeInfo[] = {
	{ "idVec3", "targetPos", (ptrdiff_t)(&((idAASFindAreaOutOfRange *)0)->targetPos), sizeof( ((idAASFindAreaOutOfRange *)0)->targetPos ) },
	{ "float", "maxDistSqr", (ptrdiff_t)(&((idAASFindAreaOutOfRange *)0)->maxDistSqr), sizeof( ((idAASFindAreaOutOfRange *)0)->maxDistSqr ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindAttackPosition_typeInfo[] = {
	{ "idAI *", "self", (ptrdiff_t)(&((idAASFindAttackPosition *)0)->self), sizeof( ((idAASFindAttackPosition *)0)->self ) },
	{ "idEntity *", "target", (ptrdiff_t)(&((idAASFindAttackPosition *)0)->target), sizeof( ((idAASFindAttackPosition *)0)->target ) },
	{ "idBounds", "excludeBounds", (ptrdiff_t)(&((idAASFindAttackPosition *)0)->excludeBounds), sizeof( ((idAASFindAttackPosition *)0)->excludeBounds ) },
	{ "idVec3", "targetPos", (ptrdiff_t)(&((idAASFindAttackPosition *)0)->targetPos), sizeof( ((idAASFindAttackPosition *)0)->targetPos ) },
	{ "idVec3", "fireOffset", (ptrdiff_t)(&((idAASFindAttackPosition *)0)->fireOffset), sizeof( ((idAASFindAttackPosition *)0)->fireOffset ) },
	{ "idMat3", "gravityAxis", (ptrdiff_t)(&((idAASFindAttackPosition *)0)->gravityAxis), sizeof( ((idAASFindAttackPosition *)0)->gravityAxis ) },
	{ "pvsHandle_t", "targetPVS", (ptrdiff_t)(&((idAASFindAttackPosition *)0)->targetPVS), sizeof( ((idAASFindAttackPosition *)0)->targetPVS ) },
	{ "int[4]", "PVSAreas", (ptrdiff_t)(&((idAASFindAttackPosition *)0)->PVSAreas), sizeof( ((idAASFindAttackPosition *)0)->PVSAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASFindObservationPosition_typeInfo[] = {
	{ "const idAI *", "self", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->self), sizeof( ((idAASFindObservationPosition *)0)->self ) },
	{ "idBounds", "excludeBounds", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->excludeBounds), sizeof( ((idAASFindObservationPosition *)0)->excludeBounds ) },
	{ "idVec3", "targetPos", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->targetPos), sizeof( ((idAASFindObservationPosition *)0)->targetPos ) },
	{ "idVec3", "eyeOffset", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->eyeOffset), sizeof( ((idAASFindObservationPosition *)0)->eyeOffset ) },
	{ "idMat3", "gravityAxis", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->gravityAxis), sizeof( ((idAASFindObservationPosition *)0)->gravityAxis ) },
	{ "pvsHandle_t", "targetPVS", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->targetPVS), sizeof( ((idAASFindObservationPosition *)0)->targetPVS ) },
	{ "int[4]", "PVSAreas", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->PVSAreas), sizeof( ((idAASFindObservationPosition *)0)->PVSAreas ) },
	{ "float", "maxObservationDistance", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->maxObservationDistance), sizeof( ((idAASFindObservationPosition *)0)->maxObservationDistance ) },
	{ "float", "bestGoalDistance", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->bestGoalDistance), sizeof( ((idAASFindObservationPosition *)0)->bestGoalDistance ) },
	{ "bool", "b_haveBestGoal", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->b_haveBestGoal), sizeof( ((idAASFindObservationPosition *)0)->b_haveBestGoal ) },
	{ "aasGoal_t", "bestGoal", (ptrdiff_t)(&((idAASFindObservationPosition *)0)->bestGoal), sizeof( ((idAASFindObservationPosition *)0)->bestGoal ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAI_ProjectileInfo_typeInfo[] = {
	{ "const idDict *", "def", (ptrdiff_t)(&((idAI::ProjectileInfo *)0)->def), sizeof( ((idAI::ProjectileInfo *)0)->def ) },
	{ "idStr", "defName", (ptrdiff_t)(&((idAI::ProjectileInfo *)0)->defName), sizeof( ((idAI::ProjectileInfo *)0)->defName ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((idAI::ProjectileInfo *)0)->clipModel), sizeof( ((idAI::ProjectileInfo *)0)->clipModel ) },
	{ "float", "radius", (ptrdiff_t)(&((idAI::ProjectileInfo *)0)->radius), sizeof( ((idAI::ProjectileInfo *)0)->radius ) },
	{ "float", "speed", (ptrdiff_t)(&((idAI::ProjectileInfo *)0)->speed), sizeof( ((idAI::ProjectileInfo *)0)->speed ) },
	{ "idVec3", "velocity", (ptrdiff_t)(&((idAI::ProjectileInfo *)0)->velocity), sizeof( ((idAI::ProjectileInfo *)0)->velocity ) },
	{ "idVec3", "gravity", (ptrdiff_t)(&((idAI::ProjectileInfo *)0)->gravity), sizeof( ((idAI::ProjectileInfo *)0)->gravity ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAI_ActiveProjectile_typeInfo[] = {
	{ "ProjectileInfo", "info", (ptrdiff_t)(&((idAI::ActiveProjectile *)0)->info), sizeof( ((idAI::ActiveProjectile *)0)->info ) },
	{ "idEntityPtr < idProjectile >", "projEnt", (ptrdiff_t)(&((idAI::ActiveProjectile *)0)->projEnt), sizeof( ((idAI::ActiveProjectile *)0)->projEnt ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAI_DelayedStim_typeInfo[] = {
	{ "int", "nextTimeToConsider", (ptrdiff_t)(&((idAI::DelayedStim *)0)->nextTimeToConsider), sizeof( ((idAI::DelayedStim *)0)->nextTimeToConsider ) },
	{ "idEntityPtr < idEntity >", "stim", (ptrdiff_t)(&((idAI::DelayedStim *)0)->stim), sizeof( ((idAI::DelayedStim *)0)->stim ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAI_EntityAlert_typeInfo[] = {
	{ "int", "timeAlerted", (ptrdiff_t)(&((idAI::EntityAlert *)0)->timeAlerted), sizeof( ((idAI::EntityAlert *)0)->timeAlerted ) },
	{ "int", "alertIndex", (ptrdiff_t)(&((idAI::EntityAlert *)0)->alertIndex), sizeof( ((idAI::EntityAlert *)0)->alertIndex ) },
	{ "idEntityPtr < idEntity >", "entityResponsible", (ptrdiff_t)(&((idAI::EntityAlert *)0)->entityResponsible), sizeof( ((idAI::EntityAlert *)0)->entityResponsible ) },
	{ "bool", "ignore", (ptrdiff_t)(&((idAI::EntityAlert *)0)->ignore), sizeof( ((idAI::EntityAlert *)0)->ignore ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAI_typeInfo[] = {
	{ "idScriptBool", "AI_ALERTED", (ptrdiff_t)(&((idAI *)0)->AI_ALERTED), sizeof( ((idAI *)0)->AI_ALERTED ) },
	{ "idEntityPtr < idActor >", "m_AlertedByActor", (ptrdiff_t)(&((idAI *)0)->m_AlertedByActor), sizeof( ((idAI *)0)->m_AlertedByActor ) },
	{ "int[25]", "alertTypeWeight", (ptrdiff_t)(&((idAI *)0)->alertTypeWeight), sizeof( ((idAI *)0)->alertTypeWeight ) },
	{ "idScriptBool", "AI_CROUCH", (ptrdiff_t)(&((idAI *)0)->AI_CROUCH), sizeof( ((idAI *)0)->AI_CROUCH ) },
	{ "idScriptBool", "AI_RUN", (ptrdiff_t)(&((idAI *)0)->AI_RUN), sizeof( ((idAI *)0)->AI_RUN ) },
	{ "idScriptBool", "AI_CREEP", (ptrdiff_t)(&((idAI *)0)->AI_CREEP), sizeof( ((idAI *)0)->AI_CREEP ) },
	{ "idScriptBool", "AI_LAY_DOWN_LEFT", (ptrdiff_t)(&((idAI *)0)->AI_LAY_DOWN_LEFT), sizeof( ((idAI *)0)->AI_LAY_DOWN_LEFT ) },
	{ "idScriptVector", "AI_LAY_DOWN_FACE_DIR", (ptrdiff_t)(&((idAI *)0)->AI_LAY_DOWN_FACE_DIR), sizeof( ((idAI *)0)->AI_LAY_DOWN_FACE_DIR ) },
	{ "idScriptFloat", "AI_SIT_DOWN_ANGLE", (ptrdiff_t)(&((idAI *)0)->AI_SIT_DOWN_ANGLE), sizeof( ((idAI *)0)->AI_SIT_DOWN_ANGLE ) },
	{ "idScriptFloat", "AI_SIT_UP_ANGLE", (ptrdiff_t)(&((idAI *)0)->AI_SIT_UP_ANGLE), sizeof( ((idAI *)0)->AI_SIT_UP_ANGLE ) },
	{ "idStr", "m_NextIdleAnim", (ptrdiff_t)(&((idAI *)0)->m_NextIdleAnim), sizeof( ((idAI *)0)->m_NextIdleAnim ) },
	{ "idLinkList < idAI >", "aiNode", (ptrdiff_t)(&((idAI *)0)->aiNode), sizeof( ((idAI *)0)->aiNode ) },
	{ "int", "lastAreaReevaluationTime", (ptrdiff_t)(&((idAI *)0)->lastAreaReevaluationTime), sizeof( ((idAI *)0)->lastAreaReevaluationTime ) },
	{ "int", "maxAreaReevaluationInterval", (ptrdiff_t)(&((idAI *)0)->maxAreaReevaluationInterval), sizeof( ((idAI *)0)->maxAreaReevaluationInterval ) },
	{ "int", "doorRetryTime", (ptrdiff_t)(&((idAI *)0)->doorRetryTime), sizeof( ((idAI *)0)->doorRetryTime ) },
	{ "idAAS *", "aas", (ptrdiff_t)(&((idAI *)0)->aas), sizeof( ((idAI *)0)->aas ) },
	{ "int", "travelFlags", (ptrdiff_t)(&((idAI *)0)->travelFlags), sizeof( ((idAI *)0)->travelFlags ) },
	{ "idMoveState", "move", (ptrdiff_t)(&((idAI *)0)->move), sizeof( ((idAI *)0)->move ) },
	{ "idMoveState", "savedMove", (ptrdiff_t)(&((idAI *)0)->savedMove), sizeof( ((idAI *)0)->savedMove ) },
	{ "std :: list < idMoveState >", "moveStack", (ptrdiff_t)(&((idAI *)0)->moveStack), sizeof( ((idAI *)0)->moveStack ) },
	{ "float", "kickForce", (ptrdiff_t)(&((idAI *)0)->kickForce), sizeof( ((idAI *)0)->kickForce ) },
	{ "bool", "ignore_obstacles", (ptrdiff_t)(&((idAI *)0)->ignore_obstacles), sizeof( ((idAI *)0)->ignore_obstacles ) },
	{ "float", "blockedRadius", (ptrdiff_t)(&((idAI *)0)->blockedRadius), sizeof( ((idAI *)0)->blockedRadius ) },
	{ "int", "blockedMoveTime", (ptrdiff_t)(&((idAI *)0)->blockedMoveTime), sizeof( ((idAI *)0)->blockedMoveTime ) },
	{ "int", "blockedAttackTime", (ptrdiff_t)(&((idAI *)0)->blockedAttackTime), sizeof( ((idAI *)0)->blockedAttackTime ) },
	{ "float", "ideal_yaw", (ptrdiff_t)(&((idAI *)0)->ideal_yaw), sizeof( ((idAI *)0)->ideal_yaw ) },
	{ "float", "current_yaw", (ptrdiff_t)(&((idAI *)0)->current_yaw), sizeof( ((idAI *)0)->current_yaw ) },
	{ "float", "turnRate", (ptrdiff_t)(&((idAI *)0)->turnRate), sizeof( ((idAI *)0)->turnRate ) },
	{ "float", "turnVel", (ptrdiff_t)(&((idAI *)0)->turnVel), sizeof( ((idAI *)0)->turnVel ) },
	{ "float", "anim_turn_yaw", (ptrdiff_t)(&((idAI *)0)->anim_turn_yaw), sizeof( ((idAI *)0)->anim_turn_yaw ) },
	{ "float", "anim_turn_amount", (ptrdiff_t)(&((idAI *)0)->anim_turn_amount), sizeof( ((idAI *)0)->anim_turn_amount ) },
	{ "float", "anim_turn_angles", (ptrdiff_t)(&((idAI *)0)->anim_turn_angles), sizeof( ((idAI *)0)->anim_turn_angles ) },
	{ "idVec3", "sitting_turn_pivot", (ptrdiff_t)(&((idAI *)0)->sitting_turn_pivot), sizeof( ((idAI *)0)->sitting_turn_pivot ) },
	{ "float", "reachedpos_bbox_expansion", (ptrdiff_t)(&((idAI *)0)->reachedpos_bbox_expansion), sizeof( ((idAI *)0)->reachedpos_bbox_expansion ) },
	{ "float", "aas_reachability_z_tolerance", (ptrdiff_t)(&((idAI *)0)->aas_reachability_z_tolerance), sizeof( ((idAI *)0)->aas_reachability_z_tolerance ) },
	{ "idPhysics_Monster", "physicsObj", (ptrdiff_t)(&((idAI *)0)->physicsObj), sizeof( ((idAI *)0)->physicsObj ) },
	{ "jointHandle_t", "flyTiltJoint", (ptrdiff_t)(&((idAI *)0)->flyTiltJoint), sizeof( ((idAI *)0)->flyTiltJoint ) },
	{ "float", "fly_speed", (ptrdiff_t)(&((idAI *)0)->fly_speed), sizeof( ((idAI *)0)->fly_speed ) },
	{ "float", "fly_bob_strength", (ptrdiff_t)(&((idAI *)0)->fly_bob_strength), sizeof( ((idAI *)0)->fly_bob_strength ) },
	{ "float", "fly_bob_vert", (ptrdiff_t)(&((idAI *)0)->fly_bob_vert), sizeof( ((idAI *)0)->fly_bob_vert ) },
	{ "float", "fly_bob_horz", (ptrdiff_t)(&((idAI *)0)->fly_bob_horz), sizeof( ((idAI *)0)->fly_bob_horz ) },
	{ "int", "fly_offset", (ptrdiff_t)(&((idAI *)0)->fly_offset), sizeof( ((idAI *)0)->fly_offset ) },
	{ "float", "fly_seek_scale", (ptrdiff_t)(&((idAI *)0)->fly_seek_scale), sizeof( ((idAI *)0)->fly_seek_scale ) },
	{ "float", "fly_roll_scale", (ptrdiff_t)(&((idAI *)0)->fly_roll_scale), sizeof( ((idAI *)0)->fly_roll_scale ) },
	{ "float", "fly_roll_max", (ptrdiff_t)(&((idAI *)0)->fly_roll_max), sizeof( ((idAI *)0)->fly_roll_max ) },
	{ "float", "fly_roll", (ptrdiff_t)(&((idAI *)0)->fly_roll), sizeof( ((idAI *)0)->fly_roll ) },
	{ "float", "fly_pitch_scale", (ptrdiff_t)(&((idAI *)0)->fly_pitch_scale), sizeof( ((idAI *)0)->fly_pitch_scale ) },
	{ "float", "fly_pitch_max", (ptrdiff_t)(&((idAI *)0)->fly_pitch_max), sizeof( ((idAI *)0)->fly_pitch_max ) },
	{ "float", "fly_pitch", (ptrdiff_t)(&((idAI *)0)->fly_pitch), sizeof( ((idAI *)0)->fly_pitch ) },
	{ "bool", "allowMove", (ptrdiff_t)(&((idAI *)0)->allowMove), sizeof( ((idAI *)0)->allowMove ) },
	{ "bool", "allowHiddenMovement", (ptrdiff_t)(&((idAI *)0)->allowHiddenMovement), sizeof( ((idAI *)0)->allowHiddenMovement ) },
	{ "bool", "disableGravity", (ptrdiff_t)(&((idAI *)0)->disableGravity), sizeof( ((idAI *)0)->disableGravity ) },
	{ "bool", "lastHitCheckResult", (ptrdiff_t)(&((idAI *)0)->lastHitCheckResult), sizeof( ((idAI *)0)->lastHitCheckResult ) },
	{ "int", "lastHitCheckTime", (ptrdiff_t)(&((idAI *)0)->lastHitCheckTime), sizeof( ((idAI *)0)->lastHitCheckTime ) },
	{ "int", "lastAttackTime", (ptrdiff_t)(&((idAI *)0)->lastAttackTime), sizeof( ((idAI *)0)->lastAttackTime ) },
	{ "float", "fire_range", (ptrdiff_t)(&((idAI *)0)->fire_range), sizeof( ((idAI *)0)->fire_range ) },
	{ "float", "projectile_height_to_distance_ratio", (ptrdiff_t)(&((idAI *)0)->projectile_height_to_distance_ratio), sizeof( ((idAI *)0)->projectile_height_to_distance_ratio ) },
	{ "idList < idVec3 >", "missileLaunchOffset", (ptrdiff_t)(&((idAI *)0)->missileLaunchOffset), sizeof( ((idAI *)0)->missileLaunchOffset ) },
	{ "idList < ProjectileInfo >", "projectileInfo", (ptrdiff_t)(&((idAI *)0)->projectileInfo), sizeof( ((idAI *)0)->projectileInfo ) },
	{ "int", "curProjectileIndex", (ptrdiff_t)(&((idAI *)0)->curProjectileIndex), sizeof( ((idAI *)0)->curProjectileIndex ) },
	{ "ActiveProjectile", "activeProjectile", (ptrdiff_t)(&((idAI *)0)->activeProjectile), sizeof( ((idAI *)0)->activeProjectile ) },
	{ "idStr", "attack", (ptrdiff_t)(&((idAI *)0)->attack), sizeof( ((idAI *)0)->attack ) },
	{ "idList < DelayedStim >", "delayedStims", (ptrdiff_t)(&((idAI *)0)->delayedStims), sizeof( ((idAI *)0)->delayedStims ) },
	{ "talkState_t", "talk_state", (ptrdiff_t)(&((idAI *)0)->talk_state), sizeof( ((idAI *)0)->talk_state ) },
	{ "idEntityPtr < idActor >", "talkTarget", (ptrdiff_t)(&((idAI *)0)->talkTarget), sizeof( ((idAI *)0)->talkTarget ) },
	{ "int", "num_cinematics", (ptrdiff_t)(&((idAI *)0)->num_cinematics), sizeof( ((idAI *)0)->num_cinematics ) },
	{ "int", "current_cinematic", (ptrdiff_t)(&((idAI *)0)->current_cinematic), sizeof( ((idAI *)0)->current_cinematic ) },
	{ "bool", "allowJointMod", (ptrdiff_t)(&((idAI *)0)->allowJointMod), sizeof( ((idAI *)0)->allowJointMod ) },
	{ "idEntityPtr < idEntity >", "focusEntity", (ptrdiff_t)(&((idAI *)0)->focusEntity), sizeof( ((idAI *)0)->focusEntity ) },
	{ "idVec3", "currentFocusPos", (ptrdiff_t)(&((idAI *)0)->currentFocusPos), sizeof( ((idAI *)0)->currentFocusPos ) },
	{ "int", "focusTime", (ptrdiff_t)(&((idAI *)0)->focusTime), sizeof( ((idAI *)0)->focusTime ) },
	{ "int", "alignHeadTime", (ptrdiff_t)(&((idAI *)0)->alignHeadTime), sizeof( ((idAI *)0)->alignHeadTime ) },
	{ "int", "forceAlignHeadTime", (ptrdiff_t)(&((idAI *)0)->forceAlignHeadTime), sizeof( ((idAI *)0)->forceAlignHeadTime ) },
	{ "idAngles", "eyeAng", (ptrdiff_t)(&((idAI *)0)->eyeAng), sizeof( ((idAI *)0)->eyeAng ) },
	{ "idAngles", "lookAng", (ptrdiff_t)(&((idAI *)0)->lookAng), sizeof( ((idAI *)0)->lookAng ) },
	{ "idAngles", "destLookAng", (ptrdiff_t)(&((idAI *)0)->destLookAng), sizeof( ((idAI *)0)->destLookAng ) },
	{ "idAngles", "lookMin", (ptrdiff_t)(&((idAI *)0)->lookMin), sizeof( ((idAI *)0)->lookMin ) },
	{ "idAngles", "lookMax", (ptrdiff_t)(&((idAI *)0)->lookMax), sizeof( ((idAI *)0)->lookMax ) },
	{ "idList < jointHandle_t >", "lookJoints", (ptrdiff_t)(&((idAI *)0)->lookJoints), sizeof( ((idAI *)0)->lookJoints ) },
	{ "idList < idAngles >", "lookJointAngles", (ptrdiff_t)(&((idAI *)0)->lookJointAngles), sizeof( ((idAI *)0)->lookJointAngles ) },
	{ "idList < jointHandle_t >", "lookJointsCombat", (ptrdiff_t)(&((idAI *)0)->lookJointsCombat), sizeof( ((idAI *)0)->lookJointsCombat ) },
	{ "idList < idAngles >", "lookJointAnglesCombat", (ptrdiff_t)(&((idAI *)0)->lookJointAnglesCombat), sizeof( ((idAI *)0)->lookJointAnglesCombat ) },
	{ "float", "eyeVerticalOffset", (ptrdiff_t)(&((idAI *)0)->eyeVerticalOffset), sizeof( ((idAI *)0)->eyeVerticalOffset ) },
	{ "float", "eyeHorizontalOffset", (ptrdiff_t)(&((idAI *)0)->eyeHorizontalOffset), sizeof( ((idAI *)0)->eyeHorizontalOffset ) },
	{ "float", "eyeFocusRate", (ptrdiff_t)(&((idAI *)0)->eyeFocusRate), sizeof( ((idAI *)0)->eyeFocusRate ) },
	{ "float", "headFocusRate", (ptrdiff_t)(&((idAI *)0)->headFocusRate), sizeof( ((idAI *)0)->headFocusRate ) },
	{ "int", "focusAlignTime", (ptrdiff_t)(&((idAI *)0)->focusAlignTime), sizeof( ((idAI *)0)->focusAlignTime ) },
	{ "float", "shrivel_rate", (ptrdiff_t)(&((idAI *)0)->shrivel_rate), sizeof( ((idAI *)0)->shrivel_rate ) },
	{ "int", "shrivel_start", (ptrdiff_t)(&((idAI *)0)->shrivel_start), sizeof( ((idAI *)0)->shrivel_start ) },
	{ "bool", "restartParticles", (ptrdiff_t)(&((idAI *)0)->restartParticles), sizeof( ((idAI *)0)->restartParticles ) },
	{ "bool", "useBoneAxis", (ptrdiff_t)(&((idAI *)0)->useBoneAxis), sizeof( ((idAI *)0)->useBoneAxis ) },
	{ "idList < particleEmitter_t >", "particles", (ptrdiff_t)(&((idAI *)0)->particles), sizeof( ((idAI *)0)->particles ) },
	{ "renderLight_t", "worldMuzzleFlash", (ptrdiff_t)(&((idAI *)0)->worldMuzzleFlash), sizeof( ((idAI *)0)->worldMuzzleFlash ) },
	{ "int", "worldMuzzleFlashHandle", (ptrdiff_t)(&((idAI *)0)->worldMuzzleFlashHandle), sizeof( ((idAI *)0)->worldMuzzleFlashHandle ) },
	{ "jointHandle_t", "flashJointWorld", (ptrdiff_t)(&((idAI *)0)->flashJointWorld), sizeof( ((idAI *)0)->flashJointWorld ) },
	{ "int", "muzzleFlashEnd", (ptrdiff_t)(&((idAI *)0)->muzzleFlashEnd), sizeof( ((idAI *)0)->muzzleFlashEnd ) },
	{ "int", "flashTime", (ptrdiff_t)(&((idAI *)0)->flashTime), sizeof( ((idAI *)0)->flashTime ) },
	{ "idAngles", "eyeMin", (ptrdiff_t)(&((idAI *)0)->eyeMin), sizeof( ((idAI *)0)->eyeMin ) },
	{ "idAngles", "eyeMax", (ptrdiff_t)(&((idAI *)0)->eyeMax), sizeof( ((idAI *)0)->eyeMax ) },
	{ "jointHandle_t", "focusJoint", (ptrdiff_t)(&((idAI *)0)->focusJoint), sizeof( ((idAI *)0)->focusJoint ) },
	{ "jointHandle_t", "orientationJoint", (ptrdiff_t)(&((idAI *)0)->orientationJoint), sizeof( ((idAI *)0)->orientationJoint ) },
	{ "FrobMoverList", "unlockableDoors", (ptrdiff_t)(&((idAI *)0)->unlockableDoors), sizeof( ((idAI *)0)->unlockableDoors ) },
	{ "TactileIgnoreList", "tactileIgnoreEntities", (ptrdiff_t)(&((idAI *)0)->tactileIgnoreEntities), sizeof( ((idAI *)0)->tactileIgnoreEntities ) },
	{ "idEntityPtr < idActor >", "enemy", (ptrdiff_t)(&((idAI *)0)->enemy), sizeof( ((idAI *)0)->enemy ) },
	{ "idVec3", "lastVisibleEnemyPos", (ptrdiff_t)(&((idAI *)0)->lastVisibleEnemyPos), sizeof( ((idAI *)0)->lastVisibleEnemyPos ) },
	{ "idVec3", "lastVisibleEnemyEyeOffset", (ptrdiff_t)(&((idAI *)0)->lastVisibleEnemyEyeOffset), sizeof( ((idAI *)0)->lastVisibleEnemyEyeOffset ) },
	{ "idVec3", "lastVisibleReachableEnemyPos", (ptrdiff_t)(&((idAI *)0)->lastVisibleReachableEnemyPos), sizeof( ((idAI *)0)->lastVisibleReachableEnemyPos ) },
	{ "idVec3", "lastReachableEnemyPos", (ptrdiff_t)(&((idAI *)0)->lastReachableEnemyPos), sizeof( ((idAI *)0)->lastReachableEnemyPos ) },
	{ "bool", "enemyReachable", (ptrdiff_t)(&((idAI *)0)->enemyReachable), sizeof( ((idAI *)0)->enemyReachable ) },
	{ "bool", "wakeOnFlashlight", (ptrdiff_t)(&((idAI *)0)->wakeOnFlashlight), sizeof( ((idAI *)0)->wakeOnFlashlight ) },
	{ "int", "lastUpdateEnemyPositionTime", (ptrdiff_t)(&((idAI *)0)->lastUpdateEnemyPositionTime), sizeof( ((idAI *)0)->lastUpdateEnemyPositionTime ) },
	{ "int", "lastTimePlayerSeen", (ptrdiff_t)(&((idAI *)0)->lastTimePlayerSeen), sizeof( ((idAI *)0)->lastTimePlayerSeen ) },
	{ "int", "lastTimePlayerLost", (ptrdiff_t)(&((idAI *)0)->lastTimePlayerLost), sizeof( ((idAI *)0)->lastTimePlayerLost ) },
	{ "bool", "fleeingEvent", (ptrdiff_t)(&((idAI *)0)->fleeingEvent), sizeof( ((idAI *)0)->fleeingEvent ) },
	{ "idVec3", "fleeingFrom", (ptrdiff_t)(&((idAI *)0)->fleeingFrom), sizeof( ((idAI *)0)->fleeingFrom ) },
	{ "idEntityPtr < idActor >", "fleeingFromPerson", (ptrdiff_t)(&((idAI *)0)->fleeingFromPerson), sizeof( ((idAI *)0)->fleeingFromPerson ) },
	{ "bool", "emitFleeBarks", (ptrdiff_t)(&((idAI *)0)->emitFleeBarks), sizeof( ((idAI *)0)->emitFleeBarks ) },
	{ "idVec3", "lastSearchedSpot", (ptrdiff_t)(&((idAI *)0)->lastSearchedSpot), sizeof( ((idAI *)0)->lastSearchedSpot ) },
	{ "idScriptBool", "AI_TALK", (ptrdiff_t)(&((idAI *)0)->AI_TALK), sizeof( ((idAI *)0)->AI_TALK ) },
	{ "idScriptBool", "AI_DAMAGE", (ptrdiff_t)(&((idAI *)0)->AI_DAMAGE), sizeof( ((idAI *)0)->AI_DAMAGE ) },
	{ "idScriptBool", "AI_PAIN", (ptrdiff_t)(&((idAI *)0)->AI_PAIN), sizeof( ((idAI *)0)->AI_PAIN ) },
	{ "idScriptFloat", "AI_SPECIAL_DAMAGE", (ptrdiff_t)(&((idAI *)0)->AI_SPECIAL_DAMAGE), sizeof( ((idAI *)0)->AI_SPECIAL_DAMAGE ) },
	{ "idScriptBool", "AI_KNOCKEDOUT", (ptrdiff_t)(&((idAI *)0)->AI_KNOCKEDOUT), sizeof( ((idAI *)0)->AI_KNOCKEDOUT ) },
	{ "idScriptBool", "AI_ENEMY_VISIBLE", (ptrdiff_t)(&((idAI *)0)->AI_ENEMY_VISIBLE), sizeof( ((idAI *)0)->AI_ENEMY_VISIBLE ) },
	{ "idScriptBool", "AI_ENEMY_IN_FOV", (ptrdiff_t)(&((idAI *)0)->AI_ENEMY_IN_FOV), sizeof( ((idAI *)0)->AI_ENEMY_IN_FOV ) },
	{ "idScriptBool", "AI_MOVE_DONE", (ptrdiff_t)(&((idAI *)0)->AI_MOVE_DONE), sizeof( ((idAI *)0)->AI_MOVE_DONE ) },
	{ "idScriptBool", "AI_ONGROUND", (ptrdiff_t)(&((idAI *)0)->AI_ONGROUND), sizeof( ((idAI *)0)->AI_ONGROUND ) },
	{ "idScriptBool", "AI_ACTIVATED", (ptrdiff_t)(&((idAI *)0)->AI_ACTIVATED), sizeof( ((idAI *)0)->AI_ACTIVATED ) },
	{ "idScriptBool", "AI_FORWARD", (ptrdiff_t)(&((idAI *)0)->AI_FORWARD), sizeof( ((idAI *)0)->AI_FORWARD ) },
	{ "idScriptBool", "AI_JUMP", (ptrdiff_t)(&((idAI *)0)->AI_JUMP), sizeof( ((idAI *)0)->AI_JUMP ) },
	{ "idScriptBool", "AI_BLOCKED", (ptrdiff_t)(&((idAI *)0)->AI_BLOCKED), sizeof( ((idAI *)0)->AI_BLOCKED ) },
	{ "idScriptBool", "AI_OBSTACLE_IN_PATH", (ptrdiff_t)(&((idAI *)0)->AI_OBSTACLE_IN_PATH), sizeof( ((idAI *)0)->AI_OBSTACLE_IN_PATH ) },
	{ "idScriptBool", "AI_DEST_UNREACHABLE", (ptrdiff_t)(&((idAI *)0)->AI_DEST_UNREACHABLE), sizeof( ((idAI *)0)->AI_DEST_UNREACHABLE ) },
	{ "idScriptBool", "AI_HIT_ENEMY", (ptrdiff_t)(&((idAI *)0)->AI_HIT_ENEMY), sizeof( ((idAI *)0)->AI_HIT_ENEMY ) },
	{ "idScriptBool", "AI_PUSHED", (ptrdiff_t)(&((idAI *)0)->AI_PUSHED), sizeof( ((idAI *)0)->AI_PUSHED ) },
	{ "idScriptBool", "AI_HEARDSOUND", (ptrdiff_t)(&((idAI *)0)->AI_HEARDSOUND), sizeof( ((idAI *)0)->AI_HEARDSOUND ) },
	{ "idScriptBool", "AI_VISALERT", (ptrdiff_t)(&((idAI *)0)->AI_VISALERT), sizeof( ((idAI *)0)->AI_VISALERT ) },
	{ "idScriptBool", "AI_TACTALERT", (ptrdiff_t)(&((idAI *)0)->AI_TACTALERT), sizeof( ((idAI *)0)->AI_TACTALERT ) },
	{ "idScriptFloat", "AI_AlertLevel", (ptrdiff_t)(&((idAI *)0)->AI_AlertLevel), sizeof( ((idAI *)0)->AI_AlertLevel ) },
	{ "idScriptFloat", "AI_AlertIndex", (ptrdiff_t)(&((idAI *)0)->AI_AlertIndex), sizeof( ((idAI *)0)->AI_AlertIndex ) },
	{ "idScriptFloat", "AI_SleepLocation", (ptrdiff_t)(&((idAI *)0)->AI_SleepLocation), sizeof( ((idAI *)0)->AI_SleepLocation ) },
	{ "float", "m_AlertLevelThisFrame", (ptrdiff_t)(&((idAI *)0)->m_AlertLevelThisFrame), sizeof( ((idAI *)0)->m_AlertLevelThisFrame ) },
	{ "bool", "m_lookAtAlertSpot", (ptrdiff_t)(&((idAI *)0)->m_lookAtAlertSpot), sizeof( ((idAI *)0)->m_lookAtAlertSpot ) },
	{ "idVec3", "m_lookAtPos", (ptrdiff_t)(&((idAI *)0)->m_lookAtPos), sizeof( ((idAI *)0)->m_lookAtPos ) },
	{ "int", "m_prevAlertIndex", (ptrdiff_t)(&((idAI *)0)->m_prevAlertIndex), sizeof( ((idAI *)0)->m_prevAlertIndex ) },
	{ "float", "m_maxAlertLevel", (ptrdiff_t)(&((idAI *)0)->m_maxAlertLevel), sizeof( ((idAI *)0)->m_maxAlertLevel ) },
	{ "int", "m_maxAlertIndex", (ptrdiff_t)(&((idAI *)0)->m_maxAlertIndex), sizeof( ((idAI *)0)->m_maxAlertIndex ) },
	{ "float", "m_recentHighestAlertLevel", (ptrdiff_t)(&((idAI *)0)->m_recentHighestAlertLevel), sizeof( ((idAI *)0)->m_recentHighestAlertLevel ) },
	{ "bool", "m_bIgnoreAlerts", (ptrdiff_t)(&((idAI *)0)->m_bIgnoreAlerts), sizeof( ((idAI *)0)->m_bIgnoreAlerts ) },
	{ "idList < float >", "m_Acuities", (ptrdiff_t)(&((idAI *)0)->m_Acuities), sizeof( ((idAI *)0)->m_Acuities ) },
	{ "float", "m_oldVisualAcuity", (ptrdiff_t)(&((idAI *)0)->m_oldVisualAcuity), sizeof( ((idAI *)0)->m_oldVisualAcuity ) },
	{ "float", "m_sleepFloorZ", (ptrdiff_t)(&((idAI *)0)->m_sleepFloorZ), sizeof( ((idAI *)0)->m_sleepFloorZ ) },
	{ "int", "m_getupEndTime", (ptrdiff_t)(&((idAI *)0)->m_getupEndTime), sizeof( ((idAI *)0)->m_getupEndTime ) },
	{ "float", "m_AudThreshold", (ptrdiff_t)(&((idAI *)0)->m_AudThreshold), sizeof( ((idAI *)0)->m_AudThreshold ) },
	{ "idVec3", "m_SoundDir", (ptrdiff_t)(&((idAI *)0)->m_SoundDir), sizeof( ((idAI *)0)->m_SoundDir ) },
	{ "idVec3", "m_LastSight", (ptrdiff_t)(&((idAI *)0)->m_LastSight), sizeof( ((idAI *)0)->m_LastSight ) },
	{ "idEntityPtr < idEntity >", "m_TactAlertEnt", (ptrdiff_t)(&((idAI *)0)->m_TactAlertEnt), sizeof( ((idAI *)0)->m_TactAlertEnt ) },
	{ "idEntityPtr < idActor >", "m_AlertGraceActor", (ptrdiff_t)(&((idAI *)0)->m_AlertGraceActor), sizeof( ((idAI *)0)->m_AlertGraceActor ) },
	{ "int", "m_AlertGraceStart", (ptrdiff_t)(&((idAI *)0)->m_AlertGraceStart), sizeof( ((idAI *)0)->m_AlertGraceStart ) },
	{ "int", "m_AlertGraceTime", (ptrdiff_t)(&((idAI *)0)->m_AlertGraceTime), sizeof( ((idAI *)0)->m_AlertGraceTime ) },
	{ "float", "m_AlertGraceThresh", (ptrdiff_t)(&((idAI *)0)->m_AlertGraceThresh), sizeof( ((idAI *)0)->m_AlertGraceThresh ) },
	{ "int", "m_AlertGraceCount", (ptrdiff_t)(&((idAI *)0)->m_AlertGraceCount), sizeof( ((idAI *)0)->m_AlertGraceCount ) },
	{ "int", "m_AlertGraceCountLimit", (ptrdiff_t)(&((idAI *)0)->m_AlertGraceCountLimit), sizeof( ((idAI *)0)->m_AlertGraceCountLimit ) },
	{ "ai :: MessageList", "m_Messages", (ptrdiff_t)(&((idAI *)0)->m_Messages), sizeof( ((idAI *)0)->m_Messages ) },
	{ "int", "m_AirCheckTimer", (ptrdiff_t)(&((idAI *)0)->m_AirCheckTimer), sizeof( ((idAI *)0)->m_AirCheckTimer ) },
	{ "bool", "m_bCanDrown", (ptrdiff_t)(&((idAI *)0)->m_bCanDrown), sizeof( ((idAI *)0)->m_bCanDrown ) },
	{ "int", "m_HeadBodyID", (ptrdiff_t)(&((idAI *)0)->m_HeadBodyID), sizeof( ((idAI *)0)->m_HeadBodyID ) },
	{ "jointHandle_t", "m_HeadJointID", (ptrdiff_t)(&((idAI *)0)->m_HeadJointID), sizeof( ((idAI *)0)->m_HeadJointID ) },
	{ "idClipModel *", "m_OrigHeadCM", (ptrdiff_t)(&((idAI *)0)->m_OrigHeadCM), sizeof( ((idAI *)0)->m_OrigHeadCM ) },
	{ "bool", "m_bHeadCMSwapped", (ptrdiff_t)(&((idAI *)0)->m_bHeadCMSwapped), sizeof( ((idAI *)0)->m_bHeadCMSwapped ) },
	{ "idStr", "m_KoZone", (ptrdiff_t)(&((idAI *)0)->m_KoZone), sizeof( ((idAI *)0)->m_KoZone ) },
	{ "int", "m_KoAlertImmuneState", (ptrdiff_t)(&((idAI *)0)->m_KoAlertImmuneState), sizeof( ((idAI *)0)->m_KoAlertImmuneState ) },
	{ "int", "m_KoAlertState", (ptrdiff_t)(&((idAI *)0)->m_KoAlertState), sizeof( ((idAI *)0)->m_KoAlertState ) },
	{ "bool", "m_bKoAlertImmune", (ptrdiff_t)(&((idAI *)0)->m_bKoAlertImmune), sizeof( ((idAI *)0)->m_bKoAlertImmune ) },
	{ "float", "m_KoDotVert", (ptrdiff_t)(&((idAI *)0)->m_KoDotVert), sizeof( ((idAI *)0)->m_KoDotVert ) },
	{ "float", "m_KoDotHoriz", (ptrdiff_t)(&((idAI *)0)->m_KoDotHoriz), sizeof( ((idAI *)0)->m_KoDotHoriz ) },
	{ "float", "m_KoAlertDotVert", (ptrdiff_t)(&((idAI *)0)->m_KoAlertDotVert), sizeof( ((idAI *)0)->m_KoAlertDotVert ) },
	{ "float", "m_KoAlertDotHoriz", (ptrdiff_t)(&((idAI *)0)->m_KoAlertDotHoriz), sizeof( ((idAI *)0)->m_KoAlertDotHoriz ) },
	{ "idMat3", "m_KoRot", (ptrdiff_t)(&((idAI *)0)->m_KoRot), sizeof( ((idAI *)0)->m_KoRot ) },
	{ "int", "m_AirTics", (ptrdiff_t)(&((idAI *)0)->m_AirTics), sizeof( ((idAI *)0)->m_AirTics ) },
	{ "int", "m_AirTicksMax", (ptrdiff_t)(&((idAI *)0)->m_AirTicksMax), sizeof( ((idAI *)0)->m_AirTicksMax ) },
	{ "int", "m_AirCheckInterval", (ptrdiff_t)(&((idAI *)0)->m_AirCheckInterval), sizeof( ((idAI *)0)->m_AirCheckInterval ) },
	{ "bool", "m_bCanBeKnockedOut", (ptrdiff_t)(&((idAI *)0)->m_bCanBeKnockedOut), sizeof( ((idAI *)0)->m_bCanBeKnockedOut ) },
	{ "bool", "m_bCanBeGassed", (ptrdiff_t)(&((idAI *)0)->m_bCanBeGassed), sizeof( ((idAI *)0)->m_bCanBeGassed ) },
	{ "koState_t", "m_koState", (ptrdiff_t)(&((idAI *)0)->m_koState), sizeof( ((idAI *)0)->m_koState ) },
	{ "int", "m_earlyThinkCounter", (ptrdiff_t)(&((idAI *)0)->m_earlyThinkCounter), sizeof( ((idAI *)0)->m_earlyThinkCounter ) },
	{ "bool", "m_ignorePlayer", (ptrdiff_t)(&((idAI *)0)->m_ignorePlayer), sizeof( ((idAI *)0)->m_ignorePlayer ) },
	{ "bool", "m_bCanExtricate", (ptrdiff_t)(&((idAI *)0)->m_bCanExtricate), sizeof( ((idAI *)0)->m_bCanExtricate ) },
	{ "bool", "m_bCanOperateDoors", (ptrdiff_t)(&((idAI *)0)->m_bCanOperateDoors), sizeof( ((idAI *)0)->m_bCanOperateDoors ) },
	{ "bool", "m_HandlingDoor", (ptrdiff_t)(&((idAI *)0)->m_HandlingDoor), sizeof( ((idAI *)0)->m_HandlingDoor ) },
	{ "bool", "m_DoorQueued", (ptrdiff_t)(&((idAI *)0)->m_DoorQueued), sizeof( ((idAI *)0)->m_DoorQueued ) },
	{ "bool", "m_ElevatorQueued", (ptrdiff_t)(&((idAI *)0)->m_ElevatorQueued), sizeof( ((idAI *)0)->m_ElevatorQueued ) },
	{ "bool", "m_InConversation", (ptrdiff_t)(&((idAI *)0)->m_InConversation), sizeof( ((idAI *)0)->m_InConversation ) },
	{ "int", "m_nextWarningTime", (ptrdiff_t)(&((idAI *)0)->m_nextWarningTime), sizeof( ((idAI *)0)->m_nextWarningTime ) },
	{ "bool", "m_RestoreMove", (ptrdiff_t)(&((idAI *)0)->m_RestoreMove), sizeof( ((idAI *)0)->m_RestoreMove ) },
	{ "bool", "m_LatchedSearch", (ptrdiff_t)(&((idAI *)0)->m_LatchedSearch), sizeof( ((idAI *)0)->m_LatchedSearch ) },
	{ "idList < idEntityPtr < idEntity > >", "m_dousedLightsSeen", (ptrdiff_t)(&((idAI *)0)->m_dousedLightsSeen), sizeof( ((idAI *)0)->m_dousedLightsSeen ) },
	{ "idList < idEntityPtr < idEntity > >", "m_noisemakersHeard", (ptrdiff_t)(&((idAI *)0)->m_noisemakersHeard), sizeof( ((idAI *)0)->m_noisemakersHeard ) },
	{ "bool", "m_HandlingElevator", (ptrdiff_t)(&((idAI *)0)->m_HandlingElevator), sizeof( ((idAI *)0)->m_HandlingElevator ) },
	{ "bool", "m_CanSetupDoor", (ptrdiff_t)(&((idAI *)0)->m_CanSetupDoor), sizeof( ((idAI *)0)->m_CanSetupDoor ) },
	{ "bool", "m_RelightingLight", (ptrdiff_t)(&((idAI *)0)->m_RelightingLight), sizeof( ((idAI *)0)->m_RelightingLight ) },
	{ "bool", "m_ExaminingRope", (ptrdiff_t)(&((idAI *)0)->m_ExaminingRope), sizeof( ((idAI *)0)->m_ExaminingRope ) },
	{ "bool", "m_DroppingTorch", (ptrdiff_t)(&((idAI *)0)->m_DroppingTorch), sizeof( ((idAI *)0)->m_DroppingTorch ) },
	{ "bool", "m_ReactingToPickedPocket", (ptrdiff_t)(&((idAI *)0)->m_ReactingToPickedPocket), sizeof( ((idAI *)0)->m_ReactingToPickedPocket ) },
	{ "idVec3", "m_HeadCenterOffset", (ptrdiff_t)(&((idAI *)0)->m_HeadCenterOffset), sizeof( ((idAI *)0)->m_HeadCenterOffset ) },
	{ "idMat3", "m_FOVRot", (ptrdiff_t)(&((idAI *)0)->m_FOVRot), sizeof( ((idAI *)0)->m_FOVRot ) },
	{ "bool", "m_bPushOffPlayer", (ptrdiff_t)(&((idAI *)0)->m_bPushOffPlayer), sizeof( ((idAI *)0)->m_bPushOffPlayer ) },
	{ "bool", "m_bCanBeFlatFooted", (ptrdiff_t)(&((idAI *)0)->m_bCanBeFlatFooted), sizeof( ((idAI *)0)->m_bCanBeFlatFooted ) },
	{ "bool", "m_bFlatFooted", (ptrdiff_t)(&((idAI *)0)->m_bFlatFooted), sizeof( ((idAI *)0)->m_bFlatFooted ) },
	{ "int", "m_FlatFootedTimer", (ptrdiff_t)(&((idAI *)0)->m_FlatFootedTimer), sizeof( ((idAI *)0)->m_FlatFootedTimer ) },
	{ "int", "m_FlatFootedTime", (ptrdiff_t)(&((idAI *)0)->m_FlatFootedTime), sizeof( ((idAI *)0)->m_FlatFootedTime ) },
	{ "int", "m_FlatFootParryNum", (ptrdiff_t)(&((idAI *)0)->m_FlatFootParryNum), sizeof( ((idAI *)0)->m_FlatFootParryNum ) },
	{ "int", "m_FlatFootParryMax", (ptrdiff_t)(&((idAI *)0)->m_FlatFootParryMax), sizeof( ((idAI *)0)->m_FlatFootParryMax ) },
	{ "int", "m_FlatFootParryTimer", (ptrdiff_t)(&((idAI *)0)->m_FlatFootParryTimer), sizeof( ((idAI *)0)->m_FlatFootParryTimer ) },
	{ "int", "m_FlatFootParryTime", (ptrdiff_t)(&((idAI *)0)->m_FlatFootParryTime), sizeof( ((idAI *)0)->m_FlatFootParryTime ) },
	{ "float", "m_MeleeCounterAttChance", (ptrdiff_t)(&((idAI *)0)->m_MeleeCounterAttChance), sizeof( ((idAI *)0)->m_MeleeCounterAttChance ) },
	{ "bool", "m_bMeleePredictProximity", (ptrdiff_t)(&((idAI *)0)->m_bMeleePredictProximity), sizeof( ((idAI *)0)->m_bMeleePredictProximity ) },
	{ "float", "thresh_1", (ptrdiff_t)(&((idAI *)0)->thresh_1), sizeof( ((idAI *)0)->thresh_1 ) },
	{ "float", "thresh_2", (ptrdiff_t)(&((idAI *)0)->thresh_2), sizeof( ((idAI *)0)->thresh_2 ) },
	{ "float", "thresh_3", (ptrdiff_t)(&((idAI *)0)->thresh_3), sizeof( ((idAI *)0)->thresh_3 ) },
	{ "float", "thresh_4", (ptrdiff_t)(&((idAI *)0)->thresh_4), sizeof( ((idAI *)0)->thresh_4 ) },
	{ "float", "thresh_5", (ptrdiff_t)(&((idAI *)0)->thresh_5), sizeof( ((idAI *)0)->thresh_5 ) },
	{ "float", "m_gracetime_1", (ptrdiff_t)(&((idAI *)0)->m_gracetime_1), sizeof( ((idAI *)0)->m_gracetime_1 ) },
	{ "float", "m_gracetime_2", (ptrdiff_t)(&((idAI *)0)->m_gracetime_2), sizeof( ((idAI *)0)->m_gracetime_2 ) },
	{ "float", "m_gracetime_3", (ptrdiff_t)(&((idAI *)0)->m_gracetime_3), sizeof( ((idAI *)0)->m_gracetime_3 ) },
	{ "float", "m_gracetime_4", (ptrdiff_t)(&((idAI *)0)->m_gracetime_4), sizeof( ((idAI *)0)->m_gracetime_4 ) },
	{ "float", "m_gracefrac_1", (ptrdiff_t)(&((idAI *)0)->m_gracefrac_1), sizeof( ((idAI *)0)->m_gracefrac_1 ) },
	{ "float", "m_gracefrac_2", (ptrdiff_t)(&((idAI *)0)->m_gracefrac_2), sizeof( ((idAI *)0)->m_gracefrac_2 ) },
	{ "float", "m_gracefrac_3", (ptrdiff_t)(&((idAI *)0)->m_gracefrac_3), sizeof( ((idAI *)0)->m_gracefrac_3 ) },
	{ "float", "m_gracefrac_4", (ptrdiff_t)(&((idAI *)0)->m_gracefrac_4), sizeof( ((idAI *)0)->m_gracefrac_4 ) },
	{ "int", "m_gracecount_1", (ptrdiff_t)(&((idAI *)0)->m_gracecount_1), sizeof( ((idAI *)0)->m_gracecount_1 ) },
	{ "int", "m_gracecount_2", (ptrdiff_t)(&((idAI *)0)->m_gracecount_2), sizeof( ((idAI *)0)->m_gracecount_2 ) },
	{ "int", "m_gracecount_3", (ptrdiff_t)(&((idAI *)0)->m_gracecount_3), sizeof( ((idAI *)0)->m_gracecount_3 ) },
	{ "int", "m_gracecount_4", (ptrdiff_t)(&((idAI *)0)->m_gracecount_4), sizeof( ((idAI *)0)->m_gracecount_4 ) },
	{ "float", "atime1", (ptrdiff_t)(&((idAI *)0)->atime1), sizeof( ((idAI *)0)->atime1 ) },
	{ "float", "atime2", (ptrdiff_t)(&((idAI *)0)->atime2), sizeof( ((idAI *)0)->atime2 ) },
	{ "float", "atime3", (ptrdiff_t)(&((idAI *)0)->atime3), sizeof( ((idAI *)0)->atime3 ) },
	{ "float", "atime4", (ptrdiff_t)(&((idAI *)0)->atime4), sizeof( ((idAI *)0)->atime4 ) },
	{ "float", "atime_fleedone", (ptrdiff_t)(&((idAI *)0)->atime_fleedone), sizeof( ((idAI *)0)->atime_fleedone ) },
	{ "bool", "m_canSearch", (ptrdiff_t)(&((idAI *)0)->m_canSearch), sizeof( ((idAI *)0)->m_canSearch ) },
	{ "float", "atime1_fuzzyness", (ptrdiff_t)(&((idAI *)0)->atime1_fuzzyness), sizeof( ((idAI *)0)->atime1_fuzzyness ) },
	{ "float", "atime2_fuzzyness", (ptrdiff_t)(&((idAI *)0)->atime2_fuzzyness), sizeof( ((idAI *)0)->atime2_fuzzyness ) },
	{ "float", "atime3_fuzzyness", (ptrdiff_t)(&((idAI *)0)->atime3_fuzzyness), sizeof( ((idAI *)0)->atime3_fuzzyness ) },
	{ "float", "atime4_fuzzyness", (ptrdiff_t)(&((idAI *)0)->atime4_fuzzyness), sizeof( ((idAI *)0)->atime4_fuzzyness ) },
	{ "float", "atime_fleedone_fuzzyness", (ptrdiff_t)(&((idAI *)0)->atime_fleedone_fuzzyness), sizeof( ((idAI *)0)->atime_fleedone_fuzzyness ) },
	{ "int", "m_timeBetweenHeadTurnChecks", (ptrdiff_t)(&((idAI *)0)->m_timeBetweenHeadTurnChecks), sizeof( ((idAI *)0)->m_timeBetweenHeadTurnChecks ) },
	{ "float", "m_headTurnChanceIdle", (ptrdiff_t)(&((idAI *)0)->m_headTurnChanceIdle), sizeof( ((idAI *)0)->m_headTurnChanceIdle ) },
	{ "float", "m_headTurnFactorAlerted", (ptrdiff_t)(&((idAI *)0)->m_headTurnFactorAlerted), sizeof( ((idAI *)0)->m_headTurnFactorAlerted ) },
	{ "float", "m_headTurnMaxYaw", (ptrdiff_t)(&((idAI *)0)->m_headTurnMaxYaw), sizeof( ((idAI *)0)->m_headTurnMaxYaw ) },
	{ "float", "m_headTurnMaxPitch", (ptrdiff_t)(&((idAI *)0)->m_headTurnMaxPitch), sizeof( ((idAI *)0)->m_headTurnMaxPitch ) },
	{ "int", "m_headTurnMinDuration", (ptrdiff_t)(&((idAI *)0)->m_headTurnMinDuration), sizeof( ((idAI *)0)->m_headTurnMinDuration ) },
	{ "int", "m_headTurnMaxDuration", (ptrdiff_t)(&((idAI *)0)->m_headTurnMaxDuration), sizeof( ((idAI *)0)->m_headTurnMaxDuration ) },
	{ "idEntity *", "m_tactileEntity", (ptrdiff_t)(&((idAI *)0)->m_tactileEntity), sizeof( ((idAI *)0)->m_tactileEntity ) },
	{ "bool", "m_canResolveBlock", (ptrdiff_t)(&((idAI *)0)->m_canResolveBlock), sizeof( ((idAI *)0)->m_canResolveBlock ) },
	{ "bool", "m_leftQueue", (ptrdiff_t)(&((idAI *)0)->m_leftQueue), sizeof( ((idAI *)0)->m_leftQueue ) },
	{ "bool", "m_performRelight", (ptrdiff_t)(&((idAI *)0)->m_performRelight), sizeof( ((idAI *)0)->m_performRelight ) },
	{ "idEntityPtr < idEntity >", "m_bloodMarker", (ptrdiff_t)(&((idAI *)0)->m_bloodMarker), sizeof( ((idAI *)0)->m_bloodMarker ) },
	{ "bool", "m_ReactingToHit", (ptrdiff_t)(&((idAI *)0)->m_ReactingToHit), sizeof( ((idAI *)0)->m_ReactingToHit ) },
	{ "idEntityPtr < idActor >", "m_lastKilled", (ptrdiff_t)(&((idAI *)0)->m_lastKilled), sizeof( ((idAI *)0)->m_lastKilled ) },
	{ "bool", "m_justKilledSomeone", (ptrdiff_t)(&((idAI *)0)->m_justKilledSomeone), sizeof( ((idAI *)0)->m_justKilledSomeone ) },
	{ "bool", "m_deckedByPlayer", (ptrdiff_t)(&((idAI *)0)->m_deckedByPlayer), sizeof( ((idAI *)0)->m_deckedByPlayer ) },
	{ "bool", "m_allowAudioAlerts", (ptrdiff_t)(&((idAI *)0)->m_allowAudioAlerts), sizeof( ((idAI *)0)->m_allowAudioAlerts ) },
	{ "int", "m_searchID", (ptrdiff_t)(&((idAI *)0)->m_searchID), sizeof( ((idAI *)0)->m_searchID ) },
	{ "float", "m_pathWaitTaskEndtime", (ptrdiff_t)(&((idAI *)0)->m_pathWaitTaskEndtime), sizeof( ((idAI *)0)->m_pathWaitTaskEndtime ) },
	{ "idList < EntityAlert >", "alertQueue", (ptrdiff_t)(&((idAI *)0)->alertQueue), sizeof( ((idAI *)0)->alertQueue ) },
	{ "ai :: MindPtr", "mind", (ptrdiff_t)(&((idAI *)0)->mind), sizeof( ((idAI *)0)->mind ) },
	{ "ai :: SubsystemPtr", "senseSubsystem", (ptrdiff_t)(&((idAI *)0)->senseSubsystem), sizeof( ((idAI *)0)->senseSubsystem ) },
	{ "ai :: MovementSubsystemPtr", "movementSubsystem", (ptrdiff_t)(&((idAI *)0)->movementSubsystem), sizeof( ((idAI *)0)->movementSubsystem ) },
	{ "ai :: SubsystemPtr", "actionSubsystem", (ptrdiff_t)(&((idAI *)0)->actionSubsystem), sizeof( ((idAI *)0)->actionSubsystem ) },
	{ "ai :: CommunicationSubsystemPtr", "commSubsystem", (ptrdiff_t)(&((idAI *)0)->commSubsystem), sizeof( ((idAI *)0)->commSubsystem ) },
	{ "ai :: SubsystemPtr", "searchSubsystem", (ptrdiff_t)(&((idAI *)0)->searchSubsystem), sizeof( ((idAI *)0)->searchSubsystem ) },
	{ "BackboneStateMap", "backboneStates", (ptrdiff_t)(&((idAI *)0)->backboneStates), sizeof( ((idAI *)0)->backboneStates ) },
	{ "int", "m_nextThinkFrame", (ptrdiff_t)(&((idAI *)0)->m_nextThinkFrame), sizeof( ((idAI *)0)->m_nextThinkFrame ) },
	{ "int", "m_maxInterleaveThinkFrames", (ptrdiff_t)(&((idAI *)0)->m_maxInterleaveThinkFrames), sizeof( ((idAI *)0)->m_maxInterleaveThinkFrames ) },
	{ "float", "m_minInterleaveThinkDist", (ptrdiff_t)(&((idAI *)0)->m_minInterleaveThinkDist), sizeof( ((idAI *)0)->m_minInterleaveThinkDist ) },
	{ "float", "m_maxInterleaveThinkDist", (ptrdiff_t)(&((idAI *)0)->m_maxInterleaveThinkDist), sizeof( ((idAI *)0)->m_maxInterleaveThinkDist ) },
	{ "int", "m_lastThinkTime", (ptrdiff_t)(&((idAI *)0)->m_lastThinkTime), sizeof( ((idAI *)0)->m_lastThinkTime ) },
	{ "bool", "m_lipSyncActive", (ptrdiff_t)(&((idAI *)0)->m_lipSyncActive), sizeof( ((idAI *)0)->m_lipSyncActive ) },
	{ "int", "m_lipSyncAnim", (ptrdiff_t)(&((idAI *)0)->m_lipSyncAnim), sizeof( ((idAI *)0)->m_lipSyncAnim ) },
	{ "int", "m_lipSyncEndTimer", (ptrdiff_t)(&((idAI *)0)->m_lipSyncEndTimer), sizeof( ((idAI *)0)->m_lipSyncEndTimer ) },
	{ "idStr", "m_barkName", (ptrdiff_t)(&((idAI *)0)->m_barkName), sizeof( ((idAI *)0)->m_barkName ) },
	{ "int", "m_barkEndTime", (ptrdiff_t)(&((idAI *)0)->m_barkEndTime), sizeof( ((idAI *)0)->m_barkEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCombatNode_typeInfo[] = {
	{ "float", "min_dist", (ptrdiff_t)(&((idCombatNode *)0)->min_dist), sizeof( ((idCombatNode *)0)->min_dist ) },
	{ "float", "max_dist", (ptrdiff_t)(&((idCombatNode *)0)->max_dist), sizeof( ((idCombatNode *)0)->max_dist ) },
	{ "float", "cone_dist", (ptrdiff_t)(&((idCombatNode *)0)->cone_dist), sizeof( ((idCombatNode *)0)->cone_dist ) },
	{ "float", "min_height", (ptrdiff_t)(&((idCombatNode *)0)->min_height), sizeof( ((idCombatNode *)0)->min_height ) },
	{ "float", "max_height", (ptrdiff_t)(&((idCombatNode *)0)->max_height), sizeof( ((idCombatNode *)0)->max_height ) },
	{ "idVec3", "cone_left", (ptrdiff_t)(&((idCombatNode *)0)->cone_left), sizeof( ((idCombatNode *)0)->cone_left ) },
	{ "idVec3", "cone_right", (ptrdiff_t)(&((idCombatNode *)0)->cone_right), sizeof( ((idCombatNode *)0)->cone_right ) },
	{ "idVec3", "offset", (ptrdiff_t)(&((idCombatNode *)0)->offset), sizeof( ((idCombatNode *)0)->offset ) },
	{ "bool", "disabled", (ptrdiff_t)(&((idCombatNode *)0)->disabled), sizeof( ((idCombatNode *)0)->disabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t idTestModel_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "head", (ptrdiff_t)(&((idTestModel *)0)->head), sizeof( ((idTestModel *)0)->head ) },
	{ "idAnimator *", "headAnimator", (ptrdiff_t)(&((idTestModel *)0)->headAnimator), sizeof( ((idTestModel *)0)->headAnimator ) },
	{ "idAnim", "customAnim", (ptrdiff_t)(&((idTestModel *)0)->customAnim), sizeof( ((idTestModel *)0)->customAnim ) },
	{ "idPhysics_Parametric", "physicsObj", (ptrdiff_t)(&((idTestModel *)0)->physicsObj), sizeof( ((idTestModel *)0)->physicsObj ) },
	{ "idStr", "animname", (ptrdiff_t)(&((idTestModel *)0)->animname), sizeof( ((idTestModel *)0)->animname ) },
	{ "int", "anim", (ptrdiff_t)(&((idTestModel *)0)->anim), sizeof( ((idTestModel *)0)->anim ) },
	{ "int", "headAnim", (ptrdiff_t)(&((idTestModel *)0)->headAnim), sizeof( ((idTestModel *)0)->headAnim ) },
	{ "int", "mode", (ptrdiff_t)(&((idTestModel *)0)->mode), sizeof( ((idTestModel *)0)->mode ) },
	{ "int", "frame", (ptrdiff_t)(&((idTestModel *)0)->frame), sizeof( ((idTestModel *)0)->frame ) },
	{ "int", "starttime", (ptrdiff_t)(&((idTestModel *)0)->starttime), sizeof( ((idTestModel *)0)->starttime ) },
	{ "int", "animtime", (ptrdiff_t)(&((idTestModel *)0)->animtime), sizeof( ((idTestModel *)0)->animtime ) },
	{ "idList < copyJoints_t >", "copyJoints", (ptrdiff_t)(&((idTestModel *)0)->copyJoints), sizeof( ((idTestModel *)0)->copyJoints ) },
	{ NULL, 0 }
};

static classVariableInfo_t opcode_t_typeInfo[] = {
	{ "const char *", "name", (ptrdiff_t)(&((opcode_t *)0)->name), sizeof( ((opcode_t *)0)->name ) },
	{ "const char *", "opname", (ptrdiff_t)(&((opcode_t *)0)->opname), sizeof( ((opcode_t *)0)->opname ) },
	{ "int", "priority", (ptrdiff_t)(&((opcode_t *)0)->priority), sizeof( ((opcode_t *)0)->priority ) },
	{ "bool", "rightAssociative", (ptrdiff_t)(&((opcode_t *)0)->rightAssociative), sizeof( ((opcode_t *)0)->rightAssociative ) },
	{ "idVarDef *", "type_a", (ptrdiff_t)(&((opcode_t *)0)->type_a), sizeof( ((opcode_t *)0)->type_a ) },
	{ "idVarDef *", "type_b", (ptrdiff_t)(&((opcode_t *)0)->type_b), sizeof( ((opcode_t *)0)->type_b ) },
	{ "idVarDef *", "type_c", (ptrdiff_t)(&((opcode_t *)0)->type_c), sizeof( ((opcode_t *)0)->type_c ) },
	{ NULL, 0 }
};

static classVariableInfo_t idCompiler_typeInfo[] = {
	{ "idParser", "parser", (ptrdiff_t)(&((idCompiler *)0)->parser), sizeof( ((idCompiler *)0)->parser ) },
	{ "idParser *", "parserPtr", (ptrdiff_t)(&((idCompiler *)0)->parserPtr), sizeof( ((idCompiler *)0)->parserPtr ) },
	{ "idToken", "token", (ptrdiff_t)(&((idCompiler *)0)->token), sizeof( ((idCompiler *)0)->token ) },
	{ "idTypeDef *", "immediateType", (ptrdiff_t)(&((idCompiler *)0)->immediateType), sizeof( ((idCompiler *)0)->immediateType ) },
	{ "eval_t", "immediate", (ptrdiff_t)(&((idCompiler *)0)->immediate), sizeof( ((idCompiler *)0)->immediate ) },
	{ "bool", "eof", (ptrdiff_t)(&((idCompiler *)0)->eof), sizeof( ((idCompiler *)0)->eof ) },
	{ "bool", "console", (ptrdiff_t)(&((idCompiler *)0)->console), sizeof( ((idCompiler *)0)->console ) },
	{ "bool", "callthread", (ptrdiff_t)(&((idCompiler *)0)->callthread), sizeof( ((idCompiler *)0)->callthread ) },
	{ "int", "braceDepth", (ptrdiff_t)(&((idCompiler *)0)->braceDepth), sizeof( ((idCompiler *)0)->braceDepth ) },
	{ "int", "loopDepth", (ptrdiff_t)(&((idCompiler *)0)->loopDepth), sizeof( ((idCompiler *)0)->loopDepth ) },
	{ "int", "currentLineNumber", (ptrdiff_t)(&((idCompiler *)0)->currentLineNumber), sizeof( ((idCompiler *)0)->currentLineNumber ) },
	{ "int", "currentFileNumber", (ptrdiff_t)(&((idCompiler *)0)->currentFileNumber), sizeof( ((idCompiler *)0)->currentFileNumber ) },
	{ "int", "errorCount", (ptrdiff_t)(&((idCompiler *)0)->errorCount), sizeof( ((idCompiler *)0)->errorCount ) },
	{ "idVarDef *", "scope", (ptrdiff_t)(&((idCompiler *)0)->scope), sizeof( ((idCompiler *)0)->scope ) },
	{ "const idVarDef *", "basetype", (ptrdiff_t)(&((idCompiler *)0)->basetype), sizeof( ((idCompiler *)0)->basetype ) },
	{ NULL, 0 }
};

static classVariableInfo_t prstack_t_typeInfo[] = {
	{ "int", "s", (ptrdiff_t)(&((prstack_t *)0)->s), sizeof( ((prstack_t *)0)->s ) },
	{ "const function_t *", "f", (ptrdiff_t)(&((prstack_t *)0)->f), sizeof( ((prstack_t *)0)->f ) },
	{ "int", "stackbase", (ptrdiff_t)(&((prstack_t *)0)->stackbase), sizeof( ((prstack_t *)0)->stackbase ) },
	{ NULL, 0 }
};

static classVariableInfo_t idInterpreter_typeInfo[] = {
	{ "prstack_t[64]", "callStack", (ptrdiff_t)(&((idInterpreter *)0)->callStack), sizeof( ((idInterpreter *)0)->callStack ) },
	{ "int", "callStackDepth", (ptrdiff_t)(&((idInterpreter *)0)->callStackDepth), sizeof( ((idInterpreter *)0)->callStackDepth ) },
	{ "int", "maxStackDepth", (ptrdiff_t)(&((idInterpreter *)0)->maxStackDepth), sizeof( ((idInterpreter *)0)->maxStackDepth ) },
	{ "byte[6144]", "localstack", (ptrdiff_t)(&((idInterpreter *)0)->localstack), sizeof( ((idInterpreter *)0)->localstack ) },
	{ "int", "localstackUsed", (ptrdiff_t)(&((idInterpreter *)0)->localstackUsed), sizeof( ((idInterpreter *)0)->localstackUsed ) },
	{ "int", "localstackBase", (ptrdiff_t)(&((idInterpreter *)0)->localstackBase), sizeof( ((idInterpreter *)0)->localstackBase ) },
	{ "int", "maxLocalstackUsed", (ptrdiff_t)(&((idInterpreter *)0)->maxLocalstackUsed), sizeof( ((idInterpreter *)0)->maxLocalstackUsed ) },
	{ "const function_t *", "currentFunction", (ptrdiff_t)(&((idInterpreter *)0)->currentFunction), sizeof( ((idInterpreter *)0)->currentFunction ) },
	{ "int", "instructionPointer", (ptrdiff_t)(&((idInterpreter *)0)->instructionPointer), sizeof( ((idInterpreter *)0)->instructionPointer ) },
	{ "int", "popParms", (ptrdiff_t)(&((idInterpreter *)0)->popParms), sizeof( ((idInterpreter *)0)->popParms ) },
	{ "const idEventDef *", "multiFrameEvent", (ptrdiff_t)(&((idInterpreter *)0)->multiFrameEvent), sizeof( ((idInterpreter *)0)->multiFrameEvent ) },
	{ "idEntity *", "eventEntity", (ptrdiff_t)(&((idInterpreter *)0)->eventEntity), sizeof( ((idInterpreter *)0)->eventEntity ) },
	{ "idThread *", "thread", (ptrdiff_t)(&((idInterpreter *)0)->thread), sizeof( ((idInterpreter *)0)->thread ) },
	{ "bool", "doneProcessing", (ptrdiff_t)(&((idInterpreter *)0)->doneProcessing), sizeof( ((idInterpreter *)0)->doneProcessing ) },
	{ "bool", "threadDying", (ptrdiff_t)(&((idInterpreter *)0)->threadDying), sizeof( ((idInterpreter *)0)->threadDying ) },
	{ "bool", "terminateOnExit", (ptrdiff_t)(&((idInterpreter *)0)->terminateOnExit), sizeof( ((idInterpreter *)0)->terminateOnExit ) },
	{ "bool", "debug", (ptrdiff_t)(&((idInterpreter *)0)->debug), sizeof( ((idInterpreter *)0)->debug ) },
	{ NULL, 0 }
};

static classVariableInfo_t idThread_typeInfo[] = {
	{ "idThread *", "waitingForThread", (ptrdiff_t)(&((idThread *)0)->waitingForThread), sizeof( ((idThread *)0)->waitingForThread ) },
	{ "int", "waitingFor", (ptrdiff_t)(&((idThread *)0)->waitingFor), sizeof( ((idThread *)0)->waitingFor ) },
	{ "int", "waitingUntil", (ptrdiff_t)(&((idThread *)0)->waitingUntil), sizeof( ((idThread *)0)->waitingUntil ) },
	{ "idInterpreter", "interpreter", (ptrdiff_t)(&((idThread *)0)->interpreter), sizeof( ((idThread *)0)->interpreter ) },
	{ "idDict", "spawnArgs", (ptrdiff_t)(&((idThread *)0)->spawnArgs), sizeof( ((idThread *)0)->spawnArgs ) },
	{ "int", "threadNum", (ptrdiff_t)(&((idThread *)0)->threadNum), sizeof( ((idThread *)0)->threadNum ) },
	{ "idStr", "threadName", (ptrdiff_t)(&((idThread *)0)->threadName), sizeof( ((idThread *)0)->threadName ) },
	{ "int", "lastExecuteTime", (ptrdiff_t)(&((idThread *)0)->lastExecuteTime), sizeof( ((idThread *)0)->lastExecuteTime ) },
	{ "int", "creationTime", (ptrdiff_t)(&((idThread *)0)->creationTime), sizeof( ((idThread *)0)->creationTime ) },
	{ "bool", "manualControl", (ptrdiff_t)(&((idThread *)0)->manualControl), sizeof( ((idThread *)0)->manualControl ) },
	{ NULL, 0 }
};

static classVariableInfo_t mpPlayerState_t_typeInfo[] = {
	{ "int", "ping", (ptrdiff_t)(&((mpPlayerState_t *)0)->ping), sizeof( ((mpPlayerState_t *)0)->ping ) },
	{ "int", "fragCount", (ptrdiff_t)(&((mpPlayerState_t *)0)->fragCount), sizeof( ((mpPlayerState_t *)0)->fragCount ) },
	{ "int", "teamFragCount", (ptrdiff_t)(&((mpPlayerState_t *)0)->teamFragCount), sizeof( ((mpPlayerState_t *)0)->teamFragCount ) },
	{ "int", "wins", (ptrdiff_t)(&((mpPlayerState_t *)0)->wins), sizeof( ((mpPlayerState_t *)0)->wins ) },
	{ "playerVote_t", "vote", (ptrdiff_t)(&((mpPlayerState_t *)0)->vote), sizeof( ((mpPlayerState_t *)0)->vote ) },
	{ "bool", "scoreBoardUp", (ptrdiff_t)(&((mpPlayerState_t *)0)->scoreBoardUp), sizeof( ((mpPlayerState_t *)0)->scoreBoardUp ) },
	{ "bool", "ingame", (ptrdiff_t)(&((mpPlayerState_t *)0)->ingame), sizeof( ((mpPlayerState_t *)0)->ingame ) },
	{ NULL, 0 }
};

static classVariableInfo_t mpChatLine_t_typeInfo[] = {
	{ "idStr", "line", (ptrdiff_t)(&((mpChatLine_t *)0)->line), sizeof( ((mpChatLine_t *)0)->line ) },
	{ "short", "fade", (ptrdiff_t)(&((mpChatLine_t *)0)->fade), sizeof( ((mpChatLine_t *)0)->fade ) },
	{ NULL, 0 }
};

static classVariableInfo_t idMultiplayerGame_typeInfo[] = {
	{ "gameState_t", "gameState", (ptrdiff_t)(&((idMultiplayerGame *)0)->gameState), sizeof( ((idMultiplayerGame *)0)->gameState ) },
	{ "gameState_t", "nextState", (ptrdiff_t)(&((idMultiplayerGame *)0)->nextState), sizeof( ((idMultiplayerGame *)0)->nextState ) },
	{ "int", "pingUpdateTime", (ptrdiff_t)(&((idMultiplayerGame *)0)->pingUpdateTime), sizeof( ((idMultiplayerGame *)0)->pingUpdateTime ) },
	{ "mpPlayerState_t[1]", "playerState", (ptrdiff_t)(&((idMultiplayerGame *)0)->playerState), sizeof( ((idMultiplayerGame *)0)->playerState ) },
	{ "vote_flags_t", "vote", (ptrdiff_t)(&((idMultiplayerGame *)0)->vote), sizeof( ((idMultiplayerGame *)0)->vote ) },
	{ "int", "voteTimeOut", (ptrdiff_t)(&((idMultiplayerGame *)0)->voteTimeOut), sizeof( ((idMultiplayerGame *)0)->voteTimeOut ) },
	{ "int", "voteExecTime", (ptrdiff_t)(&((idMultiplayerGame *)0)->voteExecTime), sizeof( ((idMultiplayerGame *)0)->voteExecTime ) },
	{ "float", "yesVotes", (ptrdiff_t)(&((idMultiplayerGame *)0)->yesVotes), sizeof( ((idMultiplayerGame *)0)->yesVotes ) },
	{ "float", "noVotes", (ptrdiff_t)(&((idMultiplayerGame *)0)->noVotes), sizeof( ((idMultiplayerGame *)0)->noVotes ) },
	{ "idStr", "voteValue", (ptrdiff_t)(&((idMultiplayerGame *)0)->voteValue), sizeof( ((idMultiplayerGame *)0)->voteValue ) },
	{ "idStr", "voteString", (ptrdiff_t)(&((idMultiplayerGame *)0)->voteString), sizeof( ((idMultiplayerGame *)0)->voteString ) },
	{ "bool", "voted", (ptrdiff_t)(&((idMultiplayerGame *)0)->voted), sizeof( ((idMultiplayerGame *)0)->voted ) },
	{ "int[1]", "kickVoteMap", (ptrdiff_t)(&((idMultiplayerGame *)0)->kickVoteMap), sizeof( ((idMultiplayerGame *)0)->kickVoteMap ) },
	{ "int", "nextStateSwitch", (ptrdiff_t)(&((idMultiplayerGame *)0)->nextStateSwitch), sizeof( ((idMultiplayerGame *)0)->nextStateSwitch ) },
	{ "int", "warmupEndTime", (ptrdiff_t)(&((idMultiplayerGame *)0)->warmupEndTime), sizeof( ((idMultiplayerGame *)0)->warmupEndTime ) },
	{ "int", "matchStartedTime", (ptrdiff_t)(&((idMultiplayerGame *)0)->matchStartedTime), sizeof( ((idMultiplayerGame *)0)->matchStartedTime ) },
	{ "int[2]", "currentTourneyPlayer", (ptrdiff_t)(&((idMultiplayerGame *)0)->currentTourneyPlayer), sizeof( ((idMultiplayerGame *)0)->currentTourneyPlayer ) },
	{ "int", "lastWinner", (ptrdiff_t)(&((idMultiplayerGame *)0)->lastWinner), sizeof( ((idMultiplayerGame *)0)->lastWinner ) },
	{ "idStr", "warmupText", (ptrdiff_t)(&((idMultiplayerGame *)0)->warmupText), sizeof( ((idMultiplayerGame *)0)->warmupText ) },
	{ "bool", "one", (ptrdiff_t)(&((idMultiplayerGame *)0)->one), sizeof( ((idMultiplayerGame *)0)->one ) },
	{ "bool", "two", (ptrdiff_t)(&((idMultiplayerGame *)0)->two), sizeof( ((idMultiplayerGame *)0)->two ) },
	{ "bool", "three", (ptrdiff_t)(&((idMultiplayerGame *)0)->three), sizeof( ((idMultiplayerGame *)0)->three ) },
	{ "idUserInterface *", "scoreBoard", (ptrdiff_t)(&((idMultiplayerGame *)0)->scoreBoard), sizeof( ((idMultiplayerGame *)0)->scoreBoard ) },
	{ "idUserInterface *", "spectateGui", (ptrdiff_t)(&((idMultiplayerGame *)0)->spectateGui), sizeof( ((idMultiplayerGame *)0)->spectateGui ) },
	{ "idUserInterface *", "guiChat", (ptrdiff_t)(&((idMultiplayerGame *)0)->guiChat), sizeof( ((idMultiplayerGame *)0)->guiChat ) },
	{ "idUserInterface *", "mainGui", (ptrdiff_t)(&((idMultiplayerGame *)0)->mainGui), sizeof( ((idMultiplayerGame *)0)->mainGui ) },
	{ "idListGUI *", "mapList", (ptrdiff_t)(&((idMultiplayerGame *)0)->mapList), sizeof( ((idMultiplayerGame *)0)->mapList ) },
	{ "idUserInterface *", "msgmodeGui", (ptrdiff_t)(&((idMultiplayerGame *)0)->msgmodeGui), sizeof( ((idMultiplayerGame *)0)->msgmodeGui ) },
	{ "int", "currentMenu", (ptrdiff_t)(&((idMultiplayerGame *)0)->currentMenu), sizeof( ((idMultiplayerGame *)0)->currentMenu ) },
	{ "int", "nextMenu", (ptrdiff_t)(&((idMultiplayerGame *)0)->nextMenu), sizeof( ((idMultiplayerGame *)0)->nextMenu ) },
	{ "bool", "bCurrentMenuMsg", (ptrdiff_t)(&((idMultiplayerGame *)0)->bCurrentMenuMsg), sizeof( ((idMultiplayerGame *)0)->bCurrentMenuMsg ) },
	{ "mpChatLine_t[5]", "chatHistory", (ptrdiff_t)(&((idMultiplayerGame *)0)->chatHistory), sizeof( ((idMultiplayerGame *)0)->chatHistory ) },
	{ "int", "chatHistoryIndex", (ptrdiff_t)(&((idMultiplayerGame *)0)->chatHistoryIndex), sizeof( ((idMultiplayerGame *)0)->chatHistoryIndex ) },
	{ "int", "chatHistorySize", (ptrdiff_t)(&((idMultiplayerGame *)0)->chatHistorySize), sizeof( ((idMultiplayerGame *)0)->chatHistorySize ) },
	{ "bool", "chatDataUpdated", (ptrdiff_t)(&((idMultiplayerGame *)0)->chatDataUpdated), sizeof( ((idMultiplayerGame *)0)->chatDataUpdated ) },
	{ "int", "lastChatLineTime", (ptrdiff_t)(&((idMultiplayerGame *)0)->lastChatLineTime), sizeof( ((idMultiplayerGame *)0)->lastChatLineTime ) },
	{ "int", "numRankedPlayers", (ptrdiff_t)(&((idMultiplayerGame *)0)->numRankedPlayers), sizeof( ((idMultiplayerGame *)0)->numRankedPlayers ) },
	{ "idPlayer *[1]", "rankedPlayers", (ptrdiff_t)(&((idMultiplayerGame *)0)->rankedPlayers), sizeof( ((idMultiplayerGame *)0)->rankedPlayers ) },
	{ "int", "fragLimitTimeout", (ptrdiff_t)(&((idMultiplayerGame *)0)->fragLimitTimeout), sizeof( ((idMultiplayerGame *)0)->fragLimitTimeout ) },
	{ "int[3]", "switchThrottle", (ptrdiff_t)(&((idMultiplayerGame *)0)->switchThrottle), sizeof( ((idMultiplayerGame *)0)->switchThrottle ) },
	{ "int", "voiceChatThrottle", (ptrdiff_t)(&((idMultiplayerGame *)0)->voiceChatThrottle), sizeof( ((idMultiplayerGame *)0)->voiceChatThrottle ) },
	{ "gameType_t", "lastGameType", (ptrdiff_t)(&((idMultiplayerGame *)0)->lastGameType), sizeof( ((idMultiplayerGame *)0)->lastGameType ) },
	{ "int", "startFragLimit", (ptrdiff_t)(&((idMultiplayerGame *)0)->startFragLimit), sizeof( ((idMultiplayerGame *)0)->startFragLimit ) },
	{ NULL, 0 }
};

static classVariableInfo_t CFrobButton_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CMultiStateMoverButton_typeInfo[] = {
	{ "bool", "targetingOff", (ptrdiff_t)(&((CMultiStateMoverButton *)0)->targetingOff), sizeof( ((CMultiStateMoverButton *)0)->targetingOff ) },
	{ NULL, 0 }
};

static classVariableInfo_t CMultiStateMover_typeInfo[] = {
	{ "idList < MoverPositionInfo >", "positionInfo", (ptrdiff_t)(&((CMultiStateMover *)0)->positionInfo), sizeof( ((CMultiStateMover *)0)->positionInfo ) },
	{ "idVec3", "forwardDirection", (ptrdiff_t)(&((CMultiStateMover *)0)->forwardDirection), sizeof( ((CMultiStateMover *)0)->forwardDirection ) },
	{ "idList < idEntityPtr < CMultiStateMoverButton > >", "fetchButtons", (ptrdiff_t)(&((CMultiStateMover *)0)->fetchButtons), sizeof( ((CMultiStateMover *)0)->fetchButtons ) },
	{ "idList < idEntityPtr < CMultiStateMoverButton > >", "rideButtons", (ptrdiff_t)(&((CMultiStateMover *)0)->rideButtons), sizeof( ((CMultiStateMover *)0)->rideButtons ) },
	{ "bool", "masterAtRideButton", (ptrdiff_t)(&((CMultiStateMover *)0)->masterAtRideButton), sizeof( ((CMultiStateMover *)0)->masterAtRideButton ) },
	{ "UserManager", "riderManager", (ptrdiff_t)(&((CMultiStateMover *)0)->riderManager), sizeof( ((CMultiStateMover *)0)->riderManager ) },
	{ NULL, 0 }
};

static classVariableInfo_t SBoolParseNode_typeInfo[] = {
	{ "int", "Ident", (ptrdiff_t)(&((SBoolParseNode *)0)->Ident), sizeof( ((SBoolParseNode *)0)->Ident ) },
	{ "bool", "bNotted", (ptrdiff_t)(&((SBoolParseNode *)0)->bNotted), sizeof( ((SBoolParseNode *)0)->bNotted ) },
	{ "idList < idList < SBoolParseNode > >", "Cols", (ptrdiff_t)(&((SBoolParseNode *)0)->Cols), sizeof( ((SBoolParseNode *)0)->Cols ) },
	{ "SBoolParseNode *", "PrevNode", (ptrdiff_t)(&((SBoolParseNode *)0)->PrevNode), sizeof( ((SBoolParseNode *)0)->PrevNode ) },
	{ "int", "PrevCol", (ptrdiff_t)(&((SBoolParseNode *)0)->PrevCol), sizeof( ((SBoolParseNode *)0)->PrevCol ) },
	{ "int", "PrevRow", (ptrdiff_t)(&((SBoolParseNode *)0)->PrevRow), sizeof( ((SBoolParseNode *)0)->PrevRow ) },
	{ NULL, 0 }
};

static classVariableInfo_t CObjectiveComponent_typeInfo[] = {
	{ "int[2]", "m_Index", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_Index), sizeof( ((CObjectiveComponent *)0)->m_Index ) },
	{ "bool", "m_bNotted", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_bNotted), sizeof( ((CObjectiveComponent *)0)->m_bNotted ) },
	{ "EComponentType", "m_Type", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_Type), sizeof( ((CObjectiveComponent *)0)->m_Type ) },
	{ "ESpecificationMethod[2]", "m_SpecMethod", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_SpecMethod), sizeof( ((CObjectiveComponent *)0)->m_SpecMethod ) },
	{ "idStr[2]", "m_SpecVal", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_SpecVal), sizeof( ((CObjectiveComponent *)0)->m_SpecVal ) },
	{ "bool", "m_bState", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_bState), sizeof( ((CObjectiveComponent *)0)->m_bState ) },
	{ "int", "m_EventCount", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_EventCount), sizeof( ((CObjectiveComponent *)0)->m_EventCount ) },
	{ "bool", "m_bPlayerResponsibleOnly", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_bPlayerResponsibleOnly), sizeof( ((CObjectiveComponent *)0)->m_bPlayerResponsibleOnly ) },
	{ "bool", "m_bLatched", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_bLatched), sizeof( ((CObjectiveComponent *)0)->m_bLatched ) },
	{ "idStrList", "m_Args", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_Args), sizeof( ((CObjectiveComponent *)0)->m_Args ) },
	{ "int", "m_ClockInterval", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_ClockInterval), sizeof( ((CObjectiveComponent *)0)->m_ClockInterval ) },
	{ "int", "m_TimeStamp", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_TimeStamp), sizeof( ((CObjectiveComponent *)0)->m_TimeStamp ) },
	{ "bool", "m_bReversible", (ptrdiff_t)(&((CObjectiveComponent *)0)->m_bReversible), sizeof( ((CObjectiveComponent *)0)->m_bReversible ) },
	{ NULL, 0 }
};

static classVariableInfo_t CObjective_typeInfo[] = {
	{ "idStr", "m_text", (ptrdiff_t)(&((CObjective *)0)->m_text), sizeof( ((CObjective *)0)->m_text ) },
	{ "bool", "m_bMandatory", (ptrdiff_t)(&((CObjective *)0)->m_bMandatory), sizeof( ((CObjective *)0)->m_bMandatory ) },
	{ "bool", "m_bVisible", (ptrdiff_t)(&((CObjective *)0)->m_bVisible), sizeof( ((CObjective *)0)->m_bVisible ) },
	{ "bool", "m_bOngoing", (ptrdiff_t)(&((CObjective *)0)->m_bOngoing), sizeof( ((CObjective *)0)->m_bOngoing ) },
	{ "bool", "m_bApplies", (ptrdiff_t)(&((CObjective *)0)->m_bApplies), sizeof( ((CObjective *)0)->m_bApplies ) },
	{ "int", "m_ObjNum", (ptrdiff_t)(&((CObjective *)0)->m_ObjNum), sizeof( ((CObjective *)0)->m_ObjNum ) },
	{ "int", "m_handle", (ptrdiff_t)(&((CObjective *)0)->m_handle), sizeof( ((CObjective *)0)->m_handle ) },
	{ "EObjCompletionState", "m_state", (ptrdiff_t)(&((CObjective *)0)->m_state), sizeof( ((CObjective *)0)->m_state ) },
	{ "bool", "m_bNeedsUpdate", (ptrdiff_t)(&((CObjective *)0)->m_bNeedsUpdate), sizeof( ((CObjective *)0)->m_bNeedsUpdate ) },
	{ "bool", "m_bReversible", (ptrdiff_t)(&((CObjective *)0)->m_bReversible), sizeof( ((CObjective *)0)->m_bReversible ) },
	{ "bool", "m_bLatched", (ptrdiff_t)(&((CObjective *)0)->m_bLatched), sizeof( ((CObjective *)0)->m_bLatched ) },
	{ "idList < CObjectiveComponent >", "m_Components", (ptrdiff_t)(&((CObjective *)0)->m_Components), sizeof( ((CObjective *)0)->m_Components ) },
	{ "idList < int >", "m_EnablingObjs", (ptrdiff_t)(&((CObjective *)0)->m_EnablingObjs), sizeof( ((CObjective *)0)->m_EnablingObjs ) },
	{ "idStr", "m_CompletionTarget", (ptrdiff_t)(&((CObjective *)0)->m_CompletionTarget), sizeof( ((CObjective *)0)->m_CompletionTarget ) },
	{ "idStr", "m_FailureTarget", (ptrdiff_t)(&((CObjective *)0)->m_FailureTarget), sizeof( ((CObjective *)0)->m_FailureTarget ) },
	{ "idStr", "m_CompletionScript", (ptrdiff_t)(&((CObjective *)0)->m_CompletionScript), sizeof( ((CObjective *)0)->m_CompletionScript ) },
	{ "idStr", "m_FailureScript", (ptrdiff_t)(&((CObjective *)0)->m_FailureScript), sizeof( ((CObjective *)0)->m_FailureScript ) },
	{ "idStr", "m_SuccessLogicStr", (ptrdiff_t)(&((CObjective *)0)->m_SuccessLogicStr), sizeof( ((CObjective *)0)->m_SuccessLogicStr ) },
	{ "idStr", "m_FailureLogicStr", (ptrdiff_t)(&((CObjective *)0)->m_FailureLogicStr), sizeof( ((CObjective *)0)->m_FailureLogicStr ) },
	{ "SBoolParseNode", "m_SuccessLogic", (ptrdiff_t)(&((CObjective *)0)->m_SuccessLogic), sizeof( ((CObjective *)0)->m_SuccessLogic ) },
	{ "SBoolParseNode", "m_FailureLogic", (ptrdiff_t)(&((CObjective *)0)->m_FailureLogic), sizeof( ((CObjective *)0)->m_FailureLogic ) },
	{ NULL, 0 }
};

static classVariableInfo_t SStat_typeInfo[] = {
	{ "int", "Overall", (ptrdiff_t)(&((SStat *)0)->Overall), sizeof( ((SStat *)0)->Overall ) },
	{ "int[64]", "ByTeam", (ptrdiff_t)(&((SStat *)0)->ByTeam), sizeof( ((SStat *)0)->ByTeam ) },
	{ "int[16]", "ByType", (ptrdiff_t)(&((SStat *)0)->ByType), sizeof( ((SStat *)0)->ByType ) },
	{ "int[2]", "ByInnocence", (ptrdiff_t)(&((SStat *)0)->ByInnocence), sizeof( ((SStat *)0)->ByInnocence ) },
	{ "int", "WhileAirborne", (ptrdiff_t)(&((SStat *)0)->WhileAirborne), sizeof( ((SStat *)0)->WhileAirborne ) },
	{ NULL, 0 }
};

static classVariableInfo_t MissionStatistics_typeInfo[] = {
	{ "SStat[16]", "AIStats", (ptrdiff_t)(&((MissionStatistics *)0)->AIStats), sizeof( ((MissionStatistics *)0)->AIStats ) },
	{ "SStat[6]", "AIAlerts", (ptrdiff_t)(&((MissionStatistics *)0)->AIAlerts), sizeof( ((MissionStatistics *)0)->AIAlerts ) },
	{ "int", "DamageDealt", (ptrdiff_t)(&((MissionStatistics *)0)->DamageDealt), sizeof( ((MissionStatistics *)0)->DamageDealt ) },
	{ "int", "DamageReceived", (ptrdiff_t)(&((MissionStatistics *)0)->DamageReceived), sizeof( ((MissionStatistics *)0)->DamageReceived ) },
	{ "int", "HealthReceived", (ptrdiff_t)(&((MissionStatistics *)0)->HealthReceived), sizeof( ((MissionStatistics *)0)->HealthReceived ) },
	{ "int", "PocketsPicked", (ptrdiff_t)(&((MissionStatistics *)0)->PocketsPicked), sizeof( ((MissionStatistics *)0)->PocketsPicked ) },
	{ "int[4]", "FoundLoot", (ptrdiff_t)(&((MissionStatistics *)0)->FoundLoot), sizeof( ((MissionStatistics *)0)->FoundLoot ) },
	{ "int[4]", "LootInMission", (ptrdiff_t)(&((MissionStatistics *)0)->LootInMission), sizeof( ((MissionStatistics *)0)->LootInMission ) },
	{ "unsigned int", "TotalGamePlayTime", (ptrdiff_t)(&((MissionStatistics *)0)->TotalGamePlayTime), sizeof( ((MissionStatistics *)0)->TotalGamePlayTime ) },
	{ "idList < EObjCompletionState >", "ObjectiveStates", (ptrdiff_t)(&((MissionStatistics *)0)->ObjectiveStates), sizeof( ((MissionStatistics *)0)->ObjectiveStates ) },
	{ "int", "numberTimesPlayerSeen", (ptrdiff_t)(&((MissionStatistics *)0)->numberTimesPlayerSeen), sizeof( ((MissionStatistics *)0)->numberTimesPlayerSeen ) },
	{ "int", "totalTimePlayerSeen", (ptrdiff_t)(&((MissionStatistics *)0)->totalTimePlayerSeen), sizeof( ((MissionStatistics *)0)->totalTimePlayerSeen ) },
	{ "int", "totalSaveCount", (ptrdiff_t)(&((MissionStatistics *)0)->totalSaveCount), sizeof( ((MissionStatistics *)0)->totalSaveCount ) },
	{ "int", "totalLoadCount", (ptrdiff_t)(&((MissionStatistics *)0)->totalLoadCount), sizeof( ((MissionStatistics *)0)->totalLoadCount ) },
	{ "int", "secretsFound", (ptrdiff_t)(&((MissionStatistics *)0)->secretsFound), sizeof( ((MissionStatistics *)0)->secretsFound ) },
	{ "int", "secretsTotal", (ptrdiff_t)(&((MissionStatistics *)0)->secretsTotal), sizeof( ((MissionStatistics *)0)->secretsTotal ) },
	{ "idStr[3]", "_difficultyNames", (ptrdiff_t)(&((MissionStatistics *)0)->_difficultyNames), sizeof( ((MissionStatistics *)0)->_difficultyNames ) },
	{ NULL, 0 }
};

static classVariableInfo_t CampaignStats_typeInfo[] = {
	{ "idList < MissionStatistics >", "_stats", (ptrdiff_t)(&((CampaignStats *)0)->_stats), sizeof( ((CampaignStats *)0)->_stats ) },
	{ NULL, 0 }
};

static classVariableInfo_t SObjEntParms_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((SObjEntParms *)0)->name), sizeof( ((SObjEntParms *)0)->name ) },
	{ "idStr", "group", (ptrdiff_t)(&((SObjEntParms *)0)->group), sizeof( ((SObjEntParms *)0)->group ) },
	{ "idStr", "classname", (ptrdiff_t)(&((SObjEntParms *)0)->classname), sizeof( ((SObjEntParms *)0)->classname ) },
	{ "idStr", "spawnclass", (ptrdiff_t)(&((SObjEntParms *)0)->spawnclass), sizeof( ((SObjEntParms *)0)->spawnclass ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((SObjEntParms *)0)->origin), sizeof( ((SObjEntParms *)0)->origin ) },
	{ "int", "team", (ptrdiff_t)(&((SObjEntParms *)0)->team), sizeof( ((SObjEntParms *)0)->team ) },
	{ "int", "type", (ptrdiff_t)(&((SObjEntParms *)0)->type), sizeof( ((SObjEntParms *)0)->type ) },
	{ "int", "innocence", (ptrdiff_t)(&((SObjEntParms *)0)->innocence), sizeof( ((SObjEntParms *)0)->innocence ) },
	{ "int", "value", (ptrdiff_t)(&((SObjEntParms *)0)->value), sizeof( ((SObjEntParms *)0)->value ) },
	{ "int", "valueSuperGroup", (ptrdiff_t)(&((SObjEntParms *)0)->valueSuperGroup), sizeof( ((SObjEntParms *)0)->valueSuperGroup ) },
	{ "bool", "bIsAI", (ptrdiff_t)(&((SObjEntParms *)0)->bIsAI), sizeof( ((SObjEntParms *)0)->bIsAI ) },
	{ "bool", "bWhileAirborne", (ptrdiff_t)(&((SObjEntParms *)0)->bWhileAirborne), sizeof( ((SObjEntParms *)0)->bWhileAirborne ) },
	{ NULL, 0 }
};

static classVariableInfo_t CMissionData_typeInfo[] = {
	{ "bool", "m_bObjsNeedUpdate", (ptrdiff_t)(&((CMissionData *)0)->m_bObjsNeedUpdate), sizeof( ((CMissionData *)0)->m_bObjsNeedUpdate ) },
	{ "idList < CObjective >", "m_Objectives", (ptrdiff_t)(&((CMissionData *)0)->m_Objectives), sizeof( ((CMissionData *)0)->m_Objectives ) },
	{ "idList < CObjectiveComponent * >", "m_ClockedComponents", (ptrdiff_t)(&((CMissionData *)0)->m_ClockedComponents), sizeof( ((CMissionData *)0)->m_ClockedComponents ) },
	{ "MissionStatistics", "m_Stats", (ptrdiff_t)(&((CMissionData *)0)->m_Stats), sizeof( ((CMissionData *)0)->m_Stats ) },
	{ "idHashIndex", "m_CompTypeHash", (ptrdiff_t)(&((CMissionData *)0)->m_CompTypeHash), sizeof( ((CMissionData *)0)->m_CompTypeHash ) },
	{ "idHashIndex", "m_SpecTypeHash", (ptrdiff_t)(&((CMissionData *)0)->m_SpecTypeHash), sizeof( ((CMissionData *)0)->m_SpecTypeHash ) },
	{ "idStr", "m_SuccessLogicStr", (ptrdiff_t)(&((CMissionData *)0)->m_SuccessLogicStr), sizeof( ((CMissionData *)0)->m_SuccessLogicStr ) },
	{ "idStr", "m_FailureLogicStr", (ptrdiff_t)(&((CMissionData *)0)->m_FailureLogicStr), sizeof( ((CMissionData *)0)->m_FailureLogicStr ) },
	{ "SBoolParseNode", "m_SuccessLogic", (ptrdiff_t)(&((CMissionData *)0)->m_SuccessLogic), sizeof( ((CMissionData *)0)->m_SuccessLogic ) },
	{ "SBoolParseNode", "m_FailureLogic", (ptrdiff_t)(&((CMissionData *)0)->m_FailureLogic), sizeof( ((CMissionData *)0)->m_FailureLogic ) },
	{ "bool", "m_MissionDataLoadedIntoGUI", (ptrdiff_t)(&((CMissionData *)0)->m_MissionDataLoadedIntoGUI), sizeof( ((CMissionData *)0)->m_MissionDataLoadedIntoGUI ) },
	{ "idMapFile *", "m_mapFile", (ptrdiff_t)(&((CMissionData *)0)->m_mapFile), sizeof( ((CMissionData *)0)->m_mapFile ) },
	{ "int", "m_PlayerTeam", (ptrdiff_t)(&((CMissionData *)0)->m_PlayerTeam), sizeof( ((CMissionData *)0)->m_PlayerTeam ) },
	{ NULL, 0 }
};

static classVariableInfo_t ObjectiveCondition_typeInfo[] = {
	{ "Type", "_type", (ptrdiff_t)(&((ObjectiveCondition *)0)->_type), sizeof( ((ObjectiveCondition *)0)->_type ) },
	{ "int", "_value", (ptrdiff_t)(&((ObjectiveCondition *)0)->_value), sizeof( ((ObjectiveCondition *)0)->_value ) },
	{ "int", "_srcMission", (ptrdiff_t)(&((ObjectiveCondition *)0)->_srcMission), sizeof( ((ObjectiveCondition *)0)->_srcMission ) },
	{ "EObjCompletionState", "_srcState", (ptrdiff_t)(&((ObjectiveCondition *)0)->_srcState), sizeof( ((ObjectiveCondition *)0)->_srcState ) },
	{ "int", "_srcObj", (ptrdiff_t)(&((ObjectiveCondition *)0)->_srcObj), sizeof( ((ObjectiveCondition *)0)->_srcObj ) },
	{ "int", "_targetObj", (ptrdiff_t)(&((ObjectiveCondition *)0)->_targetObj), sizeof( ((ObjectiveCondition *)0)->_targetObj ) },
	{ NULL, 0 }
};

static classVariableInfo_t CObjectiveLocation_typeInfo[] = {
	{ "int", "m_Interval", (ptrdiff_t)(&((CObjectiveLocation *)0)->m_Interval), sizeof( ((CObjectiveLocation *)0)->m_Interval ) },
	{ "int", "m_TimeStamp", (ptrdiff_t)(&((CObjectiveLocation *)0)->m_TimeStamp), sizeof( ((CObjectiveLocation *)0)->m_TimeStamp ) },
	{ "idList < idEntityPtr < idEntity > >", "m_EntsInBounds", (ptrdiff_t)(&((CObjectiveLocation *)0)->m_EntsInBounds), sizeof( ((CObjectiveLocation *)0)->m_EntsInBounds ) },
	{ "idStr", "m_ObjectiveGroup", (ptrdiff_t)(&((CObjectiveLocation *)0)->m_ObjectiveGroup), sizeof( ((CObjectiveLocation *)0)->m_ObjectiveGroup ) },
	{ "idClipModel *", "clipModel", (ptrdiff_t)(&((CObjectiveLocation *)0)->clipModel), sizeof( ((CObjectiveLocation *)0)->clipModel ) },
	{ NULL, 0 }
};

static classVariableInfo_t CForcePush_typeInfo[] = {
	{ "idEntity *", "pushEnt", (ptrdiff_t)(&((CForcePush *)0)->pushEnt), sizeof( ((CForcePush *)0)->pushEnt ) },
	{ "idEntityPtr < idEntity >", "lastPushEnt", (ptrdiff_t)(&((CForcePush *)0)->lastPushEnt), sizeof( ((CForcePush *)0)->lastPushEnt ) },
	{ "int", "id", (ptrdiff_t)(&((CForcePush *)0)->id), sizeof( ((CForcePush *)0)->id ) },
	{ "trace_t", "contactInfo", (ptrdiff_t)(&((CForcePush *)0)->contactInfo), sizeof( ((CForcePush *)0)->contactInfo ) },
	{ "idVec3", "impactVelocity", (ptrdiff_t)(&((CForcePush *)0)->impactVelocity), sizeof( ((CForcePush *)0)->impactVelocity ) },
	{ "int", "startPushTime", (ptrdiff_t)(&((CForcePush *)0)->startPushTime), sizeof( ((CForcePush *)0)->startPushTime ) },
	{ "idEntity *", "owner", (ptrdiff_t)(&((CForcePush *)0)->owner), sizeof( ((CForcePush *)0)->owner ) },
	{ NULL, 0 }
};

static classVariableInfo_t PositionWithinRangeFinder_typeInfo[] = {
	{ "idVec3", "_targetPos", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->_targetPos), sizeof( ((PositionWithinRangeFinder *)0)->_targetPos ) },
	{ "idVec3", "_eyeOffset", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->_eyeOffset), sizeof( ((PositionWithinRangeFinder *)0)->_eyeOffset ) },
	{ "const idAI *", "_self", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->_self), sizeof( ((PositionWithinRangeFinder *)0)->_self ) },
	{ "idMat3", "_gravityAxis", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->_gravityAxis), sizeof( ((PositionWithinRangeFinder *)0)->_gravityAxis ) },
	{ "float", "_maxDistance", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->_maxDistance), sizeof( ((PositionWithinRangeFinder *)0)->_maxDistance ) },
	{ "bool", "_haveBestGoal", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->_haveBestGoal), sizeof( ((PositionWithinRangeFinder *)0)->_haveBestGoal ) },
	{ "idBounds", "excludeBounds", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->excludeBounds), sizeof( ((PositionWithinRangeFinder *)0)->excludeBounds ) },
	{ "pvsHandle_t", "targetPVS", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->targetPVS), sizeof( ((PositionWithinRangeFinder *)0)->targetPVS ) },
	{ "int[4]", "PVSAreas", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->PVSAreas), sizeof( ((PositionWithinRangeFinder *)0)->PVSAreas ) },
	{ "int", "numPVSAreas", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->numPVSAreas), sizeof( ((PositionWithinRangeFinder *)0)->numPVSAreas ) },
	{ "aasGoal_t", "bestGoal", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->bestGoal), sizeof( ((PositionWithinRangeFinder *)0)->bestGoal ) },
	{ "float", "bestGoalDistance", (ptrdiff_t)(&((PositionWithinRangeFinder *)0)->bestGoalDistance), sizeof( ((PositionWithinRangeFinder *)0)->bestGoalDistance ) },
	{ NULL, 0 }
};

static classVariableInfo_t CProjectileResult_typeInfo[] = {
	{ "trace_t", "m_Collision", (ptrdiff_t)(&((CProjectileResult *)0)->m_Collision), sizeof( ((CProjectileResult *)0)->m_Collision ) },
	{ "SFinalProjData", "m_ProjData", (ptrdiff_t)(&((CProjectileResult *)0)->m_ProjData), sizeof( ((CProjectileResult *)0)->m_ProjData ) },
	{ "bool", "m_bActivated", (ptrdiff_t)(&((CProjectileResult *)0)->m_bActivated), sizeof( ((CProjectileResult *)0)->m_bActivated ) },
	{ NULL, 0 }
};

static classVariableInfo_t ScriptEventDocGenerator_CompareCaseInsensitively_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ScriptEventDocGenerator_typeInfo[] = {
	{ "EventMap", "_events", (ptrdiff_t)(&((ScriptEventDocGenerator *)0)->_events), sizeof( ((ScriptEventDocGenerator *)0)->_events ) },
	{ "idStr", "_dateStr", (ptrdiff_t)(&((ScriptEventDocGenerator *)0)->_dateStr), sizeof( ((ScriptEventDocGenerator *)0)->_dateStr ) },
	{ NULL, 0 }
};

static classVariableInfo_t ScriptEventDocGeneratorD3Script_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ScriptEventDocGeneratorMediaWiki_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ScriptEventDocGeneratorXml_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t TimerValue_typeInfo[] = {
	{ "signed char", "Flags", (ptrdiff_t)(&((TimerValue *)0)->Flags), sizeof( ((TimerValue *)0)->Flags ) },
	{ "signed char", "Hour", (ptrdiff_t)(&((TimerValue *)0)->Hour), sizeof( ((TimerValue *)0)->Hour ) },
	{ "signed char", "Minute", (ptrdiff_t)(&((TimerValue *)0)->Minute), sizeof( ((TimerValue *)0)->Minute ) },
	{ "signed char", "Second", (ptrdiff_t)(&((TimerValue *)0)->Second), sizeof( ((TimerValue *)0)->Second ) },
	{ "signed short", "Millisecond", (ptrdiff_t)(&((TimerValue *)0)->Millisecond), sizeof( ((TimerValue *)0)->Millisecond ) },
	{ NULL, 0 }
};

static classVariableInfo_t CStimResponseTimer_typeInfo[] = {
	{ "unsigned int", "m_LastTick", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_LastTick), sizeof( ((CStimResponseTimer *)0)->m_LastTick ) },
	{ "unsigned int", "m_Ticker", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_Ticker), sizeof( ((CStimResponseTimer *)0)->m_Ticker ) },
	{ "unsigned int", "m_TicksPerMilliSecond", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_TicksPerMilliSecond), sizeof( ((CStimResponseTimer *)0)->m_TicksPerMilliSecond ) },
	{ "bool", "m_Fired", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_Fired), sizeof( ((CStimResponseTimer *)0)->m_Fired ) },
	{ "TimerType", "m_Type", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_Type), sizeof( ((CStimResponseTimer *)0)->m_Type ) },
	{ "TimerState", "m_State", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_State), sizeof( ((CStimResponseTimer *)0)->m_State ) },
	{ "int", "m_Reload", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_Reload), sizeof( ((CStimResponseTimer *)0)->m_Reload ) },
	{ "int", "m_ReloadVal", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_ReloadVal), sizeof( ((CStimResponseTimer *)0)->m_ReloadVal ) },
	{ "TimerValue", "m_Timer", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_Timer), sizeof( ((CStimResponseTimer *)0)->m_Timer ) },
	{ "TimerValue", "m_TimerVal", (ptrdiff_t)(&((CStimResponseTimer *)0)->m_TimerVal), sizeof( ((CStimResponseTimer *)0)->m_TimerVal ) },
	{ NULL, 0 }
};

static classVariableInfo_t CStim_typeInfo[] = {
	{ "CStimResponseTimer", "m_Timer", (ptrdiff_t)(&((CStim *)0)->m_Timer), sizeof( ((CStim *)0)->m_Timer ) },
	{ "idList < idEntityPtr < idEntity > >", "m_ResponseIgnore", (ptrdiff_t)(&((CStim *)0)->m_ResponseIgnore), sizeof( ((CStim *)0)->m_ResponseIgnore ) },
	{ "bool", "m_bUseEntBounds", (ptrdiff_t)(&((CStim *)0)->m_bUseEntBounds), sizeof( ((CStim *)0)->m_bUseEntBounds ) },
	{ "bool", "m_bCollisionBased", (ptrdiff_t)(&((CStim *)0)->m_bCollisionBased), sizeof( ((CStim *)0)->m_bCollisionBased ) },
	{ "bool", "m_bCollisionFired", (ptrdiff_t)(&((CStim *)0)->m_bCollisionFired), sizeof( ((CStim *)0)->m_bCollisionFired ) },
	{ "idList < idEntity * >", "m_CollisionEnts", (ptrdiff_t)(&((CStim *)0)->m_CollisionEnts), sizeof( ((CStim *)0)->m_CollisionEnts ) },
	{ "int", "m_TimeInterleave", (ptrdiff_t)(&((CStim *)0)->m_TimeInterleave), sizeof( ((CStim *)0)->m_TimeInterleave ) },
	{ "int", "m_TimeInterleaveStamp", (ptrdiff_t)(&((CStim *)0)->m_TimeInterleaveStamp), sizeof( ((CStim *)0)->m_TimeInterleaveStamp ) },
	{ "int", "m_MaxFireCount", (ptrdiff_t)(&((CStim *)0)->m_MaxFireCount), sizeof( ((CStim *)0)->m_MaxFireCount ) },
	{ "float", "m_Radius", (ptrdiff_t)(&((CStim *)0)->m_Radius), sizeof( ((CStim *)0)->m_Radius ) },
	{ "float", "m_RadiusFinal", (ptrdiff_t)(&((CStim *)0)->m_RadiusFinal), sizeof( ((CStim *)0)->m_RadiusFinal ) },
	{ "idBounds", "m_Bounds", (ptrdiff_t)(&((CStim *)0)->m_Bounds), sizeof( ((CStim *)0)->m_Bounds ) },
	{ "idVec3", "m_Velocity", (ptrdiff_t)(&((CStim *)0)->m_Velocity), sizeof( ((CStim *)0)->m_Velocity ) },
	{ "float", "m_Magnitude", (ptrdiff_t)(&((CStim *)0)->m_Magnitude), sizeof( ((CStim *)0)->m_Magnitude ) },
	{ "int", "m_FallOffExponent", (ptrdiff_t)(&((CStim *)0)->m_FallOffExponent), sizeof( ((CStim *)0)->m_FallOffExponent ) },
	{ "int", "m_MaxResponses", (ptrdiff_t)(&((CStim *)0)->m_MaxResponses), sizeof( ((CStim *)0)->m_MaxResponses ) },
	{ "int", "m_CurResponses", (ptrdiff_t)(&((CStim *)0)->m_CurResponses), sizeof( ((CStim *)0)->m_CurResponses ) },
	{ "int", "m_ApplyTimer", (ptrdiff_t)(&((CStim *)0)->m_ApplyTimer), sizeof( ((CStim *)0)->m_ApplyTimer ) },
	{ "int", "m_ApplyTimerVal", (ptrdiff_t)(&((CStim *)0)->m_ApplyTimerVal), sizeof( ((CStim *)0)->m_ApplyTimerVal ) },
	{ NULL, 0 }
};

static classVariableInfo_t CResponseEffect_typeInfo[] = {
	{ "const function_t *", "_scriptFunction", (ptrdiff_t)(&((CResponseEffect *)0)->_scriptFunction), sizeof( ((CResponseEffect *)0)->_scriptFunction ) },
	{ "idStr", "_scriptName", (ptrdiff_t)(&((CResponseEffect *)0)->_scriptName), sizeof( ((CResponseEffect *)0)->_scriptName ) },
	{ "idStr", "_effectPostfix", (ptrdiff_t)(&((CResponseEffect *)0)->_effectPostfix), sizeof( ((CResponseEffect *)0)->_effectPostfix ) },
	{ "bool", "_localScript", (ptrdiff_t)(&((CResponseEffect *)0)->_localScript), sizeof( ((CResponseEffect *)0)->_localScript ) },
	{ "bool", "_scriptFunctionValid", (ptrdiff_t)(&((CResponseEffect *)0)->_scriptFunctionValid), sizeof( ((CResponseEffect *)0)->_scriptFunctionValid ) },
	{ NULL, 0 }
};

static classVariableInfo_t CResponse_typeInfo[] = {
	{ "idStr", "m_ScriptFunction", (ptrdiff_t)(&((CResponse *)0)->m_ScriptFunction), sizeof( ((CResponse *)0)->m_ScriptFunction ) },
	{ "float", "m_MinDamage", (ptrdiff_t)(&((CResponse *)0)->m_MinDamage), sizeof( ((CResponse *)0)->m_MinDamage ) },
	{ "float", "m_MaxDamage", (ptrdiff_t)(&((CResponse *)0)->m_MaxDamage), sizeof( ((CResponse *)0)->m_MaxDamage ) },
	{ "int", "m_NumRandomEffects", (ptrdiff_t)(&((CResponse *)0)->m_NumRandomEffects), sizeof( ((CResponse *)0)->m_NumRandomEffects ) },
	{ "idList < CResponseEffect * >", "m_ResponseEffects", (ptrdiff_t)(&((CResponse *)0)->m_ResponseEffects), sizeof( ((CResponse *)0)->m_ResponseEffects ) },
	{ NULL, 0 }
};

static classVariableInfo_t CStimResponseCollection_typeInfo[] = {
	{ "idList < CStimPtr >", "m_Stims", (ptrdiff_t)(&((CStimResponseCollection *)0)->m_Stims), sizeof( ((CStimResponseCollection *)0)->m_Stims ) },
	{ "idList < CResponsePtr >", "m_Responses", (ptrdiff_t)(&((CStimResponseCollection *)0)->m_Responses), sizeof( ((CStimResponseCollection *)0)->m_Responses ) },
	{ NULL, 0 }
};

static classVariableInfo_t model_changeinfo_t_typeInfo[] = {
	{ "int", "entity", (ptrdiff_t)(&((model_changeinfo_t *)0)->entity), sizeof( ((model_changeinfo_t *)0)->entity ) },
	{ "int", "oldLOD", (ptrdiff_t)(&((model_changeinfo_t *)0)->oldLOD), sizeof( ((model_changeinfo_t *)0)->oldLOD ) },
	{ "int", "newLOD", (ptrdiff_t)(&((model_changeinfo_t *)0)->newLOD), sizeof( ((model_changeinfo_t *)0)->newLOD ) },
	{ "int", "oldFlags", (ptrdiff_t)(&((model_changeinfo_t *)0)->oldFlags), sizeof( ((model_changeinfo_t *)0)->oldFlags ) },
	{ "int", "newFlags", (ptrdiff_t)(&((model_changeinfo_t *)0)->newFlags), sizeof( ((model_changeinfo_t *)0)->newFlags ) },
	{ NULL, 0 }
};

static classVariableInfo_t CStaticMulti_typeInfo[] = {
	{ "bool", "active", (ptrdiff_t)(&((CStaticMulti *)0)->active), sizeof( ((CStaticMulti *)0)->active ) },
	{ "bool", "m_bNeedModelUpdates", (ptrdiff_t)(&((CStaticMulti *)0)->m_bNeedModelUpdates), sizeof( ((CStaticMulti *)0)->m_bNeedModelUpdates ) },
	{ "idPhysics_StaticMulti", "physics", (ptrdiff_t)(&((CStaticMulti *)0)->physics), sizeof( ((CStaticMulti *)0)->physics ) },
	{ "idStr", "m_MaterialName", (ptrdiff_t)(&((CStaticMulti *)0)->m_MaterialName), sizeof( ((CStaticMulti *)0)->m_MaterialName ) },
	{ "idList < model_ofs_t > *", "m_Offsets", (ptrdiff_t)(&((CStaticMulti *)0)->m_Offsets), sizeof( ((CStaticMulti *)0)->m_Offsets ) },
	{ "idList < model_changeinfo_t >", "m_Changes", (ptrdiff_t)(&((CStaticMulti *)0)->m_Changes), sizeof( ((CStaticMulti *)0)->m_Changes ) },
	{ "const idRenderModel *", "m_hModel", (ptrdiff_t)(&((CStaticMulti *)0)->m_hModel), sizeof( ((CStaticMulti *)0)->m_hModel ) },
	{ "idStr", "m_modelName", (ptrdiff_t)(&((CStaticMulti *)0)->m_modelName), sizeof( ((CStaticMulti *)0)->m_modelName ) },
	{ "int", "m_iMaxChanges", (ptrdiff_t)(&((CStaticMulti *)0)->m_iMaxChanges), sizeof( ((CStaticMulti *)0)->m_iMaxChanges ) },
	{ "int", "m_iVisibleModels", (ptrdiff_t)(&((CStaticMulti *)0)->m_iVisibleModels), sizeof( ((CStaticMulti *)0)->m_iVisibleModels ) },
	{ "bool", "m_bFree_hModel", (ptrdiff_t)(&((CStaticMulti *)0)->m_bFree_hModel), sizeof( ((CStaticMulti *)0)->m_bFree_hModel ) },
	{ "bool", "m_bNoshadows", (ptrdiff_t)(&((CStaticMulti *)0)->m_bNoshadows), sizeof( ((CStaticMulti *)0)->m_bNoshadows ) },
	{ "int", "m_DistCheckTimeStamp", (ptrdiff_t)(&((CStaticMulti *)0)->m_DistCheckTimeStamp), sizeof( ((CStaticMulti *)0)->m_DistCheckTimeStamp ) },
	{ "int", "m_DistCheckInterval", (ptrdiff_t)(&((CStaticMulti *)0)->m_DistCheckInterval), sizeof( ((CStaticMulti *)0)->m_DistCheckInterval ) },
	{ "float", "m_fHideDistance", (ptrdiff_t)(&((CStaticMulti *)0)->m_fHideDistance), sizeof( ((CStaticMulti *)0)->m_fHideDistance ) },
	{ "bool", "m_bDistCheckXYOnly", (ptrdiff_t)(&((CStaticMulti *)0)->m_bDistCheckXYOnly), sizeof( ((CStaticMulti *)0)->m_bDistCheckXYOnly ) },
	{ "lod_handle", "m_LODHandle", (ptrdiff_t)(&((CStaticMulti *)0)->m_LODHandle), sizeof( ((CStaticMulti *)0)->m_LODHandle ) },
	{ NULL, 0 }
};

static classVariableInfo_t tdmFuncShooter_typeInfo[] = {
	{ "bool", "_active", (ptrdiff_t)(&((tdmFuncShooter *)0)->_active), sizeof( ((tdmFuncShooter *)0)->_active ) },
	{ "int", "_fireInterval", (ptrdiff_t)(&((tdmFuncShooter *)0)->_fireInterval), sizeof( ((tdmFuncShooter *)0)->_fireInterval ) },
	{ "int", "_fireIntervalFuzzyness", (ptrdiff_t)(&((tdmFuncShooter *)0)->_fireIntervalFuzzyness), sizeof( ((tdmFuncShooter *)0)->_fireIntervalFuzzyness ) },
	{ "int", "_startDelay", (ptrdiff_t)(&((tdmFuncShooter *)0)->_startDelay), sizeof( ((tdmFuncShooter *)0)->_startDelay ) },
	{ "int", "_endTime", (ptrdiff_t)(&((tdmFuncShooter *)0)->_endTime), sizeof( ((tdmFuncShooter *)0)->_endTime ) },
	{ "int", "_lastFireTime", (ptrdiff_t)(&((tdmFuncShooter *)0)->_lastFireTime), sizeof( ((tdmFuncShooter *)0)->_lastFireTime ) },
	{ "int", "_nextFireTime", (ptrdiff_t)(&((tdmFuncShooter *)0)->_nextFireTime), sizeof( ((tdmFuncShooter *)0)->_nextFireTime ) },
	{ "StimType", "_requiredStim", (ptrdiff_t)(&((tdmFuncShooter *)0)->_requiredStim), sizeof( ((tdmFuncShooter *)0)->_requiredStim ) },
	{ "int", "_lastStimVisit", (ptrdiff_t)(&((tdmFuncShooter *)0)->_lastStimVisit), sizeof( ((tdmFuncShooter *)0)->_lastStimVisit ) },
	{ "int", "_requiredStimTimeOut", (ptrdiff_t)(&((tdmFuncShooter *)0)->_requiredStimTimeOut), sizeof( ((tdmFuncShooter *)0)->_requiredStimTimeOut ) },
	{ "bool", "_triggerRequired", (ptrdiff_t)(&((tdmFuncShooter *)0)->_triggerRequired), sizeof( ((tdmFuncShooter *)0)->_triggerRequired ) },
	{ "int", "_lastTriggerVisit", (ptrdiff_t)(&((tdmFuncShooter *)0)->_lastTriggerVisit), sizeof( ((tdmFuncShooter *)0)->_lastTriggerVisit ) },
	{ "int", "_triggerTimeOut", (ptrdiff_t)(&((tdmFuncShooter *)0)->_triggerTimeOut), sizeof( ((tdmFuncShooter *)0)->_triggerTimeOut ) },
	{ "int", "_ammo", (ptrdiff_t)(&((tdmFuncShooter *)0)->_ammo), sizeof( ((tdmFuncShooter *)0)->_ammo ) },
	{ "bool", "_useAmmo", (ptrdiff_t)(&((tdmFuncShooter *)0)->_useAmmo), sizeof( ((tdmFuncShooter *)0)->_useAmmo ) },
	{ NULL, 0 }
};

static classVariableInfo_t emitter_models_t_typeInfo[] = {
	{ "int", "defHandle", (ptrdiff_t)(&((emitter_models_t *)0)->defHandle), sizeof( ((emitter_models_t *)0)->defHandle ) },
	{ "idVec3", "offset", (ptrdiff_t)(&((emitter_models_t *)0)->offset), sizeof( ((emitter_models_t *)0)->offset ) },
	{ "idRenderModel *", "handle", (ptrdiff_t)(&((emitter_models_t *)0)->handle), sizeof( ((emitter_models_t *)0)->handle ) },
	{ "idStr", "name", (ptrdiff_t)(&((emitter_models_t *)0)->name), sizeof( ((emitter_models_t *)0)->name ) },
	{ "int", "flags", (ptrdiff_t)(&((emitter_models_t *)0)->flags), sizeof( ((emitter_models_t *)0)->flags ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncEmitter_typeInfo[] = {
	{ "bool", "hidden", (ptrdiff_t)(&((idFuncEmitter *)0)->hidden), sizeof( ((idFuncEmitter *)0)->hidden ) },
	{ "idList < emitter_models_t >", "m_models", (ptrdiff_t)(&((idFuncEmitter *)0)->m_models), sizeof( ((idFuncEmitter *)0)->m_models ) },
	{ NULL, 0 }
};

static classVariableInfo_t idFuncSplat_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t seed_sort_ofs_t_typeInfo[] = {
	{ "model_ofs_t", "ofs", (ptrdiff_t)(&((seed_sort_ofs_t *)0)->ofs), sizeof( ((seed_sort_ofs_t *)0)->ofs ) },
	{ "int", "entity", (ptrdiff_t)(&((seed_sort_ofs_t *)0)->entity), sizeof( ((seed_sort_ofs_t *)0)->entity ) },
	{ NULL, 0 }
};

static classVariableInfo_t seed_material_t_typeInfo[] = {
	{ "idStr", "name", (ptrdiff_t)(&((seed_material_t *)0)->name), sizeof( ((seed_material_t *)0)->name ) },
	{ "float", "probability", (ptrdiff_t)(&((seed_material_t *)0)->probability), sizeof( ((seed_material_t *)0)->probability ) },
	{ NULL, 0 }
};

static classVariableInfo_t seed_class_t_typeInfo[] = {
	{ "idStr", "classname", (ptrdiff_t)(&((seed_class_t *)0)->classname), sizeof( ((seed_class_t *)0)->classname ) },
	{ "idList < int >", "skins", (ptrdiff_t)(&((seed_class_t *)0)->skins), sizeof( ((seed_class_t *)0)->skins ) },
	{ "idRenderModel *", "hModel", (ptrdiff_t)(&((seed_class_t *)0)->hModel), sizeof( ((seed_class_t *)0)->hModel ) },
	{ "idClipModel *", "clip", (ptrdiff_t)(&((seed_class_t *)0)->clip), sizeof( ((seed_class_t *)0)->clip ) },
	{ "idStr", "modelname", (ptrdiff_t)(&((seed_class_t *)0)->modelname), sizeof( ((seed_class_t *)0)->modelname ) },
	{ "idStr", "lowestLOD", (ptrdiff_t)(&((seed_class_t *)0)->lowestLOD), sizeof( ((seed_class_t *)0)->lowestLOD ) },
	{ "bool", "pseudo", (ptrdiff_t)(&((seed_class_t *)0)->pseudo), sizeof( ((seed_class_t *)0)->pseudo ) },
	{ "bool", "noshadows", (ptrdiff_t)(&((seed_class_t *)0)->noshadows), sizeof( ((seed_class_t *)0)->noshadows ) },
	{ "bool", "watch", (ptrdiff_t)(&((seed_class_t *)0)->watch), sizeof( ((seed_class_t *)0)->watch ) },
	{ "idStr", "combine_as", (ptrdiff_t)(&((seed_class_t *)0)->combine_as), sizeof( ((seed_class_t *)0)->combine_as ) },
	{ "idStr", "materialName", (ptrdiff_t)(&((seed_class_t *)0)->materialName), sizeof( ((seed_class_t *)0)->materialName ) },
	{ "idList < model_ofs_t >", "offsets", (ptrdiff_t)(&((seed_class_t *)0)->offsets), sizeof( ((seed_class_t *)0)->offsets ) },
	{ "int", "seed", (ptrdiff_t)(&((seed_class_t *)0)->seed), sizeof( ((seed_class_t *)0)->seed ) },
	{ "int", "maxEntities", (ptrdiff_t)(&((seed_class_t *)0)->maxEntities), sizeof( ((seed_class_t *)0)->maxEntities ) },
	{ "int", "numEntities", (ptrdiff_t)(&((seed_class_t *)0)->numEntities), sizeof( ((seed_class_t *)0)->numEntities ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((seed_class_t *)0)->origin), sizeof( ((seed_class_t *)0)->origin ) },
	{ "idVec3", "offset", (ptrdiff_t)(&((seed_class_t *)0)->offset), sizeof( ((seed_class_t *)0)->offset ) },
	{ "float", "cullDist", (ptrdiff_t)(&((seed_class_t *)0)->cullDist), sizeof( ((seed_class_t *)0)->cullDist ) },
	{ "float", "spawnDist", (ptrdiff_t)(&((seed_class_t *)0)->spawnDist), sizeof( ((seed_class_t *)0)->spawnDist ) },
	{ "float", "spacing", (ptrdiff_t)(&((seed_class_t *)0)->spacing), sizeof( ((seed_class_t *)0)->spacing ) },
	{ "float", "bunching", (ptrdiff_t)(&((seed_class_t *)0)->bunching), sizeof( ((seed_class_t *)0)->bunching ) },
	{ "float", "sink_min", (ptrdiff_t)(&((seed_class_t *)0)->sink_min), sizeof( ((seed_class_t *)0)->sink_min ) },
	{ "float", "sink_max", (ptrdiff_t)(&((seed_class_t *)0)->sink_max), sizeof( ((seed_class_t *)0)->sink_max ) },
	{ "bool", "floor", (ptrdiff_t)(&((seed_class_t *)0)->floor), sizeof( ((seed_class_t *)0)->floor ) },
	{ "bool", "floating", (ptrdiff_t)(&((seed_class_t *)0)->floating), sizeof( ((seed_class_t *)0)->floating ) },
	{ "bool", "stack", (ptrdiff_t)(&((seed_class_t *)0)->stack), sizeof( ((seed_class_t *)0)->stack ) },
	{ "bool", "noinhibit", (ptrdiff_t)(&((seed_class_t *)0)->noinhibit), sizeof( ((seed_class_t *)0)->noinhibit ) },
	{ "bool", "nocombine", (ptrdiff_t)(&((seed_class_t *)0)->nocombine), sizeof( ((seed_class_t *)0)->nocombine ) },
	{ "bool", "solid", (ptrdiff_t)(&((seed_class_t *)0)->solid), sizeof( ((seed_class_t *)0)->solid ) },
	{ "idVec3", "color_min", (ptrdiff_t)(&((seed_class_t *)0)->color_min), sizeof( ((seed_class_t *)0)->color_min ) },
	{ "idVec3", "color_max", (ptrdiff_t)(&((seed_class_t *)0)->color_max), sizeof( ((seed_class_t *)0)->color_max ) },
	{ "idVec3", "impulse_min", (ptrdiff_t)(&((seed_class_t *)0)->impulse_min), sizeof( ((seed_class_t *)0)->impulse_min ) },
	{ "idVec3", "impulse_max", (ptrdiff_t)(&((seed_class_t *)0)->impulse_max), sizeof( ((seed_class_t *)0)->impulse_max ) },
	{ "float", "defaultProb", (ptrdiff_t)(&((seed_class_t *)0)->defaultProb), sizeof( ((seed_class_t *)0)->defaultProb ) },
	{ "idList < seed_material_t >", "materials", (ptrdiff_t)(&((seed_class_t *)0)->materials), sizeof( ((seed_class_t *)0)->materials ) },
	{ "int", "nocollide", (ptrdiff_t)(&((seed_class_t *)0)->nocollide), sizeof( ((seed_class_t *)0)->nocollide ) },
	{ "idVec3", "size", (ptrdiff_t)(&((seed_class_t *)0)->size), sizeof( ((seed_class_t *)0)->size ) },
	{ "float", "avgSize", (ptrdiff_t)(&((seed_class_t *)0)->avgSize), sizeof( ((seed_class_t *)0)->avgSize ) },
	{ "int", "score", (ptrdiff_t)(&((seed_class_t *)0)->score), sizeof( ((seed_class_t *)0)->score ) },
	{ "idVec3", "scale_min", (ptrdiff_t)(&((seed_class_t *)0)->scale_min), sizeof( ((seed_class_t *)0)->scale_min ) },
	{ "idVec3", "scale_max", (ptrdiff_t)(&((seed_class_t *)0)->scale_max), sizeof( ((seed_class_t *)0)->scale_max ) },
	{ "int", "falloff", (ptrdiff_t)(&((seed_class_t *)0)->falloff), sizeof( ((seed_class_t *)0)->falloff ) },
	{ "float", "func_x", (ptrdiff_t)(&((seed_class_t *)0)->func_x), sizeof( ((seed_class_t *)0)->func_x ) },
	{ "float", "func_y", (ptrdiff_t)(&((seed_class_t *)0)->func_y), sizeof( ((seed_class_t *)0)->func_y ) },
	{ "float", "func_s", (ptrdiff_t)(&((seed_class_t *)0)->func_s), sizeof( ((seed_class_t *)0)->func_s ) },
	{ "float", "func_a", (ptrdiff_t)(&((seed_class_t *)0)->func_a), sizeof( ((seed_class_t *)0)->func_a ) },
	{ "int", "func_Xt", (ptrdiff_t)(&((seed_class_t *)0)->func_Xt), sizeof( ((seed_class_t *)0)->func_Xt ) },
	{ "int", "func_Yt", (ptrdiff_t)(&((seed_class_t *)0)->func_Yt), sizeof( ((seed_class_t *)0)->func_Yt ) },
	{ "int", "func_f", (ptrdiff_t)(&((seed_class_t *)0)->func_f), sizeof( ((seed_class_t *)0)->func_f ) },
	{ "float", "func_min", (ptrdiff_t)(&((seed_class_t *)0)->func_min), sizeof( ((seed_class_t *)0)->func_min ) },
	{ "float", "func_max", (ptrdiff_t)(&((seed_class_t *)0)->func_max), sizeof( ((seed_class_t *)0)->func_max ) },
	{ "idImage *", "imgmap", (ptrdiff_t)(&((seed_class_t *)0)->imgmap), sizeof( ((seed_class_t *)0)->imgmap ) },
	{ "bool", "map_invert", (ptrdiff_t)(&((seed_class_t *)0)->map_invert), sizeof( ((seed_class_t *)0)->map_invert ) },
	{ "float", "map_scale_x", (ptrdiff_t)(&((seed_class_t *)0)->map_scale_x), sizeof( ((seed_class_t *)0)->map_scale_x ) },
	{ "float", "map_scale_y", (ptrdiff_t)(&((seed_class_t *)0)->map_scale_y), sizeof( ((seed_class_t *)0)->map_scale_y ) },
	{ "float", "map_ofs_x", (ptrdiff_t)(&((seed_class_t *)0)->map_ofs_x), sizeof( ((seed_class_t *)0)->map_ofs_x ) },
	{ "float", "map_ofs_y", (ptrdiff_t)(&((seed_class_t *)0)->map_ofs_y), sizeof( ((seed_class_t *)0)->map_ofs_y ) },
	{ "float", "z_min", (ptrdiff_t)(&((seed_class_t *)0)->z_min), sizeof( ((seed_class_t *)0)->z_min ) },
	{ "float", "z_max", (ptrdiff_t)(&((seed_class_t *)0)->z_max), sizeof( ((seed_class_t *)0)->z_max ) },
	{ "float", "z_fadein", (ptrdiff_t)(&((seed_class_t *)0)->z_fadein), sizeof( ((seed_class_t *)0)->z_fadein ) },
	{ "float", "z_fadeout", (ptrdiff_t)(&((seed_class_t *)0)->z_fadeout), sizeof( ((seed_class_t *)0)->z_fadeout ) },
	{ "bool", "z_invert", (ptrdiff_t)(&((seed_class_t *)0)->z_invert), sizeof( ((seed_class_t *)0)->z_invert ) },
	{ "lod_handle", "m_LODHandle", (ptrdiff_t)(&((seed_class_t *)0)->m_LODHandle), sizeof( ((seed_class_t *)0)->m_LODHandle ) },
	{ "idDict *", "spawnArgs", (ptrdiff_t)(&((seed_class_t *)0)->spawnArgs), sizeof( ((seed_class_t *)0)->spawnArgs ) },
	{ NULL, 0 }
};

static classVariableInfo_t seed_inhibitor_t_typeInfo[] = {
	{ "idVec3", "origin", (ptrdiff_t)(&((seed_inhibitor_t *)0)->origin), sizeof( ((seed_inhibitor_t *)0)->origin ) },
	{ "idVec3", "size", (ptrdiff_t)(&((seed_inhibitor_t *)0)->size), sizeof( ((seed_inhibitor_t *)0)->size ) },
	{ "idBox", "box", (ptrdiff_t)(&((seed_inhibitor_t *)0)->box), sizeof( ((seed_inhibitor_t *)0)->box ) },
	{ "idList < idStr >", "classnames", (ptrdiff_t)(&((seed_inhibitor_t *)0)->classnames), sizeof( ((seed_inhibitor_t *)0)->classnames ) },
	{ "bool", "inhibit_only", (ptrdiff_t)(&((seed_inhibitor_t *)0)->inhibit_only), sizeof( ((seed_inhibitor_t *)0)->inhibit_only ) },
	{ "int", "falloff", (ptrdiff_t)(&((seed_inhibitor_t *)0)->falloff), sizeof( ((seed_inhibitor_t *)0)->falloff ) },
	{ "float", "factor", (ptrdiff_t)(&((seed_inhibitor_t *)0)->factor), sizeof( ((seed_inhibitor_t *)0)->factor ) },
	{ NULL, 0 }
};

static classVariableInfo_t seed_entity_t_typeInfo[] = {
	{ "int", "skinIdx", (ptrdiff_t)(&((seed_entity_t *)0)->skinIdx), sizeof( ((seed_entity_t *)0)->skinIdx ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((seed_entity_t *)0)->origin), sizeof( ((seed_entity_t *)0)->origin ) },
	{ "idAngles", "angles", (ptrdiff_t)(&((seed_entity_t *)0)->angles), sizeof( ((seed_entity_t *)0)->angles ) },
	{ "idVec3", "scale", (ptrdiff_t)(&((seed_entity_t *)0)->scale), sizeof( ((seed_entity_t *)0)->scale ) },
	{ "dword", "color", (ptrdiff_t)(&((seed_entity_t *)0)->color), sizeof( ((seed_entity_t *)0)->color ) },
	{ "int", "flags", (ptrdiff_t)(&((seed_entity_t *)0)->flags), sizeof( ((seed_entity_t *)0)->flags ) },
	{ "int", "entity", (ptrdiff_t)(&((seed_entity_t *)0)->entity), sizeof( ((seed_entity_t *)0)->entity ) },
	{ "int", "classIdx", (ptrdiff_t)(&((seed_entity_t *)0)->classIdx), sizeof( ((seed_entity_t *)0)->classIdx ) },
	{ NULL, 0 }
};

static classVariableInfo_t Seed_typeInfo[] = {
	{ "bool", "active", (ptrdiff_t)(&((Seed *)0)->active), sizeof( ((Seed *)0)->active ) },
	{ "bool", "m_bPrepared", (ptrdiff_t)(&((Seed *)0)->m_bPrepared), sizeof( ((Seed *)0)->m_bPrepared ) },
	{ "bool", "m_bDistDependent", (ptrdiff_t)(&((Seed *)0)->m_bDistDependent), sizeof( ((Seed *)0)->m_bDistDependent ) },
	{ "int", "m_iSeed", (ptrdiff_t)(&((Seed *)0)->m_iSeed), sizeof( ((Seed *)0)->m_iSeed ) },
	{ "int", "m_iSeed_2", (ptrdiff_t)(&((Seed *)0)->m_iSeed_2), sizeof( ((Seed *)0)->m_iSeed_2 ) },
	{ "int", "m_iOrgSeed", (ptrdiff_t)(&((Seed *)0)->m_iOrgSeed), sizeof( ((Seed *)0)->m_iOrgSeed ) },
	{ "int", "m_iNumEntities", (ptrdiff_t)(&((Seed *)0)->m_iNumEntities), sizeof( ((Seed *)0)->m_iNumEntities ) },
	{ "int", "m_iNumVisible", (ptrdiff_t)(&((Seed *)0)->m_iNumVisible), sizeof( ((Seed *)0)->m_iNumVisible ) },
	{ "int", "m_iNumExisting", (ptrdiff_t)(&((Seed *)0)->m_iNumExisting), sizeof( ((Seed *)0)->m_iNumExisting ) },
	{ "bool", "m_bDistCheckXYOnly", (ptrdiff_t)(&((Seed *)0)->m_bDistCheckXYOnly), sizeof( ((Seed *)0)->m_bDistCheckXYOnly ) },
	{ "int", "m_DistCheckTimeStamp", (ptrdiff_t)(&((Seed *)0)->m_DistCheckTimeStamp), sizeof( ((Seed *)0)->m_DistCheckTimeStamp ) },
	{ "int", "m_DistCheckInterval", (ptrdiff_t)(&((Seed *)0)->m_DistCheckInterval), sizeof( ((Seed *)0)->m_DistCheckInterval ) },
	{ "idList < seed_class_t >", "m_Classes", (ptrdiff_t)(&((Seed *)0)->m_Classes), sizeof( ((Seed *)0)->m_Classes ) },
	{ "idList < seed_inhibitor_t >", "m_Inhibitors", (ptrdiff_t)(&((Seed *)0)->m_Inhibitors), sizeof( ((Seed *)0)->m_Inhibitors ) },
	{ "idList < seed_entity_t >", "m_Entities", (ptrdiff_t)(&((Seed *)0)->m_Entities), sizeof( ((Seed *)0)->m_Entities ) },
	{ "idList < seed_entity_t >", "m_Watched", (ptrdiff_t)(&((Seed *)0)->m_Watched), sizeof( ((Seed *)0)->m_Watched ) },
	{ "idList < int >", "m_Remove", (ptrdiff_t)(&((Seed *)0)->m_Remove), sizeof( ((Seed *)0)->m_Remove ) },
	{ "idList < idStr >", "m_Skins", (ptrdiff_t)(&((Seed *)0)->m_Skins), sizeof( ((Seed *)0)->m_Skins ) },
	{ "float", "m_fLODBias", (ptrdiff_t)(&((Seed *)0)->m_fLODBias), sizeof( ((Seed *)0)->m_fLODBias ) },
	{ "int", "m_iNumPVSAreas", (ptrdiff_t)(&((Seed *)0)->m_iNumPVSAreas), sizeof( ((Seed *)0)->m_iNumPVSAreas ) },
	{ "int[64]", "m_iPVSAreas", (ptrdiff_t)(&((Seed *)0)->m_iPVSAreas), sizeof( ((Seed *)0)->m_iPVSAreas ) },
	{ "int", "m_iThinkCounter", (ptrdiff_t)(&((Seed *)0)->m_iThinkCounter), sizeof( ((Seed *)0)->m_iThinkCounter ) },
	{ "bool", "m_bWaitForTrigger", (ptrdiff_t)(&((Seed *)0)->m_bWaitForTrigger), sizeof( ((Seed *)0)->m_bWaitForTrigger ) },
	{ "int", "m_iDebug", (ptrdiff_t)(&((Seed *)0)->m_iDebug), sizeof( ((Seed *)0)->m_iDebug ) },
	{ "idVec3", "m_origin", (ptrdiff_t)(&((Seed *)0)->m_origin), sizeof( ((Seed *)0)->m_origin ) },
	{ "bool", "m_bDebugColors", (ptrdiff_t)(&((Seed *)0)->m_bDebugColors), sizeof( ((Seed *)0)->m_bDebugColors ) },
	{ "bool", "m_bCombine", (ptrdiff_t)(&((Seed *)0)->m_bCombine), sizeof( ((Seed *)0)->m_bCombine ) },
	{ "int", "m_iNumStaticMulties", (ptrdiff_t)(&((Seed *)0)->m_iNumStaticMulties), sizeof( ((Seed *)0)->m_iNumStaticMulties ) },
	{ "bool", "m_bRestoreLOD", (ptrdiff_t)(&((Seed *)0)->m_bRestoreLOD), sizeof( ((Seed *)0)->m_bRestoreLOD ) },
	{ "int", "m_iNumEntitiesInGame", (ptrdiff_t)(&((Seed *)0)->m_iNumEntitiesInGame), sizeof( ((Seed *)0)->m_iNumEntitiesInGame ) },
	{ NULL, 0 }
};

static classVariableInfo_t LootRuleSet_typeInfo[] = {
	{ "float[4]", "conversionRate", (ptrdiff_t)(&((LootRuleSet *)0)->conversionRate), sizeof( ((LootRuleSet *)0)->conversionRate ) },
	{ "int", "goldLoss", (ptrdiff_t)(&((LootRuleSet *)0)->goldLoss), sizeof( ((LootRuleSet *)0)->goldLoss ) },
	{ "float", "goldLossPercent", (ptrdiff_t)(&((LootRuleSet *)0)->goldLossPercent), sizeof( ((LootRuleSet *)0)->goldLossPercent ) },
	{ "int", "goldMin", (ptrdiff_t)(&((LootRuleSet *)0)->goldMin), sizeof( ((LootRuleSet *)0)->goldMin ) },
	{ "int", "goldCap", (ptrdiff_t)(&((LootRuleSet *)0)->goldCap), sizeof( ((LootRuleSet *)0)->goldCap ) },
	{ NULL, 0 }
};

static classVariableInfo_t CShopItem_typeInfo[] = {
	{ "idStr", "id", (ptrdiff_t)(&((CShopItem *)0)->id), sizeof( ((CShopItem *)0)->id ) },
	{ "idStr", "name", (ptrdiff_t)(&((CShopItem *)0)->name), sizeof( ((CShopItem *)0)->name ) },
	{ "idStr", "description", (ptrdiff_t)(&((CShopItem *)0)->description), sizeof( ((CShopItem *)0)->description ) },
	{ "int", "cost", (ptrdiff_t)(&((CShopItem *)0)->cost), sizeof( ((CShopItem *)0)->cost ) },
	{ "idStr", "image", (ptrdiff_t)(&((CShopItem *)0)->image), sizeof( ((CShopItem *)0)->image ) },
	{ "int", "count", (ptrdiff_t)(&((CShopItem *)0)->count), sizeof( ((CShopItem *)0)->count ) },
	{ "bool", "persistent", (ptrdiff_t)(&((CShopItem *)0)->persistent), sizeof( ((CShopItem *)0)->persistent ) },
	{ "bool", "canDrop", (ptrdiff_t)(&((CShopItem *)0)->canDrop), sizeof( ((CShopItem *)0)->canDrop ) },
	{ "int", "dropped", (ptrdiff_t)(&((CShopItem *)0)->dropped), sizeof( ((CShopItem *)0)->dropped ) },
	{ "idStringList", "classNames", (ptrdiff_t)(&((CShopItem *)0)->classNames), sizeof( ((CShopItem *)0)->classNames ) },
	{ "bool", "stackable", (ptrdiff_t)(&((CShopItem *)0)->stackable), sizeof( ((CShopItem *)0)->stackable ) },
	{ NULL, 0 }
};

static classVariableInfo_t CShop_typeInfo[] = {
	{ "ShopItemList", "_itemDefs", (ptrdiff_t)(&((CShop *)0)->_itemDefs), sizeof( ((CShop *)0)->_itemDefs ) },
	{ "ShopItemList", "_itemsForSale", (ptrdiff_t)(&((CShop *)0)->_itemsForSale), sizeof( ((CShop *)0)->_itemsForSale ) },
	{ "ShopItemList", "_itemsPurchased", (ptrdiff_t)(&((CShop *)0)->_itemsPurchased), sizeof( ((CShop *)0)->_itemsPurchased ) },
	{ "ShopItemList", "_startingItems", (ptrdiff_t)(&((CShop *)0)->_startingItems), sizeof( ((CShop *)0)->_startingItems ) },
	{ "int", "_gold", (ptrdiff_t)(&((CShop *)0)->_gold), sizeof( ((CShop *)0)->_gold ) },
	{ "int", "_forSaleTop", (ptrdiff_t)(&((CShop *)0)->_forSaleTop), sizeof( ((CShop *)0)->_forSaleTop ) },
	{ "int", "_purchasedTop", (ptrdiff_t)(&((CShop *)0)->_purchasedTop), sizeof( ((CShop *)0)->_purchasedTop ) },
	{ "int", "_startingTop", (ptrdiff_t)(&((CShop *)0)->_startingTop), sizeof( ((CShop *)0)->_startingTop ) },
	{ "bool", "_skipShop", (ptrdiff_t)(&((CShop *)0)->_skipShop), sizeof( ((CShop *)0)->_skipShop ) },
	{ "bool", "_pickSetShop", (ptrdiff_t)(&((CShop *)0)->_pickSetShop), sizeof( ((CShop *)0)->_pickSetShop ) },
	{ "bool", "_pickSetStarting", (ptrdiff_t)(&((CShop *)0)->_pickSetStarting), sizeof( ((CShop *)0)->_pickSetStarting ) },
	{ "LootRuleSet", "_generalLootRules", (ptrdiff_t)(&((CShop *)0)->_generalLootRules), sizeof( ((CShop *)0)->_generalLootRules ) },
	{ "LootRuleSet[3]", "_diffLootRules", (ptrdiff_t)(&((CShop *)0)->_diffLootRules), sizeof( ((CShop *)0)->_diffLootRules ) },
	{ NULL, 0 }
};

static classVariableInfo_t SsndPGlobals_typeInfo[] = {
	{ "idStr", "AreaPropName", (ptrdiff_t)(&((SsndPGlobals *)0)->AreaPropName), sizeof( ((SsndPGlobals *)0)->AreaPropName ) },
	{ "idStr", "fileExt", (ptrdiff_t)(&((SsndPGlobals *)0)->fileExt), sizeof( ((SsndPGlobals *)0)->fileExt ) },
	{ "int", "MaxPaths", (ptrdiff_t)(&((SsndPGlobals *)0)->MaxPaths), sizeof( ((SsndPGlobals *)0)->MaxPaths ) },
	{ "float", "DoorExpand", (ptrdiff_t)(&((SsndPGlobals *)0)->DoorExpand), sizeof( ((SsndPGlobals *)0)->DoorExpand ) },
	{ "float", "Falloff_Outd", (ptrdiff_t)(&((SsndPGlobals *)0)->Falloff_Outd), sizeof( ((SsndPGlobals *)0)->Falloff_Outd ) },
	{ "float", "Falloff_Ind", (ptrdiff_t)(&((SsndPGlobals *)0)->Falloff_Ind), sizeof( ((SsndPGlobals *)0)->Falloff_Ind ) },
	{ "float", "kappa0", (ptrdiff_t)(&((SsndPGlobals *)0)->kappa0), sizeof( ((SsndPGlobals *)0)->kappa0 ) },
	{ "float", "DefaultDoorLoss", (ptrdiff_t)(&((SsndPGlobals *)0)->DefaultDoorLoss), sizeof( ((SsndPGlobals *)0)->DefaultDoorLoss ) },
	{ "float", "DefaultThreshold", (ptrdiff_t)(&((SsndPGlobals *)0)->DefaultThreshold), sizeof( ((SsndPGlobals *)0)->DefaultThreshold ) },
	{ "float", "Vol", (ptrdiff_t)(&((SsndPGlobals *)0)->Vol), sizeof( ((SsndPGlobals *)0)->Vol ) },
	{ "float", "MaxRange", (ptrdiff_t)(&((SsndPGlobals *)0)->MaxRange), sizeof( ((SsndPGlobals *)0)->MaxRange ) },
	{ "float", "MaxRangeCalVol", (ptrdiff_t)(&((SsndPGlobals *)0)->MaxRangeCalVol), sizeof( ((SsndPGlobals *)0)->MaxRangeCalVol ) },
	{ "float", "MaxEnvRange", (ptrdiff_t)(&((SsndPGlobals *)0)->MaxEnvRange), sizeof( ((SsndPGlobals *)0)->MaxEnvRange ) },
	{ "bool", "bDebug", (ptrdiff_t)(&((SsndPGlobals *)0)->bDebug), sizeof( ((SsndPGlobals *)0)->bDebug ) },
	{ NULL, 0 }
};

static classVariableInfo_t SPortData_typeInfo[] = {
	{ "int[2]", "LocalIndex", (ptrdiff_t)(&((SPortData *)0)->LocalIndex), sizeof( ((SPortData *)0)->LocalIndex ) },
	{ "int[2]", "Areas", (ptrdiff_t)(&((SPortData *)0)->Areas), sizeof( ((SPortData *)0)->Areas ) },
	{ "float", "lossAI", (ptrdiff_t)(&((SPortData *)0)->lossAI), sizeof( ((SPortData *)0)->lossAI ) },
	{ "float", "lossPlayer", (ptrdiff_t)(&((SPortData *)0)->lossPlayer), sizeof( ((SPortData *)0)->lossPlayer ) },
	{ NULL, 0 }
};

static classVariableInfo_t SAreaProp_typeInfo[] = {
	{ "int", "area", (ptrdiff_t)(&((SAreaProp *)0)->area), sizeof( ((SAreaProp *)0)->area ) },
	{ "float", "LossMult", (ptrdiff_t)(&((SAreaProp *)0)->LossMult), sizeof( ((SAreaProp *)0)->LossMult ) },
	{ "float", "VolMod", (ptrdiff_t)(&((SAreaProp *)0)->VolMod), sizeof( ((SAreaProp *)0)->VolMod ) },
	{ "bool", "DataEntered", (ptrdiff_t)(&((SAreaProp *)0)->DataEntered), sizeof( ((SAreaProp *)0)->DataEntered ) },
	{ NULL, 0 }
};

static classVariableInfo_t SsndPortal_typeInfo[] = {
	{ "qhandle_t", "handle", (ptrdiff_t)(&((SsndPortal *)0)->handle), sizeof( ((SsndPortal *)0)->handle ) },
	{ "int", "portalNum", (ptrdiff_t)(&((SsndPortal *)0)->portalNum), sizeof( ((SsndPortal *)0)->portalNum ) },
	{ "int", "from", (ptrdiff_t)(&((SsndPortal *)0)->from), sizeof( ((SsndPortal *)0)->from ) },
	{ "int", "to", (ptrdiff_t)(&((SsndPortal *)0)->to), sizeof( ((SsndPortal *)0)->to ) },
	{ "idVec3", "center", (ptrdiff_t)(&((SsndPortal *)0)->center), sizeof( ((SsndPortal *)0)->center ) },
	{ "idVec3", "normal", (ptrdiff_t)(&((SsndPortal *)0)->normal), sizeof( ((SsndPortal *)0)->normal ) },
	{ "const idWinding *", "winding", (ptrdiff_t)(&((SsndPortal *)0)->winding), sizeof( ((SsndPortal *)0)->winding ) },
	{ NULL, 0 }
};

static classVariableInfo_t SsndArea_typeInfo[] = {
	{ "float", "LossMult", (ptrdiff_t)(&((SsndArea *)0)->LossMult), sizeof( ((SsndArea *)0)->LossMult ) },
	{ "float", "VolMod", (ptrdiff_t)(&((SsndArea *)0)->VolMod), sizeof( ((SsndArea *)0)->VolMod ) },
	{ "int", "numPortals", (ptrdiff_t)(&((SsndArea *)0)->numPortals), sizeof( ((SsndArea *)0)->numPortals ) },
	{ "idVec3", "center", (ptrdiff_t)(&((SsndArea *)0)->center), sizeof( ((SsndArea *)0)->center ) },
	{ "SsndPortal_s *", "portals", (ptrdiff_t)(&((SsndArea *)0)->portals), sizeof( ((SsndArea *)0)->portals ) },
	{ "CMatRUT < float > *", "portalDists", (ptrdiff_t)(&((SsndArea *)0)->portalDists), sizeof( ((SsndArea *)0)->portalDists ) },
	{ NULL, 0 }
};

static classVariableInfo_t CsndPropBase_typeInfo[] = {
	{ "SsndPGlobals", "m_SndGlobals", (ptrdiff_t)(&((CsndPropBase *)0)->m_SndGlobals), sizeof( ((CsndPropBase *)0)->m_SndGlobals ) },
	{ "bool", "m_bLoadSuccess", (ptrdiff_t)(&((CsndPropBase *)0)->m_bLoadSuccess), sizeof( ((CsndPropBase *)0)->m_bLoadSuccess ) },
	{ "bool", "m_bDefaultSpherical", (ptrdiff_t)(&((CsndPropBase *)0)->m_bDefaultSpherical), sizeof( ((CsndPropBase *)0)->m_bDefaultSpherical ) },
	{ "int", "m_numAreas", (ptrdiff_t)(&((CsndPropBase *)0)->m_numAreas), sizeof( ((CsndPropBase *)0)->m_numAreas ) },
	{ "int", "m_numPortals", (ptrdiff_t)(&((CsndPropBase *)0)->m_numPortals), sizeof( ((CsndPropBase *)0)->m_numPortals ) },
	{ "SsndArea *", "m_sndAreas", (ptrdiff_t)(&((CsndPropBase *)0)->m_sndAreas), sizeof( ((CsndPropBase *)0)->m_sndAreas ) },
	{ "idList < SAreaProp >", "m_AreaPropsG", (ptrdiff_t)(&((CsndPropBase *)0)->m_AreaPropsG), sizeof( ((CsndPropBase *)0)->m_AreaPropsG ) },
	{ "SPortData *", "m_PortData", (ptrdiff_t)(&((CsndPropBase *)0)->m_PortData), sizeof( ((CsndPropBase *)0)->m_PortData ) },
	{ NULL, 0 }
};

static classVariableInfo_t CsndPropLoader_typeInfo[] = {
	{ "idList < SAreaProp >", "m_AreaProps", (ptrdiff_t)(&((CsndPropLoader *)0)->m_AreaProps), sizeof( ((CsndPropLoader *)0)->m_AreaProps ) },
	{ NULL, 0 }
};

static classVariableInfo_t STeamBits_typeInfo[] = {
//	{ "unsigned int", "friendly", (ptrdiff_t)(&((STeamBits *)0)->friendly), sizeof( ((STeamBits *)0)->friendly ) },
//	{ "unsigned int", "neutral", (ptrdiff_t)(&((STeamBits *)0)->neutral), sizeof( ((STeamBits *)0)->neutral ) },
//	{ "unsigned int", "enemy", (ptrdiff_t)(&((STeamBits *)0)->enemy), sizeof( ((STeamBits *)0)->enemy ) },
//	{ "unsigned int", "same", (ptrdiff_t)(&((STeamBits *)0)->same), sizeof( ((STeamBits *)0)->same ) },
	{ NULL, 0 }
};

static classVariableInfo_t UTeamMask_typeInfo[] = {
	{ "unsigned int", "m_field", (ptrdiff_t)(&((UTeamMask *)0)->m_field), sizeof( ((UTeamMask *)0)->m_field ) },
	{ "STeamBits", "m_bits", (ptrdiff_t)(&((UTeamMask *)0)->m_bits), sizeof( ((UTeamMask *)0)->m_bits ) },
	{ NULL, 0 }
};

static classVariableInfo_t SPopArea_typeInfo[] = {
	{ "int", "addedTime", (ptrdiff_t)(&((SPopArea *)0)->addedTime), sizeof( ((SPopArea *)0)->addedTime ) },
	{ "bool", "bVisited", (ptrdiff_t)(&((SPopArea *)0)->bVisited), sizeof( ((SPopArea *)0)->bVisited ) },
	{ "idList < idEntityPtr < idAI > >", "AIContents", (ptrdiff_t)(&((SPopArea *)0)->AIContents), sizeof( ((SPopArea *)0)->AIContents ) },
	{ "idList < int >", "VisitedPorts", (ptrdiff_t)(&((SPopArea *)0)->VisitedPorts), sizeof( ((SPopArea *)0)->VisitedPorts ) },
	{ NULL, 0 }
};

static classVariableInfo_t SPortEvent_typeInfo[] = {
	{ "float", "Loss", (ptrdiff_t)(&((SPortEvent *)0)->Loss), sizeof( ((SPortEvent *)0)->Loss ) },
	{ "float", "Dist", (ptrdiff_t)(&((SPortEvent *)0)->Dist), sizeof( ((SPortEvent *)0)->Dist ) },
	{ "float", "Att", (ptrdiff_t)(&((SPortEvent *)0)->Att), sizeof( ((SPortEvent *)0)->Att ) },
	{ "int", "Floods", (ptrdiff_t)(&((SPortEvent *)0)->Floods), sizeof( ((SPortEvent *)0)->Floods ) },
	{ "SsndPortal *", "ThisPort", (ptrdiff_t)(&((SPortEvent *)0)->ThisPort), sizeof( ((SPortEvent *)0)->ThisPort ) },
	{ "SPortEvent_s *", "PrevPort", (ptrdiff_t)(&((SPortEvent *)0)->PrevPort), sizeof( ((SPortEvent *)0)->PrevPort ) },
	{ NULL, 0 }
};

static classVariableInfo_t SEventArea_typeInfo[] = {
	{ "bool", "bVisited", (ptrdiff_t)(&((SEventArea *)0)->bVisited), sizeof( ((SEventArea *)0)->bVisited ) },
	{ "SPortEvent *", "PortalDat", (ptrdiff_t)(&((SEventArea *)0)->PortalDat), sizeof( ((SEventArea *)0)->PortalDat ) },
	{ NULL, 0 }
};

static classVariableInfo_t SExpQue_typeInfo[] = {
	{ "int", "area", (ptrdiff_t)(&((SExpQue *)0)->area), sizeof( ((SExpQue *)0)->area ) },
	{ "int", "portalH", (ptrdiff_t)(&((SExpQue *)0)->portalH), sizeof( ((SExpQue *)0)->portalH ) },
	{ "float", "curDist", (ptrdiff_t)(&((SExpQue *)0)->curDist), sizeof( ((SExpQue *)0)->curDist ) },
	{ "float", "curAtt", (ptrdiff_t)(&((SExpQue *)0)->curAtt), sizeof( ((SExpQue *)0)->curAtt ) },
	{ "float", "curLoss", (ptrdiff_t)(&((SExpQue *)0)->curLoss), sizeof( ((SExpQue *)0)->curLoss ) },
	{ "SPortEvent *", "PrevPort", (ptrdiff_t)(&((SExpQue *)0)->PrevPort), sizeof( ((SExpQue *)0)->PrevPort ) },
	{ NULL, 0 }
};

static classVariableInfo_t CsndProp_typeInfo[] = {
	{ "int", "m_TimeStampProp", (ptrdiff_t)(&((CsndProp *)0)->m_TimeStampProp), sizeof( ((CsndProp *)0)->m_TimeStampProp ) },
	{ "int", "m_TimeStampPortLoss", (ptrdiff_t)(&((CsndProp *)0)->m_TimeStampPortLoss), sizeof( ((CsndProp *)0)->m_TimeStampPortLoss ) },
	{ "idList < int >", "m_PopAreasInd", (ptrdiff_t)(&((CsndProp *)0)->m_PopAreasInd), sizeof( ((CsndProp *)0)->m_PopAreasInd ) },
	{ "SPopArea *", "m_PopAreas", (ptrdiff_t)(&((CsndProp *)0)->m_PopAreas), sizeof( ((CsndProp *)0)->m_PopAreas ) },
	{ "SEventArea *", "m_EventAreas", (ptrdiff_t)(&((CsndProp *)0)->m_EventAreas), sizeof( ((CsndProp *)0)->m_EventAreas ) },
	{ NULL, 0 }
};

static classVariableInfo_t eas_ElevatorStationInfo_typeInfo[] = {
	{ "idEntityPtr < CMultiStateMover >", "elevator", (ptrdiff_t)(&((eas::ElevatorStationInfo *)0)->elevator), sizeof( ((eas::ElevatorStationInfo *)0)->elevator ) },
	{ "idEntityPtr < CMultiStateMoverPosition >", "elevatorPosition", (ptrdiff_t)(&((eas::ElevatorStationInfo *)0)->elevatorPosition), sizeof( ((eas::ElevatorStationInfo *)0)->elevatorPosition ) },
	{ "int", "areaNum", (ptrdiff_t)(&((eas::ElevatorStationInfo *)0)->areaNum), sizeof( ((eas::ElevatorStationInfo *)0)->areaNum ) },
	{ "int", "clusterNum", (ptrdiff_t)(&((eas::ElevatorStationInfo *)0)->clusterNum), sizeof( ((eas::ElevatorStationInfo *)0)->clusterNum ) },
	{ "int", "elevatorNum", (ptrdiff_t)(&((eas::ElevatorStationInfo *)0)->elevatorNum), sizeof( ((eas::ElevatorStationInfo *)0)->elevatorNum ) },
	{ NULL, 0 }
};

static classVariableInfo_t eas_ClusterInfo_typeInfo[] = {
	{ "int", "clusterNum", (ptrdiff_t)(&((eas::ClusterInfo *)0)->clusterNum), sizeof( ((eas::ClusterInfo *)0)->clusterNum ) },
	{ "unsigned short", "numElevatorStations", (ptrdiff_t)(&((eas::ClusterInfo *)0)->numElevatorStations), sizeof( ((eas::ClusterInfo *)0)->numElevatorStations ) },
	{ "ElevatorStationInfoList", "reachableElevatorStations", (ptrdiff_t)(&((eas::ClusterInfo *)0)->reachableElevatorStations), sizeof( ((eas::ClusterInfo *)0)->reachableElevatorStations ) },
	{ "RouteInfoListVector", "routeToCluster", (ptrdiff_t)(&((eas::ClusterInfo *)0)->routeToCluster), sizeof( ((eas::ClusterInfo *)0)->routeToCluster ) },
	{ "std :: vector < byte >", "visitedToCluster", (ptrdiff_t)(&((eas::ClusterInfo *)0)->visitedToCluster), sizeof( ((eas::ClusterInfo *)0)->visitedToCluster ) },
	{ NULL, 0 }
};

static classVariableInfo_t eas_tdmEAS_typeInfo[] = {
	{ "idAASLocal *", "_aas", (ptrdiff_t)(&((eas::tdmEAS *)0)->_aas), sizeof( ((eas::tdmEAS *)0)->_aas ) },
	{ "idList < idEntityPtr < CMultiStateMover > >", "_elevators", (ptrdiff_t)(&((eas::tdmEAS *)0)->_elevators), sizeof( ((eas::tdmEAS *)0)->_elevators ) },
	{ "ClusterInfoVector", "_clusterInfo", (ptrdiff_t)(&((eas::tdmEAS *)0)->_clusterInfo), sizeof( ((eas::tdmEAS *)0)->_clusterInfo ) },
	{ "ElevatorStationVector", "_elevatorStations", (ptrdiff_t)(&((eas::tdmEAS *)0)->_elevatorStations), sizeof( ((eas::tdmEAS *)0)->_elevatorStations ) },
	{ "mutable int", "_routingIterations", (ptrdiff_t)(&((eas::tdmEAS *)0)->_routingIterations), sizeof( ((eas::tdmEAS *)0)->_routingIterations ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRoutingCache_typeInfo[] = {
	{ "int", "type", (ptrdiff_t)(&((idRoutingCache *)0)->type), sizeof( ((idRoutingCache *)0)->type ) },
	{ "int", "size", (ptrdiff_t)(&((idRoutingCache *)0)->size), sizeof( ((idRoutingCache *)0)->size ) },
	{ "int", "cluster", (ptrdiff_t)(&((idRoutingCache *)0)->cluster), sizeof( ((idRoutingCache *)0)->cluster ) },
	{ "int", "areaNum", (ptrdiff_t)(&((idRoutingCache *)0)->areaNum), sizeof( ((idRoutingCache *)0)->areaNum ) },
	{ "int", "travelFlags", (ptrdiff_t)(&((idRoutingCache *)0)->travelFlags), sizeof( ((idRoutingCache *)0)->travelFlags ) },
	{ "idRoutingCache *", "next", (ptrdiff_t)(&((idRoutingCache *)0)->next), sizeof( ((idRoutingCache *)0)->next ) },
	{ "idRoutingCache *", "prev", (ptrdiff_t)(&((idRoutingCache *)0)->prev), sizeof( ((idRoutingCache *)0)->prev ) },
	{ "idRoutingCache *", "time_next", (ptrdiff_t)(&((idRoutingCache *)0)->time_next), sizeof( ((idRoutingCache *)0)->time_next ) },
	{ "idRoutingCache *", "time_prev", (ptrdiff_t)(&((idRoutingCache *)0)->time_prev), sizeof( ((idRoutingCache *)0)->time_prev ) },
	{ "unsigned short", "startTravelTime", (ptrdiff_t)(&((idRoutingCache *)0)->startTravelTime), sizeof( ((idRoutingCache *)0)->startTravelTime ) },
	{ "unsigned char *", "reachabilities", (ptrdiff_t)(&((idRoutingCache *)0)->reachabilities), sizeof( ((idRoutingCache *)0)->reachabilities ) },
	{ "unsigned short *", "travelTimes", (ptrdiff_t)(&((idRoutingCache *)0)->travelTimes), sizeof( ((idRoutingCache *)0)->travelTimes ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRoutingUpdate_typeInfo[] = {
	{ "int", "cluster", (ptrdiff_t)(&((idRoutingUpdate *)0)->cluster), sizeof( ((idRoutingUpdate *)0)->cluster ) },
	{ "int", "areaNum", (ptrdiff_t)(&((idRoutingUpdate *)0)->areaNum), sizeof( ((idRoutingUpdate *)0)->areaNum ) },
	{ "unsigned short", "tmpTravelTime", (ptrdiff_t)(&((idRoutingUpdate *)0)->tmpTravelTime), sizeof( ((idRoutingUpdate *)0)->tmpTravelTime ) },
	{ "unsigned short *", "areaTravelTimes", (ptrdiff_t)(&((idRoutingUpdate *)0)->areaTravelTimes), sizeof( ((idRoutingUpdate *)0)->areaTravelTimes ) },
	{ "idVec3", "start", (ptrdiff_t)(&((idRoutingUpdate *)0)->start), sizeof( ((idRoutingUpdate *)0)->start ) },
	{ "idRoutingUpdate *", "next", (ptrdiff_t)(&((idRoutingUpdate *)0)->next), sizeof( ((idRoutingUpdate *)0)->next ) },
	{ "idRoutingUpdate *", "prev", (ptrdiff_t)(&((idRoutingUpdate *)0)->prev), sizeof( ((idRoutingUpdate *)0)->prev ) },
	{ "bool", "isInList", (ptrdiff_t)(&((idRoutingUpdate *)0)->isInList), sizeof( ((idRoutingUpdate *)0)->isInList ) },
	{ NULL, 0 }
};

static classVariableInfo_t idRoutingObstacle_typeInfo[] = {
	{ "idBounds", "bounds", (ptrdiff_t)(&((idRoutingObstacle *)0)->bounds), sizeof( ((idRoutingObstacle *)0)->bounds ) },
	{ "idList < int >", "areas", (ptrdiff_t)(&((idRoutingObstacle *)0)->areas), sizeof( ((idRoutingObstacle *)0)->areas ) },
	{ NULL, 0 }
};

static classVariableInfo_t idAASLocal_typeInfo[] = {
	{ "idAASFile *", "file", (ptrdiff_t)(&((idAASLocal *)0)->file), sizeof( ((idAASLocal *)0)->file ) },
	{ "idStr", "name", (ptrdiff_t)(&((idAASLocal *)0)->name), sizeof( ((idAASLocal *)0)->name ) },
	{ "DoorMap", "_doors", (ptrdiff_t)(&((idAASLocal *)0)->_doors), sizeof( ((idAASLocal *)0)->_doors ) },
	{ "idRoutingCache * * *", "areaCacheIndex", (ptrdiff_t)(&((idAASLocal *)0)->areaCacheIndex), sizeof( ((idAASLocal *)0)->areaCacheIndex ) },
	{ "int", "areaCacheIndexSize", (ptrdiff_t)(&((idAASLocal *)0)->areaCacheIndexSize), sizeof( ((idAASLocal *)0)->areaCacheIndexSize ) },
	{ "idRoutingCache * *", "portalCacheIndex", (ptrdiff_t)(&((idAASLocal *)0)->portalCacheIndex), sizeof( ((idAASLocal *)0)->portalCacheIndex ) },
	{ "int", "portalCacheIndexSize", (ptrdiff_t)(&((idAASLocal *)0)->portalCacheIndexSize), sizeof( ((idAASLocal *)0)->portalCacheIndexSize ) },
	{ "idRoutingUpdate *", "areaUpdate", (ptrdiff_t)(&((idAASLocal *)0)->areaUpdate), sizeof( ((idAASLocal *)0)->areaUpdate ) },
	{ "idRoutingUpdate *", "portalUpdate", (ptrdiff_t)(&((idAASLocal *)0)->portalUpdate), sizeof( ((idAASLocal *)0)->portalUpdate ) },
	{ "unsigned short *", "goalAreaTravelTimes", (ptrdiff_t)(&((idAASLocal *)0)->goalAreaTravelTimes), sizeof( ((idAASLocal *)0)->goalAreaTravelTimes ) },
	{ "unsigned short *", "areaTravelTimes", (ptrdiff_t)(&((idAASLocal *)0)->areaTravelTimes), sizeof( ((idAASLocal *)0)->areaTravelTimes ) },
	{ "int", "numAreaTravelTimes", (ptrdiff_t)(&((idAASLocal *)0)->numAreaTravelTimes), sizeof( ((idAASLocal *)0)->numAreaTravelTimes ) },
	{ "mutable idRoutingCache *", "cacheListStart", (ptrdiff_t)(&((idAASLocal *)0)->cacheListStart), sizeof( ((idAASLocal *)0)->cacheListStart ) },
	{ "mutable idRoutingCache *", "cacheListEnd", (ptrdiff_t)(&((idAASLocal *)0)->cacheListEnd), sizeof( ((idAASLocal *)0)->cacheListEnd ) },
	{ "mutable int", "totalCacheMemory", (ptrdiff_t)(&((idAASLocal *)0)->totalCacheMemory), sizeof( ((idAASLocal *)0)->totalCacheMemory ) },
	{ "idList < idRoutingObstacle * >", "obstacleList", (ptrdiff_t)(&((idAASLocal *)0)->obstacleList), sizeof( ((idAASLocal *)0)->obstacleList ) },
	{ "eas :: tdmEAS *", "elevatorSystem", (ptrdiff_t)(&((idAASLocal *)0)->elevatorSystem), sizeof( ((idAASLocal *)0)->elevatorSystem ) },
	{ "idList < idVec4 >", "aasColors", (ptrdiff_t)(&((idAASLocal *)0)->aasColors), sizeof( ((idAASLocal *)0)->aasColors ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_ConversationCommand_typeInfo[] = {
	{ "Type", "_type", (ptrdiff_t)(&((ai::ConversationCommand *)0)->_type), sizeof( ((ai::ConversationCommand *)0)->_type ) },
	{ "State", "_state", (ptrdiff_t)(&((ai::ConversationCommand *)0)->_state), sizeof( ((ai::ConversationCommand *)0)->_state ) },
	{ "int", "_actor", (ptrdiff_t)(&((ai::ConversationCommand *)0)->_actor), sizeof( ((ai::ConversationCommand *)0)->_actor ) },
	{ "bool", "_waitUntilFinished", (ptrdiff_t)(&((ai::ConversationCommand *)0)->_waitUntilFinished), sizeof( ((ai::ConversationCommand *)0)->_waitUntilFinished ) },
	{ "idStringList", "_arguments", (ptrdiff_t)(&((ai::ConversationCommand *)0)->_arguments), sizeof( ((ai::ConversationCommand *)0)->_arguments ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_ConversationState_typeInfo[] = {
	{ "int", "_conversation", (ptrdiff_t)(&((ai::ConversationState *)0)->_conversation), sizeof( ((ai::ConversationState *)0)->_conversation ) },
	{ "ExecutionState", "_state", (ptrdiff_t)(&((ai::ConversationState *)0)->_state), sizeof( ((ai::ConversationState *)0)->_state ) },
	{ "ConversationCommand :: Type", "_commandType", (ptrdiff_t)(&((ai::ConversationState *)0)->_commandType), sizeof( ((ai::ConversationState *)0)->_commandType ) },
	{ "int", "_finishTime", (ptrdiff_t)(&((ai::ConversationState *)0)->_finishTime), sizeof( ((ai::ConversationState *)0)->_finishTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_Conversation_typeInfo[] = {
	{ "idStr", "_name", (ptrdiff_t)(&((ai::Conversation *)0)->_name), sizeof( ((ai::Conversation *)0)->_name ) },
	{ "bool", "_isValid", (ptrdiff_t)(&((ai::Conversation *)0)->_isValid), sizeof( ((ai::Conversation *)0)->_isValid ) },
	{ "float", "_talkDistance", (ptrdiff_t)(&((ai::Conversation *)0)->_talkDistance), sizeof( ((ai::Conversation *)0)->_talkDistance ) },
	{ "idStringList", "_actors", (ptrdiff_t)(&((ai::Conversation *)0)->_actors), sizeof( ((ai::Conversation *)0)->_actors ) },
	{ "idList < ConversationCommandPtr >", "_commands", (ptrdiff_t)(&((ai::Conversation *)0)->_commands), sizeof( ((ai::Conversation *)0)->_commands ) },
	{ "int", "_currentCommand", (ptrdiff_t)(&((ai::Conversation *)0)->_currentCommand), sizeof( ((ai::Conversation *)0)->_currentCommand ) },
	{ "int", "_playCount", (ptrdiff_t)(&((ai::Conversation *)0)->_playCount), sizeof( ((ai::Conversation *)0)->_playCount ) },
	{ "int", "_maxPlayCount", (ptrdiff_t)(&((ai::Conversation *)0)->_maxPlayCount), sizeof( ((ai::Conversation *)0)->_maxPlayCount ) },
	{ "bool", "_actorsMustBeWithinTalkDistance", (ptrdiff_t)(&((ai::Conversation *)0)->_actorsMustBeWithinTalkDistance), sizeof( ((ai::Conversation *)0)->_actorsMustBeWithinTalkDistance ) },
	{ "bool", "_actorsAlwaysFaceEachOtherWhileTalking", (ptrdiff_t)(&((ai::Conversation *)0)->_actorsAlwaysFaceEachOtherWhileTalking), sizeof( ((ai::Conversation *)0)->_actorsAlwaysFaceEachOtherWhileTalking ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_ConversationSystem_typeInfo[] = {
	{ "idList < ConversationPtr >", "_conversations", (ptrdiff_t)(&((ai::ConversationSystem *)0)->_conversations), sizeof( ((ai::ConversationSystem *)0)->_conversations ) },
	{ "idList < int >", "_activeConversations", (ptrdiff_t)(&((ai::ConversationSystem *)0)->_activeConversations), sizeof( ((ai::ConversationSystem *)0)->_activeConversations ) },
	{ "idList < int >", "_dyingConversations", (ptrdiff_t)(&((ai::ConversationSystem *)0)->_dyingConversations), sizeof( ((ai::ConversationSystem *)0)->_dyingConversations ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_SearchingState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_AgitatedSearchingState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_AgitatedSearchingStateLanternBot_typeInfo[] = {
	{ "idVec3", "_curAlertPos", (ptrdiff_t)(&((ai::AgitatedSearchingStateLanternBot *)0)->_curAlertPos), sizeof( ((ai::AgitatedSearchingStateLanternBot *)0)->_curAlertPos ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_IdleState_typeInfo[] = {
	{ "bool", "_startSitting", (ptrdiff_t)(&((ai::IdleState *)0)->_startSitting), sizeof( ((ai::IdleState *)0)->_startSitting ) },
	{ "bool", "_startSleeping", (ptrdiff_t)(&((ai::IdleState *)0)->_startSleeping), sizeof( ((ai::IdleState *)0)->_startSleeping ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_AlertIdleState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_BlindedState_typeInfo[] = {
	{ "int", "_endTime", (ptrdiff_t)(&((ai::BlindedState *)0)->_endTime), sizeof( ((ai::BlindedState *)0)->_endTime ) },
	{ "float", "_oldVisAcuity", (ptrdiff_t)(&((ai::BlindedState *)0)->_oldVisAcuity), sizeof( ((ai::BlindedState *)0)->_oldVisAcuity ) },
	{ "float", "_oldAudAcuity", (ptrdiff_t)(&((ai::BlindedState *)0)->_oldAudAcuity), sizeof( ((ai::BlindedState *)0)->_oldAudAcuity ) },
	{ "bool", "_staring", (ptrdiff_t)(&((ai::BlindedState *)0)->_staring), sizeof( ((ai::BlindedState *)0)->_staring ) },
	{ "bool", "_initialized", (ptrdiff_t)(&((ai::BlindedState *)0)->_initialized), sizeof( ((ai::BlindedState *)0)->_initialized ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_CombatState_typeInfo[] = {
	{ "idEntityPtr < idActor >", "_enemy", (ptrdiff_t)(&((ai::CombatState *)0)->_enemy), sizeof( ((ai::CombatState *)0)->_enemy ) },
	{ "bool", "_meleePossible", (ptrdiff_t)(&((ai::CombatState *)0)->_meleePossible), sizeof( ((ai::CombatState *)0)->_meleePossible ) },
	{ "bool", "_rangedPossible", (ptrdiff_t)(&((ai::CombatState *)0)->_rangedPossible), sizeof( ((ai::CombatState *)0)->_rangedPossible ) },
	{ "bool", "_unarmedMelee", (ptrdiff_t)(&((ai::CombatState *)0)->_unarmedMelee), sizeof( ((ai::CombatState *)0)->_unarmedMelee ) },
	{ "bool", "_unarmedRanged", (ptrdiff_t)(&((ai::CombatState *)0)->_unarmedRanged), sizeof( ((ai::CombatState *)0)->_unarmedRanged ) },
	{ "bool", "_armedMelee", (ptrdiff_t)(&((ai::CombatState *)0)->_armedMelee), sizeof( ((ai::CombatState *)0)->_armedMelee ) },
	{ "bool", "_armedRanged", (ptrdiff_t)(&((ai::CombatState *)0)->_armedRanged), sizeof( ((ai::CombatState *)0)->_armedRanged ) },
	{ "ECombatType", "_combatType", (ptrdiff_t)(&((ai::CombatState *)0)->_combatType), sizeof( ((ai::CombatState *)0)->_combatType ) },
	{ "int", "_endTime", (ptrdiff_t)(&((ai::CombatState *)0)->_endTime), sizeof( ((ai::CombatState *)0)->_endTime ) },
	{ "bool", "_endgame", (ptrdiff_t)(&((ai::CombatState *)0)->_endgame), sizeof( ((ai::CombatState *)0)->_endgame ) },
	{ "idVec3", "_destination", (ptrdiff_t)(&((ai::CombatState *)0)->_destination), sizeof( ((ai::CombatState *)0)->_destination ) },
	{ "int", "_reactionEndTime", (ptrdiff_t)(&((ai::CombatState *)0)->_reactionEndTime), sizeof( ((ai::CombatState *)0)->_reactionEndTime ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::CombatState *)0)->_waitEndTime), sizeof( ((ai::CombatState *)0)->_waitEndTime ) },
	{ "bool", "_needInitialDrawDelay", (ptrdiff_t)(&((ai::CombatState *)0)->_needInitialDrawDelay), sizeof( ((ai::CombatState *)0)->_needInitialDrawDelay ) },
	{ "bool", "_justDrewWeapon", (ptrdiff_t)(&((ai::CombatState *)0)->_justDrewWeapon), sizeof( ((ai::CombatState *)0)->_justDrewWeapon ) },
	{ "ai::CombatState::ECombatSubState", "_combatSubState", (ptrdiff_t)(&((ai::CombatState *)0)->_combatSubState), sizeof( ((ai::CombatState *)0)->_combatSubState ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_DeadState_typeInfo[] = {
	{ "bool", "_waitingForDeath", (ptrdiff_t)(&((ai::DeadState *)0)->_waitingForDeath), sizeof( ((ai::DeadState *)0)->_waitingForDeath ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_EmergeFromCoverState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_ExamineRopeState_typeInfo[] = {
	{ "idEntityPtr < idAFEntity_Generic >", "_rope", (ptrdiff_t)(&((ai::ExamineRopeState *)0)->_rope), sizeof( ((ai::ExamineRopeState *)0)->_rope ) },
	{ "idVec3", "_point", (ptrdiff_t)(&((ai::ExamineRopeState *)0)->_point), sizeof( ((ai::ExamineRopeState *)0)->_point ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::ExamineRopeState *)0)->_waitEndTime), sizeof( ((ai::ExamineRopeState *)0)->_waitEndTime ) },
	{ "idVec3", "_examineSpot", (ptrdiff_t)(&((ai::ExamineRopeState *)0)->_examineSpot), sizeof( ((ai::ExamineRopeState *)0)->_examineSpot ) },
	{ "ai::ExamineRopeState::EExamineRopeState", "_examineRopeState", (ptrdiff_t)(&((ai::ExamineRopeState *)0)->_examineRopeState), sizeof( ((ai::ExamineRopeState *)0)->_examineRopeState ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_FailedKnockoutState_typeInfo[] = {
	{ "int", "_stateEndTime", (ptrdiff_t)(&((ai::FailedKnockoutState *)0)->_stateEndTime), sizeof( ((ai::FailedKnockoutState *)0)->_stateEndTime ) },
	{ "int", "_allowEndTime", (ptrdiff_t)(&((ai::FailedKnockoutState *)0)->_allowEndTime), sizeof( ((ai::FailedKnockoutState *)0)->_allowEndTime ) },
	{ "idEntity *", "_attacker", (ptrdiff_t)(&((ai::FailedKnockoutState *)0)->_attacker), sizeof( ((ai::FailedKnockoutState *)0)->_attacker ) },
	{ "idVec3", "_attackDirection", (ptrdiff_t)(&((ai::FailedKnockoutState *)0)->_attackDirection), sizeof( ((ai::FailedKnockoutState *)0)->_attackDirection ) },
	{ "bool", "_hitHead", (ptrdiff_t)(&((ai::FailedKnockoutState *)0)->_hitHead), sizeof( ((ai::FailedKnockoutState *)0)->_hitHead ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_FleeDoneState_typeInfo[] = {
	{ "float", "_oldTurnRate", (ptrdiff_t)(&((ai::FleeDoneState *)0)->_oldTurnRate), sizeof( ((ai::FleeDoneState *)0)->_oldTurnRate ) },
	{ "int", "_turnEndTime", (ptrdiff_t)(&((ai::FleeDoneState *)0)->_turnEndTime), sizeof( ((ai::FleeDoneState *)0)->_turnEndTime ) },
	{ "bool", "_searchForFriendDone", (ptrdiff_t)(&((ai::FleeDoneState *)0)->_searchForFriendDone), sizeof( ((ai::FleeDoneState *)0)->_searchForFriendDone ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_FleeState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_HitByMoveableState_typeInfo[] = {
	{ "idVec3", "_pos", (ptrdiff_t)(&((ai::HitByMoveableState *)0)->_pos), sizeof( ((ai::HitByMoveableState *)0)->_pos ) },
	{ "idEntityPtr < idActor >", "_responsibleActor", (ptrdiff_t)(&((ai::HitByMoveableState *)0)->_responsibleActor), sizeof( ((ai::HitByMoveableState *)0)->_responsibleActor ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::HitByMoveableState *)0)->_waitEndTime), sizeof( ((ai::HitByMoveableState *)0)->_waitEndTime ) },
	{ "float", "_lookAtDuration", (ptrdiff_t)(&((ai::HitByMoveableState *)0)->_lookAtDuration), sizeof( ((ai::HitByMoveableState *)0)->_lookAtDuration ) },
	{ "float", "_lookBackDuration", (ptrdiff_t)(&((ai::HitByMoveableState *)0)->_lookBackDuration), sizeof( ((ai::HitByMoveableState *)0)->_lookBackDuration ) },
	{ "ai::HitByMoveableState::EHitByMoveableState", "_hitByMoveableState", (ptrdiff_t)(&((ai::HitByMoveableState *)0)->_hitByMoveableState), sizeof( ((ai::HitByMoveableState *)0)->_hitByMoveableState ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_IdleSleepState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_KnockedOutState_typeInfo[] = {
	{ "bool", "_waitingForKnockout", (ptrdiff_t)(&((ai::KnockedOutState *)0)->_waitingForKnockout), sizeof( ((ai::KnockedOutState *)0)->_waitingForKnockout ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_LostTrackOfEnemyState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_ObservantState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_PainState_typeInfo[] = {
	{ "int", "_stateEndTime", (ptrdiff_t)(&((ai::PainState *)0)->_stateEndTime), sizeof( ((ai::PainState *)0)->_stateEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PocketPickedState_typeInfo[] = {
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::PocketPickedState *)0)->_waitEndTime), sizeof( ((ai::PocketPickedState *)0)->_waitEndTime ) },
	{ "ai::PocketPickedState::EPocketPickedState", "_pocketPickedState", (ptrdiff_t)(&((ai::PocketPickedState *)0)->_pocketPickedState), sizeof( ((ai::PocketPickedState *)0)->_pocketPickedState ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_StayInCoverState_typeInfo[] = {
	{ "int", "_emergeDelay", (ptrdiff_t)(&((ai::StayInCoverState *)0)->_emergeDelay), sizeof( ((ai::StayInCoverState *)0)->_emergeDelay ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_SuspiciousState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_SwitchOnLightState_typeInfo[] = {
	{ "idEntityPtr < idLight >", "_light", (ptrdiff_t)(&((ai::SwitchOnLightState *)0)->_light), sizeof( ((ai::SwitchOnLightState *)0)->_light ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::SwitchOnLightState *)0)->_waitEndTime), sizeof( ((ai::SwitchOnLightState *)0)->_waitEndTime ) },
	{ "idEntity *", "_goalEnt", (ptrdiff_t)(&((ai::SwitchOnLightState *)0)->_goalEnt), sizeof( ((ai::SwitchOnLightState *)0)->_goalEnt ) },
	{ "float", "_standOff", (ptrdiff_t)(&((ai::SwitchOnLightState *)0)->_standOff), sizeof( ((ai::SwitchOnLightState *)0)->_standOff ) },
	{ "idVec3", "_relightSpot", (ptrdiff_t)(&((ai::SwitchOnLightState *)0)->_relightSpot), sizeof( ((ai::SwitchOnLightState *)0)->_relightSpot ) },
	{ "ai::SwitchOnLightState::ERelightState", "_relightState", (ptrdiff_t)(&((ai::SwitchOnLightState *)0)->_relightState), sizeof( ((ai::SwitchOnLightState *)0)->_relightState ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_TakeCoverState_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_UnreachableTargetState_typeInfo[] = {
	{ "idEntityPtr < idActor >", "_enemy", (ptrdiff_t)(&((ai::UnreachableTargetState *)0)->_enemy), sizeof( ((ai::UnreachableTargetState *)0)->_enemy ) },
	{ "int", "_takeCoverTime", (ptrdiff_t)(&((ai::UnreachableTargetState *)0)->_takeCoverTime), sizeof( ((ai::UnreachableTargetState *)0)->_takeCoverTime ) },
	{ "bool", "_moveRequired", (ptrdiff_t)(&((ai::UnreachableTargetState *)0)->_moveRequired), sizeof( ((ai::UnreachableTargetState *)0)->_moveRequired ) },
	{ "int", "_reachEnemyCheck", (ptrdiff_t)(&((ai::UnreachableTargetState *)0)->_reachEnemyCheck), sizeof( ((ai::UnreachableTargetState *)0)->_reachEnemyCheck ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_AnimalPatrolTask_typeInfo[] = {
	{ "ai::AnimalPatrolTask::EState", "_state", (ptrdiff_t)(&((ai::AnimalPatrolTask *)0)->_state), sizeof( ((ai::AnimalPatrolTask *)0)->_state ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::AnimalPatrolTask *)0)->_waitEndTime), sizeof( ((ai::AnimalPatrolTask *)0)->_waitEndTime ) },
	{ "int", "_moveEndTime", (ptrdiff_t)(&((ai::AnimalPatrolTask *)0)->_moveEndTime), sizeof( ((ai::AnimalPatrolTask *)0)->_moveEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_ChaseEnemyRangedTask_typeInfo[] = {
	{ "bool", "_hasGoal", (ptrdiff_t)(&((ai::ChaseEnemyRangedTask *)0)->_hasGoal), sizeof( ((ai::ChaseEnemyRangedTask *)0)->_hasGoal ) },
	{ "idEntityPtr < idActor >", "_enemy", (ptrdiff_t)(&((ai::ChaseEnemyRangedTask *)0)->_enemy), sizeof( ((ai::ChaseEnemyRangedTask *)0)->_enemy ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_ChaseEnemyTask_typeInfo[] = {
	{ "idEntityPtr < idActor >", "_enemy", (ptrdiff_t)(&((ai::ChaseEnemyTask *)0)->_enemy), sizeof( ((ai::ChaseEnemyTask *)0)->_enemy ) },
	{ "int", "_reachEnemyCheck", (ptrdiff_t)(&((ai::ChaseEnemyTask *)0)->_reachEnemyCheck), sizeof( ((ai::ChaseEnemyTask *)0)->_reachEnemyCheck ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_CombatTask_typeInfo[] = {
	{ "idEntityPtr < idActor >", "_enemy", (ptrdiff_t)(&((ai::CombatTask *)0)->_enemy), sizeof( ((ai::CombatTask *)0)->_enemy ) },
	{ "int", "_lastCombatBarkTime", (ptrdiff_t)(&((ai::CombatTask *)0)->_lastCombatBarkTime), sizeof( ((ai::CombatTask *)0)->_lastCombatBarkTime ) },
	{ "int", "_nextAttackTime", (ptrdiff_t)(&((ai::CombatTask *)0)->_nextAttackTime), sizeof( ((ai::CombatTask *)0)->_nextAttackTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_CommWaitTask_typeInfo[] = {
	{ "int", "_duration", (ptrdiff_t)(&((ai::CommWaitTask *)0)->_duration), sizeof( ((ai::CommWaitTask *)0)->_duration ) },
	{ "int", "_endTime", (ptrdiff_t)(&((ai::CommWaitTask *)0)->_endTime), sizeof( ((ai::CommWaitTask *)0)->_endTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t EscapePointEvaluator_typeInfo[] = {
	{ "const EscapeConditions *", "_conditions", (ptrdiff_t)(&((EscapePointEvaluator *)0)->_conditions), sizeof( ((EscapePointEvaluator *)0)->_conditions ) },
	{ "int", "_bestId", (ptrdiff_t)(&((EscapePointEvaluator *)0)->_bestId), sizeof( ((EscapePointEvaluator *)0)->_bestId ) },
	{ "int", "_startAreaNum", (ptrdiff_t)(&((EscapePointEvaluator *)0)->_startAreaNum), sizeof( ((EscapePointEvaluator *)0)->_startAreaNum ) },
	{ "int", "_bestTime", (ptrdiff_t)(&((EscapePointEvaluator *)0)->_bestTime), sizeof( ((EscapePointEvaluator *)0)->_bestTime ) },
	{ "int", "_distanceMultiplier", (ptrdiff_t)(&((EscapePointEvaluator *)0)->_distanceMultiplier), sizeof( ((EscapePointEvaluator *)0)->_distanceMultiplier ) },
	{ "idVec3", "_threatPosition", (ptrdiff_t)(&((EscapePointEvaluator *)0)->_threatPosition), sizeof( ((EscapePointEvaluator *)0)->_threatPosition ) },
	{ NULL, 0 }
};

static classVariableInfo_t AnyEscapePointFinder_typeInfo[] = {
	{ "int", "_team", (ptrdiff_t)(&((AnyEscapePointFinder *)0)->_team), sizeof( ((AnyEscapePointFinder *)0)->_team ) },
	{ "idVec3", "_threatLocation", (ptrdiff_t)(&((AnyEscapePointFinder *)0)->_threatLocation), sizeof( ((AnyEscapePointFinder *)0)->_threatLocation ) },
	{ NULL, 0 }
};

static classVariableInfo_t GuardedEscapePointFinder_typeInfo[] = {
	{ "int", "_team", (ptrdiff_t)(&((GuardedEscapePointFinder *)0)->_team), sizeof( ((GuardedEscapePointFinder *)0)->_team ) },
	{ "idVec3", "_threatLocation", (ptrdiff_t)(&((GuardedEscapePointFinder *)0)->_threatLocation), sizeof( ((GuardedEscapePointFinder *)0)->_threatLocation ) },
	{ NULL, 0 }
};

static classVariableInfo_t FriendlyEscapePointFinder_typeInfo[] = {
	{ "int", "_team", (ptrdiff_t)(&((FriendlyEscapePointFinder *)0)->_team), sizeof( ((FriendlyEscapePointFinder *)0)->_team ) },
	{ "idVec3", "_threatLocation", (ptrdiff_t)(&((FriendlyEscapePointFinder *)0)->_threatLocation), sizeof( ((FriendlyEscapePointFinder *)0)->_threatLocation ) },
	{ NULL, 0 }
};

static classVariableInfo_t FriendlyGuardedEscapePointFinder_typeInfo[] = {
	{ "int", "_team", (ptrdiff_t)(&((FriendlyGuardedEscapePointFinder *)0)->_team), sizeof( ((FriendlyGuardedEscapePointFinder *)0)->_team ) },
	{ "idVec3", "_threatLocation", (ptrdiff_t)(&((FriendlyGuardedEscapePointFinder *)0)->_threatLocation), sizeof( ((FriendlyGuardedEscapePointFinder *)0)->_threatLocation ) },
	{ NULL, 0 }
};

static classVariableInfo_t EscapeConditions_typeInfo[] = {
	{ "idEntityPtr < idAI >", "self", (ptrdiff_t)(&((EscapeConditions *)0)->self), sizeof( ((EscapeConditions *)0)->self ) },
	{ "idVec3", "fromPosition", (ptrdiff_t)(&((EscapeConditions *)0)->fromPosition), sizeof( ((EscapeConditions *)0)->fromPosition ) },
	{ "idEntityPtr < idEntity >", "fromEntity", (ptrdiff_t)(&((EscapeConditions *)0)->fromEntity), sizeof( ((EscapeConditions *)0)->fromEntity ) },
	{ "idVec3", "threatPosition", (ptrdiff_t)(&((EscapeConditions *)0)->threatPosition), sizeof( ((EscapeConditions *)0)->threatPosition ) },
	{ "idAAS *", "aas", (ptrdiff_t)(&((EscapeConditions *)0)->aas), sizeof( ((EscapeConditions *)0)->aas ) },
	{ "EscapeDistanceOption", "distanceOption", (ptrdiff_t)(&((EscapeConditions *)0)->distanceOption), sizeof( ((EscapeConditions *)0)->distanceOption ) },
	{ "float", "minDistanceToThreat", (ptrdiff_t)(&((EscapeConditions *)0)->minDistanceToThreat), sizeof( ((EscapeConditions *)0)->minDistanceToThreat ) },
	{ "EscapePointAlgorithm", "algorithm", (ptrdiff_t)(&((EscapeConditions *)0)->algorithm), sizeof( ((EscapeConditions *)0)->algorithm ) },
	{ NULL, 0 }
};

static classVariableInfo_t EscapePoint_typeInfo[] = {
	{ "int", "id", (ptrdiff_t)(&((EscapePoint *)0)->id), sizeof( ((EscapePoint *)0)->id ) },
	{ "idEntityPtr < tdmPathFlee >", "pathFlee", (ptrdiff_t)(&((EscapePoint *)0)->pathFlee), sizeof( ((EscapePoint *)0)->pathFlee ) },
	{ "int", "aasId", (ptrdiff_t)(&((EscapePoint *)0)->aasId), sizeof( ((EscapePoint *)0)->aasId ) },
	{ "idVec3", "origin", (ptrdiff_t)(&((EscapePoint *)0)->origin), sizeof( ((EscapePoint *)0)->origin ) },
	{ "int", "areaNum", (ptrdiff_t)(&((EscapePoint *)0)->areaNum), sizeof( ((EscapePoint *)0)->areaNum ) },
	{ "int", "team", (ptrdiff_t)(&((EscapePoint *)0)->team), sizeof( ((EscapePoint *)0)->team ) },
	{ "bool", "isGuarded", (ptrdiff_t)(&((EscapePoint *)0)->isGuarded), sizeof( ((EscapePoint *)0)->isGuarded ) },
	{ NULL, 0 }
};

static classVariableInfo_t EscapeGoal_typeInfo[] = {
	{ "int", "escapePointId", (ptrdiff_t)(&((EscapeGoal *)0)->escapePointId), sizeof( ((EscapeGoal *)0)->escapePointId ) },
	{ "float", "distance", (ptrdiff_t)(&((EscapeGoal *)0)->distance), sizeof( ((EscapeGoal *)0)->distance ) },
	{ NULL, 0 }
};

static classVariableInfo_t CEscapePointManager_typeInfo[] = {
	{ "EscapeEntityListPtr", "_escapeEntities", (ptrdiff_t)(&((CEscapePointManager *)0)->_escapeEntities), sizeof( ((CEscapePointManager *)0)->_escapeEntities ) },
	{ "AASEscapePointMap", "_aasEscapePoints", (ptrdiff_t)(&((CEscapePointManager *)0)->_aasEscapePoints), sizeof( ((CEscapePointManager *)0)->_aasEscapePoints ) },
	{ "EscapePointIndex", "_aasEscapePointIndex", (ptrdiff_t)(&((CEscapePointManager *)0)->_aasEscapePointIndex), sizeof( ((CEscapePointManager *)0)->_aasEscapePointIndex ) },
	{ "int", "_highestEscapePointId", (ptrdiff_t)(&((CEscapePointManager *)0)->_highestEscapePointId), sizeof( ((CEscapePointManager *)0)->_highestEscapePointId ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_FleeTask_typeInfo[] = {
	{ "idEntityPtr < idActor >", "_enemy", (ptrdiff_t)(&((ai::FleeTask *)0)->_enemy), sizeof( ((ai::FleeTask *)0)->_enemy ) },
	{ "int", "_escapeSearchLevel", (ptrdiff_t)(&((ai::FleeTask *)0)->_escapeSearchLevel), sizeof( ((ai::FleeTask *)0)->_escapeSearchLevel ) },
	{ "int", "_failureCount", (ptrdiff_t)(&((ai::FleeTask *)0)->_failureCount), sizeof( ((ai::FleeTask *)0)->_failureCount ) },
	{ "int", "_fleeStartTime", (ptrdiff_t)(&((ai::FleeTask *)0)->_fleeStartTime), sizeof( ((ai::FleeTask *)0)->_fleeStartTime ) },
	{ "EscapeDistanceOption", "_distOpt", (ptrdiff_t)(&((ai::FleeTask *)0)->_distOpt), sizeof( ((ai::FleeTask *)0)->_distOpt ) },
	{ "int", "_currentDistanceGoal", (ptrdiff_t)(&((ai::FleeTask *)0)->_currentDistanceGoal), sizeof( ((ai::FleeTask *)0)->_currentDistanceGoal ) },
	{ "bool", "_haveTurnedBack", (ptrdiff_t)(&((ai::FleeTask *)0)->_haveTurnedBack), sizeof( ((ai::FleeTask *)0)->_haveTurnedBack ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_FollowActorTask_typeInfo[] = {
	{ "idEntityPtr < idActor >", "_actor", (ptrdiff_t)(&((ai::FollowActorTask *)0)->_actor), sizeof( ((ai::FollowActorTask *)0)->_actor ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_SingleBarkTask_typeInfo[] = {
	{ "int", "_startDelay", (ptrdiff_t)(&((ai::SingleBarkTask *)0)->_startDelay), sizeof( ((ai::SingleBarkTask *)0)->_startDelay ) },
	{ "bool", "_allowDuringAnim", (ptrdiff_t)(&((ai::SingleBarkTask *)0)->_allowDuringAnim), sizeof( ((ai::SingleBarkTask *)0)->_allowDuringAnim ) },
	{ "int", "_endTime", (ptrdiff_t)(&((ai::SingleBarkTask *)0)->_endTime), sizeof( ((ai::SingleBarkTask *)0)->_endTime ) },
	{ "CommMessagePtr", "_message", (ptrdiff_t)(&((ai::SingleBarkTask *)0)->_message), sizeof( ((ai::SingleBarkTask *)0)->_message ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_GreetingBarkTask_typeInfo[] = {
	{ "idActor *", "_greetingTarget", (ptrdiff_t)(&((ai::GreetingBarkTask *)0)->_greetingTarget), sizeof( ((ai::GreetingBarkTask *)0)->_greetingTarget ) },
	{ "bool", "_isInitialGreeting", (ptrdiff_t)(&((ai::GreetingBarkTask *)0)->_isInitialGreeting), sizeof( ((ai::GreetingBarkTask *)0)->_isInitialGreeting ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_GuardSpotTask_typeInfo[] = {
	{ "ai::GuardSpotTask::EGuardSpotState", "_guardSpotState", (ptrdiff_t)(&((ai::GuardSpotTask *)0)->_guardSpotState), sizeof( ((ai::GuardSpotTask *)0)->_guardSpotState ) },
	{ "idVec3", "_guardSpot", (ptrdiff_t)(&((ai::GuardSpotTask *)0)->_guardSpot), sizeof( ((ai::GuardSpotTask *)0)->_guardSpot ) },
	{ "int", "_exitTime", (ptrdiff_t)(&((ai::GuardSpotTask *)0)->_exitTime), sizeof( ((ai::GuardSpotTask *)0)->_exitTime ) },
	{ "int", "_giveOrderTime", (ptrdiff_t)(&((ai::GuardSpotTask *)0)->_giveOrderTime), sizeof( ((ai::GuardSpotTask *)0)->_giveOrderTime ) },
	{ "bool", "_millingOnly", (ptrdiff_t)(&((ai::GuardSpotTask *)0)->_millingOnly), sizeof( ((ai::GuardSpotTask *)0)->_millingOnly ) },
	{ "int", "_nextTurnTime", (ptrdiff_t)(&((ai::GuardSpotTask *)0)->_nextTurnTime), sizeof( ((ai::GuardSpotTask *)0)->_nextTurnTime ) },
	{ "float", "_baseYaw", (ptrdiff_t)(&((ai::GuardSpotTask *)0)->_baseYaw), sizeof( ((ai::GuardSpotTask *)0)->_baseYaw ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_HandleDoorTask_typeInfo[] = {
	{ "idVec3", "_frontPos", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_frontPos), sizeof( ((ai::HandleDoorTask *)0)->_frontPos ) },
	{ "idVec3", "_backPos", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_backPos), sizeof( ((ai::HandleDoorTask *)0)->_backPos ) },
	{ "idVec3", "_midPos", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_midPos), sizeof( ((ai::HandleDoorTask *)0)->_midPos ) },
	{ "idVec3", "_safePos", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_safePos), sizeof( ((ai::HandleDoorTask *)0)->_safePos ) },
	{ "idEntityPtr < idEntity >", "_frontPosEnt", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_frontPosEnt), sizeof( ((ai::HandleDoorTask *)0)->_frontPosEnt ) },
	{ "idEntityPtr < idEntity >", "_backPosEnt", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_backPosEnt), sizeof( ((ai::HandleDoorTask *)0)->_backPosEnt ) },
	{ "idEntityPtr < idEntity >", "_frontDHPosition", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_frontDHPosition), sizeof( ((ai::HandleDoorTask *)0)->_frontDHPosition ) },
	{ "idEntityPtr < idEntity >", "_backDHPosition", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_backDHPosition), sizeof( ((ai::HandleDoorTask *)0)->_backDHPosition ) },
	{ "ai::HandleDoorTask::EDoorHandlingState", "_doorHandlingState", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_doorHandlingState), sizeof( ((ai::HandleDoorTask *)0)->_doorHandlingState ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_waitEndTime), sizeof( ((ai::HandleDoorTask *)0)->_waitEndTime ) },
	{ "bool", "_wasLocked", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_wasLocked), sizeof( ((ai::HandleDoorTask *)0)->_wasLocked ) },
	{ "bool", "_doorInTheWay", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_doorInTheWay), sizeof( ((ai::HandleDoorTask *)0)->_doorInTheWay ) },
	{ "int", "_retryCount", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_retryCount), sizeof( ((ai::HandleDoorTask *)0)->_retryCount ) },
	{ "int", "_leaveQueue", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_leaveQueue), sizeof( ((ai::HandleDoorTask *)0)->_leaveQueue ) },
	{ "int", "_leaveDoor", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_leaveDoor), sizeof( ((ai::HandleDoorTask *)0)->_leaveDoor ) },
	{ "bool", "_triedFitting", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_triedFitting), sizeof( ((ai::HandleDoorTask *)0)->_triedFitting ) },
	{ "bool", "_canHandleDoor", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_canHandleDoor), sizeof( ((ai::HandleDoorTask *)0)->_canHandleDoor ) },
	{ "bool", "_closeFromSameSide", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_closeFromSameSide), sizeof( ((ai::HandleDoorTask *)0)->_closeFromSameSide ) },
	{ "int", "_useDelay", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_useDelay), sizeof( ((ai::HandleDoorTask *)0)->_useDelay ) },
	{ "bool", "_rotates", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_rotates), sizeof( ((ai::HandleDoorTask *)0)->_rotates ) },
	{ "int", "_doorSide", (ptrdiff_t)(&((ai::HandleDoorTask *)0)->_doorSide), sizeof( ((ai::HandleDoorTask *)0)->_doorSide ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_HandleElevatorTask_typeInfo[] = {
	{ "ai::HandleElevatorTask::State", "_state", (ptrdiff_t)(&((ai::HandleElevatorTask *)0)->_state), sizeof( ((ai::HandleElevatorTask *)0)->_state ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::HandleElevatorTask *)0)->_waitEndTime), sizeof( ((ai::HandleElevatorTask *)0)->_waitEndTime ) },
	{ "eas :: RouteInfo", "_routeInfo", (ptrdiff_t)(&((ai::HandleElevatorTask *)0)->_routeInfo), sizeof( ((ai::HandleElevatorTask *)0)->_routeInfo ) },
	{ "bool", "_success", (ptrdiff_t)(&((ai::HandleElevatorTask *)0)->_success), sizeof( ((ai::HandleElevatorTask *)0)->_success ) },
	{ "int", "_maxRiders", (ptrdiff_t)(&((ai::HandleElevatorTask *)0)->_maxRiders), sizeof( ((ai::HandleElevatorTask *)0)->_maxRiders ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_IdleAnimationTask_typeInfo[] = {
	{ "int", "_nextAnimationTime", (ptrdiff_t)(&((ai::IdleAnimationTask *)0)->_nextAnimationTime), sizeof( ((ai::IdleAnimationTask *)0)->_nextAnimationTime ) },
	{ "idStringList", "_idleAnimations", (ptrdiff_t)(&((ai::IdleAnimationTask *)0)->_idleAnimations), sizeof( ((ai::IdleAnimationTask *)0)->_idleAnimations ) },
	{ "idStringList", "_idleAnimationsTorso", (ptrdiff_t)(&((ai::IdleAnimationTask *)0)->_idleAnimationsTorso), sizeof( ((ai::IdleAnimationTask *)0)->_idleAnimationsTorso ) },
	{ "idStringList", "_idleAnimationsSitting", (ptrdiff_t)(&((ai::IdleAnimationTask *)0)->_idleAnimationsSitting), sizeof( ((ai::IdleAnimationTask *)0)->_idleAnimationsSitting ) },
	{ "int", "_idleAnimationInterval", (ptrdiff_t)(&((ai::IdleAnimationTask *)0)->_idleAnimationInterval), sizeof( ((ai::IdleAnimationTask *)0)->_idleAnimationInterval ) },
	{ "int", "_lastIdleAnim", (ptrdiff_t)(&((ai::IdleAnimationTask *)0)->_lastIdleAnim), sizeof( ((ai::IdleAnimationTask *)0)->_lastIdleAnim ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_InteractionTask_typeInfo[] = {
	{ "idEntity *", "_interactEnt", (ptrdiff_t)(&((ai::InteractionTask *)0)->_interactEnt), sizeof( ((ai::InteractionTask *)0)->_interactEnt ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::InteractionTask *)0)->_waitEndTime), sizeof( ((ai::InteractionTask *)0)->_waitEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_InvestigateSpotTask_typeInfo[] = {
	{ "idVec3", "_searchSpot", (ptrdiff_t)(&((ai::InvestigateSpotTask *)0)->_searchSpot), sizeof( ((ai::InvestigateSpotTask *)0)->_searchSpot ) },
	{ "int", "_exitTime", (ptrdiff_t)(&((ai::InvestigateSpotTask *)0)->_exitTime), sizeof( ((ai::InvestigateSpotTask *)0)->_exitTime ) },
	{ "bool", "_investigateClosely", (ptrdiff_t)(&((ai::InvestigateSpotTask *)0)->_investigateClosely), sizeof( ((ai::InvestigateSpotTask *)0)->_investigateClosely ) },
	{ "ai::InvestigateSpotTask::EInvestigateState", "_investigatingState", (ptrdiff_t)(&((ai::InvestigateSpotTask *)0)->_investigatingState), sizeof( ((ai::InvestigateSpotTask *)0)->_investigatingState ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_MeleeCombatTask_typeInfo[] = {
	{ "bool", "_bForceAttack", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_bForceAttack), sizeof( ((ai::MeleeCombatTask *)0)->_bForceAttack ) },
	{ "bool", "_bForceParry", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_bForceParry), sizeof( ((ai::MeleeCombatTask *)0)->_bForceParry ) },
	{ "bool", "_bInPreParryDelayState", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_bInPreParryDelayState), sizeof( ((ai::MeleeCombatTask *)0)->_bInPreParryDelayState ) },
	{ "bool", "_bInPostParryDelayState", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_bInPostParryDelayState), sizeof( ((ai::MeleeCombatTask *)0)->_bInPostParryDelayState ) },
	{ "int", "_ParryDelayTimer", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_ParryDelayTimer), sizeof( ((ai::MeleeCombatTask *)0)->_ParryDelayTimer ) },
	{ "int", "_PreParryDelay", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_PreParryDelay), sizeof( ((ai::MeleeCombatTask *)0)->_PreParryDelay ) },
	{ "int", "_PostParryDelay", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_PostParryDelay), sizeof( ((ai::MeleeCombatTask *)0)->_PostParryDelay ) },
	{ "idEntityPtr < idActor >", "_PrevEnemy", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_PrevEnemy), sizeof( ((ai::MeleeCombatTask *)0)->_PrevEnemy ) },
	{ "EMeleeType", "_PrevAttParried", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_PrevAttParried), sizeof( ((ai::MeleeCombatTask *)0)->_PrevAttParried ) },
	{ "int", "_PrevAttTime", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_PrevAttTime), sizeof( ((ai::MeleeCombatTask *)0)->_PrevAttTime ) },
	{ "int", "_NumAttReps", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_NumAttReps), sizeof( ((ai::MeleeCombatTask *)0)->_NumAttReps ) },
	{ "bool", "_EnemyUsesUnarmedCombat", (ptrdiff_t)(&((ai::MeleeCombatTask *)0)->_EnemyUsesUnarmedCombat), sizeof( ((ai::MeleeCombatTask *)0)->_EnemyUsesUnarmedCombat ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_MoveToCoverTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_MoveToPositionTask_typeInfo[] = {
	{ "idVec3", "_targetPosition", (ptrdiff_t)(&((ai::MoveToPositionTask *)0)->_targetPosition), sizeof( ((ai::MoveToPositionTask *)0)->_targetPosition ) },
	{ "idVec3", "_prevTargetPosition", (ptrdiff_t)(&((ai::MoveToPositionTask *)0)->_prevTargetPosition), sizeof( ((ai::MoveToPositionTask *)0)->_prevTargetPosition ) },
	{ "float", "_targetYaw", (ptrdiff_t)(&((ai::MoveToPositionTask *)0)->_targetYaw), sizeof( ((ai::MoveToPositionTask *)0)->_targetYaw ) },
	{ "idEntity *", "_targetEntity", (ptrdiff_t)(&((ai::MoveToPositionTask *)0)->_targetEntity), sizeof( ((ai::MoveToPositionTask *)0)->_targetEntity ) },
	{ "float", "_entityReachDistance", (ptrdiff_t)(&((ai::MoveToPositionTask *)0)->_entityReachDistance), sizeof( ((ai::MoveToPositionTask *)0)->_entityReachDistance ) },
	{ "float", "_accuracy", (ptrdiff_t)(&((ai::MoveToPositionTask *)0)->_accuracy), sizeof( ((ai::MoveToPositionTask *)0)->_accuracy ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathTask_typeInfo[] = {
	{ "idEntityPtr < idPathCorner >", "_path", (ptrdiff_t)(&((ai::PathTask *)0)->_path), sizeof( ((ai::PathTask *)0)->_path ) },
	{ "float", "_accuracy", (ptrdiff_t)(&((ai::PathTask *)0)->_accuracy), sizeof( ((ai::PathTask *)0)->_accuracy ) },
	{ "bool", "_activateTargets", (ptrdiff_t)(&((ai::PathTask *)0)->_activateTargets), sizeof( ((ai::PathTask *)0)->_activateTargets ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathAnimTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathCornerTask_typeInfo[] = {
	{ "bool", "_moveInitiated", (ptrdiff_t)(&((ai::PathCornerTask *)0)->_moveInitiated), sizeof( ((ai::PathCornerTask *)0)->_moveInitiated ) },
	{ "bool", "_movePaused", (ptrdiff_t)(&((ai::PathCornerTask *)0)->_movePaused), sizeof( ((ai::PathCornerTask *)0)->_movePaused ) },
	{ "idVec3", "_lastPosition", (ptrdiff_t)(&((ai::PathCornerTask *)0)->_lastPosition), sizeof( ((ai::PathCornerTask *)0)->_lastPosition ) },
	{ "int", "_lastFrameNum", (ptrdiff_t)(&((ai::PathCornerTask *)0)->_lastFrameNum), sizeof( ((ai::PathCornerTask *)0)->_lastFrameNum ) },
	{ "bool", "_usePathPrediction", (ptrdiff_t)(&((ai::PathCornerTask *)0)->_usePathPrediction), sizeof( ((ai::PathCornerTask *)0)->_usePathPrediction ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathCycleAnimTask_typeInfo[] = {
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::PathCycleAnimTask *)0)->_waitEndTime), sizeof( ((ai::PathCycleAnimTask *)0)->_waitEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathHideTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathInteractTask_typeInfo[] = {
	{ "idEntity *", "_target", (ptrdiff_t)(&((ai::PathInteractTask *)0)->_target), sizeof( ((ai::PathInteractTask *)0)->_target ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::PathInteractTask *)0)->_waitEndTime), sizeof( ((ai::PathInteractTask *)0)->_waitEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathLookatTask_typeInfo[] = {
	{ "idEntity *", "_focusEnt", (ptrdiff_t)(&((ai::PathLookatTask *)0)->_focusEnt), sizeof( ((ai::PathLookatTask *)0)->_focusEnt ) },
	{ "float", "_duration", (ptrdiff_t)(&((ai::PathLookatTask *)0)->_duration), sizeof( ((ai::PathLookatTask *)0)->_duration ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathSetMovetypeTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathShowTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathSitTask_typeInfo[] = {
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::PathSitTask *)0)->_waitEndTime), sizeof( ((ai::PathSitTask *)0)->_waitEndTime ) },
	{ "ai::PathSitTask::ESitState", "_sittingState", (ptrdiff_t)(&((ai::PathSitTask *)0)->_sittingState), sizeof( ((ai::PathSitTask *)0)->_sittingState ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathSleepTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathTurnTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathWaitForTriggerTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_PathWaitTask_typeInfo[] = {
	{ "float", "_endtime", (ptrdiff_t)(&((ai::PathWaitTask *)0)->_endtime), sizeof( ((ai::PathWaitTask *)0)->_endtime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_PlayAnimationTask_typeInfo[] = {
	{ "idStr", "_animName", (ptrdiff_t)(&((ai::PlayAnimationTask *)0)->_animName), sizeof( ((ai::PlayAnimationTask *)0)->_animName ) },
	{ "int", "_blendFrames", (ptrdiff_t)(&((ai::PlayAnimationTask *)0)->_blendFrames), sizeof( ((ai::PlayAnimationTask *)0)->_blendFrames ) },
	{ "bool", "_playCycle", (ptrdiff_t)(&((ai::PlayAnimationTask *)0)->_playCycle), sizeof( ((ai::PlayAnimationTask *)0)->_playCycle ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_RandomHeadturnTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_RandomTurningTask_typeInfo[] = {
	{ "float", "_nextYaw", (ptrdiff_t)(&((ai::RandomTurningTask *)0)->_nextYaw), sizeof( ((ai::RandomTurningTask *)0)->_nextYaw ) },
	{ "bool", "_turning", (ptrdiff_t)(&((ai::RandomTurningTask *)0)->_turning), sizeof( ((ai::RandomTurningTask *)0)->_turning ) },
	{ "int", "_nextTurningTime", (ptrdiff_t)(&((ai::RandomTurningTask *)0)->_nextTurningTime), sizeof( ((ai::RandomTurningTask *)0)->_nextTurningTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_RangedCombatTask_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t ai_RepeatedBarkTask_typeInfo[] = {
	{ "int", "_barkRepeatIntervalMin", (ptrdiff_t)(&((ai::RepeatedBarkTask *)0)->_barkRepeatIntervalMin), sizeof( ((ai::RepeatedBarkTask *)0)->_barkRepeatIntervalMin ) },
	{ "int", "_barkRepeatIntervalMax", (ptrdiff_t)(&((ai::RepeatedBarkTask *)0)->_barkRepeatIntervalMax), sizeof( ((ai::RepeatedBarkTask *)0)->_barkRepeatIntervalMax ) },
	{ "int", "_nextBarkTime", (ptrdiff_t)(&((ai::RepeatedBarkTask *)0)->_nextBarkTime), sizeof( ((ai::RepeatedBarkTask *)0)->_nextBarkTime ) },
	{ "bool", "_prevBarkDone", (ptrdiff_t)(&((ai::RepeatedBarkTask *)0)->_prevBarkDone), sizeof( ((ai::RepeatedBarkTask *)0)->_prevBarkDone ) },
	{ "CommMessagePtr", "_message", (ptrdiff_t)(&((ai::RepeatedBarkTask *)0)->_message), sizeof( ((ai::RepeatedBarkTask *)0)->_message ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_ResolveMovementBlockTask_typeInfo[] = {
	{ "idEntity *", "_blockingEnt", (ptrdiff_t)(&((ai::ResolveMovementBlockTask *)0)->_blockingEnt), sizeof( ((ai::ResolveMovementBlockTask *)0)->_blockingEnt ) },
	{ "idAngles", "_initialAngles", (ptrdiff_t)(&((ai::ResolveMovementBlockTask *)0)->_initialAngles), sizeof( ((ai::ResolveMovementBlockTask *)0)->_initialAngles ) },
	{ "int", "_preTaskContents", (ptrdiff_t)(&((ai::ResolveMovementBlockTask *)0)->_preTaskContents), sizeof( ((ai::ResolveMovementBlockTask *)0)->_preTaskContents ) },
	{ "bool", "_turning", (ptrdiff_t)(&((ai::ResolveMovementBlockTask *)0)->_turning), sizeof( ((ai::ResolveMovementBlockTask *)0)->_turning ) },
	{ "int", "_endTime", (ptrdiff_t)(&((ai::ResolveMovementBlockTask *)0)->_endTime), sizeof( ((ai::ResolveMovementBlockTask *)0)->_endTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_ScriptTask_typeInfo[] = {
	{ "idStr", "_functionName", (ptrdiff_t)(&((ai::ScriptTask *)0)->_functionName), sizeof( ((ai::ScriptTask *)0)->_functionName ) },
	{ "idThread *", "_thread", (ptrdiff_t)(&((ai::ScriptTask *)0)->_thread), sizeof( ((ai::ScriptTask *)0)->_thread ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_ThrowObjectTask_typeInfo[] = {
	{ "int", "_projectileDelayMin", (ptrdiff_t)(&((ai::ThrowObjectTask *)0)->_projectileDelayMin), sizeof( ((ai::ThrowObjectTask *)0)->_projectileDelayMin ) },
	{ "int", "_projectileDelayMax", (ptrdiff_t)(&((ai::ThrowObjectTask *)0)->_projectileDelayMax), sizeof( ((ai::ThrowObjectTask *)0)->_projectileDelayMax ) },
	{ "int", "_nextThrowObjectTime", (ptrdiff_t)(&((ai::ThrowObjectTask *)0)->_nextThrowObjectTime), sizeof( ((ai::ThrowObjectTask *)0)->_nextThrowObjectTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_WaitTask_typeInfo[] = {
	{ "int", "_waitTime", (ptrdiff_t)(&((ai::WaitTask *)0)->_waitTime), sizeof( ((ai::WaitTask *)0)->_waitTime ) },
	{ "int", "_waitEndTime", (ptrdiff_t)(&((ai::WaitTask *)0)->_waitEndTime), sizeof( ((ai::WaitTask *)0)->_waitEndTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t ai_WanderInLocationTask_typeInfo[] = {
	{ "idVec3", "_location", (ptrdiff_t)(&((ai::WanderInLocationTask *)0)->_location), sizeof( ((ai::WanderInLocationTask *)0)->_location ) },
	{ NULL, 0 }
};

static classVariableInfo_t tdmAASFindEscape_typeInfo[] = {
	{ "idVec3", "_threatPosition", (ptrdiff_t)(&((tdmAASFindEscape *)0)->_threatPosition), sizeof( ((tdmAASFindEscape *)0)->_threatPosition ) },
	{ "idVec3", "_selfPosition", (ptrdiff_t)(&((tdmAASFindEscape *)0)->_selfPosition), sizeof( ((tdmAASFindEscape *)0)->_selfPosition ) },
	{ "float", "_minDistThreatSqr", (ptrdiff_t)(&((tdmAASFindEscape *)0)->_minDistThreatSqr), sizeof( ((tdmAASFindEscape *)0)->_minDistThreatSqr ) },
	{ "float", "_minDistSelfSqr", (ptrdiff_t)(&((tdmAASFindEscape *)0)->_minDistSelfSqr), sizeof( ((tdmAASFindEscape *)0)->_minDistSelfSqr ) },
	{ "int", "_team", (ptrdiff_t)(&((tdmAASFindEscape *)0)->_team), sizeof( ((tdmAASFindEscape *)0)->_team ) },
	{ "aasGoal_t", "_goal", (ptrdiff_t)(&((tdmAASFindEscape *)0)->_goal), sizeof( ((tdmAASFindEscape *)0)->_goal ) },
	{ "float", "_bestDistSqr", (ptrdiff_t)(&((tdmAASFindEscape *)0)->_bestDistSqr), sizeof( ((tdmAASFindEscape *)0)->_bestDistSqr ) },
	{ "int", "_bestAreaNum", (ptrdiff_t)(&((tdmAASFindEscape *)0)->_bestAreaNum), sizeof( ((tdmAASFindEscape *)0)->_bestAreaNum ) },
	{ NULL, 0 }
};

static classVariableInfo_t SAIVehicleSpeed_typeInfo[] = {
	{ "idStr", "Anim", (ptrdiff_t)(&((SAIVehicleSpeed *)0)->Anim), sizeof( ((SAIVehicleSpeed *)0)->Anim ) },
	{ "float", "MinAnimRate", (ptrdiff_t)(&((SAIVehicleSpeed *)0)->MinAnimRate), sizeof( ((SAIVehicleSpeed *)0)->MinAnimRate ) },
	{ "float", "MaxAnimRate", (ptrdiff_t)(&((SAIVehicleSpeed *)0)->MaxAnimRate), sizeof( ((SAIVehicleSpeed *)0)->MaxAnimRate ) },
	{ "float", "NextSpeedFrac", (ptrdiff_t)(&((SAIVehicleSpeed *)0)->NextSpeedFrac), sizeof( ((SAIVehicleSpeed *)0)->NextSpeedFrac ) },
	{ NULL, 0 }
};

static classVariableInfo_t CAIVehicle_typeInfo[] = {
	{ "idScriptBool", "AI_CONTROLLED", (ptrdiff_t)(&((CAIVehicle *)0)->AI_CONTROLLED), sizeof( ((CAIVehicle *)0)->AI_CONTROLLED ) },
	{ "idEntityPtr < idPlayer >", "m_Controller", (ptrdiff_t)(&((CAIVehicle *)0)->m_Controller), sizeof( ((CAIVehicle *)0)->m_Controller ) },
	{ "jointHandle_t", "m_RideJoint", (ptrdiff_t)(&((CAIVehicle *)0)->m_RideJoint), sizeof( ((CAIVehicle *)0)->m_RideJoint ) },
	{ "idVec3", "m_RideOffset", (ptrdiff_t)(&((CAIVehicle *)0)->m_RideOffset), sizeof( ((CAIVehicle *)0)->m_RideOffset ) },
	{ "idAngles", "m_RideAngles", (ptrdiff_t)(&((CAIVehicle *)0)->m_RideAngles), sizeof( ((CAIVehicle *)0)->m_RideAngles ) },
	{ "float", "m_CurAngle", (ptrdiff_t)(&((CAIVehicle *)0)->m_CurAngle), sizeof( ((CAIVehicle *)0)->m_CurAngle ) },
	{ "idStr", "m_CurMoveAnim", (ptrdiff_t)(&((CAIVehicle *)0)->m_CurMoveAnim), sizeof( ((CAIVehicle *)0)->m_CurMoveAnim ) },
	{ "float", "m_SpeedFrac", (ptrdiff_t)(&((CAIVehicle *)0)->m_SpeedFrac), sizeof( ((CAIVehicle *)0)->m_SpeedFrac ) },
	{ "float", "m_SteerSpeed", (ptrdiff_t)(&((CAIVehicle *)0)->m_SteerSpeed), sizeof( ((CAIVehicle *)0)->m_SteerSpeed ) },
	{ "float", "m_SpeedTimeToMax", (ptrdiff_t)(&((CAIVehicle *)0)->m_SpeedTimeToMax), sizeof( ((CAIVehicle *)0)->m_SpeedTimeToMax ) },
	{ "idList < SAIVehicleSpeed >", "m_Speeds", (ptrdiff_t)(&((CAIVehicle *)0)->m_Speeds), sizeof( ((CAIVehicle *)0)->m_Speeds ) },
	{ "idStr", "m_JumpAnim", (ptrdiff_t)(&((CAIVehicle *)0)->m_JumpAnim), sizeof( ((CAIVehicle *)0)->m_JumpAnim ) },
	{ NULL, 0 }
};

static classVariableInfo_t CBloodMarker_typeInfo[] = {
	{ "idStr", "_bloodSplat", (ptrdiff_t)(&((CBloodMarker *)0)->_bloodSplat), sizeof( ((CBloodMarker *)0)->_bloodSplat ) },
	{ "idStr", "_bloodSplatFading", (ptrdiff_t)(&((CBloodMarker *)0)->_bloodSplatFading), sizeof( ((CBloodMarker *)0)->_bloodSplatFading ) },
	{ "float", "_angle", (ptrdiff_t)(&((CBloodMarker *)0)->_angle), sizeof( ((CBloodMarker *)0)->_angle ) },
	{ "float", "_size", (ptrdiff_t)(&((CBloodMarker *)0)->_size), sizeof( ((CBloodMarker *)0)->_size ) },
	{ "bool", "_isFading", (ptrdiff_t)(&((CBloodMarker *)0)->_isFading), sizeof( ((CBloodMarker *)0)->_isFading ) },
	{ "idEntityPtr < idAI >", "_spilledBy", (ptrdiff_t)(&((CBloodMarker *)0)->_spilledBy), sizeof( ((CBloodMarker *)0)->_spilledBy ) },
	{ NULL, 0 }
};

static classVariableInfo_t tdmDeclTDM_MatInfo_typeInfo[] = {
	{ "idStr", "surfaceType", (ptrdiff_t)(&((tdmDeclTDM_MatInfo *)0)->surfaceType), sizeof( ((tdmDeclTDM_MatInfo *)0)->surfaceType ) },
	{ NULL, 0 }
};

static classVariableInfo_t tdmDeclXData_typeInfo[] = {
	{ "idDict", "m_data", (ptrdiff_t)(&((tdmDeclXData *)0)->m_data), sizeof( ((tdmDeclXData *)0)->m_data ) },
	{ NULL, 0 }
};

static classVariableInfo_t CDownloadMenu_MissionDownload_typeInfo[] = {
	{ "int", "missionDownloadId", (ptrdiff_t)(&((CDownloadMenu::MissionDownload *)0)->missionDownloadId), sizeof( ((CDownloadMenu::MissionDownload *)0)->missionDownloadId ) },
	{ "int", "l10nPackDownloadId", (ptrdiff_t)(&((CDownloadMenu::MissionDownload *)0)->l10nPackDownloadId), sizeof( ((CDownloadMenu::MissionDownload *)0)->l10nPackDownloadId ) },
	{ NULL, 0 }
};

static classVariableInfo_t CDownloadMenu_typeInfo[] = {
	{ "int", "_availListTop", (ptrdiff_t)(&((CDownloadMenu *)0)->_availListTop), sizeof( ((CDownloadMenu *)0)->_availListTop ) },
	{ "int", "_selectedListTop", (ptrdiff_t)(&((CDownloadMenu *)0)->_selectedListTop), sizeof( ((CDownloadMenu *)0)->_selectedListTop ) },
	{ "idList < int >", "_selectedMods", (ptrdiff_t)(&((CDownloadMenu *)0)->_selectedMods), sizeof( ((CDownloadMenu *)0)->_selectedMods ) },
	{ "ActiveDownloads", "_downloads", (ptrdiff_t)(&((CDownloadMenu *)0)->_downloads), sizeof( ((CDownloadMenu *)0)->_downloads ) },
	{ NULL, 0 }
};

static classVariableInfo_t CForce_Grab_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "m_RefEnt", (ptrdiff_t)(&((CForce_Grab *)0)->m_RefEnt), sizeof( ((CForce_Grab *)0)->m_RefEnt ) },
	{ "bool", "m_bLimitForce", (ptrdiff_t)(&((CForce_Grab *)0)->m_bLimitForce), sizeof( ((CForce_Grab *)0)->m_bLimitForce ) },
	{ "bool", "m_bApplyDamping", (ptrdiff_t)(&((CForce_Grab *)0)->m_bApplyDamping), sizeof( ((CForce_Grab *)0)->m_bApplyDamping ) },
	{ "float", "m_damping", (ptrdiff_t)(&((CForce_Grab *)0)->m_damping), sizeof( ((CForce_Grab *)0)->m_damping ) },
	{ "idVec3", "m_centerOfMass", (ptrdiff_t)(&((CForce_Grab *)0)->m_centerOfMass), sizeof( ((CForce_Grab *)0)->m_centerOfMass ) },
	{ "idMat3", "m_inertiaTensor", (ptrdiff_t)(&((CForce_Grab *)0)->m_inertiaTensor), sizeof( ((CForce_Grab *)0)->m_inertiaTensor ) },
	{ "idPhysics *", "m_physics", (ptrdiff_t)(&((CForce_Grab *)0)->m_physics), sizeof( ((CForce_Grab *)0)->m_physics ) },
	{ "idVec3", "m_p", (ptrdiff_t)(&((CForce_Grab *)0)->m_p), sizeof( ((CForce_Grab *)0)->m_p ) },
	{ "int", "m_id", (ptrdiff_t)(&((CForce_Grab *)0)->m_id), sizeof( ((CForce_Grab *)0)->m_id ) },
	{ "idVec3", "m_dragPosition", (ptrdiff_t)(&((CForce_Grab *)0)->m_dragPosition), sizeof( ((CForce_Grab *)0)->m_dragPosition ) },
	{ "idMat3", "m_dragAxis", (ptrdiff_t)(&((CForce_Grab *)0)->m_dragAxis), sizeof( ((CForce_Grab *)0)->m_dragAxis ) },
	{ "idList < idVec4 >", "m_dragPositionFrames", (ptrdiff_t)(&((CForce_Grab *)0)->m_dragPositionFrames), sizeof( ((CForce_Grab *)0)->m_dragPositionFrames ) },
	{ "idList < idVec3 >", "m_originalFriction", (ptrdiff_t)(&((CForce_Grab *)0)->m_originalFriction), sizeof( ((CForce_Grab *)0)->m_originalFriction ) },
	{ NULL, 0 }
};

static classVariableInfo_t CFrobHandle_typeInfo[] = {
	{ "idEntity *", "m_FrobMaster", (ptrdiff_t)(&((CFrobHandle *)0)->m_FrobMaster), sizeof( ((CFrobHandle *)0)->m_FrobMaster ) },
	{ "bool", "m_IsMasterHandle", (ptrdiff_t)(&((CFrobHandle *)0)->m_IsMasterHandle), sizeof( ((CFrobHandle *)0)->m_IsMasterHandle ) },
	{ "bool", "m_FrobLock", (ptrdiff_t)(&((CFrobHandle *)0)->m_FrobLock), sizeof( ((CFrobHandle *)0)->m_FrobLock ) },
	{ NULL, 0 }
};

static classVariableInfo_t CFrobDoorHandle_typeInfo[] = {
	{ "CFrobDoor *", "m_Door", (ptrdiff_t)(&((CFrobDoorHandle *)0)->m_Door), sizeof( ((CFrobDoorHandle *)0)->m_Door ) },
	{ NULL, 0 }
};

static classVariableInfo_t CFrobLever_typeInfo[] = {
	{ "bool", "m_Latch", (ptrdiff_t)(&((CFrobLever *)0)->m_Latch), sizeof( ((CFrobLever *)0)->m_Latch ) },
	{ NULL, 0 }
};

static classVariableInfo_t CFrobLockHandle_typeInfo[] = {
	{ "CFrobLock *", "m_FrobLock", (ptrdiff_t)(&((CFrobLockHandle *)0)->m_FrobLock), sizeof( ((CFrobLockHandle *)0)->m_FrobLock ) },
	{ NULL, 0 }
};

static classVariableInfo_t CFrobLock_typeInfo[] = {
	{ "PickableLock *", "m_Lock", (ptrdiff_t)(&((CFrobLock *)0)->m_Lock), sizeof( ((CFrobLock *)0)->m_Lock ) },
	{ "idList < idEntityPtr < CFrobLockHandle > >", "m_Lockhandles", (ptrdiff_t)(&((CFrobLock *)0)->m_Lockhandles), sizeof( ((CFrobLock *)0)->m_Lockhandles ) },
	{ "int", "m_LastHandleUpdateTime", (ptrdiff_t)(&((CFrobLock *)0)->m_LastHandleUpdateTime), sizeof( ((CFrobLock *)0)->m_LastHandleUpdateTime ) },
	{ NULL, 0 }
};

static classVariableInfo_t CGrabbedEnt_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "m_ent", (ptrdiff_t)(&((CGrabbedEnt *)0)->m_ent), sizeof( ((CGrabbedEnt *)0)->m_ent ) },
	{ "int", "m_clipMask", (ptrdiff_t)(&((CGrabbedEnt *)0)->m_clipMask), sizeof( ((CGrabbedEnt *)0)->m_clipMask ) },
	{ "int", "m_contents", (ptrdiff_t)(&((CGrabbedEnt *)0)->m_contents), sizeof( ((CGrabbedEnt *)0)->m_contents ) },
	{ NULL, 0 }
};

static classVariableInfo_t CGrabber_typeInfo[] = {
	{ "bool", "m_bDropBodyFaceUp", (ptrdiff_t)(&((CGrabber *)0)->m_bDropBodyFaceUp), sizeof( ((CGrabber *)0)->m_bDropBodyFaceUp ) },
	{ "bool", "m_bIsColliding", (ptrdiff_t)(&((CGrabber *)0)->m_bIsColliding), sizeof( ((CGrabber *)0)->m_bIsColliding ) },
	{ "bool", "m_bPrevFrameCollided", (ptrdiff_t)(&((CGrabber *)0)->m_bPrevFrameCollided), sizeof( ((CGrabber *)0)->m_bPrevFrameCollided ) },
	{ "idList < idVec3 >", "m_CollNorms", (ptrdiff_t)(&((CGrabber *)0)->m_CollNorms), sizeof( ((CGrabber *)0)->m_CollNorms ) },
	{ "float", "m_MaxForce", (ptrdiff_t)(&((CGrabber *)0)->m_MaxForce), sizeof( ((CGrabber *)0)->m_MaxForce ) },
	{ "idEntityPtr < idEntity >", "m_dragEnt", (ptrdiff_t)(&((CGrabber *)0)->m_dragEnt), sizeof( ((CGrabber *)0)->m_dragEnt ) },
	{ "jointHandle_t", "m_joint", (ptrdiff_t)(&((CGrabber *)0)->m_joint), sizeof( ((CGrabber *)0)->m_joint ) },
	{ "int", "m_id", (ptrdiff_t)(&((CGrabber *)0)->m_id), sizeof( ((CGrabber *)0)->m_id ) },
	{ "idVec3", "m_LocalEntPoint", (ptrdiff_t)(&((CGrabber *)0)->m_LocalEntPoint), sizeof( ((CGrabber *)0)->m_LocalEntPoint ) },
	{ "idVec3", "m_vLocalEntOffset", (ptrdiff_t)(&((CGrabber *)0)->m_vLocalEntOffset), sizeof( ((CGrabber *)0)->m_vLocalEntOffset ) },
	{ "idVec3", "m_vOffset", (ptrdiff_t)(&((CGrabber *)0)->m_vOffset), sizeof( ((CGrabber *)0)->m_vOffset ) },
	{ "bool", "m_bMaintainPitch", (ptrdiff_t)(&((CGrabber *)0)->m_bMaintainPitch), sizeof( ((CGrabber *)0)->m_bMaintainPitch ) },
	{ "idEntityPtr < idPlayer >", "m_player", (ptrdiff_t)(&((CGrabber *)0)->m_player), sizeof( ((CGrabber *)0)->m_player ) },
	{ "CForce_Grab", "m_drag", (ptrdiff_t)(&((CGrabber *)0)->m_drag), sizeof( ((CGrabber *)0)->m_drag ) },
	{ "idRotation", "m_rotation", (ptrdiff_t)(&((CGrabber *)0)->m_rotation), sizeof( ((CGrabber *)0)->m_rotation ) },
	{ "int", "m_rotationAxis", (ptrdiff_t)(&((CGrabber *)0)->m_rotationAxis), sizeof( ((CGrabber *)0)->m_rotationAxis ) },
	{ "idVec2", "m_mousePosition", (ptrdiff_t)(&((CGrabber *)0)->m_mousePosition), sizeof( ((CGrabber *)0)->m_mousePosition ) },
	{ "bool", "m_bAllowPlayerRotation", (ptrdiff_t)(&((CGrabber *)0)->m_bAllowPlayerRotation), sizeof( ((CGrabber *)0)->m_bAllowPlayerRotation ) },
	{ "bool", "m_bAllowPlayerTranslation", (ptrdiff_t)(&((CGrabber *)0)->m_bAllowPlayerTranslation), sizeof( ((CGrabber *)0)->m_bAllowPlayerTranslation ) },
	{ "idList < CGrabbedEnt >", "m_clipList", (ptrdiff_t)(&((CGrabber *)0)->m_clipList), sizeof( ((CGrabber *)0)->m_clipList ) },
	{ "bool", "m_bAttackPressed", (ptrdiff_t)(&((CGrabber *)0)->m_bAttackPressed), sizeof( ((CGrabber *)0)->m_bAttackPressed ) },
	{ "int", "m_ThrowTimer", (ptrdiff_t)(&((CGrabber *)0)->m_ThrowTimer), sizeof( ((CGrabber *)0)->m_ThrowTimer ) },
	{ "int", "m_DragUpTimer", (ptrdiff_t)(&((CGrabber *)0)->m_DragUpTimer), sizeof( ((CGrabber *)0)->m_DragUpTimer ) },
	{ "float", "m_AFBodyLastZ", (ptrdiff_t)(&((CGrabber *)0)->m_AFBodyLastZ), sizeof( ((CGrabber *)0)->m_AFBodyLastZ ) },
	{ "bool", "m_bAFOffGround", (ptrdiff_t)(&((CGrabber *)0)->m_bAFOffGround), sizeof( ((CGrabber *)0)->m_bAFOffGround ) },
	{ "int", "m_DistanceCount", (ptrdiff_t)(&((CGrabber *)0)->m_DistanceCount), sizeof( ((CGrabber *)0)->m_DistanceCount ) },
	{ "int", "m_MaxDistCount", (ptrdiff_t)(&((CGrabber *)0)->m_MaxDistCount), sizeof( ((CGrabber *)0)->m_MaxDistCount ) },
	{ "int", "m_MinHeldDist", (ptrdiff_t)(&((CGrabber *)0)->m_MinHeldDist), sizeof( ((CGrabber *)0)->m_MinHeldDist ) },
	{ "int", "m_LockedHeldDist", (ptrdiff_t)(&((CGrabber *)0)->m_LockedHeldDist), sizeof( ((CGrabber *)0)->m_LockedHeldDist ) },
	{ "idVec3", "m_PreservedPosition", (ptrdiff_t)(&((CGrabber *)0)->m_PreservedPosition), sizeof( ((CGrabber *)0)->m_PreservedPosition ) },
	{ "bool", "m_StoppingPreserving", (ptrdiff_t)(&((CGrabber *)0)->m_StoppingPreserving), sizeof( ((CGrabber *)0)->m_StoppingPreserving ) },
	{ "bool", "m_bObjStuck", (ptrdiff_t)(&((CGrabber *)0)->m_bObjStuck), sizeof( ((CGrabber *)0)->m_bObjStuck ) },
	{ "idEntityPtr < idEntity >", "m_EquippedEnt", (ptrdiff_t)(&((CGrabber *)0)->m_EquippedEnt), sizeof( ((CGrabber *)0)->m_EquippedEnt ) },
	{ "bool", "m_bEquippedEntInWorld", (ptrdiff_t)(&((CGrabber *)0)->m_bEquippedEntInWorld), sizeof( ((CGrabber *)0)->m_bEquippedEntInWorld ) },
	{ "idVec3", "m_vEquippedPosition", (ptrdiff_t)(&((CGrabber *)0)->m_vEquippedPosition), sizeof( ((CGrabber *)0)->m_vEquippedPosition ) },
	{ "int", "m_EquippedEntContents", (ptrdiff_t)(&((CGrabber *)0)->m_EquippedEntContents), sizeof( ((CGrabber *)0)->m_EquippedEntContents ) },
	{ "int", "m_EquippedEntClipMask", (ptrdiff_t)(&((CGrabber *)0)->m_EquippedEntClipMask), sizeof( ((CGrabber *)0)->m_EquippedEntClipMask ) },
	{ "bool", "m_silentMode", (ptrdiff_t)(&((CGrabber *)0)->m_silentMode), sizeof( ((CGrabber *)0)->m_silentMode ) },
	{ NULL, 0 }
};

static classVariableInfo_t CHttpConnection_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t CHttpRequest_typeInfo[] = {
	{ "CHttpConnection *", "_conn", (ptrdiff_t)(&((CHttpRequest *)0)->_conn), sizeof( ((CHttpRequest *)0)->_conn ) },
	{ "std :: string", "_url", (ptrdiff_t)(&((CHttpRequest *)0)->_url), sizeof( ((CHttpRequest *)0)->_url ) },
	{ "std :: vector < char >", "_buffer", (ptrdiff_t)(&((CHttpRequest *)0)->_buffer), sizeof( ((CHttpRequest *)0)->_buffer ) },
	{ "CURL *", "_handle", (ptrdiff_t)(&((CHttpRequest *)0)->_handle), sizeof( ((CHttpRequest *)0)->_handle ) },
	{ "RequestStatus", "_status", (ptrdiff_t)(&((CHttpRequest *)0)->_status), sizeof( ((CHttpRequest *)0)->_status ) },
	{ "std :: string", "_destFilename", (ptrdiff_t)(&((CHttpRequest *)0)->_destFilename), sizeof( ((CHttpRequest *)0)->_destFilename ) },
	{ "std :: ofstream", "_destStream", (ptrdiff_t)(&((CHttpRequest *)0)->_destStream), sizeof( ((CHttpRequest *)0)->_destStream ) },
	{ "bool", "_cancelFlag", (ptrdiff_t)(&((CHttpRequest *)0)->_cancelFlag), sizeof( ((CHttpRequest *)0)->_cancelFlag ) },
	{ "double", "_progress", (ptrdiff_t)(&((CHttpRequest *)0)->_progress), sizeof( ((CHttpRequest *)0)->_progress ) },
	{ "bool _computeSha256 =", "false", (ptrdiff_t)(&((CHttpRequest *)0)->false), sizeof( ((CHttpRequest *)0)->false ) },
	{ "std :: unique_ptr < SHA256_CTX >", "_sha256state", (ptrdiff_t)(&((CHttpRequest *)0)->_sha256state), sizeof( ((CHttpRequest *)0)->_sha256state ) },
	{ NULL, 0 }
};

static classVariableInfo_t IniFile_SectionCompareFunctor_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t IniFile_KeyCompareFunctor_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t IniFile_SectionVisitor_typeInfo[] = {
	{ NULL, 0 }
};

static classVariableInfo_t IniFile_typeInfo[] = {
	{ "SettingMap", "_settings", (ptrdiff_t)(&((IniFile *)0)->_settings), sizeof( ((IniFile *)0)->_settings ) },
	{ NULL, 0 }
};

static classVariableInfo_t CInventoryCursor_typeInfo[] = {
	{ "CInventory *", "m_Inventory", (ptrdiff_t)(&((CInventoryCursor *)0)->m_Inventory), sizeof( ((CInventoryCursor *)0)->m_Inventory ) },
	{ "idList < int >", "m_CategoryIgnore", (ptrdiff_t)(&((CInventoryCursor *)0)->m_CategoryIgnore), sizeof( ((CInventoryCursor *)0)->m_CategoryIgnore ) },
	{ "bool", "m_CategoryLock", (ptrdiff_t)(&((CInventoryCursor *)0)->m_CategoryLock), sizeof( ((CInventoryCursor *)0)->m_CategoryLock ) },
	{ "bool", "m_WrapAround", (ptrdiff_t)(&((CInventoryCursor *)0)->m_WrapAround), sizeof( ((CInventoryCursor *)0)->m_WrapAround ) },
	{ "int", "m_CurrentCategory", (ptrdiff_t)(&((CInventoryCursor *)0)->m_CurrentCategory), sizeof( ((CInventoryCursor *)0)->m_CurrentCategory ) },
	{ "int", "m_CurrentItem", (ptrdiff_t)(&((CInventoryCursor *)0)->m_CurrentItem), sizeof( ((CInventoryCursor *)0)->m_CurrentItem ) },
	{ "int", "m_CursorId", (ptrdiff_t)(&((CInventoryCursor *)0)->m_CursorId), sizeof( ((CInventoryCursor *)0)->m_CursorId ) },
	{ NULL, 0 }
};

static classVariableInfo_t CInventory_typeInfo[] = {
	{ "idEntityPtr < idEntity >", "m_Owner", (ptrdiff_t)(&((CInventory *)0)->m_Owner), sizeof( ((CInventory *)0)->m_Owner ) },
	{ "idList < CInventoryCursorPtr >", "m_Cursor", (ptrdiff_t)(&((CInventory *)0)->m_Cursor), sizeof( ((CInventory *)0)->m_Cursor ) },
	{ "int", "m_HighestCursorId", (ptrdiff_t)(&((CInventory *)0)->m_HighestCursorId), sizeof( ((CInventory *)0)->m_HighestCursorId ) },
	{ "idList < CInventoryCategoryPtr >", "m_Category", (ptrdiff_t)(&((CInventory *)0)->m_Category), sizeof( ((CInventory *)0)->m_Category ) },
	{ "int", "m_LootItemCount", (ptrdiff_t)(&((CInventory *)0)->m_LootItemCount), sizeof( ((CInventory *)0)->m_LootItemCount ) },
	{ "int", "m_Gold", (ptrdiff_t)(&((CInventory *)0)->m_Gold), sizeof( ((CInventory *)0)->m_Gold ) },
	{ "int", "m_Jewelry", (ptrdiff_t)(&((CInventory *)0)->m_Jewelry), sizeof( ((CInventory *)0)->m_Jewelry ) },
	{ "int", "m_Goods", (ptrdiff_t)(&((CInventory *)0)->m_Goods), sizeof( ((CInventory *)0)->m_Goods ) },
	{ NULL, 0 }
};

static classVariableInfo_t CInventoryWeaponItem_typeInfo[] = {
	{ "idStr", "m_WeaponDefName", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_WeaponDefName), sizeof( ((CInventoryWeaponItem *)0)->m_WeaponDefName ) },
	{ "idStr", "m_WeaponName", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_WeaponName), sizeof( ((CInventoryWeaponItem *)0)->m_WeaponName ) },
	{ "idStr", "m_ProjectileDefName", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_ProjectileDefName), sizeof( ((CInventoryWeaponItem *)0)->m_ProjectileDefName ) },
	{ "int", "m_MaxAmmo", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_MaxAmmo), sizeof( ((CInventoryWeaponItem *)0)->m_MaxAmmo ) },
	{ "int", "m_Ammo", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_Ammo), sizeof( ((CInventoryWeaponItem *)0)->m_Ammo ) },
	{ "int", "m_WeaponIndex", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_WeaponIndex), sizeof( ((CInventoryWeaponItem *)0)->m_WeaponIndex ) },
	{ "bool", "m_AllowedEmpty", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_AllowedEmpty), sizeof( ((CInventoryWeaponItem *)0)->m_AllowedEmpty ) },
	{ "bool", "m_IsToggleable", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_IsToggleable), sizeof( ((CInventoryWeaponItem *)0)->m_IsToggleable ) },
	{ "bool", "m_Enabled", (ptrdiff_t)(&((CInventoryWeaponItem *)0)->m_Enabled), sizeof( ((CInventoryWeaponItem *)0)->m_Enabled ) },
	{ NULL, 0 }
};

static classVariableInfo_t CMeleeWeapon_typeInfo[] = {
	{ "idEntityPtr < idActor >", "m_Owner", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_Owner), sizeof( ((CMeleeWeapon *)0)->m_Owner ) },
	{ "idClipModel *", "m_WeapClip", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_WeapClip), sizeof( ((CMeleeWeapon *)0)->m_WeapClip ) },
	{ "idVec3", "m_ClipOffset", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_ClipOffset), sizeof( ((CMeleeWeapon *)0)->m_ClipOffset ) },
	{ "idMat3", "m_ClipRotation", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_ClipRotation), sizeof( ((CMeleeWeapon *)0)->m_ClipRotation ) },
	{ "bool", "m_bClipYawOnly", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bClipYawOnly), sizeof( ((CMeleeWeapon *)0)->m_bClipYawOnly ) },
	{ "float", "m_ClipPitchAngle", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_ClipPitchAngle), sizeof( ((CMeleeWeapon *)0)->m_ClipPitchAngle ) },
	{ "bool", "m_bAttacking", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bAttacking), sizeof( ((CMeleeWeapon *)0)->m_bAttacking ) },
	{ "bool", "m_bParrying", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bParrying), sizeof( ((CMeleeWeapon *)0)->m_bParrying ) },
	{ "idStr", "m_ActionName", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_ActionName), sizeof( ((CMeleeWeapon *)0)->m_ActionName ) },
	{ "bool", "m_bClipAxAlign", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bClipAxAlign), sizeof( ((CMeleeWeapon *)0)->m_bClipAxAlign ) },
	{ "bool", "m_bWorldCollide", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bWorldCollide), sizeof( ((CMeleeWeapon *)0)->m_bWorldCollide ) },
	{ "bool", "m_bModCM", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bModCM), sizeof( ((CMeleeWeapon *)0)->m_bModCM ) },
	{ "EMeleeType", "m_MeleeType", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_MeleeType), sizeof( ((CMeleeWeapon *)0)->m_MeleeType ) },
	{ "idVec3", "m_OldOrigin", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_OldOrigin), sizeof( ((CMeleeWeapon *)0)->m_OldOrigin ) },
	{ "idMat3", "m_OldAxis", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_OldAxis), sizeof( ((CMeleeWeapon *)0)->m_OldAxis ) },
	{ "bool", "m_bParryStopOnSuccess", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bParryStopOnSuccess), sizeof( ((CMeleeWeapon *)0)->m_bParryStopOnSuccess ) },
	{ "bool", "m_bFailsafeTrace", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bFailsafeTrace), sizeof( ((CMeleeWeapon *)0)->m_bFailsafeTrace ) },
	{ "idVec3", "m_vFailsafeTraceStart", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_vFailsafeTraceStart), sizeof( ((CMeleeWeapon *)0)->m_vFailsafeTraceStart ) },
	{ "idVec3", "m_vFailsafeTraceEnd", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_vFailsafeTraceEnd), sizeof( ((CMeleeWeapon *)0)->m_vFailsafeTraceEnd ) },
	{ "float", "m_StopMass", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_StopMass), sizeof( ((CMeleeWeapon *)0)->m_StopMass ) },
	{ "int", "m_ParticlesMade", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_ParticlesMade), sizeof( ((CMeleeWeapon *)0)->m_ParticlesMade ) },
	{ "bool", "m_bModAICMs", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_bModAICMs), sizeof( ((CMeleeWeapon *)0)->m_bModAICMs ) },
	{ "idList < idEntityPtr < idAI > >", "m_AIWithModCMs", (ptrdiff_t)(&((CMeleeWeapon *)0)->m_AIWithModCMs), sizeof( ((CMeleeWeapon *)0)->m_AIWithModCMs ) },
	{ NULL, 0 }
};

static classVariableInfo_t CDownload_UserData_typeInfo[] = {
	{ "int", "id", (ptrdiff_t)(&((CDownload::UserData *)0)->id), sizeof( ((CDownload::UserData *)0)->id ) },
	{ "int", "id2", (ptrdiff_t)(&((CDownload::UserData *)0)->id2), sizeof( ((CDownload::UserData *)0)->id2 ) },
	{ "void *", "ptr", (ptrdiff_t)(&((CDownload::UserData *)0)->ptr), sizeof( ((CDownload::UserData *)0)->ptr ) },
	{ NULL, 0 }
};

static classVariableInfo_t CDownload_typeInfo[] = {
	{ "idStringList", "_urls", (ptrdiff_t)(&((CDownload *)0)->_urls), sizeof( ((CDownload *)0)->_urls ) },
	{ "int", "_curUrl", (ptrdiff_t)(&((CDownload *)0)->_curUrl), sizeof( ((CDownload *)0)->_curUrl ) },
	{ "idStr", "_destFilename", (ptrdiff_t)(&((CDownload *)0)->_destFilename), sizeof( ((CDownload *)0)->_destFilename ) },
	{ "idStr", "_tempFilename", (ptrdiff_t)(&((CDownload *)0)->_tempFilename), sizeof( ((CDownload *)0)->_tempFilename ) },
	{ "DownloadStatus", "_status", (ptrdiff_t)(&((CDownload *)0)->_status), sizeof( ((CDownload *)0)->_status ) },
	{ "CHttpRequestPtr", "_request", (ptrdiff_t)(&((CDownload *)0)->_request), sizeof( ((CDownload *)0)->_request ) },
	{ "ThreadPtr", "_thread", (ptrdiff_t)(&((CDownload *)0)->_thread), sizeof( ((CDownload *)0)->_thread ) },
	{ "bool", "_pk4CheckEnabled", (ptrdiff_t)(&((CDownload *)0)->_pk4CheckEnabled), sizeof( ((CDownload *)0)->_pk4CheckEnabled ) },
	{ "idStr", "_expectedSha256", (ptrdiff_t)(&((CDownload *)0)->_expectedSha256), sizeof( ((CDownload *)0)->_expectedSha256 ) },
	{ "UserData", "_userData", (ptrdiff_t)(&((CDownload *)0)->_userData), sizeof( ((CDownload *)0)->_userData ) },
	{ "int", "_relatedDownload", (ptrdiff_t)(&((CDownload *)0)->_relatedDownload), sizeof( ((CDownload *)0)->_relatedDownload ) },
	{ NULL, 0 }
};

static classVariableInfo_t CDownloadManager_typeInfo[] = {
	{ "Downloads", "_downloads", (ptrdiff_t)(&((CDownloadManager *)0)->_downloads), sizeof( ((CDownloadManager *)0)->_downloads ) },
	{ "int", "_nextAvailableId", (ptrdiff_t)(&((CDownloadManager *)0)->_nextAvailableId), sizeof( ((CDownloadManager *)0)->_nextAvailableId ) },
	{ "bool", "_allDownloadsDone", (ptrdiff_t)(&((CDownloadManager *)0)->_allDownloadsDone), sizeof( ((CDownloadManager *)0)->_allDownloadsDone ) },
	{ NULL, 0 }
};

static classVariableInfo_t CModInfo_typeInfo[] = {
	{ "CModInfoDeclPtr", "_decl", (ptrdiff_t)(&((CModInfo *)0)->_decl), sizeof( ((CModInfo *)0)->_decl ) },
	{ "bool", "_declDirty", (ptrdiff_t)(&((CModInfo *)0)->_declDirty), sizeof( ((CModInfo *)0)->_declDirty ) },
	{ "std :: size_t", "_modFolderSize", (ptrdiff_t)(&((CModInfo *)0)->_modFolderSize), sizeof( ((CModInfo *)0)->_modFolderSize ) },
	{ "bool", "_modFolderSizeComputed", (ptrdiff_t)(&((CModInfo *)0)->_modFolderSizeComputed), sizeof( ((CModInfo *)0)->_modFolderSizeComputed ) },
	{ "idStr", "modName", (ptrdiff_t)(&((CModInfo *)0)->modName), sizeof( ((CModInfo *)0)->modName ) },
	{ "idStr", "displayName", (ptrdiff_t)(&((CModInfo *)0)->displayName), sizeof( ((CModInfo *)0)->displayName ) },
	{ "idStr", "pathToFMPackage", (ptrdiff_t)(&((CModInfo *)0)->pathToFMPackage), sizeof( ((CModInfo *)0)->pathToFMPackage ) },
	{ "idStr", "description", (ptrdiff_t)(&((CModInfo *)0)->description), sizeof( ((CModInfo *)0)->description ) },
	{ "idStr", "author", (ptrdiff_t)(&((CModInfo *)0)->author), sizeof( ((CModInfo *)0)->author ) },
	{ "idStr", "image", (ptrdiff_t)(&((CModInfo *)0)->image), sizeof( ((CModInfo *)0)->image ) },
	{ "idList < idStr >", "_missionTitles", (ptrdiff_t)(&((CModInfo *)0)->_missionTitles), sizeof( ((CModInfo *)0)->_missionTitles ) },
	{ "idStr", "requiredVersionStr", (ptrdiff_t)(&((CModInfo *)0)->requiredVersionStr), sizeof( ((CModInfo *)0)->requiredVersionStr ) },
	{ "int", "requiredMajor", (ptrdiff_t)(&((CModInfo *)0)->requiredMajor), sizeof( ((CModInfo *)0)->requiredMajor ) },
	{ "int", "requiredMinor", (ptrdiff_t)(&((CModInfo *)0)->requiredMinor), sizeof( ((CModInfo *)0)->requiredMinor ) },
	{ "bool", "isL10NpackInstalled", (ptrdiff_t)(&((CModInfo *)0)->isL10NpackInstalled), sizeof( ((CModInfo *)0)->isL10NpackInstalled ) },
	{ NULL, 0 }
};

static classVariableInfo_t CMissionDB_typeInfo[] = {
	{ "MissionInfoMap", "_missionInfo", (ptrdiff_t)(&((CMissionDB *)0)->_missionInfo), sizeof( ((CMissionDB *)0)->_missionInfo ) },
	{ NULL, 0 }
};

static classVariableInfo_t stdext_path_typeInfo[] = {
	{ "std :: unique_ptr < path_impl >", "d", (ptrdiff_t)(&((stdext::path *)0)->d), sizeof( ((stdext::path *)0)->d ) },
	{ NULL, 0 }
};

static classVariableInfo_t MissionScreenshot_typeInfo[] = {
	{ "idStr", "filename", (ptrdiff_t)(&((MissionScreenshot *)0)->filename), sizeof( ((MissionScreenshot *)0)->filename ) },
	{ "idStr", "serverRelativeUrl", (ptrdiff_t)(&((MissionScreenshot *)0)->serverRelativeUrl), sizeof( ((MissionScreenshot *)0)->serverRelativeUrl ) },
	{ NULL, 0 }
};

static classVariableInfo_t DownloadableMod_typeInfo[] = {
	{ "int", "id", (ptrdiff_t)(&((DownloadableMod *)0)->id), sizeof( ((DownloadableMod *)0)->id ) },
	{ "idStr", "modName", (ptrdiff_t)(&((DownloadableMod *)0)->modName), sizeof( ((DownloadableMod *)0)->modName ) },
	{ "idStr", "title", (ptrdiff_t)(&((DownloadableMod *)0)->title), sizeof( ((DownloadableMod *)0)->title ) },
	{ "idStr", "author", (ptrdiff_t)(&((DownloadableMod *)0)->author), sizeof( ((DownloadableMod *)0)->author ) },
	{ "float", "sizeMB", (ptrdiff_t)(&((DownloadableMod *)0)->sizeMB), sizeof( ((DownloadableMod *)0)->sizeMB ) },
	{ "Type", "type", (ptrdiff_t)(&((DownloadableMod *)0)->type), sizeof( ((DownloadableMod *)0)->type ) },
	{ "idStr", "releaseDate", (ptrdiff_t)(&((DownloadableMod *)0)->releaseDate), sizeof( ((DownloadableMod *)0)->releaseDate ) },
	{ "idStr", "language", (ptrdiff_t)(&((DownloadableMod *)0)->language), sizeof( ((DownloadableMod *)0)->language ) },
	{ "int", "version", (ptrdiff_t)(&((DownloadableMod *)0)->version), sizeof( ((DownloadableMod *)0)->version ) },
	{ "bool", "isUpdate", (ptrdiff_t)(&((DownloadableMod *)0)->isUpdate), sizeof( ((DownloadableMod *)0)->isUpdate ) },
	{ "bool", "needsL10NpackDownload", (ptrdiff_t)(&((DownloadableMod *)0)->needsL10NpackDownload), sizeof( ((DownloadableMod *)0)->needsL10NpackDownload ) },
	{ "idStringList", "missionUrls", (ptrdiff_t)(&((DownloadableMod *)0)->missionUrls), sizeof( ((DownloadableMod *)0)->missionUrls ) },
	{ "idStr", "missionSha256", (ptrdiff_t)(&((DownloadableMod *)0)->missionSha256), sizeof( ((DownloadableMod *)0)->missionSha256 ) },
	{ "idStringList", "l10nPackUrls", (ptrdiff_t)(&((DownloadableMod *)0)->l10nPackUrls), sizeof( ((DownloadableMod *)0)->l10nPackUrls ) },
	{ "idStr", "l10nPackSha256", (ptrdiff_t)(&((DownloadableMod *)0)->l10nPackSha256), sizeof( ((DownloadableMod *)0)->l10nPackSha256 ) },
	{ "bool", "detailsLoaded", (ptrdiff_t)(&((DownloadableMod *)0)->detailsLoaded), sizeof( ((DownloadableMod *)0)->detailsLoaded ) },
	{ "idStr", "description", (ptrdiff_t)(&((DownloadableMod *)0)->description), sizeof( ((DownloadableMod *)0)->description ) },
	{ "idList < MissionScreenshotPtr >", "screenshots", (ptrdiff_t)(&((DownloadableMod *)0)->screenshots), sizeof( ((DownloadableMod *)0)->screenshots ) },
	{ NULL, 0 }
};

static classVariableInfo_t MapSequenceElement_typeInfo[] = {
	{ "idList < idStr >", "mapNames", (ptrdiff_t)(&((MapSequenceElement *)0)->mapNames), sizeof( ((MapSequenceElement *)0)->mapNames ) },
	{ NULL, 0 }
};

static classVariableInfo_t CMissionManager_typeInfo[] = {
	{ "CMissionDBPtr", "_missionDB", (ptrdiff_t)(&((CMissionManager *)0)->_missionDB), sizeof( ((CMissionManager *)0)->_missionDB ) },
	{ "idStringList", "_availableMods", (ptrdiff_t)(&((CMissionManager *)0)->_availableMods), sizeof( ((CMissionManager *)0)->_availableMods ) },
	{ "idStringList", "_newFoundMods", (ptrdiff_t)(&((CMissionManager *)0)->_newFoundMods), sizeof( ((CMissionManager *)0)->_newFoundMods ) },
	{ "idStr", "_curStartingMap", (ptrdiff_t)(&((CMissionManager *)0)->_curStartingMap), sizeof( ((CMissionManager *)0)->_curStartingMap ) },
	{ "MapSequence", "_mapSequence", (ptrdiff_t)(&((CMissionManager *)0)->_mapSequence), sizeof( ((CMissionManager *)0)->_mapSequence ) },
	{ "int", "_curMissionIndex", (ptrdiff_t)(&((CMissionManager *)0)->_curMissionIndex), sizeof( ((CMissionManager *)0)->_curMissionIndex ) },
	{ "DownloadableModList", "_downloadableMods", (ptrdiff_t)(&((CMissionManager *)0)->_downloadableMods), sizeof( ((CMissionManager *)0)->_downloadableMods ) },
	{ "int", "_refreshModListDownloadId", (ptrdiff_t)(&((CMissionManager *)0)->_refreshModListDownloadId), sizeof( ((CMissionManager *)0)->_refreshModListDownloadId ) },
	{ "int", "_modDetailsDownloadId", (ptrdiff_t)(&((CMissionManager *)0)->_modDetailsDownloadId), sizeof( ((CMissionManager *)0)->_modDetailsDownloadId ) },
	{ "int", "_modScreenshotDownloadId", (ptrdiff_t)(&((CMissionManager *)0)->_modScreenshotDownloadId), sizeof( ((CMissionManager *)0)->_modScreenshotDownloadId ) },
	{ NULL, 0 }
};

static classVariableInfo_t CModInfoDecl_typeInfo[] = {
	{ "idStr", "_bodyText", (ptrdiff_t)(&((CModInfoDecl *)0)->_bodyText), sizeof( ((CModInfoDecl *)0)->_bodyText ) },
	{ "idDict", "data", (ptrdiff_t)(&((CModInfoDecl *)0)->data), sizeof( ((CModInfoDecl *)0)->data ) },
	{ NULL, 0 }
};

static classTypeInfo_t classTypeInfo[] = {
	{ "idScopedGlobalHeap", "", sizeof(idScopedGlobalHeap), idScopedGlobalHeap_typeInfo },
	{ "signalHandle_t", "", sizeof(signalHandle_t), signalHandle_t_typeInfo },
	{ "idSysThreadLocalStorage", "", sizeof(idSysThreadLocalStorage), idSysThreadLocalStorage_typeInfo },
	{ "sysEvent_t", "", sizeof(sysEvent_t), sysEvent_t_typeInfo },
	{ "debugStackFrame_t", "", sizeof(debugStackFrame_t), debugStackFrame_t_typeInfo },
	{ "netadr_t", "", sizeof(netadr_t), netadr_t_typeInfo },
	{ "idPort", "", sizeof(idPort), idPort_typeInfo },
	{ "idTCP", "", sizeof(idTCP), idTCP_typeInfo },
	{ "idSys", "", sizeof(idSys), idSys_typeInfo },
	{ "idLib", "", sizeof(idLib), idLib_typeInfo },
	{ "idException", "", sizeof(idException), idException_typeInfo },
	{ "memoryStats_t", "", sizeof(memoryStats_t), memoryStats_t_typeInfo },
//	{ "idBlockAlloc< class type , int blockSize >::element_t", "", sizeof(idBlockAlloc< class type , int blockSize >::element_t), idBlockAlloc_class_type_int_blockSize__element_t_typeInfo },
//	{ "idBlockAlloc< class type , int blockSize >::block_t", "", sizeof(idBlockAlloc< class type , int blockSize >::block_t), idBlockAlloc_class_type_int_blockSize__block_t_typeInfo },
//	{ "idBlockAlloc< class type , int blockSize >", "", sizeof(idBlockAlloc< class type , int blockSize >), idBlockAlloc_class_type_int_blockSize__typeInfo },
//	{ "idDynamicAlloc< class type , int baseBlockSize , int minBlockSize >", "", sizeof(idDynamicAlloc< class type , int baseBlockSize , int minBlockSize >), idDynamicAlloc_class_type_int_baseBlockSize_int_minBlockSize__typeInfo },
//	{ "idBTreeNode< class objType , class keyType >", "", sizeof(idBTreeNode< class objType , class keyType >), idBTreeNode_class_objType_class_keyType__typeInfo },
//	{ "idBTree< class objType , class keyType , int maxChildrenPerNode >", "", sizeof(idBTree< class objType , class keyType , int maxChildrenPerNode >), idBTree_class_objType_class_keyType_int_maxChildrenPerNode__typeInfo },
//	{ "idDynamicBlock< class type >", "", sizeof(idDynamicBlock< class type >), idDynamicBlock_class_type__typeInfo },
//	{ "idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize >", "", sizeof(idDynamicBlockAlloc< class type , int baseBlockSize , int minBlockSize >), idDynamicBlockAlloc_class_type_int_baseBlockSize_int_minBlockSize__typeInfo },
//	{ "idList< class type >", "", sizeof(idList< class type >), idList_class_type__typeInfo },
	{ "idSIMD", "", sizeof(idSIMD), idSIMD_typeInfo },
	{ "idSIMDProcessor", "", sizeof(idSIMDProcessor), idSIMDProcessor_typeInfo },
	{ "idMath::_flint", "", sizeof(idMath::_flint), idMath__flint_typeInfo },
	{ "idMath", "", sizeof(idMath), idMath_typeInfo },
	{ "idIgnoreFpExceptions", "", sizeof(idIgnoreFpExceptions), idIgnoreFpExceptions_typeInfo },
	{ "idRandom", "", sizeof(idRandom), idRandom_typeInfo },
	{ "idRandom2", "", sizeof(idRandom2), idRandom2_typeInfo },
	{ "idComplex", "", sizeof(idComplex), idComplex_typeInfo },
	{ "idVec2", "", sizeof(idVec2), idVec2_typeInfo },
	{ "idVec3", "", sizeof(idVec3), idVec3_typeInfo },
	{ "idVec4", "", sizeof(idVec4), idVec4_typeInfo },
	{ "idVec5", "", sizeof(idVec5), idVec5_typeInfo },
	{ "idVec6", "", sizeof(idVec6), idVec6_typeInfo },
	{ "idVecX", "", sizeof(idVecX), idVecX_typeInfo },
	{ "idPolar3", "", sizeof(idPolar3), idPolar3_typeInfo },
	{ "idVec3d", "", sizeof(idVec3d), idVec3d_typeInfo },
	{ "idVec2d", "", sizeof(idVec2d), idVec2d_typeInfo },
	{ "idMat2", "", sizeof(idMat2), idMat2_typeInfo },
	{ "idMat3", "", sizeof(idMat3), idMat3_typeInfo },
	{ "idMat4", "", sizeof(idMat4), idMat4_typeInfo },
	{ "idMat5", "", sizeof(idMat5), idMat5_typeInfo },
	{ "idMat6", "", sizeof(idMat6), idMat6_typeInfo },
	{ "idMatX", "", sizeof(idMatX), idMatX_typeInfo },
	{ "idAngles", "", sizeof(idAngles), idAngles_typeInfo },
	{ "idQuat", "", sizeof(idQuat), idQuat_typeInfo },
	{ "idCQuat", "", sizeof(idCQuat), idCQuat_typeInfo },
	{ "idRotation", "", sizeof(idRotation), idRotation_typeInfo },
	{ "idPlane", "", sizeof(idPlane), idPlane_typeInfo },
	{ "idPluecker", "", sizeof(idPluecker), idPluecker_typeInfo },
	{ "idPolynomial", "", sizeof(idPolynomial), idPolynomial_typeInfo },
//	{ "idExtrapolate< class type >", "", sizeof(idExtrapolate< class type >), idExtrapolate_class_type__typeInfo },
//	{ "idInterpolate< class type >", "", sizeof(idInterpolate< class type >), idInterpolate_class_type__typeInfo },
//	{ "idInterpolateAccelDecelLinear< class type >", "", sizeof(idInterpolateAccelDecelLinear< class type >), idInterpolateAccelDecelLinear_class_type__typeInfo },
//	{ "idInterpolateAccelDecelSine< class type >", "", sizeof(idInterpolateAccelDecelSine< class type >), idInterpolateAccelDecelSine_class_type__typeInfo },
//	{ "idCurve< class type >", "", sizeof(idCurve< class type >), idCurve_class_type__typeInfo },
//	{ "idCurve_Bezier< class type >", "idCurve< type >", sizeof(idCurve_Bezier< class type >), idCurve_Bezier_class_type__typeInfo },
//	{ "idCurve_QuadraticBezier< class type >", "idCurve< type >", sizeof(idCurve_QuadraticBezier< class type >), idCurve_QuadraticBezier_class_type__typeInfo },
//	{ "idCurve_CubicBezier< class type >", "idCurve< type >", sizeof(idCurve_CubicBezier< class type >), idCurve_CubicBezier_class_type__typeInfo },
//	{ "idCurve_Spline< class type >", "idCurve< type >", sizeof(idCurve_Spline< class type >), idCurve_Spline_class_type__typeInfo },
//	{ "idCurve_NaturalCubicSpline< class type >", "idCurve_Spline< type >", sizeof(idCurve_NaturalCubicSpline< class type >), idCurve_NaturalCubicSpline_class_type__typeInfo },
//	{ "idCurve_CatmullRomSpline< class type >", "idCurve_Spline< type >", sizeof(idCurve_CatmullRomSpline< class type >), idCurve_CatmullRomSpline_class_type__typeInfo },
//	{ "idCurve_KochanekBartelsSpline< class type >", "idCurve_Spline< type >", sizeof(idCurve_KochanekBartelsSpline< class type >), idCurve_KochanekBartelsSpline_class_type__typeInfo },
//	{ "idCurve_BSpline< class type >", "idCurve_Spline< type >", sizeof(idCurve_BSpline< class type >), idCurve_BSpline_class_type__typeInfo },
//	{ "idCurve_UniformCubicBSpline< class type >", "idCurve_BSpline< type >", sizeof(idCurve_UniformCubicBSpline< class type >), idCurve_UniformCubicBSpline_class_type__typeInfo },
//	{ "idCurve_NonUniformBSpline< class type >", "idCurve_BSpline< type >", sizeof(idCurve_NonUniformBSpline< class type >), idCurve_NonUniformBSpline_class_type__typeInfo },
//	{ "idCurve_NURBS< class type >", "idCurve_NonUniformBSpline< type >", sizeof(idCurve_NURBS< class type >), idCurve_NURBS_class_type__typeInfo },
	{ "idODE", "", sizeof(idODE), idODE_typeInfo },
	{ "idODE_Euler", "idODE", sizeof(idODE_Euler), idODE_Euler_typeInfo },
	{ "idODE_Midpoint", "idODE", sizeof(idODE_Midpoint), idODE_Midpoint_typeInfo },
	{ "idODE_RK4", "idODE", sizeof(idODE_RK4), idODE_RK4_typeInfo },
	{ "idODE_RK4Adaptive", "idODE", sizeof(idODE_RK4Adaptive), idODE_RK4Adaptive_typeInfo },
	{ "idLCP", "", sizeof(idLCP), idLCP_typeInfo },
	{ "idSphere", "", sizeof(idSphere), idSphere_typeInfo },
	{ "idBounds", "", sizeof(idBounds), idBounds_typeInfo },
	{ "idBox", "", sizeof(idBox), idBox_typeInfo },
	{ "idFrustum", "", sizeof(idFrustum), idFrustum_typeInfo },
	{ "frustumCorners_t", "", sizeof(frustumCorners_t), frustumCorners_t_typeInfo },
	{ "idRenderMatrix", "", sizeof(idRenderMatrix), idRenderMatrix_typeInfo },
	{ "idDrawVert", "", sizeof(idDrawVert), idDrawVert_typeInfo },
	{ "idJointQuat", "", sizeof(idJointQuat), idJointQuat_typeInfo },
	{ "idJointMat", "", sizeof(idJointMat), idJointMat_typeInfo },
	{ "idWinding", "", sizeof(idWinding), idWinding_typeInfo },
	{ "idFixedWinding", "idWinding", sizeof(idFixedWinding), idFixedWinding_typeInfo },
	{ "idWinding2D", "", sizeof(idWinding2D), idWinding2D_typeInfo },
	{ "surfaceEdge_t", "", sizeof(surfaceEdge_t), surfaceEdge_t_typeInfo },
	{ "idSurface", "", sizeof(idSurface), idSurface_typeInfo },
	{ "idSurface_Patch", "idSurface", sizeof(idSurface_Patch), idSurface_Patch_typeInfo },
	{ "idSurface_Polytope", "idSurface", sizeof(idSurface_Polytope), idSurface_Polytope_typeInfo },
	{ "idSurface_SweptSpline", "idSurface", sizeof(idSurface_SweptSpline), idSurface_SweptSpline_typeInfo },
	{ "traceModelEdge_t", "", sizeof(traceModelEdge_t), traceModelEdge_t_typeInfo },
	{ "traceModelPoly_t", "", sizeof(traceModelPoly_t), traceModelPoly_t_typeInfo },
	{ "idTraceModel", "", sizeof(idTraceModel), idTraceModel_typeInfo },
	{ "idStr", "", sizeof(idStr), idStr_typeInfo },
	{ "idToken", "idStr", sizeof(idToken), idToken_typeInfo },
	{ "punctuation_t", "", sizeof(punctuation_t), punctuation_t_typeInfo },
	{ "idLexer", "", sizeof(idLexer), idLexer_typeInfo },
	{ "define_t", "", sizeof(define_t), define_t_typeInfo },
	{ "indent_t", "", sizeof(indent_t), indent_t_typeInfo },
	{ "idParser", "", sizeof(idParser), idParser_typeInfo },
	{ "idCmdArgs", "", sizeof(idCmdArgs), idCmdArgs_typeInfo },
	{ "idLess", "", sizeof(idLess), idLess_typeInfo },
	{ "idHashIndex", "", sizeof(idHashIndex), idHashIndex_typeInfo },
	{ "_idHashIndex_showarray_helper", "", sizeof(_idHashIndex_showarray_helper), _idHashIndex_showarray_helper_typeInfo },
//	{ "idHashTable< class Type >::hashnode_s", "", sizeof(idHashTable< class Type >::hashnode_s), idHashTable_class_Type__hashnode_s_typeInfo },
//	{ "idHashTable< class Type >", "", sizeof(idHashTable< class Type >), idHashTable_class_Type__typeInfo },
	{ "idEquality", "", sizeof(idEquality), idEquality_typeInfo },
	{ "idEqualityStrI", "", sizeof(idEqualityStrI), idEqualityStrI_typeInfo },
	{ "idHashFunctionStrI", "", sizeof(idHashFunctionStrI), idHashFunctionStrI_typeInfo },
//	{ "idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality >", "", sizeof(idHashMap< class Key , class Value , class HashFunction = idHashFunction < Key > , class EqualFunction = idEquality >), idHashMap_class_Key_class_Value_class_HashFunction_=_idHashFunction__Key__class_EqualFunction_=_idEquality__typeInfo },
//	{ "idStaticList< class type , int size >", "", sizeof(idStaticList< class type , int size >), idStaticList_class_type_int_size__typeInfo },
//	{ "idLinkList< class type >", "", sizeof(idLinkList< class type >), idLinkList_class_type__typeInfo },
//	{ "idHierarchy< class type >", "", sizeof(idHierarchy< class type >), idHierarchy_class_type__typeInfo },
//	{ "idQueueTemplate< class type , int nextOffset >", "", sizeof(idQueueTemplate< class type , int nextOffset >), idQueueTemplate_class_type_int_nextOffset__typeInfo },
//	{ "idStackTemplate< class type , int nextOffset >", "", sizeof(idStackTemplate< class type , int nextOffset >), idStackTemplate_class_type_int_nextOffset__typeInfo },
	{ "idPoolStr", "idStr", sizeof(idPoolStr), idPoolStr_typeInfo },
	{ "idStrPool", "", sizeof(idStrPool), idStrPool_typeInfo },
//	{ "idVectorSet< class type , int dimension >", "idList< type >", sizeof(idVectorSet< class type , int dimension >), idVectorSet_class_type_int_dimension__typeInfo },
//	{ "idVectorSubset< class type , int dimension >", "", sizeof(idVectorSubset< class type , int dimension >), idVectorSubset_class_type_int_dimension__typeInfo },
	{ "idPlaneSet", "idList< idPlane >", sizeof(idPlaneSet), idPlaneSet_typeInfo },
	{ "MD4_CTX", "", sizeof(MD4_CTX), MD4_CTX_typeInfo },
	{ "idKeyValue", "", sizeof(idKeyValue), idKeyValue_typeInfo },
	{ "idDict", "", sizeof(idDict), idDict_typeInfo },
	{ "idLangKeyValue", "", sizeof(idLangKeyValue), idLangKeyValue_typeInfo },
	{ "idLangDict", "", sizeof(idLangDict), idLangDict_typeInfo },
	{ "idBitMsg", "", sizeof(idBitMsg), idBitMsg_typeInfo },
	{ "idBitMsgDelta", "", sizeof(idBitMsgDelta), idBitMsgDelta_typeInfo },
	{ "idMapPrimitive", "", sizeof(idMapPrimitive), idMapPrimitive_typeInfo },
	{ "idMapBrushSide", "", sizeof(idMapBrushSide), idMapBrushSide_typeInfo },
	{ "idMapBrush", "idMapPrimitive", sizeof(idMapBrush), idMapBrush_typeInfo },
	{ "idMapPatch", "idSurface_Patch", sizeof(idMapPatch), idMapPatch_typeInfo },
	{ "idMapEntity", "", sizeof(idMapEntity), idMapEntity_typeInfo },
	{ "idMapFile", "", sizeof(idMapFile), idMapFile_typeInfo },
	{ "idMapReloadInfo::NameAndIdx", "", sizeof(idMapReloadInfo::NameAndIdx), idMapReloadInfo_NameAndIdx_typeInfo },
	{ "idMapReloadInfo", "", sizeof(idMapReloadInfo), idMapReloadInfo_typeInfo },
	{ "idTimer", "", sizeof(idTimer), idTimer_typeInfo },
	{ "idTimerReport", "", sizeof(idTimerReport), idTimerReport_typeInfo },
	{ "idSysMutex", "", sizeof(idSysMutex), idSysMutex_typeInfo },
	{ "idScopedCriticalSection", "", sizeof(idScopedCriticalSection), idScopedCriticalSection_typeInfo },
	{ "idSysSignal", "", sizeof(idSysSignal), idSysSignal_typeInfo },
	{ "idSysInterlockedInteger", "", sizeof(idSysInterlockedInteger), idSysInterlockedInteger_typeInfo },
//	{ "idSysInterlockedPointer< typename T >", "", sizeof(idSysInterlockedPointer< typename T >), idSysInterlockedPointer_typename_T__typeInfo },
	{ "idSysThread", "", sizeof(idSysThread), idSysThread_typeInfo },
//	{ "idSysWorkerThreadGroup< class threadType >", "", sizeof(idSysWorkerThreadGroup< class threadType >), idSysWorkerThreadGroup_class_threadType__typeInfo },
	{ "idSysThreadSynchronizer", "", sizeof(idSysThreadSynchronizer), idSysThreadSynchronizer_typeInfo },
	{ "RevisionTracker", "", sizeof(RevisionTracker), RevisionTracker_typeInfo },
	{ "idParallelJobList", "", sizeof(idParallelJobList), idParallelJobList_typeInfo },
	{ "idParallelJobManager", "", sizeof(idParallelJobManager), idParallelJobManager_typeInfo },
	{ "idParallelJobRegistration", "", sizeof(idParallelJobRegistration), idParallelJobRegistration_typeInfo },
	{ "idCmdSystem", "", sizeof(idCmdSystem), idCmdSystem_typeInfo },
	{ "idCVar", "", sizeof(idCVar), idCVar_typeInfo },
	{ "idCVarInt", "idCVar", sizeof(idCVarInt), idCVarInt_typeInfo },
	{ "idCVarBool", "idCVar", sizeof(idCVarBool), idCVarBool_typeInfo },
	{ "idCVarSystem", "", sizeof(idCVarSystem), idCVarSystem_typeInfo },
	{ "MemInfo_t", "", sizeof(MemInfo_t), MemInfo_t_typeInfo },
	{ "idCommon", "", sizeof(idCommon), idCommon_typeInfo },
	{ "ErrorReportedException", "", sizeof(ErrorReportedException), ErrorReportedException_typeInfo },
	{ "I18N", "", sizeof(I18N), I18N_typeInfo },
	{ "idFile", "", sizeof(idFile), idFile_typeInfo },
	{ "idFile_Memory", "idFile", sizeof(idFile_Memory), idFile_Memory_typeInfo },
	{ "idFile_BitMsg", "idFile", sizeof(idFile_BitMsg), idFile_BitMsg_typeInfo },
	{ "idFile_Permanent", "idFile", sizeof(idFile_Permanent), idFile_Permanent_typeInfo },
	{ "idFile_InZip", "idFile", sizeof(idFile_InZip), idFile_InZip_typeInfo },
	{ "urlDownload_t", "", sizeof(urlDownload_t), urlDownload_t_typeInfo },
	{ "fileDownload_t", "", sizeof(fileDownload_t), fileDownload_t_typeInfo },
	{ "backgroundDownload_t", "", sizeof(backgroundDownload_t), backgroundDownload_t_typeInfo },
	{ "idFileList", "", sizeof(idFileList), idFileList_typeInfo },
	{ "idModList", "", sizeof(idModList), idModList_typeInfo },
	{ "idFileSystem", "", sizeof(idFileSystem), idFileSystem_typeInfo },
	{ "usercmd_t", "", sizeof(usercmd_t), usercmd_t_typeInfo },
	{ "idUsercmdGen", "", sizeof(idUsercmdGen), idUsercmdGen_typeInfo },
	{ "idDeclBase", "", sizeof(idDeclBase), idDeclBase_typeInfo },
	{ "idDecl", "", sizeof(idDecl), idDecl_typeInfo },
	{ "idDeclManager", "", sizeof(idDeclManager), idDeclManager_typeInfo },
	{ "idDeclTable", "idDecl", sizeof(idDeclTable), idDeclTable_typeInfo },
	{ "skinMapping_t", "", sizeof(skinMapping_t), skinMapping_t_typeInfo },
	{ "idDeclSkin", "idDecl", sizeof(idDeclSkin), idDeclSkin_typeInfo },
	{ "idDeclEntityDef", "idDecl", sizeof(idDeclEntityDef), idDeclEntityDef_typeInfo },
	{ "idFXSingleAction", "", sizeof(idFXSingleAction), idFXSingleAction_typeInfo },
	{ "idDeclFX", "idDecl", sizeof(idDeclFX), idDeclFX_typeInfo },
	{ "idParticleParm", "", sizeof(idParticleParm), idParticleParm_typeInfo },
	{ "idPartStageData", "", sizeof(idPartStageData), idPartStageData_typeInfo },
	{ "idPartSysData", "", sizeof(idPartSysData), idPartSysData_typeInfo },
	{ "idParticleData", "", sizeof(idParticleData), idParticleData_typeInfo },
	{ "idPartSysEmit", "", sizeof(idPartSysEmit), idPartSysEmit_typeInfo },
	{ "idPartSysCutoffTextureInfo", "", sizeof(idPartSysCutoffTextureInfo), idPartSysCutoffTextureInfo_typeInfo },
	{ "idPartSysEmitterSignature", "", sizeof(idPartSysEmitterSignature), idPartSysEmitterSignature_typeInfo },
	{ "idParticleStage", "idPartStageData", sizeof(idParticleStage), idParticleStage_typeInfo },
	{ "idDeclParticle", "idDecl", sizeof(idDeclParticle), idDeclParticle_typeInfo },
	{ "idAFVector", "", sizeof(idAFVector), idAFVector_typeInfo },
	{ "idDeclAF_Body", "", sizeof(idDeclAF_Body), idDeclAF_Body_typeInfo },
	{ "idDeclAF_Constraint", "", sizeof(idDeclAF_Constraint), idDeclAF_Constraint_typeInfo },
	{ "idDeclAF", "idDecl", sizeof(idDeclAF), idDeclAF_typeInfo },
	{ "cinData_t", "", sizeof(cinData_t), cinData_t_typeInfo },
	{ "idCinematic", "", sizeof(idCinematic), idCinematic_typeInfo },
	{ "idSndWindow", "idCinematic", sizeof(idSndWindow), idSndWindow_typeInfo },
	{ "decalInfo_t", "", sizeof(decalInfo_t), decalInfo_t_typeInfo },
	{ "expOp_t", "", sizeof(expOp_t), expOp_t_typeInfo },
	{ "colorStage_t", "", sizeof(colorStage_t), colorStage_t_typeInfo },
	{ "textureStage_t", "", sizeof(textureStage_t), textureStage_t_typeInfo },
	{ "newShaderStage_t", "", sizeof(newShaderStage_t), newShaderStage_t_typeInfo },
	{ "shaderStage_t", "", sizeof(shaderStage_t), shaderStage_t_typeInfo },
	{ "idMaterial", "idDecl", sizeof(idMaterial), idMaterial_typeInfo },
	{ "vertCacheHandle_t", "", sizeof(vertCacheHandle_t), vertCacheHandle_t_typeInfo },
	{ "silEdge_t", "", sizeof(silEdge_t), silEdge_t_typeInfo },
	{ "dominantTri_t", "", sizeof(dominantTri_t), dominantTri_t_typeInfo },
	{ "shadowCache_t", "", sizeof(shadowCache_t), shadowCache_t_typeInfo },
	{ "srfTriangles_t", "", sizeof(srfTriangles_t), srfTriangles_t_typeInfo },
	{ "modelSurface_t", "", sizeof(modelSurface_t), modelSurface_t_typeInfo },
	{ "idMD5Joint", "", sizeof(idMD5Joint), idMD5Joint_typeInfo },
	{ "idRenderModel", "", sizeof(idRenderModel), idRenderModel_typeInfo },
	{ "idRenderModelManager", "", sizeof(idRenderModelManager), idRenderModelManager_typeInfo },
	{ "glconfig_t", "", sizeof(glconfig_t), glconfig_t_typeInfo },
	{ "glyphInfo_t", "", sizeof(glyphInfo_t), glyphInfo_t_typeInfo },
	{ "fontInfo_t", "", sizeof(fontInfo_t), fontInfo_t_typeInfo },
	{ "fontInfoEx_t", "", sizeof(fontInfoEx_t), fontInfoEx_t_typeInfo },
	{ "idRenderSystem", "", sizeof(idRenderSystem), idRenderSystem_typeInfo },
	{ "renderEntity_t", "", sizeof(renderEntity_t), renderEntity_t_typeInfo },
	{ "renderLight_t", "", sizeof(renderLight_t), renderLight_t_typeInfo },
	{ "renderView_t", "", sizeof(renderView_t), renderView_t_typeInfo },
	{ "exitPortal_t", "", sizeof(exitPortal_t), exitPortal_t_typeInfo },
	{ "guiPoint_t", "", sizeof(guiPoint_t), guiPoint_t_typeInfo },
	{ "modelTrace_t", "", sizeof(modelTrace_t), modelTrace_t_typeInfo },
	{ "idRenderWorld", "", sizeof(idRenderWorld), idRenderWorld_typeInfo },
	{ "soundShaderParms_t", "", sizeof(soundShaderParms_t), soundShaderParms_t_typeInfo },
	{ "idSoundShader", "idDecl", sizeof(idSoundShader), idSoundShader_typeInfo },
	{ "idSoundEmitter", "", sizeof(idSoundEmitter), idSoundEmitter_typeInfo },
	{ "idSoundWorld", "", sizeof(idSoundWorld), idSoundWorld_typeInfo },
	{ "soundDecoderInfo_t", "", sizeof(soundDecoderInfo_t), soundDecoderInfo_t_typeInfo },
	{ "idSoundSystem", "", sizeof(idSoundSystem), idSoundSystem_typeInfo },
	{ "idListGUI", "", sizeof(idListGUI), idListGUI_typeInfo },
	{ "idUserInterface", "", sizeof(idUserInterface), idUserInterface_typeInfo },
	{ "idUserInterfaceManager", "", sizeof(idUserInterfaceManager), idUserInterfaceManager_typeInfo },
	{ "contactInfo_t", "", sizeof(contactInfo_t), contactInfo_t_typeInfo },
	{ "trace_t", "", sizeof(trace_t), trace_t_typeInfo },
	{ "idCollisionModelManager", "", sizeof(idCollisionModelManager), idCollisionModelManager_typeInfo },
	{ "idReachability", "", sizeof(idReachability), idReachability_typeInfo },
	{ "idReachability_Walk", "idReachability", sizeof(idReachability_Walk), idReachability_Walk_typeInfo },
	{ "idReachability_BarrierJump", "idReachability", sizeof(idReachability_BarrierJump), idReachability_BarrierJump_typeInfo },
	{ "idReachability_WaterJump", "idReachability", sizeof(idReachability_WaterJump), idReachability_WaterJump_typeInfo },
	{ "idReachability_WalkOffLedge", "idReachability", sizeof(idReachability_WalkOffLedge), idReachability_WalkOffLedge_typeInfo },
	{ "idReachability_Swim", "idReachability", sizeof(idReachability_Swim), idReachability_Swim_typeInfo },
	{ "idReachability_Fly", "idReachability", sizeof(idReachability_Fly), idReachability_Fly_typeInfo },
	{ "idReachability_Special", "idReachability", sizeof(idReachability_Special), idReachability_Special_typeInfo },
	{ "aasEdge_t", "", sizeof(aasEdge_t), aasEdge_t_typeInfo },
	{ "aasFace_t", "", sizeof(aasFace_t), aasFace_t_typeInfo },
	{ "aasArea_t", "", sizeof(aasArea_t), aasArea_t_typeInfo },
	{ "aasNode_t", "", sizeof(aasNode_t), aasNode_t_typeInfo },
	{ "aasPortal_t", "", sizeof(aasPortal_t), aasPortal_t_typeInfo },
	{ "aasCluster_t", "", sizeof(aasCluster_t), aasCluster_t_typeInfo },
	{ "aasTrace_t", "", sizeof(aasTrace_t), aasTrace_t_typeInfo },
	{ "idAASSettings", "", sizeof(idAASSettings), idAASSettings_typeInfo },
	{ "idAASFile", "", sizeof(idAASFile), idAASFile_typeInfo },
	{ "idAASFileManager", "", sizeof(idAASFileManager), idAASFileManager_typeInfo },
	{ "gameReturn_t", "", sizeof(gameReturn_t), gameReturn_t_typeInfo },
	{ "idGame", "", sizeof(idGame), idGame_typeInfo },
	{ "refSound_t", "", sizeof(refSound_t), refSound_t_typeInfo },
	{ "idGameEdit", "", sizeof(idGameEdit), idGameEdit_typeInfo },
	{ "gameImport_t", "", sizeof(gameImport_t), gameImport_t_typeInfo },
	{ "gameExport_t", "", sizeof(gameExport_t), gameExport_t_typeInfo },
	{ "EventArg", "", sizeof(EventArg), EventArg_typeInfo },
	{ "EventArgs", "", sizeof(EventArgs), EventArgs_typeInfo },
	{ "idEventDef", "", sizeof(idEventDef), idEventDef_typeInfo },
	{ "idEvent", "", sizeof(idEvent), idEvent_typeInfo },
	{ "idEventArg", "", sizeof(idEventArg), idEventArg_typeInfo },
	{ "idAllocError", "idException", sizeof(idAllocError), idAllocError_typeInfo },
	{ "idClass", "", sizeof(idClass), idClass_typeInfo },
	{ "idTypeInfo", "", sizeof(idTypeInfo), idTypeInfo_typeInfo },
	{ "CRawVector", "", sizeof(CRawVector), CRawVector_typeInfo },
	{ "idSaveGame", "", sizeof(idSaveGame), idSaveGame_typeInfo },
	{ "idRestoreGame", "", sizeof(idRestoreGame), idRestoreGame_typeInfo },
	{ "idDebugGraph", "", sizeof(idDebugGraph), idDebugGraph_typeInfo },
	{ "idEmbeddedAllocator", "", sizeof(idEmbeddedAllocator), idEmbeddedAllocator_typeInfo },
	{ "function_t", "", sizeof(function_t), function_t_typeInfo },
	{ "eval_t", "", sizeof(eval_t), eval_t_typeInfo },
	{ "idTypeDef", "", sizeof(idTypeDef), idTypeDef_typeInfo },
	{ "idScriptObject", "", sizeof(idScriptObject), idScriptObject_typeInfo },
//	{ "idScriptVariable< class type , etype_t etype , class returnType >", "", sizeof(idScriptVariable< class type , etype_t etype , class returnType >), idScriptVariable_class_type_etype_t_etype_class_returnType__typeInfo },
	{ "idCompileError", "idException", sizeof(idCompileError), idCompileError_typeInfo },
	{ "varEval_t", "", sizeof(varEval_t), varEval_t_typeInfo },
	{ "idVarDef", "", sizeof(idVarDef), idVarDef_typeInfo },
	{ "idVarDefName", "", sizeof(idVarDefName), idVarDefName_typeInfo },
	{ "statement_t", "", sizeof(statement_t), statement_t_typeInfo },
	{ "idProgram", "", sizeof(idProgram), idProgram_typeInfo },
	{ "frameBlend_t", "", sizeof(frameBlend_t), frameBlend_t_typeInfo },
	{ "jointAnimInfo_t", "", sizeof(jointAnimInfo_t), jointAnimInfo_t_typeInfo },
	{ "jointInfo_t", "", sizeof(jointInfo_t), jointInfo_t_typeInfo },
	{ "jointMod_t", "", sizeof(jointMod_t), jointMod_t_typeInfo },
	{ "frameLookup_t", "", sizeof(frameLookup_t), frameLookup_t_typeInfo },
//	{ "class_289::class_289", "", sizeof(class_289::class_289), class_289_class_289_typeInfo },
	{ "frameCommand_t", "", sizeof(frameCommand_t), frameCommand_t_typeInfo },
	{ "animFlags_t", "", sizeof(animFlags_t), animFlags_t_typeInfo },
	{ "idModelExport", "", sizeof(idModelExport), idModelExport_typeInfo },
	{ "idMD5Anim", "", sizeof(idMD5Anim), idMD5Anim_typeInfo },
	{ "idAnim", "", sizeof(idAnim), idAnim_typeInfo },
	{ "idDeclModelDef", "idDecl", sizeof(idDeclModelDef), idDeclModelDef_typeInfo },
	{ "idAnimBlend", "", sizeof(idAnimBlend), idAnimBlend_typeInfo },
	{ "idAFPoseJointMod", "", sizeof(idAFPoseJointMod), idAFPoseJointMod_typeInfo },
	{ "idAnimator", "", sizeof(idAnimator), idAnimator_typeInfo },
	{ "idAnimManager", "", sizeof(idAnimManager), idAnimManager_typeInfo },
	{ "eas::RouteNode", "", sizeof(eas::RouteNode), eas_RouteNode_typeInfo },
	{ "eas::RouteInfo", "", sizeof(eas::RouteInfo), eas_RouteInfo_typeInfo },
	{ "aasPath_t", "", sizeof(aasPath_t), aasPath_t_typeInfo },
	{ "aasGoal_t", "", sizeof(aasGoal_t), aasGoal_t_typeInfo },
	{ "aasObstacle_t", "", sizeof(aasObstacle_t), aasObstacle_t_typeInfo },
	{ "idAASCallback", "", sizeof(idAASCallback), idAASCallback_typeInfo },
	{ "idAAS", "", sizeof(idAAS), idAAS_typeInfo },
//	{ "idFlexList< class type , int N >", "", sizeof(idFlexList< class type , int N >), idFlexList_class_type_int_N__typeInfo },
	{ "idClipModel", "", sizeof(idClipModel), idClipModel_typeInfo },
	{ "idClip", "", sizeof(idClip), idClip_typeInfo },
	{ "idPush::pushed_s", "", sizeof(idPush::pushed_s), idPush_pushed_s_typeInfo },
	{ "idPush::pushedGroup_s", "", sizeof(idPush::pushedGroup_s), idPush_pushedGroup_s_typeInfo },
	{ "idPush", "", sizeof(idPush), idPush_typeInfo },
	{ "pvsHandle_t", "", sizeof(pvsHandle_t), pvsHandle_t_typeInfo },
	{ "pvsCurrent_t", "", sizeof(pvsCurrent_t), pvsCurrent_t_typeInfo },
	{ "idPVS", "", sizeof(idPVS), idPVS_typeInfo },
	{ "difficulty::Setting", "", sizeof(difficulty::Setting), difficulty_Setting_typeInfo },
	{ "difficulty::DifficultySettings", "", sizeof(difficulty::DifficultySettings), difficulty_DifficultySettings_typeInfo },
	{ "difficulty::CVARSetting", "Setting", sizeof(difficulty::CVARSetting), difficulty_CVARSetting_typeInfo },
	{ "difficulty::CVARDifficultySettings", "", sizeof(difficulty::CVARDifficultySettings), difficulty_CVARDifficultySettings_typeInfo },
	{ "difficulty::DifficultyManager", "", sizeof(difficulty::DifficultyManager), difficulty_DifficultyManager_typeInfo },
	{ "ai::AreaManager", "", sizeof(ai::AreaManager), ai_AreaManager_typeInfo },
	{ "GamePlayTimer", "", sizeof(GamePlayTimer), GamePlayTimer_typeInfo },
	{ "model_ofs_t", "", sizeof(model_ofs_t), model_ofs_t_typeInfo },
	{ "model_target_surf", "", sizeof(model_target_surf), model_target_surf_typeInfo },
	{ "lod_data_t", "", sizeof(lod_data_t), lod_data_t_typeInfo },
	{ "lod_entry_t", "", sizeof(lod_entry_t), lod_entry_t_typeInfo },
	{ "model_stage_info_t", "", sizeof(model_stage_info_t), model_stage_info_t_typeInfo },
	{ "CModelGenerator", "", sizeof(CModelGenerator), CModelGenerator_typeInfo },
	{ "light_controller_ambient_t", "", sizeof(light_controller_ambient_t), light_controller_ambient_t_typeInfo },
	{ "light_controller_light_t", "", sizeof(light_controller_light_t), light_controller_light_t_typeInfo },
	{ "CLightController", "", sizeof(CLightController), CLightController_typeInfo },
	{ "CModMenu", "", sizeof(CModMenu), CModMenu_typeInfo },
	{ "entityNetEvent_t", "", sizeof(entityNetEvent_t), entityNetEvent_t_typeInfo },
	{ "GuiMessage", "", sizeof(GuiMessage), GuiMessage_typeInfo },
	{ "spawnSpot_t", "", sizeof(spawnSpot_t), spawnSpot_t_typeInfo },
	{ "SSprFlagBits", "", sizeof(SSprFlagBits), SSprFlagBits_typeInfo },
	{ "USprFlags", "", sizeof(USprFlags), USprFlags_typeInfo },
	{ "SSprParms", "", sizeof(SSprParms), SSprParms_typeInfo },
//	{ "idEntityPtr< class type >", "", sizeof(idEntityPtr< class type >), idEntityPtr_class_type__typeInfo },
	{ "LightGem", "", sizeof(LightGem), LightGem_typeInfo },
	{ "SuspiciousEvent", "", sizeof(SuspiciousEvent), SuspiciousEvent_typeInfo },
	{ "darkModHidingSpot", "", sizeof(darkModHidingSpot), darkModHidingSpot_typeInfo },
	{ "TDarkmodHidingSpotAreaNode", "", sizeof(TDarkmodHidingSpotAreaNode), TDarkmodHidingSpotAreaNode_typeInfo },
	{ "CDarkmodHidingSpotTree", "", sizeof(CDarkmodHidingSpotTree), CDarkmodHidingSpotTree_typeInfo },
	{ "Assignment", "", sizeof(Assignment), Assignment_typeInfo },
	{ "Search", "", sizeof(Search), Search_typeInfo },
	{ "CSearchManager", "", sizeof(CSearchManager), CSearchManager_typeInfo },
	{ "idGameLocal::BriefingVideoPart", "", sizeof(idGameLocal::BriefingVideoPart), idGameLocal_BriefingVideoPart_typeInfo },
	{ "idGameLocal::InterMissionTrigger", "", sizeof(idGameLocal::InterMissionTrigger), idGameLocal_InterMissionTrigger_typeInfo },
	{ "idGameLocal", "idGame", sizeof(idGameLocal), idGameLocal_typeInfo },
	{ "idGameError", "idException", sizeof(idGameError), idGameError_typeInfo },
	{ "idForce", "idClass", sizeof(idForce), idForce_typeInfo },
	{ "idForce_Constant", "idForce", sizeof(idForce_Constant), idForce_Constant_typeInfo },
	{ "idForce_Drag", "idForce", sizeof(idForce_Drag), idForce_Drag_typeInfo },
	{ "idForce_Field", "idForce", sizeof(idForce_Field), idForce_Field_typeInfo },
	{ "idForce_Spring", "idForce", sizeof(idForce_Spring), idForce_Spring_typeInfo },
	{ "impactInfo_t", "", sizeof(impactInfo_t), impactInfo_t_typeInfo },
	{ "idPhysics", "idClass", sizeof(idPhysics), idPhysics_typeInfo },
	{ "staticPState_t", "", sizeof(staticPState_t), staticPState_t_typeInfo },
	{ "idPhysics_Static", "idPhysics", sizeof(idPhysics_Static), idPhysics_Static_typeInfo },
	{ "idPhysics_StaticMulti", "idPhysics", sizeof(idPhysics_StaticMulti), idPhysics_StaticMulti_typeInfo },
	{ "idPhysics_Base", "idPhysics", sizeof(idPhysics_Base), idPhysics_Base_typeInfo },
	{ "idPhysics_Actor", "idPhysics_Base", sizeof(idPhysics_Actor), idPhysics_Actor_typeInfo },
	{ "monsterPState_t", "", sizeof(monsterPState_t), monsterPState_t_typeInfo },
	{ "idPhysics_Monster", "idPhysics_Actor", sizeof(idPhysics_Monster), idPhysics_Monster_typeInfo },
	{ "playerPState_t", "", sizeof(playerPState_t), playerPState_t_typeInfo },
	{ "idPhysics_Player", "idPhysics_Actor", sizeof(idPhysics_Player), idPhysics_Player_typeInfo },
	{ "parametricPState_t", "", sizeof(parametricPState_t), parametricPState_t_typeInfo },
	{ "idPhysics_Parametric", "idPhysics_Base", sizeof(idPhysics_Parametric), idPhysics_Parametric_typeInfo },
	{ "rigidBodyIState_t", "", sizeof(rigidBodyIState_t), rigidBodyIState_t_typeInfo },
	{ "rigidBodyPState_t", "", sizeof(rigidBodyPState_t), rigidBodyPState_t_typeInfo },
	{ "idPhysics_RigidBody", "idPhysics_Base", sizeof(idPhysics_RigidBody), idPhysics_RigidBody_typeInfo },
	{ "idAFConstraint::constraintFlags_s", "", sizeof(idAFConstraint::constraintFlags_s), idAFConstraint_constraintFlags_s_typeInfo },
	{ "idAFConstraint", "", sizeof(idAFConstraint), idAFConstraint_typeInfo },
	{ "idAFConstraint_Fixed", "idAFConstraint", sizeof(idAFConstraint_Fixed), idAFConstraint_Fixed_typeInfo },
	{ "idAFConstraint_BallAndSocketJoint", "idAFConstraint", sizeof(idAFConstraint_BallAndSocketJoint), idAFConstraint_BallAndSocketJoint_typeInfo },
	{ "idAFConstraint_BallAndSocketJointFriction", "idAFConstraint", sizeof(idAFConstraint_BallAndSocketJointFriction), idAFConstraint_BallAndSocketJointFriction_typeInfo },
	{ "idAFConstraint_UniversalJoint", "idAFConstraint", sizeof(idAFConstraint_UniversalJoint), idAFConstraint_UniversalJoint_typeInfo },
	{ "idAFConstraint_UniversalJointFriction", "idAFConstraint", sizeof(idAFConstraint_UniversalJointFriction), idAFConstraint_UniversalJointFriction_typeInfo },
	{ "idAFConstraint_CylindricalJoint", "idAFConstraint", sizeof(idAFConstraint_CylindricalJoint), idAFConstraint_CylindricalJoint_typeInfo },
	{ "idAFConstraint_Hinge", "idAFConstraint", sizeof(idAFConstraint_Hinge), idAFConstraint_Hinge_typeInfo },
	{ "idAFConstraint_HingeFriction", "idAFConstraint", sizeof(idAFConstraint_HingeFriction), idAFConstraint_HingeFriction_typeInfo },
	{ "idAFConstraint_HingeSteering", "idAFConstraint", sizeof(idAFConstraint_HingeSteering), idAFConstraint_HingeSteering_typeInfo },
	{ "idAFConstraint_Slider", "idAFConstraint", sizeof(idAFConstraint_Slider), idAFConstraint_Slider_typeInfo },
	{ "idAFConstraint_Line", "idAFConstraint", sizeof(idAFConstraint_Line), idAFConstraint_Line_typeInfo },
	{ "idAFConstraint_Plane", "idAFConstraint", sizeof(idAFConstraint_Plane), idAFConstraint_Plane_typeInfo },
	{ "idAFConstraint_Spring", "idAFConstraint", sizeof(idAFConstraint_Spring), idAFConstraint_Spring_typeInfo },
	{ "idAFConstraint_Contact", "idAFConstraint", sizeof(idAFConstraint_Contact), idAFConstraint_Contact_typeInfo },
	{ "idAFConstraint_ContactFriction", "idAFConstraint", sizeof(idAFConstraint_ContactFriction), idAFConstraint_ContactFriction_typeInfo },
	{ "idAFConstraint_ConeLimit", "idAFConstraint", sizeof(idAFConstraint_ConeLimit), idAFConstraint_ConeLimit_typeInfo },
	{ "idAFConstraint_PyramidLimit", "idAFConstraint", sizeof(idAFConstraint_PyramidLimit), idAFConstraint_PyramidLimit_typeInfo },
	{ "idAFConstraint_Suspension", "idAFConstraint", sizeof(idAFConstraint_Suspension), idAFConstraint_Suspension_typeInfo },
	{ "AFBodyPState_t", "", sizeof(AFBodyPState_t), AFBodyPState_t_typeInfo },
	{ "idAFBody::bodyFlags_s", "", sizeof(idAFBody::bodyFlags_s), idAFBody_bodyFlags_s_typeInfo },
	{ "idAFBody", "", sizeof(idAFBody), idAFBody_typeInfo },
	{ "idAFTree", "", sizeof(idAFTree), idAFTree_typeInfo },
	{ "AFPState_t", "", sizeof(AFPState_t), AFPState_t_typeInfo },
	{ "AFCollision_t", "", sizeof(AFCollision_t), AFCollision_t_typeInfo },
	{ "idPhysics_AF", "idPhysics_Base", sizeof(idPhysics_AF), idPhysics_AF_typeInfo },
	{ "idPhysics_Liquid", "idPhysics_Static", sizeof(idPhysics_Liquid), idPhysics_Liquid_typeInfo },
	{ "singleSmoke_t", "", sizeof(singleSmoke_t), singleSmoke_t_typeInfo },
	{ "activeSmokeStage_t", "", sizeof(activeSmokeStage_t), activeSmokeStage_t_typeInfo },
	{ "idSmokeParticles", "", sizeof(idSmokeParticles), idSmokeParticles_typeInfo },
	{ "COverlaySys", "", sizeof(COverlaySys), COverlaySys_typeInfo },
	{ "SOverlay", "", sizeof(SOverlay), SOverlay_typeInfo },
	{ "UserManager", "", sizeof(UserManager), UserManager_typeInfo },
	{ "FlinderSpawn", "", sizeof(FlinderSpawn), FlinderSpawn_typeInfo },
	{ "signal_t", "", sizeof(signal_t), signal_t_typeInfo },
	{ "signalList_t", "", sizeof(signalList_t), signalList_t_typeInfo },
	{ "CAttachInfo", "", sizeof(CAttachInfo), CAttachInfo_typeInfo },
	{ "SAttachPosition", "", sizeof(SAttachPosition), SAttachPosition_typeInfo },
	{ "SDecalInfo", "", sizeof(SDecalInfo), SDecalInfo_typeInfo },
	{ "idEntity::entityFlags_s", "", sizeof(idEntity::entityFlags_s), idEntity_entityFlags_s_typeInfo },
	{ "idEntity", "idClass", sizeof(idEntity), idEntity_typeInfo },
	{ "damageEffect_t", "", sizeof(damageEffect_t), damageEffect_t_typeInfo },
	{ "idAnimatedEntity", "idEntity", sizeof(idAnimatedEntity), idAnimatedEntity_typeInfo },
	{ "idCursor3D", "idEntity", sizeof(idCursor3D), idCursor3D_typeInfo },
	{ "idDragEntity", "", sizeof(idDragEntity), idDragEntity_typeInfo },
	{ "selectedTypeInfo_t", "", sizeof(selectedTypeInfo_t), selectedTypeInfo_t_typeInfo },
	{ "idEditEntities", "", sizeof(idEditEntities), idEditEntities_typeInfo },
	{ "jointConversion_t", "", sizeof(jointConversion_t), jointConversion_t_typeInfo },
	{ "afTouch_t", "", sizeof(afTouch_t), afTouch_t_typeInfo },
	{ "idAF", "", sizeof(idAF), idAF_typeInfo },
	{ "idIK", "", sizeof(idIK), idIK_typeInfo },
	{ "idIK_Walk", "idIK", sizeof(idIK_Walk), idIK_Walk_typeInfo },
	{ "idIK_Reach", "idIK", sizeof(idIK_Reach), idIK_Reach_typeInfo },
	{ "idMultiModelAF", "idEntity", sizeof(idMultiModelAF), idMultiModelAF_typeInfo },
	{ "idChain", "idMultiModelAF", sizeof(idChain), idChain_typeInfo },
	{ "idAFAttachment", "idAnimatedEntity", sizeof(idAFAttachment), idAFAttachment_typeInfo },
	{ "SAddedEnt", "", sizeof(SAddedEnt), SAddedEnt_typeInfo },
	{ "idAFEntity_Base", "idAnimatedEntity", sizeof(idAFEntity_Base), idAFEntity_Base_typeInfo },
	{ "idAFEntity_Gibbable", "idAFEntity_Base", sizeof(idAFEntity_Gibbable), idAFEntity_Gibbable_typeInfo },
	{ "idAFEntity_Generic", "idAFEntity_Gibbable", sizeof(idAFEntity_Generic), idAFEntity_Generic_typeInfo },
	{ "idAFEntity_WithAttachedHead", "idAFEntity_Gibbable", sizeof(idAFEntity_WithAttachedHead), idAFEntity_WithAttachedHead_typeInfo },
	{ "idAFEntity_Vehicle", "idAFEntity_Base", sizeof(idAFEntity_Vehicle), idAFEntity_Vehicle_typeInfo },
	{ "idAFEntity_VehicleSimple", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleSimple), idAFEntity_VehicleSimple_typeInfo },
	{ "idAFEntity_VehicleFourWheels", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleFourWheels), idAFEntity_VehicleFourWheels_typeInfo },
	{ "idAFEntity_VehicleSixWheels", "idAFEntity_Vehicle", sizeof(idAFEntity_VehicleSixWheels), idAFEntity_VehicleSixWheels_typeInfo },
	{ "idAFEntity_SteamPipe", "idAFEntity_Base", sizeof(idAFEntity_SteamPipe), idAFEntity_SteamPipe_typeInfo },
	{ "idSpawnableEntity", "idEntity", sizeof(idSpawnableEntity), idSpawnableEntity_typeInfo },
	{ "idPlayerStart", "idEntity", sizeof(idPlayerStart), idPlayerStart_typeInfo },
	{ "idActivator", "idEntity", sizeof(idActivator), idActivator_typeInfo },
	{ "idPathCorner", "idEntity", sizeof(idPathCorner), idPathCorner_typeInfo },
	{ "tdmPathFlee", "idEntity", sizeof(tdmPathFlee), tdmPathFlee_typeInfo },
	{ "tdmPathGuard", "idEntity", sizeof(tdmPathGuard), tdmPathGuard_typeInfo },
	{ "idDamagable", "idEntity", sizeof(idDamagable), idDamagable_typeInfo },
	{ "idExplodable", "idEntity", sizeof(idExplodable), idExplodable_typeInfo },
	{ "idSpring", "idEntity", sizeof(idSpring), idSpring_typeInfo },
	{ "idForceField", "idEntity", sizeof(idForceField), idForceField_typeInfo },
	{ "idAnimated", "idAFEntity_Gibbable", sizeof(idAnimated), idAnimated_typeInfo },
	{ "idStaticEntity", "idEntity", sizeof(idStaticEntity), idStaticEntity_typeInfo },
	{ "idFuncSmoke", "idEntity", sizeof(idFuncSmoke), idFuncSmoke_typeInfo },
	{ "idTextEntity", "idEntity", sizeof(idTextEntity), idTextEntity_typeInfo },
	{ "idLocationEntity", "idEntity", sizeof(idLocationEntity), idLocationEntity_typeInfo },
	{ "idPortalEntity", "idEntity", sizeof(idPortalEntity), idPortalEntity_typeInfo },
	{ "idLocationSeparatorEntity", "idPortalEntity", sizeof(idLocationSeparatorEntity), idLocationSeparatorEntity_typeInfo },
	{ "idPortalSettingsEntity", "idPortalEntity", sizeof(idPortalSettingsEntity), idPortalSettingsEntity_typeInfo },
	{ "idVacuumSeparatorEntity", "idEntity", sizeof(idVacuumSeparatorEntity), idVacuumSeparatorEntity_typeInfo },
	{ "idVacuumEntity", "idEntity", sizeof(idVacuumEntity), idVacuumEntity_typeInfo },
	{ "idBeam", "idEntity", sizeof(idBeam), idBeam_typeInfo },
	{ "idShaking", "idEntity", sizeof(idShaking), idShaking_typeInfo },
	{ "idEarthQuake", "idEntity", sizeof(idEarthQuake), idEarthQuake_typeInfo },
	{ "idFuncPortal", "idEntity", sizeof(idFuncPortal), idFuncPortal_typeInfo },
	{ "idFuncAASPortal", "idEntity", sizeof(idFuncAASPortal), idFuncAASPortal_typeInfo },
	{ "idFuncAASObstacle", "idEntity", sizeof(idFuncAASObstacle), idFuncAASObstacle_typeInfo },
	{ "idPhantomObjects", "idEntity", sizeof(idPhantomObjects), idPhantomObjects_typeInfo },
	{ "idPortalSky", "idEntity", sizeof(idPortalSky), idPortalSky_typeInfo },
	{ "tdmVine", "idStaticEntity", sizeof(tdmVine), tdmVine_typeInfo },
	{ "idPeek", "idStaticEntity", sizeof(idPeek), idPeek_typeInfo },
	{ "CMultiStateMoverPosition", "idEntity", sizeof(CMultiStateMoverPosition), CMultiStateMoverPosition_typeInfo },
	{ "MoverPositionInfo", "", sizeof(MoverPositionInfo), MoverPositionInfo_typeInfo },
	{ "CMeleeStatus", "", sizeof(CMeleeStatus), CMeleeStatus_typeInfo },
	{ "idAnimState", "", sizeof(idAnimState), idAnimState_typeInfo },
	{ "copyJoints_t", "", sizeof(copyJoints_t), copyJoints_t_typeInfo },
	{ "CrashLandResult", "", sizeof(CrashLandResult), CrashLandResult_typeInfo },
	{ "WarningEvent", "", sizeof(WarningEvent), WarningEvent_typeInfo },
	{ "KnownSuspiciousEvent", "", sizeof(KnownSuspiciousEvent), KnownSuspiciousEvent_typeInfo },
	{ "idActor", "idAFEntity_Gibbable", sizeof(idActor), idActor_typeInfo },
	{ "PickableLock::PinInfo", "", sizeof(PickableLock::PinInfo), PickableLock_PinInfo_typeInfo },
	{ "PickableLock", "idClass", sizeof(PickableLock), PickableLock_typeInfo },
	{ "CInventoryItem", "", sizeof(CInventoryItem), CInventoryItem_typeInfo },
	{ "CInventoryCategory", "", sizeof(CInventoryCategory), CInventoryCategory_typeInfo },
	{ "SFinalProjData", "", sizeof(SFinalProjData), SFinalProjData_typeInfo },
	{ "idProjectile::projectileFlags_s", "", sizeof(idProjectile::projectileFlags_s), idProjectile_projectileFlags_s_typeInfo },
	{ "idProjectile", "idEntity", sizeof(idProjectile), idProjectile_typeInfo },
	{ "idGuidedProjectile", "idProjectile", sizeof(idGuidedProjectile), idGuidedProjectile_typeInfo },
	{ "idDebris", "idEntity", sizeof(idDebris), idDebris_typeInfo },
	{ "idWeapon", "idAnimatedEntity", sizeof(idWeapon), idWeapon_typeInfo },
	{ "idLight::AIBarks", "", sizeof(idLight::AIBarks), idLight_AIBarks_typeInfo },
	{ "idLight", "idEntity", sizeof(idLight), idLight_typeInfo },
	{ "idWorldspawn", "idEntity", sizeof(idWorldspawn), idWorldspawn_typeInfo },
	{ "idItem", "idEntity", sizeof(idItem), idItem_typeInfo },
	{ "idMoveableItem", "idItem", sizeof(idMoveableItem), idMoveableItem_typeInfo },
	{ "screenBlob_t", "", sizeof(screenBlob_t), screenBlob_t_typeInfo },
	{ "idPlayerView::dnImageWrapper", "", sizeof(idPlayerView::dnImageWrapper), idPlayerView_dnImageWrapper_typeInfo },
	{ "idPlayerView::dnPostProcessManager", "", sizeof(idPlayerView::dnPostProcessManager), idPlayerView_dnPostProcessManager_typeInfo },
	{ "idPlayerView", "", sizeof(idPlayerView), idPlayerView_typeInfo },
	{ "idPlayerIcon", "", sizeof(idPlayerIcon), idPlayerIcon_typeInfo },
	{ "ButtonStateTracker", "", sizeof(ButtonStateTracker), ButtonStateTracker_typeInfo },
	{ "idListener", "idEntity", sizeof(idListener), idListener_typeInfo },
	{ "CFrobHelper", "", sizeof(CFrobHelper), CFrobHelper_typeInfo },
	{ "SMouseGesture", "", sizeof(SMouseGesture), SMouseGesture_typeInfo },
	{ "loggedAccel_t", "", sizeof(loggedAccel_t), loggedAccel_t_typeInfo },
	{ "aasLocation_t", "", sizeof(aasLocation_t), aasLocation_t_typeInfo },
	{ "idPlayer", "idActor", sizeof(idPlayer), idPlayer_typeInfo },
	{ "idMover::moveState_t", "", sizeof(idMover::moveState_t), idMover_moveState_t_typeInfo },
	{ "idMover::rotationState_t", "", sizeof(idMover::rotationState_t), idMover_rotationState_t_typeInfo },
	{ "idMover", "idEntity", sizeof(idMover), idMover_typeInfo },
	{ "idSplinePath", "idEntity", sizeof(idSplinePath), idSplinePath_typeInfo },
	{ "floorInfo_s", "", sizeof(floorInfo_s), floorInfo_s_typeInfo },
	{ "idMover_Binary", "idEntity", sizeof(idMover_Binary), idMover_Binary_typeInfo },
	{ "idPlat", "idMover_Binary", sizeof(idPlat), idPlat_typeInfo },
	{ "idMover_Periodic", "idEntity", sizeof(idMover_Periodic), idMover_Periodic_typeInfo },
	{ "idRotater", "idMover_Periodic", sizeof(idRotater), idRotater_typeInfo },
	{ "idBobber", "idMover_Periodic", sizeof(idBobber), idBobber_typeInfo },
	{ "idPendulum", "idMover_Periodic", sizeof(idPendulum), idPendulum_typeInfo },
	{ "idRiser", "idMover_Periodic", sizeof(idRiser), idRiser_typeInfo },
	{ "idCamera", "idEntity", sizeof(idCamera), idCamera_typeInfo },
	{ "idCameraView", "idCamera", sizeof(idCameraView), idCameraView_typeInfo },
	{ "cameraFrame_t", "", sizeof(cameraFrame_t), cameraFrame_t_typeInfo },
	{ "idCameraAnim", "idCamera", sizeof(idCameraAnim), idCameraAnim_typeInfo },
	{ "idMoveable", "idEntity", sizeof(idMoveable), idMoveable_typeInfo },
	{ "idBarrel", "idMoveable", sizeof(idBarrel), idBarrel_typeInfo },
	{ "idExplodingBarrel", "idBarrel", sizeof(idExplodingBarrel), idExplodingBarrel_typeInfo },
	{ "idTarget", "idEntity", sizeof(idTarget), idTarget_typeInfo },
	{ "idTarget_Remove", "idTarget", sizeof(idTarget_Remove), idTarget_Remove_typeInfo },
	{ "idTarget_Show", "idTarget", sizeof(idTarget_Show), idTarget_Show_typeInfo },
	{ "idTarget_Damage", "idTarget", sizeof(idTarget_Damage), idTarget_Damage_typeInfo },
	{ "idTarget_SessionCommand", "idTarget", sizeof(idTarget_SessionCommand), idTarget_SessionCommand_typeInfo },
	{ "idTarget_EndLevel", "idTarget", sizeof(idTarget_EndLevel), idTarget_EndLevel_typeInfo },
	{ "idTarget_WaitForButton", "idTarget", sizeof(idTarget_WaitForButton), idTarget_WaitForButton_typeInfo },
	{ "idTarget_SetGlobalShaderTime", "idTarget", sizeof(idTarget_SetGlobalShaderTime), idTarget_SetGlobalShaderTime_typeInfo },
	{ "idTarget_SetShaderParm", "idTarget", sizeof(idTarget_SetShaderParm), idTarget_SetShaderParm_typeInfo },
	{ "idTarget_SetShaderTime", "idTarget", sizeof(idTarget_SetShaderTime), idTarget_SetShaderTime_typeInfo },
	{ "idTarget_FadeEntity", "idTarget", sizeof(idTarget_FadeEntity), idTarget_FadeEntity_typeInfo },
	{ "idTarget_LightFadeIn", "idTarget", sizeof(idTarget_LightFadeIn), idTarget_LightFadeIn_typeInfo },
	{ "idTarget_LightFadeOut", "idTarget", sizeof(idTarget_LightFadeOut), idTarget_LightFadeOut_typeInfo },
	{ "idTarget_Give", "idTarget", sizeof(idTarget_Give), idTarget_Give_typeInfo },
	{ "idTarget_SetModel", "idTarget", sizeof(idTarget_SetModel), idTarget_SetModel_typeInfo },
	{ "idTarget_SetInfluence", "idTarget", sizeof(idTarget_SetInfluence), idTarget_SetInfluence_typeInfo },
	{ "idTarget_SetKeyVal", "idTarget", sizeof(idTarget_SetKeyVal), idTarget_SetKeyVal_typeInfo },
	{ "idTarget_SetFov", "idTarget", sizeof(idTarget_SetFov), idTarget_SetFov_typeInfo },
	{ "idTarget_CallObjectFunction", "idTarget", sizeof(idTarget_CallObjectFunction), idTarget_CallObjectFunction_typeInfo },
	{ "idTarget_PostScriptEvent", "idTarget", sizeof(idTarget_PostScriptEvent), idTarget_PostScriptEvent_typeInfo },
	{ "idTarget_EnableLevelWeapons", "idTarget", sizeof(idTarget_EnableLevelWeapons), idTarget_EnableLevelWeapons_typeInfo },
	{ "idTarget_Tip", "idTarget", sizeof(idTarget_Tip), idTarget_Tip_typeInfo },
	{ "idTarget_RemoveWeapons", "idTarget", sizeof(idTarget_RemoveWeapons), idTarget_RemoveWeapons_typeInfo },
	{ "idTarget_FadeSoundClass", "idTarget", sizeof(idTarget_FadeSoundClass), idTarget_FadeSoundClass_typeInfo },
	{ "CTarget_AddObjectives", "idTarget", sizeof(CTarget_AddObjectives), CTarget_AddObjectives_typeInfo },
	{ "CTarget_SetObjectiveState", "idTarget", sizeof(CTarget_SetObjectiveState), CTarget_SetObjectiveState_typeInfo },
	{ "CTarget_SetObjectiveVisibility", "idTarget", sizeof(CTarget_SetObjectiveVisibility), CTarget_SetObjectiveVisibility_typeInfo },
	{ "CTarget_SetObjectiveComponentState", "idTarget", sizeof(CTarget_SetObjectiveComponentState), CTarget_SetObjectiveComponentState_typeInfo },
	{ "CTarget_StartConversation", "idTarget", sizeof(CTarget_StartConversation), CTarget_StartConversation_typeInfo },
	{ "CTarget_SetFrobable", "idTarget", sizeof(CTarget_SetFrobable), CTarget_SetFrobable_typeInfo },
	{ "CTarget_CallScriptFunction", "idTarget", sizeof(CTarget_CallScriptFunction), CTarget_CallScriptFunction_typeInfo },
	{ "CTarget_ChangeLockState", "idTarget", sizeof(CTarget_ChangeLockState), CTarget_ChangeLockState_typeInfo },
	{ "CTarget_ChangeTarget", "idTarget", sizeof(CTarget_ChangeTarget), CTarget_ChangeTarget_typeInfo },
	{ "CTarget_InterMissionTrigger", "idTarget", sizeof(CTarget_InterMissionTrigger), CTarget_InterMissionTrigger_typeInfo },
	{ "CTarget_SetTeam", "idTarget", sizeof(CTarget_SetTeam), CTarget_SetTeam_typeInfo },
	{ "CTarget_ItemRemove", "idTarget", sizeof(CTarget_ItemRemove), CTarget_ItemRemove_typeInfo },
	{ "idTrigger", "idEntity", sizeof(idTrigger), idTrigger_typeInfo },
	{ "idTrigger_Multi", "idTrigger", sizeof(idTrigger_Multi), idTrigger_Multi_typeInfo },
	{ "idTrigger_EntityName", "idTrigger", sizeof(idTrigger_EntityName), idTrigger_EntityName_typeInfo },
	{ "idTrigger_Timer", "idTrigger", sizeof(idTrigger_Timer), idTrigger_Timer_typeInfo },
	{ "idTrigger_Count", "idTrigger", sizeof(idTrigger_Count), idTrigger_Count_typeInfo },
	{ "idTrigger_Hurt", "idTrigger", sizeof(idTrigger_Hurt), idTrigger_Hurt_typeInfo },
	{ "idTrigger_Fade", "idTrigger", sizeof(idTrigger_Fade), idTrigger_Fade_typeInfo },
	{ "idTrigger_Touch", "idTrigger", sizeof(idTrigger_Touch), idTrigger_Touch_typeInfo },
	{ "idSound", "idEntity", sizeof(idSound), idSound_typeInfo },
	{ "idFXLocalAction", "", sizeof(idFXLocalAction), idFXLocalAction_typeInfo },
	{ "idEntityFx", "idEntity", sizeof(idEntityFx), idEntityFx_typeInfo },
	{ "idTeleporter", "idEntityFx", sizeof(idTeleporter), idTeleporter_typeInfo },
	{ "idSecurityCamera", "idEntity", sizeof(idSecurityCamera), idSecurityCamera_typeInfo },
	{ "shard_t", "", sizeof(shard_t), shard_t_typeInfo },
	{ "idBrittleFracture", "idEntity", sizeof(idBrittleFracture), idBrittleFracture_typeInfo },
	{ "idLiquid", "idEntity", sizeof(idLiquid), idLiquid_typeInfo },
	{ "CAbsenceMarker", "idEntity", sizeof(CAbsenceMarker), CAbsenceMarker_typeInfo },
	{ "PVSToAASMappingNode", "", sizeof(PVSToAASMappingNode), PVSToAASMappingNode_typeInfo },
	{ "PVSToAASMapping", "", sizeof(PVSToAASMapping), PVSToAASMapping_typeInfo },
	{ "darkModLightRecord_t", "", sizeof(darkModLightRecord_t), darkModLightRecord_t_typeInfo },
	{ "darkModLAS", "", sizeof(darkModLAS), darkModLAS_typeInfo },
	{ "CGlobal", "", sizeof(CGlobal), CGlobal_typeInfo },
//	{ "CMatrixSq< class Type >", "", sizeof(CMatrixSq< class Type >), CMatrixSq_class_Type__typeInfo },
//	{ "CMatRUT< class Type >", "CMatrixSq< Type >", sizeof(CMatRUT< class Type >), CMatRUT_class_Type__typeInfo },
	{ "CRelations::SEntryData", "", sizeof(CRelations::SEntryData), CRelations_SEntryData_typeInfo },
	{ "CRelations", "idClass", sizeof(CRelations), CRelations_typeInfo },
	{ "CRelationsEntity", "idEntity", sizeof(CRelationsEntity), CRelationsEntity_typeInfo },
	{ "CTarget_SetRelations", "idEntity", sizeof(CTarget_SetRelations), CTarget_SetRelations_typeInfo },
	{ "CTarget_SetEntityRelation", "idEntity", sizeof(CTarget_SetEntityRelation), CTarget_SetEntityRelation_typeInfo },
	{ "CTarget_ChangeEntityRelation", "idEntity", sizeof(CTarget_ChangeEntityRelation), CTarget_ChangeEntityRelation_typeInfo },
	{ "CBinaryFrobMover", "idMover", sizeof(CBinaryFrobMover), CBinaryFrobMover_typeInfo },
	{ "CFrobDoor", "CBinaryFrobMover", sizeof(CFrobDoor), CFrobDoor_typeInfo },
	{ "ai::DoorInfo", "", sizeof(ai::DoorInfo), ai_DoorInfo_typeInfo },
	{ "ai::Memory::DoorRelatedVariables", "", sizeof(ai::Memory::DoorRelatedVariables), ai_Memory_DoorRelatedVariables_typeInfo },
	{ "ai::Memory::GreetingInfo", "", sizeof(ai::Memory::GreetingInfo), ai_Memory_GreetingInfo_typeInfo },
	{ "ai::Memory", "", sizeof(ai::Memory), ai_Memory_typeInfo },
	{ "CStimResponse", "", sizeof(CStimResponse), CStimResponse_typeInfo },
	{ "ai::CommMessage", "", sizeof(ai::CommMessage), ai_CommMessage_typeInfo },
	{ "ai::Task", "", sizeof(ai::Task), ai_Task_typeInfo },
//	{ "ai::Library< class Element >::Registrar", "", sizeof(ai::Library< class Element >::Registrar), ai_Library_class_Element__Registrar_typeInfo },
//	{ "ai::Library< class Element >", "", sizeof(ai::Library< class Element >), ai_Library_class_Element__typeInfo },
	{ "ai::Subsystem", "", sizeof(ai::Subsystem), ai_Subsystem_typeInfo },
	{ "ai::State", "", sizeof(ai::State), ai_State_typeInfo },
	{ "ai::Mind", "", sizeof(ai::Mind), ai_Mind_typeInfo },
	{ "ai::CommunicationTask", "Task", sizeof(ai::CommunicationTask), ai_CommunicationTask_typeInfo },
	{ "ai::CommunicationSubsystem", "Subsystem", sizeof(ai::CommunicationSubsystem), ai_CommunicationSubsystem_typeInfo },
	{ "ai::MovementSubsystem", "Subsystem", sizeof(ai::MovementSubsystem), ai_MovementSubsystem_typeInfo },
	{ "CDarkmodAASHidingSpotFinder", "", sizeof(CDarkmodAASHidingSpotFinder), CDarkmodAASHidingSpotFinder_typeInfo },
	{ "CHidingSpotSearchCollection::HidingSpotSearchNode", "", sizeof(CHidingSpotSearchCollection::HidingSpotSearchNode), CHidingSpotSearchCollection_HidingSpotSearchNode_typeInfo },
	{ "CHidingSpotSearchCollection", "", sizeof(CHidingSpotSearchCollection), CHidingSpotSearchCollection_typeInfo },
	{ "idMoveState", "", sizeof(idMoveState), idMoveState_typeInfo },
	{ "obstaclePath_t", "", sizeof(obstaclePath_t), obstaclePath_t_typeInfo },
	{ "predictedPath_t", "", sizeof(predictedPath_t), predictedPath_t_typeInfo },
	{ "particleEmitter_t", "", sizeof(particleEmitter_t), particleEmitter_t_typeInfo },
	{ "idAASFindCover", "idAASCallback", sizeof(idAASFindCover), idAASFindCover_typeInfo },
	{ "idAASFindAreaOutOfRange", "idAASCallback", sizeof(idAASFindAreaOutOfRange), idAASFindAreaOutOfRange_typeInfo },
	{ "idAASFindAttackPosition", "idAASCallback", sizeof(idAASFindAttackPosition), idAASFindAttackPosition_typeInfo },
	{ "idAASFindObservationPosition", "idAASCallback", sizeof(idAASFindObservationPosition), idAASFindObservationPosition_typeInfo },
	{ "idAI::ProjectileInfo", "", sizeof(idAI::ProjectileInfo), idAI_ProjectileInfo_typeInfo },
	{ "idAI::ActiveProjectile", "", sizeof(idAI::ActiveProjectile), idAI_ActiveProjectile_typeInfo },
	{ "idAI::DelayedStim", "", sizeof(idAI::DelayedStim), idAI_DelayedStim_typeInfo },
	{ "idAI::EntityAlert", "", sizeof(idAI::EntityAlert), idAI_EntityAlert_typeInfo },
	{ "idAI", "idActor", sizeof(idAI), idAI_typeInfo },
	{ "idCombatNode", "idEntity", sizeof(idCombatNode), idCombatNode_typeInfo },
	{ "idTestModel", "idAnimatedEntity", sizeof(idTestModel), idTestModel_typeInfo },
	{ "opcode_t", "", sizeof(opcode_t), opcode_t_typeInfo },
	{ "idCompiler", "", sizeof(idCompiler), idCompiler_typeInfo },
	{ "prstack_t", "", sizeof(prstack_t), prstack_t_typeInfo },
	{ "idInterpreter", "", sizeof(idInterpreter), idInterpreter_typeInfo },
	{ "idThread", "idClass", sizeof(idThread), idThread_typeInfo },
	{ "mpPlayerState_t", "", sizeof(mpPlayerState_t), mpPlayerState_t_typeInfo },
	{ "mpChatLine_t", "", sizeof(mpChatLine_t), mpChatLine_t_typeInfo },
	{ "idMultiplayerGame", "", sizeof(idMultiplayerGame), idMultiplayerGame_typeInfo },
	{ "CFrobButton", "CBinaryFrobMover", sizeof(CFrobButton), CFrobButton_typeInfo },
	{ "CMultiStateMoverButton", "CFrobButton", sizeof(CMultiStateMoverButton), CMultiStateMoverButton_typeInfo },
	{ "CMultiStateMover", "idMover", sizeof(CMultiStateMover), CMultiStateMover_typeInfo },
	{ "SBoolParseNode", "", sizeof(SBoolParseNode), SBoolParseNode_typeInfo },
	{ "CObjectiveComponent", "", sizeof(CObjectiveComponent), CObjectiveComponent_typeInfo },
	{ "CObjective", "", sizeof(CObjective), CObjective_typeInfo },
	{ "SStat", "", sizeof(SStat), SStat_typeInfo },
	{ "MissionStatistics", "", sizeof(MissionStatistics), MissionStatistics_typeInfo },
	{ "CampaignStats", "", sizeof(CampaignStats), CampaignStats_typeInfo },
	{ "SObjEntParms", "", sizeof(SObjEntParms), SObjEntParms_typeInfo },
	{ "CMissionData", "", sizeof(CMissionData), CMissionData_typeInfo },
	{ "ObjectiveCondition", "", sizeof(ObjectiveCondition), ObjectiveCondition_typeInfo },
	{ "CObjectiveLocation", "idEntity", sizeof(CObjectiveLocation), CObjectiveLocation_typeInfo },
	{ "CForcePush", "idForce", sizeof(CForcePush), CForcePush_typeInfo },
	{ "PositionWithinRangeFinder", "idAASCallback", sizeof(PositionWithinRangeFinder), PositionWithinRangeFinder_typeInfo },
	{ "CProjectileResult", "idEntity", sizeof(CProjectileResult), CProjectileResult_typeInfo },
	{ "ScriptEventDocGenerator::CompareCaseInsensitively", "", sizeof(ScriptEventDocGenerator::CompareCaseInsensitively), ScriptEventDocGenerator_CompareCaseInsensitively_typeInfo },
	{ "ScriptEventDocGenerator", "", sizeof(ScriptEventDocGenerator), ScriptEventDocGenerator_typeInfo },
	{ "ScriptEventDocGeneratorD3Script", "ScriptEventDocGenerator", sizeof(ScriptEventDocGeneratorD3Script), ScriptEventDocGeneratorD3Script_typeInfo },
	{ "ScriptEventDocGeneratorMediaWiki", "ScriptEventDocGenerator", sizeof(ScriptEventDocGeneratorMediaWiki), ScriptEventDocGeneratorMediaWiki_typeInfo },
	{ "ScriptEventDocGeneratorXml", "ScriptEventDocGenerator", sizeof(ScriptEventDocGeneratorXml), ScriptEventDocGeneratorXml_typeInfo },
	{ "TimerValue", "", sizeof(TimerValue), TimerValue_typeInfo },
	{ "CStimResponseTimer", "", sizeof(CStimResponseTimer), CStimResponseTimer_typeInfo },
	{ "CStim", "CStimResponse", sizeof(CStim), CStim_typeInfo },
	{ "CResponseEffect", "", sizeof(CResponseEffect), CResponseEffect_typeInfo },
	{ "CResponse", "CStimResponse", sizeof(CResponse), CResponse_typeInfo },
	{ "CStimResponseCollection", "", sizeof(CStimResponseCollection), CStimResponseCollection_typeInfo },
	{ "model_changeinfo_t", "", sizeof(model_changeinfo_t), model_changeinfo_t_typeInfo },
	{ "CStaticMulti", "idStaticEntity", sizeof(CStaticMulti), CStaticMulti_typeInfo },
	{ "tdmFuncShooter", "idStaticEntity", sizeof(tdmFuncShooter), tdmFuncShooter_typeInfo },
	{ "emitter_models_t", "", sizeof(emitter_models_t), emitter_models_t_typeInfo },
	{ "idFuncEmitter", "idStaticEntity", sizeof(idFuncEmitter), idFuncEmitter_typeInfo },
	{ "idFuncSplat", "idFuncEmitter", sizeof(idFuncSplat), idFuncSplat_typeInfo },
	{ "seed_sort_ofs_t", "", sizeof(seed_sort_ofs_t), seed_sort_ofs_t_typeInfo },
	{ "seed_material_t", "", sizeof(seed_material_t), seed_material_t_typeInfo },
	{ "seed_class_t", "", sizeof(seed_class_t), seed_class_t_typeInfo },
	{ "seed_inhibitor_t", "", sizeof(seed_inhibitor_t), seed_inhibitor_t_typeInfo },
	{ "seed_entity_t", "", sizeof(seed_entity_t), seed_entity_t_typeInfo },
	{ "Seed", "idStaticEntity", sizeof(Seed), Seed_typeInfo },
	{ "LootRuleSet", "", sizeof(LootRuleSet), LootRuleSet_typeInfo },
	{ "CShopItem", "", sizeof(CShopItem), CShopItem_typeInfo },
	{ "CShop", "", sizeof(CShop), CShop_typeInfo },
	{ "SsndPGlobals", "", sizeof(SsndPGlobals), SsndPGlobals_typeInfo },
	{ "SPortData", "", sizeof(SPortData), SPortData_typeInfo },
	{ "SAreaProp", "", sizeof(SAreaProp), SAreaProp_typeInfo },
	{ "SsndPortal", "", sizeof(SsndPortal), SsndPortal_typeInfo },
	{ "SsndArea", "", sizeof(SsndArea), SsndArea_typeInfo },
	{ "CsndPropBase", "", sizeof(CsndPropBase), CsndPropBase_typeInfo },
	{ "CsndPropLoader", "CsndPropBase", sizeof(CsndPropLoader), CsndPropLoader_typeInfo },
	{ "STeamBits", "", sizeof(STeamBits), STeamBits_typeInfo },
	{ "UTeamMask", "", sizeof(UTeamMask), UTeamMask_typeInfo },
	{ "SPopArea", "", sizeof(SPopArea), SPopArea_typeInfo },
	{ "SPortEvent", "", sizeof(SPortEvent), SPortEvent_typeInfo },
	{ "SEventArea", "", sizeof(SEventArea), SEventArea_typeInfo },
	{ "SExpQue", "", sizeof(SExpQue), SExpQue_typeInfo },
	{ "CsndProp", "CsndPropBase", sizeof(CsndProp), CsndProp_typeInfo },
	{ "eas::ElevatorStationInfo", "", sizeof(eas::ElevatorStationInfo), eas_ElevatorStationInfo_typeInfo },
	{ "eas::ClusterInfo", "", sizeof(eas::ClusterInfo), eas_ClusterInfo_typeInfo },
	{ "eas::tdmEAS", "", sizeof(eas::tdmEAS), eas_tdmEAS_typeInfo },
	{ "idRoutingCache", "", sizeof(idRoutingCache), idRoutingCache_typeInfo },
	{ "idRoutingUpdate", "", sizeof(idRoutingUpdate), idRoutingUpdate_typeInfo },
	{ "idRoutingObstacle", "", sizeof(idRoutingObstacle), idRoutingObstacle_typeInfo },
	{ "idAASLocal", "idAAS", sizeof(idAASLocal), idAASLocal_typeInfo },
	{ "ai::ConversationCommand", "", sizeof(ai::ConversationCommand), ai_ConversationCommand_typeInfo },
	{ "ai::ConversationState", "State", sizeof(ai::ConversationState), ai_ConversationState_typeInfo },
	{ "ai::Conversation", "", sizeof(ai::Conversation), ai_Conversation_typeInfo },
	{ "ai::ConversationSystem", "", sizeof(ai::ConversationSystem), ai_ConversationSystem_typeInfo },
	{ "ai::SearchingState", "State", sizeof(ai::SearchingState), ai_SearchingState_typeInfo },
	{ "ai::AgitatedSearchingState", "SearchingState", sizeof(ai::AgitatedSearchingState), ai_AgitatedSearchingState_typeInfo },
	{ "ai::AgitatedSearchingStateLanternBot", "AgitatedSearchingState", sizeof(ai::AgitatedSearchingStateLanternBot), ai_AgitatedSearchingStateLanternBot_typeInfo },
	{ "ai::IdleState", "State", sizeof(ai::IdleState), ai_IdleState_typeInfo },
	{ "ai::AlertIdleState", "IdleState", sizeof(ai::AlertIdleState), ai_AlertIdleState_typeInfo },
	{ "ai::BlindedState", "State", sizeof(ai::BlindedState), ai_BlindedState_typeInfo },
	{ "ai::CombatState", "State", sizeof(ai::CombatState), ai_CombatState_typeInfo },
	{ "ai::DeadState", "State", sizeof(ai::DeadState), ai_DeadState_typeInfo },
	{ "ai::EmergeFromCoverState", "State", sizeof(ai::EmergeFromCoverState), ai_EmergeFromCoverState_typeInfo },
	{ "ai::ExamineRopeState", "State", sizeof(ai::ExamineRopeState), ai_ExamineRopeState_typeInfo },
	{ "ai::FailedKnockoutState", "State", sizeof(ai::FailedKnockoutState), ai_FailedKnockoutState_typeInfo },
	{ "ai::FleeDoneState", "State", sizeof(ai::FleeDoneState), ai_FleeDoneState_typeInfo },
	{ "ai::FleeState", "State", sizeof(ai::FleeState), ai_FleeState_typeInfo },
	{ "ai::HitByMoveableState", "State", sizeof(ai::HitByMoveableState), ai_HitByMoveableState_typeInfo },
	{ "ai::IdleSleepState", "IdleState", sizeof(ai::IdleSleepState), ai_IdleSleepState_typeInfo },
	{ "ai::KnockedOutState", "State", sizeof(ai::KnockedOutState), ai_KnockedOutState_typeInfo },
	{ "ai::LostTrackOfEnemyState", "State", sizeof(ai::LostTrackOfEnemyState), ai_LostTrackOfEnemyState_typeInfo },
	{ "ai::ObservantState", "State", sizeof(ai::ObservantState), ai_ObservantState_typeInfo },
	{ "ai::PainState", "State", sizeof(ai::PainState), ai_PainState_typeInfo },
	{ "ai::PocketPickedState", "State", sizeof(ai::PocketPickedState), ai_PocketPickedState_typeInfo },
	{ "ai::StayInCoverState", "State", sizeof(ai::StayInCoverState), ai_StayInCoverState_typeInfo },
	{ "ai::SuspiciousState", "State", sizeof(ai::SuspiciousState), ai_SuspiciousState_typeInfo },
	{ "ai::SwitchOnLightState", "State", sizeof(ai::SwitchOnLightState), ai_SwitchOnLightState_typeInfo },
	{ "ai::TakeCoverState", "State", sizeof(ai::TakeCoverState), ai_TakeCoverState_typeInfo },
	{ "ai::UnreachableTargetState", "State", sizeof(ai::UnreachableTargetState), ai_UnreachableTargetState_typeInfo },
	{ "ai::AnimalPatrolTask", "Task", sizeof(ai::AnimalPatrolTask), ai_AnimalPatrolTask_typeInfo },
	{ "ai::ChaseEnemyRangedTask", "Task", sizeof(ai::ChaseEnemyRangedTask), ai_ChaseEnemyRangedTask_typeInfo },
	{ "ai::ChaseEnemyTask", "Task", sizeof(ai::ChaseEnemyTask), ai_ChaseEnemyTask_typeInfo },
	{ "ai::CombatTask", "Task", sizeof(ai::CombatTask), ai_CombatTask_typeInfo },
	{ "ai::CommWaitTask", "CommunicationTask", sizeof(ai::CommWaitTask), ai_CommWaitTask_typeInfo },
	{ "EscapePointEvaluator", "", sizeof(EscapePointEvaluator), EscapePointEvaluator_typeInfo },
	{ "AnyEscapePointFinder", "EscapePointEvaluator", sizeof(AnyEscapePointFinder), AnyEscapePointFinder_typeInfo },
	{ "GuardedEscapePointFinder", "EscapePointEvaluator", sizeof(GuardedEscapePointFinder), GuardedEscapePointFinder_typeInfo },
	{ "FriendlyEscapePointFinder", "EscapePointEvaluator", sizeof(FriendlyEscapePointFinder), FriendlyEscapePointFinder_typeInfo },
	{ "FriendlyGuardedEscapePointFinder", "EscapePointEvaluator", sizeof(FriendlyGuardedEscapePointFinder), FriendlyGuardedEscapePointFinder_typeInfo },
	{ "EscapeConditions", "", sizeof(EscapeConditions), EscapeConditions_typeInfo },
	{ "EscapePoint", "", sizeof(EscapePoint), EscapePoint_typeInfo },
	{ "EscapeGoal", "", sizeof(EscapeGoal), EscapeGoal_typeInfo },
	{ "CEscapePointManager", "", sizeof(CEscapePointManager), CEscapePointManager_typeInfo },
	{ "ai::FleeTask", "Task", sizeof(ai::FleeTask), ai_FleeTask_typeInfo },
	{ "ai::FollowActorTask", "Task", sizeof(ai::FollowActorTask), ai_FollowActorTask_typeInfo },
	{ "ai::SingleBarkTask", "CommunicationTask", sizeof(ai::SingleBarkTask), ai_SingleBarkTask_typeInfo },
	{ "ai::GreetingBarkTask", "SingleBarkTask", sizeof(ai::GreetingBarkTask), ai_GreetingBarkTask_typeInfo },
	{ "ai::GuardSpotTask", "Task", sizeof(ai::GuardSpotTask), ai_GuardSpotTask_typeInfo },
	{ "ai::HandleDoorTask", "Task", sizeof(ai::HandleDoorTask), ai_HandleDoorTask_typeInfo },
	{ "ai::HandleElevatorTask", "Task", sizeof(ai::HandleElevatorTask), ai_HandleElevatorTask_typeInfo },
	{ "ai::IdleAnimationTask", "Task", sizeof(ai::IdleAnimationTask), ai_IdleAnimationTask_typeInfo },
	{ "ai::InteractionTask", "Task", sizeof(ai::InteractionTask), ai_InteractionTask_typeInfo },
	{ "ai::InvestigateSpotTask", "Task", sizeof(ai::InvestigateSpotTask), ai_InvestigateSpotTask_typeInfo },
	{ "ai::MeleeCombatTask", "CombatTask", sizeof(ai::MeleeCombatTask), ai_MeleeCombatTask_typeInfo },
	{ "ai::MoveToCoverTask", "Task", sizeof(ai::MoveToCoverTask), ai_MoveToCoverTask_typeInfo },
	{ "ai::MoveToPositionTask", "Task", sizeof(ai::MoveToPositionTask), ai_MoveToPositionTask_typeInfo },
	{ "ai::PathTask", "Task", sizeof(ai::PathTask), ai_PathTask_typeInfo },
	{ "ai::PathAnimTask", "PathTask", sizeof(ai::PathAnimTask), ai_PathAnimTask_typeInfo },
	{ "ai::PathCornerTask", "PathTask", sizeof(ai::PathCornerTask), ai_PathCornerTask_typeInfo },
	{ "ai::PathCycleAnimTask", "PathTask", sizeof(ai::PathCycleAnimTask), ai_PathCycleAnimTask_typeInfo },
	{ "ai::PathHideTask", "PathTask", sizeof(ai::PathHideTask), ai_PathHideTask_typeInfo },
	{ "ai::PathInteractTask", "PathTask", sizeof(ai::PathInteractTask), ai_PathInteractTask_typeInfo },
	{ "ai::PathLookatTask", "PathTask", sizeof(ai::PathLookatTask), ai_PathLookatTask_typeInfo },
	{ "ai::PathSetMovetypeTask", "PathTask", sizeof(ai::PathSetMovetypeTask), ai_PathSetMovetypeTask_typeInfo },
	{ "ai::PathShowTask", "PathTask", sizeof(ai::PathShowTask), ai_PathShowTask_typeInfo },
	{ "ai::PathSitTask", "PathTask", sizeof(ai::PathSitTask), ai_PathSitTask_typeInfo },
	{ "ai::PathSleepTask", "PathTask", sizeof(ai::PathSleepTask), ai_PathSleepTask_typeInfo },
	{ "ai::PathTurnTask", "PathTask", sizeof(ai::PathTurnTask), ai_PathTurnTask_typeInfo },
	{ "ai::PathWaitForTriggerTask", "PathTask", sizeof(ai::PathWaitForTriggerTask), ai_PathWaitForTriggerTask_typeInfo },
	{ "ai::PathWaitTask", "PathTask", sizeof(ai::PathWaitTask), ai_PathWaitTask_typeInfo },
	{ "ai::PlayAnimationTask", "Task", sizeof(ai::PlayAnimationTask), ai_PlayAnimationTask_typeInfo },
	{ "ai::RandomHeadturnTask", "Task", sizeof(ai::RandomHeadturnTask), ai_RandomHeadturnTask_typeInfo },
	{ "ai::RandomTurningTask", "Task", sizeof(ai::RandomTurningTask), ai_RandomTurningTask_typeInfo },
	{ "ai::RangedCombatTask", "CombatTask", sizeof(ai::RangedCombatTask), ai_RangedCombatTask_typeInfo },
	{ "ai::RepeatedBarkTask", "CommunicationTask", sizeof(ai::RepeatedBarkTask), ai_RepeatedBarkTask_typeInfo },
	{ "ai::ResolveMovementBlockTask", "Task", sizeof(ai::ResolveMovementBlockTask), ai_ResolveMovementBlockTask_typeInfo },
	{ "ai::ScriptTask", "Task", sizeof(ai::ScriptTask), ai_ScriptTask_typeInfo },
	{ "ai::ThrowObjectTask", "Task", sizeof(ai::ThrowObjectTask), ai_ThrowObjectTask_typeInfo },
	{ "ai::WaitTask", "Task", sizeof(ai::WaitTask), ai_WaitTask_typeInfo },
	{ "ai::WanderInLocationTask", "Task", sizeof(ai::WanderInLocationTask), ai_WanderInLocationTask_typeInfo },
	{ "tdmAASFindEscape", "idAASCallback", sizeof(tdmAASFindEscape), tdmAASFindEscape_typeInfo },
	{ "SAIVehicleSpeed", "", sizeof(SAIVehicleSpeed), SAIVehicleSpeed_typeInfo },
	{ "CAIVehicle", "idAI", sizeof(CAIVehicle), CAIVehicle_typeInfo },
	{ "CBloodMarker", "idEntity", sizeof(CBloodMarker), CBloodMarker_typeInfo },
	{ "tdmDeclTDM_MatInfo", "idDecl", sizeof(tdmDeclTDM_MatInfo), tdmDeclTDM_MatInfo_typeInfo },
	{ "tdmDeclXData", "idDecl", sizeof(tdmDeclXData), tdmDeclXData_typeInfo },
	{ "CDownloadMenu::MissionDownload", "", sizeof(CDownloadMenu::MissionDownload), CDownloadMenu_MissionDownload_typeInfo },
	{ "CDownloadMenu", "", sizeof(CDownloadMenu), CDownloadMenu_typeInfo },
	{ "CForce_Grab", "idForce", sizeof(CForce_Grab), CForce_Grab_typeInfo },
	{ "CFrobHandle", "CBinaryFrobMover", sizeof(CFrobHandle), CFrobHandle_typeInfo },
	{ "CFrobDoorHandle", "CFrobHandle", sizeof(CFrobDoorHandle), CFrobDoorHandle_typeInfo },
	{ "CFrobLever", "CBinaryFrobMover", sizeof(CFrobLever), CFrobLever_typeInfo },
	{ "CFrobLockHandle", "CFrobHandle", sizeof(CFrobLockHandle), CFrobLockHandle_typeInfo },
	{ "CFrobLock", "idStaticEntity", sizeof(CFrobLock), CFrobLock_typeInfo },
	{ "CGrabbedEnt", "", sizeof(CGrabbedEnt), CGrabbedEnt_typeInfo },
	{ "CGrabber", "idEntity", sizeof(CGrabber), CGrabber_typeInfo },
	{ "CHttpConnection", "", sizeof(CHttpConnection), CHttpConnection_typeInfo },
	{ "CHttpRequest", "", sizeof(CHttpRequest), CHttpRequest_typeInfo },
	{ "IniFile::SectionCompareFunctor", "", sizeof(IniFile::SectionCompareFunctor), IniFile_SectionCompareFunctor_typeInfo },
	{ "IniFile::KeyCompareFunctor", "", sizeof(IniFile::KeyCompareFunctor), IniFile_KeyCompareFunctor_typeInfo },
	{ "IniFile::SectionVisitor", "", sizeof(IniFile::SectionVisitor), IniFile_SectionVisitor_typeInfo },
	{ "IniFile", "", sizeof(IniFile), IniFile_typeInfo },
	{ "CInventoryCursor", "", sizeof(CInventoryCursor), CInventoryCursor_typeInfo },
	{ "CInventory", "", sizeof(CInventory), CInventory_typeInfo },
	{ "CInventoryWeaponItem", "CInventoryItem", sizeof(CInventoryWeaponItem), CInventoryWeaponItem_typeInfo },
	{ "CMeleeWeapon", "idMoveable", sizeof(CMeleeWeapon), CMeleeWeapon_typeInfo },
	{ "CDownload::UserData", "", sizeof(CDownload::UserData), CDownload_UserData_typeInfo },
	{ "CDownload", "", sizeof(CDownload), CDownload_typeInfo },
	{ "CDownloadManager", "", sizeof(CDownloadManager), CDownloadManager_typeInfo },
	{ "CModInfo", "", sizeof(CModInfo), CModInfo_typeInfo },
	{ "CMissionDB", "", sizeof(CMissionDB), CMissionDB_typeInfo },
	{ "stdext::path", "", sizeof(stdext::path), stdext_path_typeInfo },
	{ "MissionScreenshot", "", sizeof(MissionScreenshot), MissionScreenshot_typeInfo },
	{ "DownloadableMod", "", sizeof(DownloadableMod), DownloadableMod_typeInfo },
	{ "MapSequenceElement", "", sizeof(MapSequenceElement), MapSequenceElement_typeInfo },
	{ "CMissionManager", "", sizeof(CMissionManager), CMissionManager_typeInfo },
	{ "CModInfoDecl", "", sizeof(CModInfoDecl), CModInfoDecl_typeInfo },
	{ NULL, NULL, 0, NULL }
};

#endif /* !__GAMETYPEINFO_H__ */
