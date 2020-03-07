// rect -302 81.3333 224 53.3333 2 1 \
// bg -270 124 160 32 2 1

#undef CHOICE_SIZE_X
#define CHOICE_SIZE_X				158

#undef CHOICE_SIZE_Y
#define CHOICE_SIZE_Y				24

#undef CHOICE_X_START
#define CHOICE_X_START				105.3333

#undef CHOICE_Y_START
#define CHOICE_Y_START				84

#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING			175

#undef CHOICE_Y_SPACING
#define CHOICE_Y_SPACING			26

#define PLAYERCARD_DRAW( itemIndex, nameArg, p_card_index ) \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 0 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			name nameArg \
			visible 1 \
			style 3 \
			forecolor 1 1 1 1 \
			background "highlight_selected" \
			group "mw2_button" \
			type 1 \
			textscale 0.55 \
			exp forecolor g ( 0.45 + ( isitemunlocked( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ) && ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) != "" ) ) ) \
			exp forecolor b ( 0.45 + ( isitemunlocked( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ) && ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) != "" ) ) ) \
			exp forecolor a ( ( getfocuseditemname( ) == nameArg ) * ( ( sin( milliseconds( ) / 100 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) ) \
			visible when ( ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) != "" ) ) \
			onFocus \
			{ \
				play "mouse_over"; \
				setLocalVarString "ui_tempVar" ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ); \
				setLocalVarBool "ui_highlightButton" ( 1 ); \
				setItemColor self backcolor 1 1 1 1; \
				if ( localvarstring( "ui_tempVar" ) != "" ) \
				{ \
					setPlayerData( "titleNew" , "localVarString" ( "ui_tempVar" ) , "false" ); \
				} \
			} \
			leaveFocus \
			{ \
				setLocalVarString "ui_tempVar" ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ); \
				setLocalVarBool "ui_highlightButton" ( 0 ); \
				setItemColor self backcolor 0 0 0 0; \
			} \
			action \
			{ \
				if ( isitemunlocked( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ) ) \
				{ \
					play "mouse_click"; \
					setLocalVarString "ui_tempVar" ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ); \
					setPlayerData( "cardTitle" , "localVarString" ( "ui_tempVar" ) ); \
				} \
			} \
		} \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 0 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			decoration \
			visible 1 \
			style 1 \
			forecolor 1 1 1 1 \
			backcolor 1 1 1 1 \
			textAlign 5 \
			textAlignY 5 \
			textScale 0.375 \
			textStyle 8 \
			textFont 3 \
			exp forecolor r ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 3 ) ) \
			exp forecolor g ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 4 ) ) \
			exp forecolor b ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 5 ) ) \
			exp forecolor a ( ( 1 * !( getfocuseditemname( ) == nameArg ) ) + ( ( ( sin( milliseconds( ) / 100 ) * 0.5 + 0.5 ) * 0.25 + 0.75 ) * ( getfocuseditemname( ) == nameArg ) ) ) \
			visible when ( ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) != "" ) && isitemunlocked( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ) ) \
			exp text ( "@" + tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 1 ) ) \
			exp material ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 2 ) ) \
		} \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) 32 16 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			decoration \
			visible 1 \
			style 3 \
			forecolor 0.25 1 0.45 1 \
			background "highlight_selected" \
			textscale 0.55 \
			exp forecolor a ( getplayerdata( "titleNew" , tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ) * ( ( sin( milliseconds( ) / 100 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) * 0.65 ) \
			visible when ( ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) != "" ) ) \
		} \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) 32 16 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			decoration \
			visible 1 \
			style 3 \
			forecolor 1 1 1 1 \
			background "specialty_new" \
			textscale 0.55 \
			exp forecolor a ( getplayerdata( "titleNew" , tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ) ) \
			visible when ( ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) != "" ) ) \
		} \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) 158 16 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			decoration \
			visible 1 \
			style 1 \
			forecolor 1 1 1 1 \
			backcolor 1 1 1 1 \
			background "cardtitle_locked" \
			textfont 3 \
			textalign 5 \
			textaligny 8 \
			textscale 0.375 \
			visible when ( ( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) != "" ) && !isitemunlocked( tablelookupbyrow( "mp/cardTitleTable.csv" , p_card_index + ( localvarint( "ui_pageIndex" ) * 27 ) , 0 ) ) ) \
			exp text ( "" ) \
		}