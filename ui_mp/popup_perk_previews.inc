// Base 
    itemDef
    {
    	rect -244 55 141 152 2 1
    	name "infobox1"
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

    itemDef
    {
    	rect -244 210 141 152 2 1
    	name "infobox1"
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
// Perk
    itemDef
    {
    	rect 163 80 53 50 1 1
        name "perk_img"
    	decoration
    	visible 1
    	style 3
    	forecolor 1 1 1 1
    	textscale 0.55
    	visible when ( ( 1 ) )
    	exp material ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 3 ) )
    }
    itemDef
    {
    	rect 96 120 186.667 44.4 1 1
        name "perk_name"
    	decoration
    	autowrapped
    	visible 1
    	style 1
    	forecolor 1 1 1 1
    	forecolor 1 1 1 1
    	textfont UI_FONT_NORMAL
    	textalign 9
    	textscale 0.25
    	exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 2 ) )
    }
    itemDef
    {
    	rect 121 133 135 48 1 1
        name "perk_desc"
    	decoration
    	autowrapped
    	visible 1
    	style 1
    	forecolor 1 1 1 0.25
    	textfont UI_FONT_NORMAL
    	textalign 9
    	textscale 0.2
    	visible when ( ( 1 ) )
    	exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 4 ) )
    }
    itemDef
    {
    	rect 163 235 53 50 1 1
        name "perk_img_upgrade"
    	decoration
    	visible 1
    	style 3
    	forecolor 1 1 1 1
    	textscale 0.55
    	exp material ( ( tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 3 ) + "_upgrade" ) )
    }
    itemDef
    {
    	rect 96 275 186.667 44.4 1 1
        name "perk_name_upgrade"
    	decoration
    	autowrapped
    	visible 1
    	style 1
    	forecolor 1 1 1 1
    	textfont UI_FONT_NORMAL
    	textalign 9
    	textscale 0.25
    	exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , int( 9 ) ) )
    }
    itemDef
    {
    	rect 121 288 135 48 1 1
        name "perk_desc_upgrade"
    	decoration
    	autowrapped
    	visible 1
    	style 1
    	forecolor 1 1 1 0.25
    	textfont UI_FONT_NORMAL
    	textalign 9
    	textscale 0.2
    	exp text ( "@" + tablelookup( "mp/perkTable.csv" , 1 , tablelookup( "mp/perkTable.csv" , 1 , localvarstring( "ui_selected_ref" ) , 8 ) , 4 ) )
    }
