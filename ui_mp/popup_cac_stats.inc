itemDef
{
	rect -391 317 286 73 2 1
	name "statbox"
	decoration
	border 1
    bordersize 0.5
    bordercolor 0.7 0.7 0.7 0.01
    visible 1
    style 3
    forecolor 0 0 0 0.12
	textscale 0.55
	exp material ( "white" )
}
#ifdef EQUIPMENT
	itemDef
	{
		rect -15 326 186.667 44.4 1 1
		name "equname"
		decoration
		autowrapped
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont UI_FONT_NORMAL
		textalign 4
		textscale TEXTSIZE_SMALL
		visible when ( ( 1 ) )
		exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 2 ) )
	}

	itemDef
	{
		rect -15 347 186.667 44.4 1 1
		name "equdesc"
		decoration
		autowrapped
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont 3
		textalign 4
		textscale 0.3
		visible when ( ( 1 ) )
		exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 4 ) )
	}
#endif

#ifdef SPECIAL
	itemDef
	{
		rect -15 326 186.667 44.4 1 1
		name "specialname"
		decoration
		autowrapped
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont UI_FONT_NORMAL
		textalign 4
		textscale TEXTSIZE_SMALL
		visible when ( ( 1 ) )
		exp text ( localvarstring( "ui_info_name" ) )
	}

	itemDef
	{
		rect -15 347 186.667 44.4 1 1
		name "specialdesc"
		decoration
		autowrapped
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont 3
		textalign 4
		textscale 0.3
		visible when ( ( 1 ) )
		exp text ( localvarstring( "ui_info_desc" ) )
	}
#endif

#ifdef DEATHSTREAK
	itemDef
	{
		rect -15 326 186.667 44.4 1 1
		name "specialname"
		decoration
		autowrapped
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont UI_FONT_NORMAL
		textalign 4
		textscale TEXTSIZE_SMALL
		visible when ( ( 1 ) )
		exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 2 ) )
	}

	itemDef
	{
		rect -15 347 186.667 44.4 1 1
		name "specialdesc"
		decoration
		autowrapped
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont 3
		textalign 4
		textscale 0.3
		visible when ( ( 1 ) )
		exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 4 ) )
	}
#endif

#ifdef WEAPON
	itemDef
	{
		rect 60 326 186.667 44.4 1 1
		name "weapname"
		decoration
		autowrapped
		visible 1
		style 1
		forecolor 1 1 1 0.25
		textfont UI_FONT_NORMAL
		textalign 6
		textscale 0.2
		visible when ( ( 1 ) )
		exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 3 ) )
	}
	itemDef
	{
		rect -15 326 186.667 44.4 1 1
		name "weapdesc"
		decoration
		autowrapped
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont UI_FONT_NORMAL
		textalign 4
		textscale 0.2
		visible when ( ( 1 ) )
		exp text ( "@" + tablelookup( "mp/statstable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 7 ) )
	}

// Stat Bars

	// Accuracy
		itemDef
		{
			rect -15 339 186.667 44.4 1 1
			name "accuracylabel"
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 4
			textscale 0.2
			visible when ( ( 1 ) )
			text "@MPUI_ACCURACY_CAPS"
		}
		itemDef
		{
			rect -15 349 76 8 1 1
			name "accuracystatbg"
			decoration
			border 1
			bordersize 0.5
			bordercolor 1 1 1 0.1
			visible 1
			style 3
			forecolor 0 0 0 0
			background "white"
			textscale 0.55
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 22 ) && 1 )
		}
		itemDef
		{
			rect -14 350 90 6 1 1
			name "accuracystat"
			decoration
			visible 1
			style 3
			forecolor 0.65 0.65 0.65 1
			background "white"
			textscale 0.55
			exp rect w ( ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 22 ) / 100 ) * 74 )
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 22 ) && 1 )
		}

	// Damage
		itemDef
		{
			rect 76 339 186.667 44.4 1 1
			name "damagelabel"
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 4
			textscale 0.2
			visible when ( ( 1 ) )
			text "@MPUI_DAMAGE_CAPS"
		}
		itemDef
		{
			rect 76 349 76 8 1 1
			name "damagestatbg"
			decoration
			border 1
			bordersize 0.5
			bordercolor 1 1 1 0.1
			visible 1
			style 3
			forecolor 0 0 0 0
			background "white"
			textscale 0.55
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 22 ) && 1 )
		}
		itemDef
		{
			rect 77 350 90 6 1 1
			name "damagestat"
			decoration
			visible 1
			style 3
			forecolor 0.65 0.65 0.65 1
			background "white"
			textscale 0.55
			exp rect w ( ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 23 ) / 100 ) * 74 )
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 23 ) && 1 )
		}

	// Range
		itemDef
		{
			rect 168 339 186.667 44.4 1 1
			name "rangelabel"
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 4
			textscale 0.2
			visible when ( ( 1 ) )
			text "@MPUI_RANGE_CAPS"
		}
		itemDef
		{
			rect 168 349 76 8 1 1
			name "rangestatbg"
			decoration
			border 1
			bordersize 0.5
			bordercolor 1 1 1 0.1
			visible 1
			style 3
			forecolor 0 0 0 0
			background "white"
			textscale 0.55
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 22 ) && 1 )
		}
		itemDef
		{
			rect 169 350 90 6 1 1
			name "rangestat"
			decoration
			visible 1
			style 3
			forecolor 0.65 0.65 0.65 1
			background "white"
			textscale 0.55
			exp rect w ( ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 24 ) / 100 ) * 74 )
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 24 ) && 1 )
		}

	// Fire Rate
		itemDef
		{
			rect -15 361 186.667 44.4 1 1
			name "fireratelabel"
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 4
			textscale 0.2
			visible when ( ( 1 ) )
			text "@MPUI_FIRERATE_CAPS"
		}
		itemDef
		{
			rect -15 371 76 8 1 1
			name "fireratestatbg"
			decoration
			border 1
			bordersize 0.5
			bordercolor 1 1 1 0.1
			visible 1
			style 3
			forecolor 0 0 0 0
			background "white"
			textscale 0.55
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 22 ) && 1 )
		}
		itemDef
		{
			rect -14 372 90 6 1 1
			name "fireratestat"
			decoration
			visible 1
			style 3
			forecolor 0.65 0.65 0.65 1
			background "white"
			textscale 0.55
			exp rect w ( ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 25 ) / 100 ) * 74 )
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 25 ) && 1 )
		}

	// Mobility
		itemDef
		{
			rect 76 361 186.667 44.4 1 1
			name "mobilitylabel"
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 4
			textscale 0.2
			visible when ( ( 1 ) )
			text "@MPUI_MOBILITY_CAPS"
		}
		itemDef
		{
			rect 76 371 76 8 1 1
			name "mobilitystatbg"
			decoration
			border 1
			bordersize 0.5
			bordercolor 1 1 1 0.1
			visible 1
			style 3
			forecolor 0 0 0 0
			background "white"
			textscale 0.55
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 22 ) && 1 )
		}
		itemDef
		{
			rect 77 372 90 6 1 1
			name "mobilitystat"
			decoration
			visible 1
			style 3
			forecolor 0.65 0.65 0.65 1
			background "white"
			textscale 0.55
			exp rect w ( ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 26 ) / 100 ) * 74 )
			visible when ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "ui_selected_ref" ) , 25 ) && 1 )
		}
#endif