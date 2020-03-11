
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PRIMARY WEAPON
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	itemDef
	{
		rect -75 30 312 102 2 1
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
		rect -161 98 26.667 26.667 3 1		
		decoration
		visible 1
		style 3
		forecolor 1 1 1 1
		textscale 0.55
		visible when ( 1 )
		exp material ( tablelookup( "mp/camoTable.csv" , 1 , localvarstring( "loadoutPrimaryCamo" ) , 4 ) )
	}

	itemDef // PRIMARY WEAPON NAME
	{
		rect -427 37.733 310.667 18.633 3 1
		decoration
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont UI_FONT_NORMAL
		textalign 8
		textscale TEXTSIZE_SMALL
		visible when ( 1 )
		exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , 3 ) )
	}

	itemDef // PRIMARY WEAPON IMAGE
	{
		rect -269.333 40 133 66.5 3 1
		decoration
		visible 1
		style 3
		forecolor 1 1 1 1
		textscale 0.55
		visible when ( 1 )
		exp material ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , 6 ) )
	}

	// Attachments

		itemDef
		{
			rect -75 131 312 45 2 1
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
			rect -425 133.733 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.2
			visible when ( 1 )
			text "ATTACHMENTS"
		}

		itemDef
		{
			rect -425 142.733 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( localvarstring( "loadoutPrimaryAttachment" ) != "none" )
			exp text ( "@" + tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutPrimaryAttachment" ) , 3 ) )		
		}

		itemDef
		{
			rect -425 153.733 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( localvarstring( "loadoutPrimaryAttachment2" ) != "none" )
			exp text ( "@" + tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutPrimaryAttachment2" ) , 3 ) )	
		}

		itemDef
		{
			rect -161 140 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( 1 ) )
			exp material ( tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutPrimaryAttachment" ) , 6 ) )
		}
		itemDef
		{
			rect -191 140 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( 1 ) )
			exp material ( tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutPrimaryAttachment2" ) , 6 ) )
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SECONDARY WEAPON
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	itemDef
	{
		rect -75 180 312 102 2 1
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
		rect -427 187.733 310.667 18.633 3 1
		decoration
		visible 1
		style 1
		forecolor 1 1 1 1
		textfont UI_FONT_NORMAL
		textalign 8
		textscale TEXTSIZE_SMALL
		visible when ( 1 )
		exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutSecondary" ) , 3 ) )
	}

	itemDef
	{
		rect -269.333 195 140 70 3 1
		decoration
		visible 1
		style 3
		forecolor 1 1 1 1
		textscale 0.55
		visible when ( 1 )
		exp material ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutSecondary" ) , 6 ) )
	}

	// Attachments

		itemDef
		{
			rect -75 281 312 45 2 1
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
			rect -425 283.733 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.2
			visible when ( 1 )
			text "ATTACHMENTS"
		}

		itemDef
		{
			rect -425 292.733 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( localvarstring( "loadoutSecondaryAttachment" ) != "none" )
			exp text ( "@" + tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutSecondaryAttachment" ) , 3 ) )	
		}

		itemDef
		{
			rect -161 290 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( 1 ) )
			exp material ( tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutSecondaryAttachment" ) , 6 ) )
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// GRENADE OR EQUIPMENT
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

itemDef
{
	rect 240 180 125 71 2 1
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
	rect -115 182 310.667 18.633 3 1
	decoration
	visible 1
	style 1
	forecolor 1 1 1 0.25
	textfont UI_FONT_NORMAL
	textalign 8
	textscale 0.2
	visible when ( 1 )
	text "EQUIPMENT"
}

itemDef
{
	rect -114 191 310.667 18.633 3 1
	decoration
	visible 1
	style 1
	forecolor 1 1 1 1
	textfont UI_FONT_NORMAL
	textalign 8
	textscale 0.25
	visible when ( 1 )
	exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutEquipment" ) , 2 ) )
}

itemDef
{
	rect -45 208 35.667 35.667 3 1
	decoration
	visible 1
	style 3
	forecolor 1 1 1 1
	textscale 0.55
	visible when ( 1 )
	exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutEquipment" ) , 3 ) )
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SPECIAL GRENADE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

itemDef
{
	rect 240 255 125 71 2 1
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
	rect -115 257 310.667 18.633 3 1
	decoration
	visible 1
	style 1
	forecolor 1 1 1 0.25
	textfont UI_FONT_NORMAL
	textalign 8
	textscale 0.2
	visible when ( 1 )
	text "SPECIAL GRENADE"
}

itemDef
{
	rect -115 266 310.667 18.633 3 1
	decoration
	visible 1
	style 1
	forecolor 1 1 1 1
	textfont UI_FONT_NORMAL
	textalign 8
	textscale 0.25
	visible when ( 1 )
	exp text ( locstring( "@MPUI_N_XN" , "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutOffhandSecondary" ) , 3 ) , int( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutOffhandSecondary" ) , 5 ) ) ) )
}

itemDef
{
	rect -45 283 32.667 35.667 3 1
	decoration
	visible 1
	style 3
	forecolor 1 1 1 1
	textscale 0.55
	visible when ( 1 )
	exp material ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutOffhandSecondary" ) , 6 ) )
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// KILLSTREAKS
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Killstreak One
		itemDef
		{
			rect -75 330 125 52 2 1
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
			rect -425 332 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.2
			visible when ( 1 )
			text "KILLSTREAK ONE"
		}

		itemDef
		{
			rect -425 341 95.667 18.633 3 1
			autowrapped
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak1Name" ) , 2 ) )
		}

		itemDef
		{
			rect -350 345 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( 1 )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak1Name" ) , 14 ) )
		}

	// Killstreak Two
		itemDef
		{
			rect 53 330 125 52 2 1
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
			rect -297 332 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.2
			visible when ( 1 )
			text "KILLSTREAK TWO"
		}

		itemDef
		{
			rect -297 341 95.667 18.633 3 1
			autowrapped
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak2Name" ) , 2 ) )
		}

		itemDef
		{
			rect -225 345 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( 1 )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak2Name" ) , 14 ) )
		}

	// Killstreak Three
		itemDef
		{
			rect 181 330 125 52 2 1
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
			rect -170 332 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.2
			visible when ( 1 )
			text "KILLSTREAK THREE"
		}

		itemDef
		{
			rect -169 341 95.667 18.633 3 1
			autowrapped
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak3Name" ) , 2 ) )
		}

		itemDef
		{
			rect -97 345 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( 1 )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak3Name" ) , 14 ) )
		}
	

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DEATHSTREAK
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

itemDef
{
	rect 309 330 56 52 2 1
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
	rect -46 332 310.667 18.633 3 1
	decoration
	visible 1
	style 1
	forecolor 1 1 1 0.25
	textfont UI_FONT_NORMAL
	textalign 8
	textscale 0.2
	visible when ( 1 )
	text "DEATHSTREAK"
}

itemDef
{
	rect -46 341 50 18.633 3 1
	autowrapped
	decoration
	visible 1
	style 1
	forecolor 1 1 1 1
	textfont UI_FONT_NORMAL
	textalign 8
	textscale 0.25
	visible when ( 1 )
	exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutDeathStreak" ) , 2 ) )
}

itemDef
{
	rect -25 357 18.667 18.667 3 1
	decoration
	visible 1
	style 3
	forecolor 1 1 1 1
	textscale 0.55
	visible when ( 1 )
	exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutDeathStreak" ) , 3 ) )
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PERKS
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Perk One
		itemDef
		{
			rect 240 30 125 47 2 1
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
			rect -115 30 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.2
			visible when ( 1 )
			text "PERK ONE"
		}

		itemDef
		{
			rect -115 39 95.667 18.633 3 1
			autowrapped
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
		}
		itemDef
		{
			rect -38.333 36 32.667 32.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) != "specialty_null" && isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) && localvarstring( "loadoutPerk1" ) != "" ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 3 ) + "_upgrade" )
		}

		itemDef
		{
			rect -38.333 36 32.667 32.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) == "specialty_null" || !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 3 ) )
		}

	// Perk Two
		itemDef
		{
			rect 240 79 125 47 2 1
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
			rect -115 79 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.2
			visible when ( 1 )
			text "PERK TWO"
		}
		itemDef
		{
			rect -115 88 85 18.633 3 1
			autowrapped
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
		}
		itemDef
		{
			rect -38.333 85 32.667 32.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) != "specialty_null" && isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) && localvarstring( "loadoutPerk2" ) != "" ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 3 ) + "_upgrade" )
		}
		itemDef
		{
			rect -38.333 85 32.667 32.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) == "specialty_null" || !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 3 ) )
		}

	// Perk Three
		itemDef
		{
			rect 240 129 125 47 2 1
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
			rect -115 129 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 0.25
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.2
			visible when ( 1 )
			text "PERK THREE"
		}
		itemDef
		{
			rect -115 138 85 18.633 3 1
			autowrapped
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont UI_FONT_NORMAL
			textalign 8
			textscale 0.25
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
		}
		itemDef
		{
			rect -38.333 136 32.667 32.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) != "specialty_null" && isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) && localvarstring( "loadoutPerk3" ) != "" ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 3 ) + "_upgrade" )
		}
		itemDef
		{
			rect -38.333 136 32.667 32.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) == "specialty_null" || !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 3 ) )
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BACK BUTTON
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
