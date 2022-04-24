#define SHOULD_SHOW_PLAYERCARD 		getplayercardinfo( 0, 1, 0 ) != 0
#define PLAYERCARD_X				0
#define PLAYERCARD_Y				0

// background
CREATE_SHADER_EX( -208 18 208 70 3 1, "cardtitle_248x48", 1 1 1 1, SHOULD_SHOW_PLAYERCARD, origin PLAYERCARD_X PLAYERCARD_Y )

// cardicon
CREATE_SHADER_EX( -48 18 48 48 3 1, tablelookupbyrow( "mp/cardIconTable.csv", getplayercardinfo( 2, 1, 0 ), 1 ), 1 1 1 1, SHOULD_SHOW_PLAYERCARD, origin PLAYERCARD_X PLAYERCARD_Y )

// rank icon
CREATE_SHADER_EX( -44 66 20 20 3 1, tablelookup( "mp/rankIconTable.csv", 0, getplayercardinfo( 4, 1, 0 ), ( getplayercardinfo( 5, 1, 0 ) + 1 ) ), 1 1 1 1, SHOULD_SHOW_PLAYERCARD && getplayercardinfo( 4, 1, 0 ) >= 0, origin PLAYERCARD_X PLAYERCARD_Y )

// name
CREATE_TEXT( -200 46 160 18 3 1, getplayercardinfo( 8, 1, 0 ), 1 1 1 1, SHOULD_SHOW_PLAYERCARD, origin PLAYERCARD_X PLAYERCARD_Y; textfont 10; textalign 4; textscale 0.33; textstyle 8 )

// rank text
CREATE_TEXT( -24 66 20 20 3 1, tablelookup( "mp/rankTable.csv", 0, getplayercardinfo( 4, 1, 0 ), 14 ), 1 1 1 1, SHOULD_SHOW_PLAYERCARD && getplayercardinfo( 4, 1, 0 ) >= 0, origin PLAYERCARD_X PLAYERCARD_Y; textfont 3; textalign 9; textscale 0.375; textstyle 7 )

// cardtitle
itemDef
{
	rect 			-208 16 160 32 3 1
	origin 			PLAYERCARD_X PLAYERCARD_Y
	style 			1
	forecolor 		1 1 1 1
	backcolor 		1 1 1 1
	textalign 		9
	textscale 		0.375
	textstyle 		8
	textFont 		3
	exp 			text ( "@" + tablelookupbyrow( "mp/cardTitleTable.csv", getplayercardinfo( 1, 1, 0 ), 1 ) )
	exp 			material ( tablelookupbyrow( "mp/cardTitleTable.csv", getplayercardinfo( 1, 1, 0 ), 2 ) )
	visible 		when ( SHOULD_SHOW_PLAYERCARD )
	exp 			forecolor r ( tablelookupbyrow( "mp/cardTitleTable.csv", getplayercardinfo( 1, 1, 0 ), 3 ) )
	exp 			forecolor g ( tablelookupbyrow( "mp/cardTitleTable.csv", getplayercardinfo( 1, 1, 0 ), 4 ) )
	exp 			forecolor b ( tablelookupbyrow( "mp/cardTitleTable.csv", getplayercardinfo( 1, 1, 0 ), 5 ) )
	decoration 
}
