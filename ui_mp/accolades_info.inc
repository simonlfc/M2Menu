#undef CHOICE_HORIZONTAL_ALIGN
#define CHOICE_HORIZONTAL_ALIGN 	2

#undef CHOICE_VERTICAL_ALIGN
#define CHOICE_VERTICAL_ALIGN 		1

#define CHOICE_ACCOLADE( itemIndex, accoladesName, accoladesIndex ) \
		itemDef \
		{ \
			name accoladesName \
			rect ( -216.933 + 75 * CHOICE_COL( itemIndex ) ) ( 80 + 75 * CHOICE_ROW( itemIndex ) + CHOICE_SEP_TOTAL_SPACING( itemIndex ) ) 46.6667 46.6667 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			visible 1 \
			style WINDOW_STYLE_SHADER \
			forecolor CHOICE_TEXTCOLOR \
			background "highlight_selected" \
			type ITEM_TYPE_BUTTON \
			textScale 0.55 \
			exp forecolor g ( 0.45 + ( tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 19 ) , 1 ) != "" ) ) \
			exp forecolor b ( 0.45 + ( tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 19 ) , 1 ) != "" ) ) \
			exp forecolor a ( ( getfocuseditemname( ) == accoladesName ) * ( ( sin( milliseconds( ) / 150 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) ) \
			visible when ( ( tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 19 ) , 1 ) != "" ) ) \
			onFocus \
			{ \
				setLocalVarInt "ui_highlightIndex" ( accoladesIndex + ( localvarint( "ui_pageIndex" ) * 19 ) ); \
				play "mouse_over"; \
			} \
			action \
			{ \
				play "mouse_click"; \
			} \
		} \
		PREPROC_SHADER_DRAW_VIS( ( -214.933 + 75 * CHOICE_COL( itemIndex ) ) ( 82 + 75 * CHOICE_ROW( itemIndex ) + CHOICE_SEP_TOTAL_SPACING( itemIndex ) ) 42.6667 42.6667 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN, ORIGIN_NONE, "award_locked", 1 1 1 1, \
		when ( ( tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 19 ) , 1 ) != "" ) \
		&& getplayerdata( "awards" , tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 19 ) , 1 ) ) == 0 ) ) \
		PREPROC_SHADER_DRAW_ALIGNED_VIS( ( -214.933 + 75 * CHOICE_COL( itemIndex ) ) ( 82 + 75 * CHOICE_ROW( itemIndex ) + CHOICE_SEP_TOTAL_SPACING( itemIndex ) ) 42.6667 42.6667 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN, ORIGIN_NONE, \
		tablelookup( "mp/awardTable.csv" , 1 , tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 18 ) , 1 ) , 2 ), 1 1 1 1, COLOR_NONE, 3, \
		when ( ( tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 18 ) , 1 ) != "" ) \
		&& getplayerdata( "awards" , tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 18 ) , 1 ) ) > 0 ) ) \
		PREPROC_TEXT_DRAW_VIS( ( -214.933 + 75 * CHOICE_COL( itemIndex ) ) ( 82 + 75 * CHOICE_ROW( itemIndex ) + CHOICE_SEP_TOTAL_SPACING( itemIndex ) ) 42.6667 42.6667 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN, ORIGIN_NONE, \
		exp text ( locstring( "@MPUI_X_N" , getplayerdata( "awards" , tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 18 ) , 1 ) ) ) ), 0.375, 0, 0, 14, 1 1 1 1, \
		when ( ( tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 18 ) , 1 ) != "" ) \
		&& getplayerdata( "awards" , tablelookupbyrow( "mp/awardTable.csv" , accoladesIndex + ( localvarint( "ui_pageIndex" ) * 18 ) , 1 ) ) > 0 ) )