		itemDef // no blur 
		{
			rect -426.667 -240 853.333 480 2 2
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "mw2_main_sp_image"
			textscale 0.55
			visible when ( ! ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}
#ifdef BACKGROUND_BLUR
		itemDef // blur bg
		{
			rect -426.667 -240 853.333 480 2 2
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "mw2_main_co_image"
			textscale 0.55
			visible when ( ! ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}	
#endif		
		itemDef
		{
			rect -426.667 -36 853.333 480 2 1
			decoration
			visible 1
			style 3
			forecolor 0 0 0 0.1
			background "white"
			textscale 0.55
			visible when ( ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}
		itemDef
		{
			rect -574.85 0 1708 480 0 0
			decoration
			visible 1
			style 3
			forecolor 0.35 0.35 0.35 0.55
			background "mw2_main_cloud_overlay"
			textscale 0.55
			exp rect x ( ( 0 - 107 ) - ( ( float( milliseconds( ) % 60000 ) / 60000 ) * ( 854 ) ) )
			visible when ( ! ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}
		itemDef
		{
			rect -228.78 0 -1708 -480 0 0
			decoration
			visible 1
			style 3
			forecolor 0.35 0.35 0.35 0.55
			background "mw2_main_cloud_overlay"
			textscale 0.55
			exp rect x ( ( - 107 + 854 ) + ( ( float( milliseconds( ) % 50000 ) / 50000 ) * ( 854 ) ) )
			visible when ( ! ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}
