// --- gametype list --------

#define LOCAL_GAMETYPE_SHOW( p_gametype ) \
		setLocalVarString ui_info_name "@" + tablelookup( "mp/gameTypesTable.csv" , 0 , p_gametype , 1  ); \
		setLocalVarString ui_info_desc "@" + tablelookup( "mp/gameTypesTable.csv" , 0 , p_gametype , 2  ); \

#define LOCAL_GAMETYPE_ACTION( p_gametype ) \
		setdvar ui_gametype p_gametype; \
		close "self"; \
	
#define LOCAL_GAMETYPE_NAME( p_gametype_name ) \
		"@" + tablelookup( "mp/gameTypesTable.csv" , 0 ,  p_gametype_name , 1 ) + "_CAPS" \
		
#define	LOCAL_GAMETYPE_SELECTION( itemIndex, buttonName, p_gametype_name, p_gametype ) \
 		CHOICE_BUTTON_FOCUS_VIS( itemIndex, buttonName, LOCAL_GAMETYPE_NAME( p_gametype_name ), LOCAL_GAMETYPE_ACTION( p_gametype ), LOCAL_GAMETYPE_SHOW( p_gametype ), ;, 1 )

// Gamemode preview

	itemDef
	{
		rect -175 54 265 95 2 1
		decoration
		border 1
		bordersize 0.5
		bordercolor 1 1 1 0.1
		visible 1
		style 3
		forecolor 0 0 0 0.25
		textscale 0.55
		exp material ( "white" )
	}

	itemDef
	{
		rect -525 65 310.667 18.633 3 1
		decoration
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont UI_FONT_NORMAL
		textalign 8
		textscale TEXTSIZE_SMALL
		visible when ( 1 )
		exp text ( localvarstring( "ui_info_name" ) )
	}
	itemDef
	{
		rect 200 78 230 35 1 1
		decoration
		autowrapped
		visible 1
		forecolor 1 1 1 1
		textfont 3
		textalign 8
		textscale 0.3
		exp text ( localvarstring( "ui_info_desc" ) )
	}