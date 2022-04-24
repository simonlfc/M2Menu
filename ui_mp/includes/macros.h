#define CREATE_SHADER( position, texture, colour ) \
		CREATE_SHADER_VIS( position, texture, colour, 1 )

#define CREATE_SHADER_VIS( position, texture, colour, visibility ) \
		CREATE_SHADER_EX( position, texture, colour, visibility, ; )

#define CREATE_SHADER_EX( position, texture, colour, visibility, extra ) \
		itemDef \
		{ \
			style 			WINDOW_STYLE_SHADER \
			rect 			position; \
			forecolor 		colour \
			exp 			material ( texture ) \
			visible 		when ( visibility ) \
			decoration 		\
			extra			\
		}

#define CREATE_SHADER_ALT( position, texture, colour, visibility, extra ) \
		itemDef \
		{ \
			style 			WINDOW_STYLE_FILLED \
			rect 			position; \
			backcolor 		colour \
			background		texture \
			visible 		when ( visibility ) \
			decoration 		\
			extra			\
		}

#define CREATE_TEXT( position, string, color, visibility, extras ) \
		itemDef \
		{ \
			rect 			position; \
			style 			1 \
			forecolor 		color \
			exp 			text ( string ) \
			visible 		when ( visibility ) \
			decoration \
			extras \
		}

#define CHOICE_X_SIZE						200
#define CHOICE_Y_SIZE						23
#define CHOICE_X_START						-28
#define CHOICE_Y_START					    55
#define CHOICE_X_SPACING					250
#define CHOICE_Y_COUNT						20
#define CHOICE_Y_SPACING					CHOICE_Y_SIZE
#define CHOICE_HORIZONTAL_ALIGN 			HORIZONTAL_ALIGN_LEFT
#define CHOICE_VERTICAL_ALIGN 				VERTICAL_ALIGN_TOP
#define CHOICE_ROW( idx )					( ( idx - 0 ) % CHOICE_Y_COUNT )
#define CHOICE_COL( idx )					( ( idx - 0 - ( ( idx - 0 ) % CHOICE_Y_COUNT ) ) / CHOICE_Y_COUNT )
#define CHOICE_X( idx ) 					( CHOICE_X_START + CHOICE_X_SPACING * CHOICE_COL( idx ) )
#define CHOICE_Y( idx ) 					( CHOICE_Y_START + CHOICE_Y_SPACING * CHOICE_ROW( idx ) )
#define CHOICE_ORIGIN( idx )				CHOICE_X( idx ) CHOICE_Y( idx )
#define CHOICE_RECT( idx )					CHOICE_ORIGIN( idx ) CHOICE_X_SIZE CHOICE_Y_SIZE CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN


#define CREATE_GAME_ACTION \
		exec							"xrequirelivesignin"; \
		setDvar							"systemlink" 0; \
		setDvar							"splitscreen" 0; \
		setDvar							"onlinegame" 1; \
		exec							"exec default_xboxlive.cfg"; \
		setDvar							"party_maxplayers" 18; \
		setDvar							"xblive_privateserver" 0; \
		setDvar							"xblive_rankedmatch" 0; \
		exec							"xstartprivateparty"; \
		setDvar							"ui_mptype" 0; \
		exec							"xcheckezpatch"; \
		exec							"exec default_xboxlive.cfg" \
		setDvar							"xblive_rankedmatch" 0; \
		exec							"ui_enumeratesaved"; \
		setDvar							"xblive_privateserver" 1; \
		exec							"xstartprivatematch"; \
		open							"menu_xboxlive_privatelobby";