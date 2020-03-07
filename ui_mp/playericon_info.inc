#undef CHOICE_SIZE_X
#define CHOICE_SIZE_X				36.6667

#undef CHOICE_SIZE_Y
#define CHOICE_SIZE_Y				36.6667

#undef CHOICE_X_START
#define CHOICE_X_START				114.6667

#undef CHOICE_Y_START
#define CHOICE_Y_START				84.6667

#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING			63.6667

#undef CHOICE_Y_SPACING
#define CHOICE_Y_SPACING			40

#undef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT				20

#define PLAYERICON_DRAW( itemIndex, nameArg, p_icon_index ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 0 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			visible 1 \
			style 1 \
			forecolor 1 1 1 1 \
			background "highlight_selected" \
			type 1 \
			textscale 0.55 \
			exp forecolor g ( 0.45 + ( isitemunlocked( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ) && ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) != "" ) ) ) \
			exp forecolor b ( 0.45 + ( isitemunlocked( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ) && ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) != "" ) ) ) \
			exp forecolor a ( ( getfocuseditemname( ) == "nameArg" ) * ( ( sin( milliseconds( ) / 100 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) ) \
			visible when ( ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) != "" ) ) \
			onFocus \
			{ \
				play "mouse_over"; \
				setLocalVarString "ui_tempVar" ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ); \
				setLocalVarBool "ui_highlightButton" ( 1 ); \
				setItemColor self backcolor 1 1 1 1; \
				if ( localvarstring( "ui_tempVar" ) != "" ) \
				{ \
					setPlayerData( "iconNew" , "localVarString" ( "ui_tempVar" ) , "false" ); \
				} \
			} \
			leaveFocus \
			{ \
				setLocalVarString "ui_tempVar" ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ); \
				setLocalVarBool "ui_highlightButton" ( 0 ); \
				setItemColor self backcolor 0 0 0 0; \
				if ( localvarstring( "ui_tempVar" ) != "" ) \
				{ \
					setPlayerData( "iconNew" , "localVarString" ( "ui_tempVar" ) , "false" ); \
				} \
			} \
			action \
			{ \
				if ( isitemunlocked( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ) ) \
				{ \
					play "mouse_click"; \
					setLocalVarString "ui_tempVar" ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ); \
					setPlayerData( "cardIcon" , "localVarString" ( "ui_tempVar" ) ); \
				} \
			} \
		} \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 0 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			decoration \
			visible 1 \
			style 3 \
			forecolor 1 1 1 1 \
			textscale 0.55 \
			visible when ( ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) != "" ) && isitemunlocked( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ) ) \
			exp material ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 1 ) ) \
		} \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) ( 104.667 + 0 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			decoration \
			visible 1 \
			style 3 \
			forecolor 0.25 1 0.45 1 \
			background "highlight_selected" \
			textscale 0.55 \
			exp forecolor a ( getplayerdata( "iconNew" , tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ) * ( ( sin( milliseconds( ) / 100 ) * 0.5 + 0.5 ) * 0.25 + 0.75 ) * 0.65 ) \
			visible when ( ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) != "" ) ) \
		} \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 0 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			decoration \
			visible 1 \
			style 3 \
			forecolor 1 1 1 1 \
			background "specialty_new_bg" \
			textscale 0.55 \
			exp forecolor a ( getplayerdata( "iconNew" , tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ) ) \
			visible when ( ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) != "" ) ) \
		} \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 0 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			decoration \
			visible 1 \
			style 3 \
			forecolor 1 1 1 1 \
			background "cardicon_locked" \
			textscale 0.55 \
			visible when ( ( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) != "" ) && !isitemunlocked( tablelookupbyrow( "mp/cardIconTable.csv" , p_icon_index + ( localvarint( "ui_pageIndex" ) * 48 ) , 0 ) ) ) \
		}