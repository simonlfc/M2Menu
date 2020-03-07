// IW3 

CHOICE_SEPERATOR( 0 )

CHOICE_BUTTON_VIS(      0,  "more_options_0", "@MENU_GRAPHICS",         LOCAL_CLOSE_ALL_IW5 open "options_graphics";,           when ( dvarString("ui_allowMoreOptions") == 1 ) )
CHOICE_BUTTON_VIS(      1,  "more_options_1", "@MENU_TEXTURE_SETTINGS", LOCAL_CLOSE_ALL_IW5 open "options_graphics_texture";,   when ( dvarString("ui_allowMoreOptions") == 1 ) )
CHOICE_BUTTON_VIS(      2,  "more_options_2", "@MENU_AUDIO",            LOCAL_CLOSE_ALL_IW5 open "pc_options_audio";,           when ( dvarString("ui_allowMoreOptions") == 1 ) )
CHOICE_BUTTON_VIS(      3,  "more_options_3", "@MENU_CONTROLS",         LOCAL_CLOSE_ALL_IW5 open "pc_options_controls";,        when ( dvarString("ui_allowMoreOptions") == 1 ) )
CHOICE_BUTTON_VIS(      4,  "more_options_4", "@MENU_VOICE",            LOCAL_CLOSE_ALL_IW5 open "pc_options_voice";,           when ( dvarString("ui_allowMoreOptions") == 1 ) )
CHOICE_BUTTON_EX_VIS(   5,  "more_options_5", "Dedicated Server",       LOCAL_CLOSE_ALL_IW5 ;,                                  when ( dvarString("ui_allowMoreOptions") == 1 ), disabled when ( 1 ) )

CHOICE_SEPERATOR_VIS(   6,  when ( dvarString("ui_allowMoreOptions") == 1 ) )

//CHOICE_BUTTON_EX_VIS(   6, "more_options_6", "Login with Facebook", ;,  when ( dvarString("ui_allowMoreOptions") == 1 ), disabled when( 1 ) )
CHOICE_BUTTON_EX_VIS(   7, "more_options_7", "@MENU_RESET_SYSTEM_DEFAULTS", LOCAL_CLOSE_ALL_IW5 open "options_graphics_defaults";, when ( dvarString("ui_allowMoreOptions") == 1 ), disabled when ( ( ( dvarstring( "gameMode" ) == "so" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) || ( dvarstring( "gameMode" ) == "mp" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) ) ) )
CHOICE_SEPERATOR_VIS(   8,  when ( dvarString("ui_allowMoreOptions") == 1 ) )

// STOCK 

CHOICE_BUTTON_VIS(      0, "options_0", "@MENU_VIDEO",                  LOCAL_CLOSE_ALL_IW5 open "pc_options_video";,       when ( dvarString("ui_allowMoreOptions") == 0 ) )
CHOICE_BUTTON_VIS(      1, "options_1", "@MENU_AUDIO",                  LOCAL_CLOSE_ALL_IW5 open "pc_options_audio";,       when ( dvarString("ui_allowMoreOptions") == 0 ) )
CHOICE_BUTTON_VIS(      2, "options_2", "@MENU_CONTROLS",               LOCAL_CLOSE_ALL_IW5 open "pc_options_controls";,    when ( dvarString("ui_allowMoreOptions") == 0 ) )
CHOICE_BUTTON_VIS(      3, "options_3", "@MENU_VOICE",                  LOCAL_CLOSE_ALL_IW5 open "pc_options_voice";,       when ( dvarString("ui_allowMoreOptions") == 0 ) )
CHOICE_BUTTON_EX_VIS(   4, "options_4", "Dedicated Server",             LOCAL_CLOSE_ALL_IW5 ;,                              when ( dvarString("ui_allowMoreOptions") == 0 ), disabled when ( 1 ) )

CHOICE_SEPERATOR_VIS( 5, when ( dvarString("ui_allowMoreOptions") == 0 ) )

//CHOICE_BUTTON_EX_VIS(   6, "options_6", "Login with Facebook", ;,  when ( dvarString("ui_allowMoreOptions") == 0 ), disabled when( 1 ) )
CHOICE_BUTTON_EX_VIS(   6, "options_7", "@MENU_RESET_SYSTEM_DEFAULTS", LOCAL_CLOSE_ALL_IW5 open "options_graphics_defaults";, when ( dvarString("ui_allowMoreOptions") == 0 ), disabled when ( ( ( dvarstring( "gameMode" ) == "so" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) || ( dvarstring( "gameMode" ) == "mp" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) ) ) )
CHOICE_SEPERATOR_VIS(   7,  when ( dvarString("ui_allowMoreOptions") == 0 ) )