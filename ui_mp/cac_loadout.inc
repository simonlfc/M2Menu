		itemDef
		{
			rect -253.667 191.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_2" || getfocuseditemname() == "CAC_BUTTON_LIST_3" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 10.333 ) ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_2" || getfocuseditemname() == "CAC_BUTTON_LIST_3" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 10.333 ) ) + ( 27.333 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_2" || getfocuseditemname() == "CAC_BUTTON_LIST_3" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 10.333 ) + 119.667 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_3" || getfocuseditemname() == "CAC_BUTTON_LIST_2" || getfocuseditemname() == "CAC_BUTTON_LIST_3" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 10.333 ) ) + ( 142.333 ) )
			visible when ( 1 )
			exp text ( locstring( "@MPUI_N_XN" , "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutOffhandSecondary" ) , 3 ) , int( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutOffhandSecondary" ) , 5 ) ) ) )
		}
		itemDef
		{
			rect -256.667 30.367 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_inset_rect"
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 6 ) ) + ( 0 ) )
			visible when ( ( 1 ) )
		}
		itemDef
		{
			rect -200 50.033 200 53.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 64 ) ) + ( 0 ) )
			visible when ( 1 )
			exp forecolor a ( 0.2 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" ) * 0.45 )
			exp material ( tablelookup( "mp/camoTable.csv" , 1 , localvarstring( "loadoutPrimaryCamo" ) , 4 ) )
		}
		itemDef
		{
			rect -258 36.367 258 10 3 1
			decoration
			visible 1
			style 3
			forecolor 0 0 0 1
			background "white"
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( ( 0 - 264 ) ) + 6 ) ) ) + ( 0 ) )
		}
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) ) ) + ( 7 ) )
			visible when ( 1 )
			exp text ( "Weapon Level N/A" )
		}
		itemDef
		{
			rect -139.333 35.7 140 70 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 124.667 ) ) + ( 0 ) )
			visible when ( 1 )
			exp material ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , 6 ) )
		}
		itemDef
		{
			rect -260 50.033 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 4 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 34 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) ) ) + ( ( 0 - 51 ) ) )
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , 3 ) )
		}
		
		itemDef
		{
			rect -256.667 107.7 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_inset_rect"
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_0" || getfocuseditemname() == "CAC_BUTTON_LIST_1" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 7.333 ) ) + ( 0 ) )
			visible when ( 1 )
		}
		
		itemDef
		{
			rect -200 126.366 200 53.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.2 + ( getfocuseditemname() == "CAC_BUTTON_LIST_1" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 64 ) ) + ( 0 ) )
			visible when ( 1 )
			exp material ( tablelookup( "mp/camoTable.csv" , 1 , localvarstring( "loadoutSecondaryCamo" ) , 4 ) )
		}
		itemDef
		{
			rect -258 112.7 258 10 3 1
			decoration
			visible 1
			style 3
			forecolor 0 0 0 1
			background "white"
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_1" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( ( 0 - 264 ) ) + 6 ) ) ) + ( 0 ) )
			visible when ( ( 1 ) )
		}
		itemDef
		{
			rect -139.333 112.366 140 70 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_1" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 124.667 ) ) + ( 0 ) )
			visible when ( 1 )
			exp material ( tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutSecondary" ) , 6 ) )
		}
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_1" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) ) ) + ( 7 ) )
			visible when ( 1 )
			exp text ( "Weapon Level N/A" )
		}
		itemDef
		{
			rect -260 126.033 26.667 26.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_1" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 4 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_1" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) ) + 34 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_1" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) ) ) + ( ( 0 - 51 ) ) )
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutSecondary" ) , 3 ) )
		}
		
		itemDef
		{
			rect -256.667 185.367 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_inset_rect"
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_1" || getfocuseditemname() == "CAC_BUTTON_LIST_2" || getfocuseditemname() == "CAC_BUTTON_LIST_3" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 7.333 ) ) + ( 0 ) )
			visible when ( 1 )
		}
		itemDef
		{
			rect -256.667 213.033 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_inset_rect"
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_2" || getfocuseditemname() == "CAC_BUTTON_LIST_3" || getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 7.333 ) ) + ( 0 ) )
			visible when ( 1 )
		}		
		itemDef
		{
			rect -258 220.033 38.667 38.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 6 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 6 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 6 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 6 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 6 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 6 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
			visible when ( ( 1 ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
			visible when ( ( 1 ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
			visible when ( ( 1 ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , int( 2 + ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) * ( 9 - 2 ) ) ) ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
			visible when ( ( !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk1" ) , 4 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
			visible when ( ( !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk2" ) , 4 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
			visible when ( ( !isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 4 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 50 ) ) + ( 0 ) )
			visible when ( ( isitemunlocked( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) ) ) )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutPerk3" ) , 8 ) , 4 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_7" || getfocuseditemname() == "CAC_BUTTON_LIST_8" ) * 0.45 )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_7" || getfocuseditemname() == "CAC_BUTTON_LIST_8" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 6 ) ) ) + ( 0 ) )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak1Name" ) , 14 ) )
		}
		itemDef
		{
			rect -236 363.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_7" || getfocuseditemname() == "CAC_BUTTON_LIST_8" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 6 ) + 22 ) ) + ( 0 ) )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak2Name" ) , 14 ) )
		}
		itemDef
		{
			rect -214 363.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_7" || getfocuseditemname() == "CAC_BUTTON_LIST_8" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 6 ) + 44 ) ) + ( 0 ) )
			exp material ( tablelookup( "mp/killstreakTable.csv" , 1 , localvarstring( "ui_streak3Name" ) , 14 ) )
		}
		itemDef
		{
			rect -114 363.7 21.333 21.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_7" || getfocuseditemname() == "CAC_BUTTON_LIST_8" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( ( 0 - 264 ) + 6 ) + 144 ) ) + ( 0 ) )
			visible when ( ( 1 ) )
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
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_7" || getfocuseditemname() == "CAC_BUTTON_LIST_8" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 6 ) ) + ( 168 ) )
			visible when ( 1 )
			exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "loadoutDeathStreak" ) , 2 ) )
		}
		itemDef
		{
			rect -256.667 358.367 253.333 1.333 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "gradient_inset_rect"
			textscale 0.55
			exp forecolor a ( 0.5 + ( getfocuseditemname() == "CAC_BUTTON_LIST_4" || getfocuseditemname() == "CAC_BUTTON_LIST_5" || getfocuseditemname() == "CAC_BUTTON_LIST_6" || getfocuseditemname() == "CAC_BUTTON_LIST_7" || getfocuseditemname() == "CAC_BUTTON_LIST_8" ) * 0.45 )
			exp rect x ( ( 0 ) + ( ( ( 0 - 264 ) + 7.333 ) ) + ( 0 ) )
			visible when ( 1 )
		}
		itemDef
		{
			rect -86.833 340 324.667 70 1 1
			decoration
			visible 1
			style 3
			forecolor 0.488 0.520 0.465 1
			background "gradient_fadein"
			textscale 0.55
		}
		itemDef
		{
			rect 0 0 0 20 1 1
			decoration
			visible 1
			forecolor 1 1 1 1
			textfont 3
			textalign 8
			textscale 0.375
			exp rect x ( 132.5 )
			exp rect y ( ( 387.333 ) )
			exp text ( locString("@MENU_CHALLENGES" ) + " " + "^2F1" )
			execKeyInt 167
			{
				if ( ( tablelookup( "mp/challengeTable.csv" , 6 , localvarstring( "loadoutPrimary" ) , 4 ) ) != "" )
				{
					setLocalVarString "ui_challengeTierTable" ( tablelookup( "mp/challengeTable.csv" , 6 , localvarstring( "loadoutPrimary" ) , 4 ) );
					open "menu_challenge_details";
				}
			}
			execKeyInt 168
			{
				if ( ( tablelookup( "mp/challengeTable.csv" , 6 , localvarstring( "loadoutSecondary" ) , 4 ) ) != "" )
				{
					setLocalVarString "ui_challengeTierTable" ( tablelookup( "mp/challengeTable.csv" , 6 , localvarstring( "loadoutSecondary" ) , 4 ) );
					open "menu_challenge_details";
				}
			}
		}
		itemDef // challenge 1 black bar
		{
			rect 71.333 359.333 140 4 1 1
			decoration
			visible 1
			style 3
			forecolor 0 0 0 1
			background "white"
			textscale 0.55
		}
		itemDef // challenge 1 white bar
		{
			rect 71.333 359.333 140 4 1 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "white"
			textscale 0.55
			//exp rect w ( getplayerdata( "challengeProgress" , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ), 1 , 1 ) ) - 1 )
			//visible when ( ( ( ( getsortedchallengecount( localvarstring( "ui_info_filter" ) ) > 0 ) && ( !dvarbool( "onlinegame" ) || ( !dvarbool( "splitscreen" ) && !dvarbool( "xblive_privatematch" ) ) ) && localvarbool( "ui_challenge_blade_vis" ) ) ) )
		}
		itemDef // challenge 1 text
		{
			rect -34.167 341.333 246.667 19.567 1 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 10
			textscale 0.340278
			//visible when ( localvarstring( "ui_selected_ref" ) != "" && !( int( tablelookup( "mp/allChallengesTable.csv" , 0 , localvarstring( "ui_selected_ref" ) , 6 + ( ( int( max( getplayerdata( "challengeState" , localvarstring( "ui_selected_ref" ) ) , 1 ) ) - 1 ) * 2 ) ) ) == "" ) )
			//exp text ( locstring( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , localvarstring( "ui_selected_ref" ) , 1 ) ) + locstring( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , localvarstring( "ui_selected_ref" ) , 3 ) + "_" + int( max( getplayerdata( "challengeState" , localvarstring( "ui_selected_ref" ) ) , 1 ) ) ) )
			exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , 3 ) )
		}
		itemDef // challenge 1 text #2
		{
			rect -34.167 341.333 246.667 19.567 1 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 10
			textscale 0.340278
			//visible when ( localvarstring( "ui_selected_ref" ) != "" && ( int( tablelookup( "mp/allChallengesTable.csv" , 0 , localvarstring( "ui_selected_ref" ) , 6 + ( ( int( max( getplayerdata( "challengeState" , localvarstring( "ui_selected_ref" ) ) , 1 ) ) - 1 ) * 2 ) ) ) == "" ) )
			//exp text ( locstring( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , localvarstring( "ui_selected_ref" ) , 1 ) ) + locstring( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , localvarstring( "ui_selected_ref" ) , 3 ) + "_" + int( max( getplayerdata( "challengeState" , localvarstring( "ui_selected_ref" ) ) , 1 ) ) - 1 ) )
		}
		itemDef  // challenge 2 black bar
		{
			rect 71.333 380.667 140 4 1 1
			decoration
			visible 1
			style 3
			forecolor 0 0 0 1
			background "white"
			textscale 0.55
			//visible when ( ( ( ( getsortedchallengecount( localvarstring( "ui_info_filter" ) ) > 0 ) && ( !dvarbool( "onlinegame" ) || ( !dvarbool( "splitscreen" ) && !dvarbool( "xblive_privatematch" ) ) ) && localvarbool( "ui_challenge_blade_vis" ) ) && ( getsortedchallengecount( localvarstring( "ui_info_filter" ) ) > 1 ) ) )
		}
		itemDef // challenge 2 white bar
		{
			rect 71.333 380.667 140 4 1 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "white"
			textscale 0.55
			//exp rect w ( 140 * ( ( ( getplayerdata( "challengeProgress" , getsortedchallengename( 1 , localvarstring( "ui_info_filter" ) ) ) ) / ( int( getchallengedata( getsortedchallengename( 1 , localvarstring( "ui_info_filter" ) ) , "target" , int( max( getplayerdata( "challengeState" , getsortedchallengename( 1 , localvarstring( "ui_info_filter" ) ) ) , 1 ) ) ) ) ) ) ) )
			//visible when ( ( ( ( getsortedchallengecount( localvarstring( "ui_info_filter" ) ) > 0 ) && ( !dvarbool( "onlinegame" ) || ( !dvarbool( "splitscreen" ) && !dvarbool( "xblive_privatematch" ) ) ) && localvarbool( "ui_challenge_blade_vis" ) ) && ( getsortedchallengecount( localvarstring( "ui_info_filter" ) ) > 1 ) ) )
		}
		itemDef  // challenge 2 text
		{
			rect -34.167 362.667 246.667 19.567 1 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 3
			textalign 10
			textscale 0.340278
			//visible when ( ( ( ( getsortedchallengecount( localvarstring( "ui_info_filter" ) ) > 0 ) && ( !dvarbool( "onlinegame" ) || ( !dvarbool( "splitscreen" ) && !dvarbool( "xblive_privatematch" ) ) ) && localvarbool( "ui_challenge_blade_vis" ) ) && ( getsortedchallengecount( localvarstring( "ui_info_filter" ) ) > 1 ) ) )
			exp text ( "@" + tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutSecondary" ) , 3 ) )
		}