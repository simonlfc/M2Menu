// map display ================================================

		itemDef
		{
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "black"
			textscale 0.55
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			name "fullmap_map"
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			ownerdraw 181
			forecolor 1 1 1 1
			background "compass_map_default"
			type 8
			textscale 0.55
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			name "fullmap_friendlies"
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			ownerdraw 185
			forecolor 1 1 1 1
			type 8
			textscale 0.55
			exp forecolor a ( 1 - radarjamintensity( ) )
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			name "fullmap_enemies"
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			ownerdraw 188
			forecolor 1 1 1 1
			type 8
			textscale 0.55
			exp forecolor a ( 1 - radarjamintensity( ) )
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			name "fullmap_objectives"
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			ownerdraw 182
			forecolor 1 1 1 1
			background "objective_line"
			type 8
			textscale 0.55
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			name "fullmap_sentries"
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			ownerdraw 189
			forecolor 1 1 1 1
			type 8
			textscale 0.55
			exp forecolor a ( 1 - radarjamintensity( ) )
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			style 3
			forecolor 0.64 0.74 0.71 1
			background "white"
			textscale 0.55
			exp forecolor a ( radarjamintensity( ) )
			visible when ( radarisjammed( ) && ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			style 3
			forecolor 0.89 0.98 0.95 1
			background "ac130_overlay_grain"
			textscale 0.55
			exp forecolor a ( radarjamintensity( ) )
			visible when ( radarisjammed( ) && ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "stencil_base"
			textscale 0.55
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "scanlines_stencil"
			textscale 0.55
			exp rect y ( ( 97 - 266.667 ) + ( ( 266.667 * 2 ) * ( 1 - ( ( milliseconds( ) % 4000 ) / 4000 ) ) ) )
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			rect -272.667 97 266.667 266.667 3 1
			decoration
			visible 1
			style 3
			forecolor 0.89 0.98 0.95 1
			background "stencil_fill"
			textscale 0.55
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			rect -272.667 77.5 266.667 20 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			backcolor 0.1569 0.1725 0.1608 1
			background "white"
			textscale 0.55
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
		}
		itemDef
		{
			rect -272.667 77.5 266.667 20 3 1
			decoration
			visible 1
			style 1
			forecolor 1 1 1 1
			textfont 9
			textalign 5
			textscale 0.375
			visible when ( ( !isempjammed( ) ) && ( ! ( inkillcam( ) ) ) )
			exp text ( getmapname( ) )
		}