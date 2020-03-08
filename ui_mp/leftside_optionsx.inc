// IW3 

CHOICE_SEPERATOR( 0 )
CHOICE_BUTTON( 0, "options_0", "GRAPHICS",                  LOCAL_CLOSE_ALL_IW5 open "pc_options_video"; )
CHOICE_BUTTON( 1, "options_1", "AUDIO",                  LOCAL_CLOSE_ALL_IW5 open "pc_options_audio"; )
CHOICE_BUTTON( 2, "options_2", "CONTROLS",               LOCAL_CLOSE_ALL_IW5 open "pc_options_controls"; )
CHOICE_BUTTON( 3, "options_3", "MULTIPLAYER",                   LOCAL_CLOSE_ALL_IW5 open "pc_options_multi"; )

CHOICE_SEPERATOR( 4 )

CHOICE_BUTTON_EX( 4, "options_4", "OPTIMAL GRAPHICS AND AUDIO",                  LOCAL_CLOSE_ALL_IW5 open "options_graphics_defaults";, disabled when ( ( ( dvarstring( "gameMode" ) == "so" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) || ( dvarstring( "gameMode" ) == "mp" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) ) ) )

CHOICE_SEPERATOR ( 5 )

itemDef
{
	rect 0 0 0 20 3 3
	visible 1
	foreColor 1 1 1 0.5
	type 1
	style 1
	textFont UI_FONT_NORMAL
	textAlignX 9
	textAlignY 17
	textScale 0.325
	exp rect x ( -755 )
	exp rect y ( -13.667 )
	exp rect w ( 45 )
	visible when ( dvarString( "wideScreen" ) == 1 )
	text "BACK"
	onFocus
	{
		play "mouse_over";
		setItemColor self "backColor" 0 0 0 0.25;
	}
	leaveFocus
	{
		setItemColor self "backColor" 0 0 0 0;
	}
	action
	{
		play "mouse_click";
		close "self";
	}
}