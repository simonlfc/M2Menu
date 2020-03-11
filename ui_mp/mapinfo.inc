itemDef
{
	rect 91 33 272 225 2 1
    name "previewbg"
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
	rect 92 34 270 152 2 1
    name "icon"
	decoration
	visible 1
	style 3
	forecolor 1 1 1 1
	textscale 0.55
	visible when ( 1 )
	exp material ( localvarstring( "ui_info_icon" )  )
}
itemDef
{
	name "longname"
	rect 99 189 272 20.833 2 1
	decoration
	visible 1
	style 1
	forecolor 1 1 1 1
	textfont UI_FONT_NORMAL
	textalign 8
	textscale TEXTSIZE_SMALL
	visible when ( ( 1 ) )
	exp text ( "@" + localvarstring( "ui_info_name" )  )
}
itemDef
{
	name "description"
	rect 99 196 260 45 2 1
	decoration
	autowrapped
	visible 1
	forecolor 1 1 1 1
	textfont 3
	textalign 8
	textscale 0.3
	visible when ( ( 1 ) )
	exp text ( "@" + localvarstring( "ui_info_desc" )  )
}