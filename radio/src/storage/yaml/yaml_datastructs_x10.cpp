// generated by generate_yaml.py

//
// Enums first
//

static const struct YamlIdStr enum_Functions[] = {
  {  FUNC_OVERRIDE_CHANNEL, "OVERRIDE_CHANNEL"  },
  {  FUNC_TRAINER, "TRAINER"  },
  {  FUNC_INSTANT_TRIM, "INSTANT_TRIM"  },
  {  FUNC_RESET, "RESET"  },
  {  FUNC_SET_TIMER, "SET_TIMER"  },
  {  FUNC_ADJUST_GVAR, "ADJUST_GVAR"  },
  {  FUNC_VOLUME, "VOLUME"  },
  {  FUNC_SET_FAILSAFE, "SET_FAILSAFE"  },
  {  FUNC_RANGECHECK, "RANGECHECK"  },
  {  FUNC_BIND, "BIND"  },
  {  FUNC_FIRST_WITHOUT_ENABLE, "FIRST_WITHOUT_ENABLE"  },
  {  FUNC_PLAY_SOUND, "PLAY_SOUND"  },
  {  FUNC_PLAY_TRACK, "PLAY_TRACK"  },
  {  FUNC_PLAY_VALUE, "PLAY_VALUE"  },
  {  FUNC_RESERVE4, "RESERVE4"  },
  {  FUNC_PLAY_SCRIPT, "PLAY_SCRIPT"  },
  {  FUNC_RESERVE5, "RESERVE5"  },
  {  FUNC_BACKGND_MUSIC, "BACKGND_MUSIC"  },
  {  FUNC_BACKGND_MUSIC_PAUSE, "BACKGND_MUSIC_PAUSE"  },
  {  FUNC_VARIO, "VARIO"  },
  {  FUNC_HAPTIC, "HAPTIC"  },
  {  FUNC_LOGS, "LOGS"  },
  {  FUNC_BACKLIGHT, "BACKLIGHT"  },
  {  FUNC_MAX, "MAX"  },
  {  0, NULL  }
};
static const struct YamlIdStr enum_ZoneOptionValueEnum[] = {
  {  ZOV_Unsigned, "Unsigned"  },
  {  ZOV_Signed, "Signed"  },
  {  ZOV_Bool, "Bool"  },
  {  ZOV_String, "String"  },
  {  0, NULL  }
};
static const struct YamlIdStr enum_MixSources[] = {
  {  MIXSRC_NONE, "NONE"  },
  {  MIXSRC_FIRST_INPUT, "FIRST_INPUT"  },
  {  MIXSRC_LAST_INPUT, "LAST_INPUT"  },
  {  MIXSRC_FIRST_LUA, "FIRST_LUA"  },
  {  MIXSRC_LAST_LUA, "LAST_LUA"  },
  {  MIXSRC_FIRST_STICK, "FIRST_STICK"  },
  {  MIXSRC_Rud, "Rud"  },
  {  MIXSRC_Ele, "Ele"  },
  {  MIXSRC_Thr, "Thr"  },
  {  MIXSRC_Ail, "Ail"  },
  {  MIXSRC_FIRST_POT, "FIRST_POT"  },
  {  MIXSRC_S1, "S1"  },
  {  MIXSRC_6POS, "6POS"  },
  {  MIXSRC_S2, "S2"  },
  {  MIXSRC_FIRST_SLIDER, "FIRST_SLIDER"  },
  {  MIXSRC_S3, "S3"  },
  {  MIXSRC_S4, "S4"  },
  {  MIXSRC_LS, "LS"  },
  {  MIXSRC_RS, "RS"  },
  {  MIXSRC_LAST_POT, "LAST_POT"  },
  {  MIXSRC_MOUSE1, "MOUSE1"  },
  {  MIXSRC_MOUSE2, "MOUSE2"  },
  {  MIXSRC_MAX, "MAX"  },
  {  MIXSRC_FIRST_HELI, "FIRST_HELI"  },
  {  MIXSRC_CYC1, "CYC1"  },
  {  MIXSRC_CYC2, "CYC2"  },
  {  MIXSRC_CYC3, "CYC3"  },
  {  MIXSRC_FIRST_TRIM, "FIRST_TRIM"  },
  {  MIXSRC_TrimRud, "TrimRud"  },
  {  MIXSRC_TrimEle, "TrimEle"  },
  {  MIXSRC_TrimThr, "TrimThr"  },
  {  MIXSRC_TrimAil, "TrimAil"  },
  {  MIXSRC_TrimT5, "TrimT5"  },
  {  MIXSRC_TrimT6, "TrimT6"  },
  {  MIXSRC_LAST_TRIM, "LAST_TRIM"  },
  {  MIXSRC_FIRST_SWITCH, "FIRST_SWITCH"  },
  {  MIXSRC_SA, "SA"  },
  {  MIXSRC_SB, "SB"  },
  {  MIXSRC_SC, "SC"  },
  {  MIXSRC_SD, "SD"  },
  {  MIXSRC_SE, "SE"  },
  {  MIXSRC_SF, "SF"  },
  {  MIXSRC_SG, "SG"  },
  {  MIXSRC_SH, "SH"  },
  {  MIXSRC_LAST_SWITCH, "LAST_SWITCH"  },
  {  MIXSRC_FIRST_LOGICAL_SWITCH, "FIRST_LOGICAL_SWITCH"  },
  {  MIXSRC_SW1, "SW1"  },
  {  MIXSRC_LAST_LOGICAL_SWITCH, "LAST_LOGICAL_SWITCH"  },
  {  MIXSRC_FIRST_TRAINER, "FIRST_TRAINER"  },
  {  MIXSRC_LAST_TRAINER, "LAST_TRAINER"  },
  {  MIXSRC_FIRST_CH, "FIRST_CH"  },
  {  MIXSRC_CH1, "CH1"  },
  {  MIXSRC_CH2, "CH2"  },
  {  MIXSRC_CH3, "CH3"  },
  {  MIXSRC_CH4, "CH4"  },
  {  MIXSRC_CH5, "CH5"  },
  {  MIXSRC_CH6, "CH6"  },
  {  MIXSRC_CH7, "CH7"  },
  {  MIXSRC_CH8, "CH8"  },
  {  MIXSRC_CH9, "CH9"  },
  {  MIXSRC_CH10, "CH10"  },
  {  MIXSRC_CH11, "CH11"  },
  {  MIXSRC_CH12, "CH12"  },
  {  MIXSRC_CH13, "CH13"  },
  {  MIXSRC_CH14, "CH14"  },
  {  MIXSRC_CH15, "CH15"  },
  {  MIXSRC_CH16, "CH16"  },
  {  MIXSRC_LAST_CH, "LAST_CH"  },
  {  MIXSRC_FIRST_GVAR, "FIRST_GVAR"  },
  {  MIXSRC_GVAR1, "GVAR1"  },
  {  MIXSRC_LAST_GVAR, "LAST_GVAR"  },
  {  MIXSRC_TX_VOLTAGE, "TX_VOLTAGE"  },
  {  MIXSRC_TX_TIME, "TX_TIME"  },
  {  MIXSRC_FIRST_RESERVE, "FIRST_RESERVE"  },
  {  MIXSRC_RESERVE2, "RESERVE2"  },
  {  MIXSRC_RESERVE3, "RESERVE3"  },
  {  MIXSRC_RESERVE4, "RESERVE4"  },
  {  MIXSRC_LAST_RESERVE, "LAST_RESERVE"  },
  {  MIXSRC_FIRST_TIMER, "FIRST_TIMER"  },
  {  MIXSRC_TIMER1, "TIMER1"  },
  {  MIXSRC_TIMER2, "TIMER2"  },
  {  MIXSRC_TIMER3, "TIMER3"  },
  {  MIXSRC_LAST_TIMER, "LAST_TIMER"  },
  {  MIXSRC_FIRST_TELEM, "FIRST_TELEM"  },
  {  MIXSRC_LAST_TELEM, "LAST_TELEM"  },
  {  0, NULL  }
};
static const struct YamlIdStr enum_LogicalSwitchesFunctions[] = {
  {  LS_FUNC_NONE, "FUNC_NONE"  },
  {  LS_FUNC_VEQUAL, "FUNC_VEQUAL"  },
  {  LS_FUNC_VALMOSTEQUAL, "FUNC_VALMOSTEQUAL"  },
  {  LS_FUNC_VPOS, "FUNC_VPOS"  },
  {  LS_FUNC_VNEG, "FUNC_VNEG"  },
  {  LS_FUNC_RANGE, "FUNC_RANGE"  },
  {  LS_FUNC_APOS, "FUNC_APOS"  },
  {  LS_FUNC_ANEG, "FUNC_ANEG"  },
  {  LS_FUNC_AND, "FUNC_AND"  },
  {  LS_FUNC_OR, "FUNC_OR"  },
  {  LS_FUNC_XOR, "FUNC_XOR"  },
  {  LS_FUNC_EDGE, "FUNC_EDGE"  },
  {  LS_FUNC_EQUAL, "FUNC_EQUAL"  },
  {  LS_FUNC_GREATER, "FUNC_GREATER"  },
  {  LS_FUNC_LESS, "FUNC_LESS"  },
  {  LS_FUNC_DIFFEGREATER, "FUNC_DIFFEGREATER"  },
  {  LS_FUNC_ADIFFEGREATER, "FUNC_ADIFFEGREATER"  },
  {  LS_FUNC_TIMER, "FUNC_TIMER"  },
  {  LS_FUNC_STICKY, "FUNC_STICKY"  },
  {  LS_FUNC_COUNT, "FUNC_COUNT"  },
  {  LS_FUNC_MAX, "FUNC_MAX"  },
  {  0, NULL  }
};
static const struct YamlIdStr enum_ModuleTypes[] = {
  {  MODULE_TYPE_NONE, "TYPE_NONE"  },
  {  MODULE_TYPE_PPM, "TYPE_PPM"  },
  {  MODULE_TYPE_XJT, "TYPE_XJT"  },
  {  MODULE_TYPE_DSM2, "TYPE_DSM2"  },
  {  MODULE_TYPE_CROSSFIRE, "TYPE_CROSSFIRE"  },
  {  MODULE_TYPE_MULTIMODULE, "TYPE_MULTIMODULE"  },
  {  MODULE_TYPE_R9M, "TYPE_R9M"  },
  {  MODULE_TYPE_SBUS, "TYPE_SBUS"  },
  {  MODULE_TYPE_COUNT, "TYPE_COUNT"  },
  {  0, NULL  }
};
static const struct YamlIdStr enum_DSM2Protocols[] = {
  {  DSM2_PROTO_LP45, "PROTO_LP45"  },
  {  DSM2_PROTO_DSM2, "PROTO_DSM2"  },
  {  DSM2_PROTO_DSMX, "PROTO_DSMX"  },
  {  0, NULL  }
};
static const struct YamlIdStr enum_XJTRFProtocols[] = {
  {  RF_PROTO_OFF, "PROTO_OFF"  },
  {  RF_PROTO_X16, "PROTO_X16"  },
  {  RF_PROTO_D8, "PROTO_D8"  },
  {  RF_PROTO_LR12, "PROTO_LR12"  },
  {  RF_PROTO_LAST, "PROTO_LAST"  },
  {  0, NULL  }
};

//
// Structs last
//

static const struct YamlNode struct_CalibData[] = {
  YAML_IDX,
  YAML_SIGNED( "mid", 16 ),
  YAML_SIGNED( "spanNeg", 16 ),
  YAML_SIGNED( "spanPos", 16 ),
  YAML_END
};
static const struct YamlNode struct_signed_16[] = {
  YAML_IDX,
  YAML_SIGNED( "val", 16 ),
  YAML_END
};
static const struct YamlNode struct_TrainerMix[] = {
  YAML_IDX,
  YAML_UNSIGNED( "srcChn", 6 ),
  YAML_UNSIGNED( "mode", 2 ),
  YAML_SIGNED( "studWeight", 8 ),
  YAML_END
};
static const struct YamlNode struct_TrainerData[] = {
  YAML_ARRAY("calib", 16, 4, struct_signed_16, NULL),
  YAML_ARRAY("mix", 16, 4, struct_TrainerMix, NULL),
  YAML_END
};
static const struct YamlNode struct_anonymous_1[] = {
  YAML_STRING("name", 6),
  YAML_END
};
static const struct YamlNode struct_anonymous_2[] = {
  YAML_SIGNED( "val", 16 ),
  YAML_UNSIGNED( "mode", 8 ),
  YAML_UNSIGNED( "param", 8 ),
  YAML_SIGNED( "spare", 16 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_3[] = {
  YAML_SIGNED( "val1", 32 ),
  YAML_SIGNED( "val2", 16 ),
  YAML_END
};
static const struct YamlNode union_anonymous_0_elmts[] = {
  YAML_STRUCT("play", 48, struct_anonymous_1, NULL),
  YAML_STRUCT("all", 48, struct_anonymous_2, NULL),
  YAML_STRUCT("clear", 48, struct_anonymous_3, NULL),
  YAML_END
};
static const struct YamlNode struct_CustomFunctionData[] = {
  YAML_IDX,
  YAML_SIGNED( "swtch", 9 ),
  YAML_ENUM("func", 7, enum_Functions),
  YAML_UNION("fp", 48, union_anonymous_0_elmts, select_custom_fn),
  YAML_UNSIGNED( "active", 8 ),
  YAML_END
};
static const struct YamlNode struct_string_24[] = {
  YAML_IDX,
  YAML_STRING("val", 3),
  YAML_END
};
static const struct YamlNode union_ZoneOptionValue_elmts[] = {
  YAML_UNSIGNED( "unsignedValue", 32 ),
  YAML_SIGNED( "signedValue", 32 ),
  YAML_SIGNED( "boolValue", 8 ),
  YAML_STRING("stringValue", 8),
  YAML_END
};
static const struct YamlNode struct_ZoneOptionValueTyped[] = {
  YAML_IDX,
  YAML_ENUM("type", 32, enum_ZoneOptionValueEnum),
  YAML_UNION("value", 64, union_ZoneOptionValue_elmts, select_zov),
  YAML_END
};
static const struct YamlNode struct_Theme__PersistentData[] = {
  YAML_ARRAY("options", 96, 5, struct_ZoneOptionValueTyped, NULL),
  YAML_END
};
static const struct YamlNode struct_RadioData[] = {
  YAML_UNSIGNED( "version", 8 ),
  YAML_UNSIGNED( "variant", 16 ),
  YAML_ARRAY("calib", 48, 13, struct_CalibData, NULL),
  YAML_UNSIGNED( "chkSum", 16 ),
  YAML_UNSIGNED( "vBatWarn", 8 ),
  YAML_SIGNED( "txVoltageCalibration", 8 ),
  YAML_SIGNED( "backlightMode", 8 ),
  YAML_STRUCT("trainer", 128, struct_TrainerData, NULL),
  YAML_UNSIGNED( "view", 8 ),
  YAML_SIGNED( "spareRadio", 2 ),
  YAML_UNSIGNED( "fai", 1 ),
  YAML_SIGNED( "beepMode", 2 ),
  YAML_UNSIGNED( "alarmsFlash", 1 ),
  YAML_UNSIGNED( "disableMemoryWarning", 1 ),
  YAML_UNSIGNED( "disableAlarmWarning", 1 ),
  YAML_UNSIGNED( "stickMode", 2 ),
  YAML_SIGNED( "timezone", 5 ),
  YAML_UNSIGNED( "adjustRTC", 1 ),
  YAML_UNSIGNED( "inactivityTimer", 8 ),
  YAML_UNSIGNED( "telemetryBaudrate", 3 ),
  YAML_UNSIGNED( "splashSpares", 3 ),
  YAML_SIGNED( "hapticMode", 2 ),
  YAML_SIGNED( "switchesDelay", 8 ),
  YAML_UNSIGNED( "lightAutoOff", 8 ),
  YAML_UNSIGNED( "templateSetup", 8 ),
  YAML_SIGNED( "PPM_Multiplier", 8 ),
  YAML_SIGNED( "hapticLength", 8 ),
  YAML_SIGNED( "beepLength", 3 ),
  YAML_SIGNED( "hapticStrength", 3 ),
  YAML_UNSIGNED( "gpsFormat", 1 ),
  YAML_UNSIGNED( "unexpectedShutdown", 1 ),
  YAML_UNSIGNED( "speakerPitch", 8 ),
  YAML_SIGNED( "speakerVolume", 8 ),
  YAML_SIGNED( "vBatMin", 8 ),
  YAML_SIGNED( "vBatMax", 8 ),
  YAML_UNSIGNED( "backlightBright", 8 ),
  YAML_UNSIGNED( "globalTimer", 32 ),
  YAML_UNSIGNED( "bluetoothBaudrate", 4 ),
  YAML_UNSIGNED( "bluetoothMode", 4 ),
  YAML_UNSIGNED( "countryCode", 8 ),
  YAML_UNSIGNED( "imperial", 1 ),
  YAML_UNSIGNED( "jitterFilter", 1 ),
  YAML_UNSIGNED( "disableRssiPoweroffAlarm", 1 ),
  YAML_UNSIGNED( "USBMode", 2 ),
  YAML_UNSIGNED( "spareExtraArm", 3 ),
  YAML_STRING("ttsLanguage", 2),
  YAML_SIGNED( "beepVolume", 4 ),
  YAML_SIGNED( "wavVolume", 4 ),
  YAML_SIGNED( "varioVolume", 4 ),
  YAML_SIGNED( "backgroundVolume", 4 ),
  YAML_SIGNED( "varioPitch", 8 ),
  YAML_SIGNED( "varioRange", 8 ),
  YAML_SIGNED( "varioRepeat", 8 ),
  YAML_ARRAY("customFn", 72, 64, struct_CustomFunctionData, NULL),
  YAML_UNSIGNED( "serial2Mode", 4 ),
  YAML_UNSIGNED( "slidersConfig", 4 ),
  YAML_UNSIGNED( "switchConfig", 32 ),
  YAML_UNSIGNED( "potsConfig", 8 ),
  YAML_ARRAY("switchNames", 24, 8, struct_string_24, NULL),
  YAML_ARRAY("anaNames", 24, 11, struct_string_24, NULL),
  YAML_STRING("currModelFilename", 17),
  YAML_UNSIGNED( "spare", 1 ),
  YAML_UNSIGNED( "blOffBright", 7 ),
  YAML_STRING("bluetoothName", 10),
  YAML_STRING("themeName", 8),
  YAML_STRUCT("themeData", 480, struct_Theme__PersistentData, NULL),
  YAML_END
};
static const struct YamlNode struct_unsigned_8[] = {
  YAML_IDX,
  YAML_UNSIGNED( "val", 8 ),
  YAML_END
};
static const struct YamlNode struct_ModelHeader[] = {
  YAML_STRING("name", 15),
  YAML_ARRAY("modelId", 8, 2, struct_unsigned_8, NULL),
  YAML_STRING("bitmap", 10),
  YAML_END
};
static const struct YamlNode struct_TimerData[] = {
  YAML_IDX,
  YAML_SIGNED( "mode", 9 ),
  YAML_UNSIGNED( "start", 23 ),
  YAML_SIGNED( "value", 24 ),
  YAML_UNSIGNED( "countdownBeep", 2 ),
  YAML_UNSIGNED( "minuteBeep", 1 ),
  YAML_UNSIGNED( "persistent", 2 ),
  YAML_SIGNED( "countdownStart", 2 ),
  YAML_UNSIGNED( "direction", 1 ),
  YAML_STRING("name", 8),
  YAML_END
};
static const struct YamlNode struct_CurveRef[] = {
  YAML_UNSIGNED( "type", 8 ),
  YAML_SIGNED( "value", 8 ),
  YAML_END
};
static const struct YamlNode struct_MixData[] = {
  YAML_IDX,
  YAML_SIGNED_CUST( "weight", 11, in_read_weight, in_write_weight ),
  YAML_UNSIGNED( "destCh", 5 ),
  YAML_UNSIGNED( "srcRaw", 10 ),
  YAML_UNSIGNED( "carryTrim", 1 ),
  YAML_UNSIGNED( "mixWarn", 2 ),
  YAML_UNSIGNED( "mltpx", 2 ),
  YAML_UNSIGNED( "spare", 1 ),
  YAML_SIGNED( "offset", 14 ),
  YAML_SIGNED( "swtch", 9 ),
  YAML_UNSIGNED( "flightModes", 9 ),
  YAML_STRUCT("curve", 16, struct_CurveRef, NULL),
  YAML_UNSIGNED( "delayUp", 8 ),
  YAML_UNSIGNED( "delayDown", 8 ),
  YAML_UNSIGNED( "speedUp", 8 ),
  YAML_UNSIGNED( "speedDown", 8 ),
  YAML_STRING("name", 6),
  YAML_END
};
static const struct YamlNode struct_LimitData[] = {
  YAML_IDX,
  YAML_SIGNED( "min", 11 ),
  YAML_SIGNED( "max", 11 ),
  YAML_SIGNED( "ppmCenter", 10 ),
  YAML_SIGNED( "offset", 11 ),
  YAML_UNSIGNED( "symetrical", 1 ),
  YAML_UNSIGNED( "revert", 1 ),
  YAML_UNSIGNED( "spare", 3 ),
  YAML_SIGNED( "curve", 8 ),
  YAML_STRING("name", 6),
  YAML_END
};
static const struct YamlNode struct_ExpoData[] = {
  YAML_IDX,
  YAML_UNSIGNED( "mode", 2 ),
  YAML_UNSIGNED( "scale", 14 ),
  YAML_ENUM("srcRaw", 10, enum_MixSources),
  YAML_SIGNED( "carryTrim", 6 ),
  YAML_UNSIGNED( "chn", 5 ),
  YAML_SIGNED( "swtch", 9 ),
  YAML_UNSIGNED( "flightModes", 9 ),
  YAML_SIGNED_CUST( "weight", 8, in_read_weight, in_write_weight ),
  YAML_SIGNED( "spare", 1 ),
  YAML_STRING("name", 6),
  YAML_SIGNED( "offset", 8 ),
  YAML_STRUCT("curve", 16, struct_CurveRef, NULL),
  YAML_END
};
static const struct YamlNode struct_CurveData[] = {
  YAML_IDX,
  YAML_UNSIGNED( "type", 1 ),
  YAML_UNSIGNED( "smooth", 1 ),
  YAML_SIGNED( "points", 6 ),
  YAML_STRING("name", 3),
  YAML_END
};
static const struct YamlNode struct_signed_8[] = {
  YAML_IDX,
  YAML_SIGNED( "val", 8 ),
  YAML_END
};
static const struct YamlNode struct_LogicalSwitchData[] = {
  YAML_IDX,
  YAML_ENUM("func", 8, enum_LogicalSwitchesFunctions),
  YAML_SIGNED( "v1", 10 ),
  YAML_SIGNED( "v3", 10 ),
  YAML_SIGNED( "andsw", 9 ),
  YAML_UNSIGNED( "andswtype", 1 ),
  YAML_UNSIGNED( "spare", 2 ),
  YAML_SIGNED( "v2", 16 ),
  YAML_UNSIGNED( "delay", 8 ),
  YAML_UNSIGNED( "duration", 8 ),
  YAML_END
};
static const struct YamlNode struct_SwashRingData[] = {
  YAML_UNSIGNED( "type", 8 ),
  YAML_UNSIGNED( "value", 8 ),
  YAML_UNSIGNED( "collectiveSource", 8 ),
  YAML_UNSIGNED( "aileronSource", 8 ),
  YAML_UNSIGNED( "elevatorSource", 8 ),
  YAML_SIGNED( "collectiveWeight", 8 ),
  YAML_SIGNED( "aileronWeight", 8 ),
  YAML_SIGNED( "elevatorWeight", 8 ),
  YAML_END
};
static const struct YamlNode struct_trim_t[] = {
  YAML_IDX,
  YAML_SIGNED( "value", 11 ),
  YAML_UNSIGNED( "mode", 5 ),
  YAML_END
};
static const struct YamlNode struct_FlightModeData[] = {
  YAML_IDX,
  YAML_ARRAY("trim", 16, 6, struct_trim_t, NULL),
  YAML_STRING("name", 10),
  YAML_SIGNED( "swtch", 9 ),
  YAML_SIGNED( "spare", 7 ),
  YAML_UNSIGNED( "fadeIn", 8 ),
  YAML_UNSIGNED( "fadeOut", 8 ),
  YAML_ARRAY("gvars", 16, 9, struct_signed_16, NULL),
  YAML_END
};
static const struct YamlNode struct_GVarData[] = {
  YAML_IDX,
  YAML_STRING("name", 3),
  YAML_UNSIGNED( "min", 12 ),
  YAML_UNSIGNED( "max", 12 ),
  YAML_UNSIGNED( "popup", 1 ),
  YAML_UNSIGNED( "prec", 1 ),
  YAML_UNSIGNED( "unit", 2 ),
  YAML_UNSIGNED( "spare", 4 ),
  YAML_END
};
static const struct YamlNode struct_FrSkyTelemetryData[] = {
  YAML_UNSIGNED( "varioSource", 7 ),
  YAML_UNSIGNED( "varioCenterSilent", 1 ),
  YAML_SIGNED( "varioCenterMax", 8 ),
  YAML_SIGNED( "varioCenterMin", 8 ),
  YAML_SIGNED( "varioMin", 8 ),
  YAML_SIGNED( "varioMax", 8 ),
  YAML_END
};
static const struct YamlNode struct_RssiAlarmData[] = {
  YAML_SIGNED( "disabled", 1 ),
  YAML_SIGNED( "spare", 1 ),
  YAML_SIGNED( "warning", 6 ),
  YAML_SIGNED( "spare2", 2 ),
  YAML_SIGNED( "critical", 6 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_5[] = {
  YAML_SIGNED( "delay", 6 ),
  YAML_UNSIGNED( "pulsePol", 1 ),
  YAML_UNSIGNED( "outputType", 1 ),
  YAML_SIGNED( "frameLength", 8 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_6[] = {
  YAML_UNSIGNED( "rfProtocolExtra", 2 ),
  YAML_UNSIGNED( "spare1", 3 ),
  YAML_UNSIGNED( "customProto", 1 ),
  YAML_UNSIGNED( "autoBindMode", 1 ),
  YAML_UNSIGNED( "lowPowerMode", 1 ),
  YAML_SIGNED( "optionValue", 8 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_7[] = {
  YAML_UNSIGNED( "power", 2 ),
  YAML_UNSIGNED( "spare1", 2 ),
  YAML_UNSIGNED( "receiver_telem_off", 1 ),
  YAML_UNSIGNED( "receiver_channel_9_16", 1 ),
  YAML_UNSIGNED( "external_antenna", 1 ),
  YAML_UNSIGNED( "fast", 1 ),
  YAML_UNSIGNED( "spare2", 8 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_8[] = {
  YAML_UNSIGNED( "spare1", 6 ),
  YAML_UNSIGNED( "noninverted", 1 ),
  YAML_UNSIGNED( "spare2", 1 ),
  YAML_SIGNED( "refreshRate", 8 ),
  YAML_END
};
static const struct YamlNode union_anonymous_4_elmts[] = {
  YAML_STRUCT("ppm", 16, struct_anonymous_5, NULL),
  YAML_STRUCT("multi", 16, struct_anonymous_6, NULL),
  YAML_STRUCT("pxx", 16, struct_anonymous_7, NULL),
  YAML_STRUCT("sbus", 16, struct_anonymous_8, NULL),
  YAML_END
};
static const struct YamlNode struct_ModuleData[] = {
  YAML_IDX,
  YAML_ENUM("type", 4, enum_ModuleTypes),
  YAML_ENUM("rfProtocol", 4, enum_XJTRFProtocols),
  YAML_UNSIGNED( "channelsStart", 8 ),
  YAML_SIGNED( "channelsCount", 8 ),
  YAML_UNSIGNED( "failsafeMode", 4 ),
  YAML_UNSIGNED( "subType", 3 ),
  YAML_UNSIGNED( "invertedSerial", 1 ),
  YAML_ARRAY("failsafeChannels", 16, 32, struct_signed_16, NULL),
  YAML_UNION("mod", 16, union_anonymous_4_elmts, select_mod_type),
  YAML_END
};
static const struct YamlNode union_ScriptDataInput_elmts[] = {
  YAML_SIGNED( "value", 16 ),
  YAML_UNSIGNED( "source", 16 ),
  YAML_END
};
static const struct YamlNode union_ScriptDataInput[] = {
  YAML_IDX,
  YAML_UNION("u", 16, union_ScriptDataInput_elmts, select_script_input),
  YAML_END
};
static const struct YamlNode struct_ScriptData[] = {
  YAML_IDX,
  YAML_STRING("file", 6),
  YAML_STRING("name", 6),
  YAML_ARRAY("inputs", 16, 6, union_ScriptDataInput, NULL),
  YAML_END
};
static const struct YamlNode struct_string_32[] = {
  YAML_IDX,
  YAML_STRING("val", 4),
  YAML_END
};
static const struct YamlNode union_anonymous_9_elmts[] = {
  YAML_UNSIGNED( "id", 16 ),
  YAML_UNSIGNED( "persistentValue", 16 ),
  YAML_END
};
static const struct YamlNode union_anonymous_10_elmts[] = {
  YAML_UNSIGNED( "instance", 8 ),
  YAML_UNSIGNED( "formula", 8 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_12[] = {
  YAML_UNSIGNED( "ratio", 16 ),
  YAML_SIGNED( "offset", 16 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_13[] = {
  YAML_UNSIGNED( "source", 8 ),
  YAML_UNSIGNED( "index", 8 ),
  YAML_UNSIGNED( "spare", 16 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_14[] = {
  YAML_ARRAY("sources", 8, 4, struct_signed_8, NULL),
  YAML_END
};
static const struct YamlNode struct_anonymous_15[] = {
  YAML_UNSIGNED( "source", 8 ),
  YAML_ARRAY("spare", 8, 3, struct_unsigned_8, NULL),
  YAML_END
};
static const struct YamlNode struct_anonymous_16[] = {
  YAML_UNSIGNED( "gps", 8 ),
  YAML_UNSIGNED( "alt", 8 ),
  YAML_UNSIGNED( "spare", 16 ),
  YAML_END
};
static const struct YamlNode union_anonymous_11_elmts[] = {
  YAML_STRUCT("custom", 32, struct_anonymous_12, NULL),
  YAML_STRUCT("cell", 32, struct_anonymous_13, NULL),
  YAML_STRUCT("calc", 32, struct_anonymous_14, NULL),
  YAML_STRUCT("consumption", 32, struct_anonymous_15, NULL),
  YAML_STRUCT("dist", 32, struct_anonymous_16, NULL),
  YAML_UNSIGNED( "param", 32 ),
  YAML_END
};
static const struct YamlNode struct_TelemetrySensor[] = {
  YAML_IDX,
  YAML_UNION("id1", 16, union_anonymous_9_elmts, select_id1),
  YAML_UNION("id2", 8, union_anonymous_10_elmts, select_id2),
  YAML_STRING("label", 4),
  YAML_UNSIGNED( "type", 1 ),
  YAML_UNSIGNED( "unit", 5 ),
  YAML_UNSIGNED( "prec", 2 ),
  YAML_UNSIGNED( "autoOffset", 1 ),
  YAML_UNSIGNED( "filter", 1 ),
  YAML_UNSIGNED( "logs", 1 ),
  YAML_UNSIGNED( "persistent", 1 ),
  YAML_UNSIGNED( "onlyPositive", 1 ),
  YAML_UNSIGNED( "subId", 3 ),
  YAML_UNION("cfg", 32, union_anonymous_11_elmts, select_sensor_cfg),
  YAML_END
};
static const struct YamlNode struct_Widget__PersistentData[] = {
  YAML_ARRAY("options", 96, 5, struct_ZoneOptionValueTyped, NULL),
  YAML_END
};
static const struct YamlNode struct_ZonePersistentData[] = {
  YAML_IDX,
  YAML_STRING("widgetName", 10),
  YAML_STRUCT("widgetData", 480, struct_Widget__PersistentData, NULL),
  YAML_END
};
static const struct YamlNode struct_Layout__PersistentData[] = {
  YAML_ARRAY("zones", 576, 10, struct_ZonePersistentData, NULL),
  YAML_ARRAY("options", 96, 10, struct_ZoneOptionValueTyped, NULL),
  YAML_END
};
static const struct YamlNode struct_CustomScreenData[] = {
  YAML_IDX,
  YAML_STRING("layoutName", 10),
  YAML_STRUCT("layoutData", 6720, struct_Layout__PersistentData, NULL),
  YAML_END
};
static const struct YamlNode struct_Topbar__PersistentData[] = {
  YAML_ARRAY("zones", 576, 4, struct_ZonePersistentData, NULL),
  YAML_ARRAY("options", 96, 1, struct_ZoneOptionValueTyped, NULL),
  YAML_END
};
static const struct YamlNode struct_ModelData[] = {
  YAML_STRUCT("header", 216, struct_ModelHeader, NULL),
  YAML_ARRAY("timers", 128, 3, struct_TimerData, NULL),
  YAML_UNSIGNED( "telemetryProtocol", 3 ),
  YAML_UNSIGNED( "thrTrim", 1 ),
  YAML_UNSIGNED( "noGlobalFunctions", 1 ),
  YAML_UNSIGNED( "displayTrims", 2 ),
  YAML_UNSIGNED( "ignoreSensorIds", 1 ),
  YAML_SIGNED( "trimInc", 3 ),
  YAML_UNSIGNED( "disableThrottleWarning", 1 ),
  YAML_UNSIGNED( "displayChecklist", 1 ),
  YAML_UNSIGNED( "extendedLimits", 1 ),
  YAML_UNSIGNED( "extendedTrims", 1 ),
  YAML_UNSIGNED( "throttleReversed", 1 ),
  YAML_UNSIGNED( "beepANACenter", 16 ),
  YAML_ARRAY("mixData", 160, 64, struct_MixData, NULL),
  YAML_ARRAY("limitData", 104, 32, struct_LimitData, NULL),
  YAML_ARRAY("expoData", 136, 64, struct_ExpoData, NULL),
  YAML_ARRAY("curves", 32, 32, struct_CurveData, NULL),
  YAML_ARRAY("points", 8, 512, struct_signed_8, NULL),
  YAML_ARRAY("logicalSw", 72, 64, struct_LogicalSwitchData, NULL),
  YAML_ARRAY("customFn", 72, 64, struct_CustomFunctionData, NULL),
  YAML_STRUCT("swashR", 64, struct_SwashRingData, NULL),
  YAML_ARRAY("flightModeData", 352, 9, struct_FlightModeData, NULL),
  YAML_UNSIGNED( "thrTraceSrc", 8 ),
  YAML_UNSIGNED( "switchWarningState", 32 ),
  YAML_ARRAY("gvars", 56, 9, struct_GVarData, NULL),
  YAML_STRUCT("frsky", 40, struct_FrSkyTelemetryData, NULL),
  YAML_STRUCT("rssiAlarms", 16, struct_RssiAlarmData, NULL),
  YAML_UNSIGNED( "spare", 3 ),
  YAML_UNSIGNED( "trainerMode", 3 ),
  YAML_UNSIGNED( "potsWarnMode", 2 ),
  YAML_ARRAY("moduleData", 560, 3, struct_ModuleData, NULL),
  YAML_ARRAY("scriptsData", 192, 9, struct_ScriptData, NULL),
  YAML_ARRAY("inputNames", 32, 32, struct_string_32, NULL),
  YAML_UNSIGNED( "potsWarnEnabled", 8 ),
  YAML_ARRAY("potsWarnPosition", 8, 5, struct_signed_8, NULL),
  YAML_ARRAY("potsWarnSpares", 8, 2, struct_unsigned_8, NULL),
  YAML_ARRAY("telemetrySensors", 104, 32, struct_TelemetrySensor, NULL),
  YAML_ARRAY("screenData", 6800, 5, struct_CustomScreenData, NULL),
  YAML_STRUCT("topbarData", 2400, struct_Topbar__PersistentData, NULL),
  YAML_UNSIGNED( "view", 8 ),
  YAML_END
};

#define MAX_RADIODATA_MODELDATA_STR_LEN 24

static const struct YamlNode __RadioData_root_node = YAML_ROOT( struct_RadioData );

const YamlNode* get_radiodata_nodes()
{
   return &__RadioData_root_node;
}
static const struct YamlNode __ModelData_root_node = YAML_ROOT( struct_ModelData );

const YamlNode* get_modeldata_nodes()
{
   return &__ModelData_root_node;
}

