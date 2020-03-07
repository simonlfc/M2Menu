CHOICE_BUTTON( 1, "Movement", LOCAL_CLOSE_ALL_IW5 open "pc_options_movement" )
CHOICE_BUTTON( 2, "Actions", LOCAL_CLOSE_ALL_IW5 open "pc_options_actions" )
CHOICE_BUTTON( 3, "Look", LOCAL_CLOSE_ALL_IW5 open "pc_options_look" )

CHOICE_SEPARATOR( CHOICE_SEP_1 )

CHOICE_BUTTON_VIS( 4, "@MENU_MULTIPLAYER", LOCAL_CLOSE_ALL_IW5 open "controls_multi", when( dvarInt( "ui_multiplayer" ) ) )
CHOICE_DBUTTON_VIS( 4, "@MENU_MULTIPLAYER", when( !dvarInt( ui_multiplayer ) ); )

CHOICE_SEPARATOR( CHOICE_SEP_2 )

CHOICE_BUTTON( 5, "@MENU_SET_DEFAULT_CONTROLS", LOCAL_CLOSE_ALL_IW5 open "options_control_defaults" )