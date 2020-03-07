//---------------- icon ----------------
		itemDef
		{
			rect 92.667 170 119.967 119.967 1 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 0.5
			textscale 0.55
			visible when ( localvarstring( "ui_team" ) == "marines" )
			exp material ( dvarstring( "g_TeamIcon_Allies" ) )
		}
		itemDef
		{
			rect 92.667 170 119.967 119.967 1 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 0.5
			textscale 0.55
			visible when ( localvarstring( "ui_team" ) == "opfor" )
			exp material ( dvarstring( "g_TeamIcon_Axis" ) )
		}
		itemDef
		{
			rect 92.667 170 119.967 119.967 1 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 0.5
			textscale 0.55
			visible when ( team( "name" ) == "TEAM_FREE" && localvarstring( "ui_team" ) == "marines" )
			exp material ( dvarstring( "g_TeamIcon_Allies" ) )
		}
		itemDef
		{
			rect 92.667 170 119.967 119.967 1 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 0.5
			textscale 0.55
			visible when ( team( "name" ) == "TEAM_FREE" && localvarstring( "ui_team" ) == "opfor" )
			exp material ( dvarstring( "g_TeamIcon_Axis" ) )
		}
//--------------- name -----------------