		itemDef
		{
			rect -253.667 191.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 1 )
			visible when ( 1 )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutEquipment" ) , 3 ) )
		}
		itemDef
		{
			rect -226.334 190.367 292.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 8
			textscale 0.340278
			exp forecolor a ( 1 )
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutEquipment" ) , 2 ) )
		}
		itemDef
		{
			rect -134 191.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 1 )
			visible when ( 1 )
			exp material ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutOffhandSecondary" ) , 6 ) )
		}
		itemDef
		{
			rect -111.334 190.367 319.967 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 8
			textscale 0.340278
			exp forecolor a ( 1 )
			visible when ( 1 )
			exp text ( locstring( "@MPUI_N_XN" , "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutOffhandSecondary" ) , 3 ) , int( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutOffhandSecondary" ) , 5 ) ) ) )
		}
		itemDef
		{
			rect -200 50.033 200 53.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( 1 )
			exp material ( tablelookup( "mp/camoTable.csv" , 1 , localvarstring( "loadoutPrimaryCamo" ) , 4 ) )
		}
		itemDef
		{
			rect -139.333 35.7 140 70 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( 1 )
			exp material ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , 6 ) )
		}
		/*
		itemDef
		{
			rect -257 36.567 130 11.067 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 9
			textalign 8
			textscale 0.2
			visible when ( 1 )
			exp text ( locstring( "@MPUI_WEAPON_LVL" ) + " " + tablelookup( "mp/weaponRankTable.csv" , 4 , getplayerdata( "weaponRank" , localvarstring( "loadoutPrimary" ) ) , 5 ) )
		}
		*/
		itemDef
		{
			rect -131 36.567 130 11.067 3 1
			decoration
			visible 1
			style 1
			forecolor 0.706 0.706 0.706 1
			textfont 9
			textalign 10
			textscale 0.2
			visible when ( 1 )
			exp text ( "" )
		}
		itemDef
		{
			rect -260 50.033 26.667 26.667 3 1
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
			rect -230 50.033 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( 1 ) )
			exp material ( tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutPrimaryAttachment2" ) , 6 ) )
		}
		itemDef
		{
			rect -315 84.733 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 10
			textscale 0.340278
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , 3 ) )
		}
		itemDef
		{
			rect -200 126.366 200 53.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( 1 )
			exp material ( tablelookup( "mp/camoTable.csv" , 1 , localvarstring( "loadoutSecondaryCamo" ) , 4 ) )
		}
		itemDef
		{
			rect -139.333 112.366 140 70 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( 1 )
			exp material ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutSecondary" ) , 6 ) )
		}
		/*
		itemDef
		{
			rect -257 112.366 130 11.067 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 9
			textalign 8
			textscale 0.2
			visible when ( 1 )
			exp text ( locstring( "@MPUI_WEAPON_LVL" ) + " " + tablelookup( "mp/weaponRankTable.csv" , 4 , getplayerdata( "weaponRank" , localvarstring( "loadoutSecondary" ) ) , 5 ) )
		}
		*/
		itemDef
		{
			rect -136.667 112.366 135.667 11.067 3 1
			decoration
			visible 1
			style 1
			forecolor 0.706 0.706 0.706 1
			textfont 9
			textalign 10
			textscale 0.2
			visible when ( 1 )
			exp text ( "" )
		}
		itemDef
		{
			rect -260 126.033 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( 1 ) )
			exp material ( tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutSecondaryAttachment" ) , 6 ) )
		}
		itemDef
		{
			rect -230 126.033 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( 1 ) )
			exp material ( tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "loadoutSecondaryAttachment2" ) , 6 ) )
		}
		itemDef
		{
			rect -315 160.733 310.667 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 10
			textscale 0.340278
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutSecondary" ) , 3 ) )
		}
		itemDef
		{
			rect -258 220.033 38.667 38.667 3 1
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
			rect -258 267.7 38.667 38.667 3 1
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
			rect -258 315.367 38.667 38.667 3 1
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
			rect -258 220.033 38.667 38.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) == "specialty_null" || !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 3 ) )
		}
		itemDef
		{
			rect -258 267.7 38.667 38.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) == "specialty_null" || !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 3 ) )
		}
		itemDef
		{
			rect -258 315.367 38.667 38.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			visible when ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) == "specialty_null" || !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) ) )
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 3 ) )
		}
		itemDef
		{
			rect -214 216.367 200 18.033 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 4
			textscale 0.340278
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
		}
		itemDef
		{
			rect -214 312.367 200 18.033 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 4
			textscale 0.340278
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
		}
		itemDef
		{
			rect -214 264.367 200 18.033 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 4
			textscale 0.340278
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
		}
		itemDef
		{
			rect -214 229.7 213.333 32 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 0.784 0.784 0.784 1
			type 21
			textfont 3
			textalign 4
			textscale 0.340278
			visible when ( ( !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 3 ) )
		}
		itemDef
		{
			rect -214 277.7 213.333 32 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 0.784 0.784 0.784 1
			type 21
			textfont 3
			textalign 4
			textscale 0.340278
			visible when ( ( !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 3 ) )
		}
		itemDef
		{
			rect -214 325.7 213.333 32 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 0.784 0.784 0.784 1
			type 21
			textfont 3
			textalign 4
			textscale 0.340278
			visible when ( ( !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 3 ) )
		}
		itemDef
		{
			rect -214 229.7 213.333 32 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 0.784 0.784 0.784 1
			type 21
			textfont 3
			textalign 4
			textscale 0.340278
			visible when ( ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) , 4 ) )
		}
		itemDef
		{
			rect -214 277.7 213.333 32 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 0.784 0.784 0.784 1
			type 21
			textfont 3
			textalign 4
			textscale 0.340278
			visible when ( ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) , 4 ) )
		}
		itemDef
		{
			rect -214 325.7 213.333 32 3 1
			decoration
			autowrapped
			visible 1
			style 1
			forecolor 0.784 0.784 0.784 1
			type 21
			textfont 3
			textalign 4
			textscale 0.340278
			visible when ( ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) , 4 ) )
		}
		itemDef
		{
			rect -114 363.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutDeathStreak" ) , 3 ) )
		}
		itemDef
		{
			rect -90 363.7 258.633 18.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 8
			textscale 0.340278
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutDeathStreak" ) , 2 ) )
		}
		itemDef
		{
			rect -266.333 3.7 266.667 23.633 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 9
			textalign 10
			textscale 0.5
			exp text ( localvarstring( "loadoutClassName" ) )
		}
		itemDef
		{
			rect -256.667 185.367 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_fadein"
			textscale 0.55
			visible when ( 1 )
		}
		itemDef
		{
			rect -256.667 213.033 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_fadein"
			textscale 0.55
			visible when ( 1 )
		}
		itemDef
		{
			rect -256.667 107.7 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_fadein"
			textscale 0.55
			visible when ( 1 )
		}
		itemDef
		{
			rect -256.667 358.367 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_fadein"
			textscale 0.55
			visible when ( 1 )
		}
		itemDef
		{
			rect -256.667 31.7 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_fadein"
			textscale 0.55
			visible when ( 1 )
		}
        itemDef
		{
			rect -190 363.7 200 20 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 8
			textscale 0.340278
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 6 ) + 68 ) ) + ( 0 ) )
			exp text ( "Killstreaks" )
		}
		itemDef
		{
			rect -258 363.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 6 ) ) ) + ( 0 ) )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , getplayerdata( "killstreaks" , 0 ) , 14 ) )
		}
		itemDef
		{
			rect -236 363.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 6 ) + 22 ) ) + ( 0 ) )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , getplayerdata( "killstreaks" , 1 ) , 14 ) )
		}
		itemDef
		{
			rect -214 363.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 6 ) + 44 ) ) + ( 0 ) )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , getplayerdata( "killstreaks" , 2 ) , 14 ) )
		}