#define ORIGIN_NONE 0 0
#define COLOR_NONE 0 0 0 0

// generic shader draw, text draw, ui art elements to be included by menu scripts that use such

#define PREPROC_SHADER_DRAW_ALIGNED( prect, porigin, pshader, pcolor, pcolor2, pstyle ) \
		PREPROC_SHADER_DRAW_ALIGNED_VIS( prect, porigin, pshader, pcolor, pcolor2, pstyle, 1 )
		
#define PREPROC_SHADER_DRAW_ALIGNED_VIS( prect, porigin, pshader, pcolor, pcolor2, pstyle, visArg ) \
		itemDef \
		{ \
			rect prect \
			origin porigin \
			exp material( pshader ) \
			forecolor pcolor \
			backcolor pcolor2 \
			visible visArg \
			decoration \
			style pstyle \
		}

// generic shader draw
#define PREPROC_SHADER_DRAW( prect, porigin, pshader, pcolor ) \
		itemDef \
		{ \
			style WINDOW_STYLE_SHADER \
			rect prect \
			origin porigin \
			forecolor pcolor \
			exp material( pshader ); \
			visible 1 \
			decoration \
		}

#define PREPROC_SHADER_DRAW_VIS( prect, porigin, pshader, pcolor, visArg ) \
		itemDef \
		{ \
			style WINDOW_STYLE_SHADER \
			rect prect \
			origin porigin \
			forecolor pcolor \
			exp material( pshader ); \
			visible visArg \
			decoration \
		}
// generic text draw
#define PREPROC_TEXT_DRAW( prect, porigin, ptext, psize, palignx, paligny, palign, pcolor ) \
		PREPROC_TEXT_DRAW_VIS( prect, porigin, ptext, psize, palignx, paligny, palign, pcolor, 1 )

#define PREPROC_TEXT_DRAW_VIS( prect, porigin, ptext, psize, palignx, paligny, palign, pcolor, visArg ) \
		itemDef \
		{ \
			rect prect \
			origin porigin \
			textAlign palign \
			textAlignX palignx \
			textAlignY paligny \
			textScale psize \
			forecolor pcolor \
			ptext \
			visible visArg \
			decoration \
		}
#define PREPROC_TEXT_DRAW_ADV_VIS( prect, porigin, ptext, psize, palignx, paligny, palign, pfont, pcolor, visArg ) \
		itemDef \
		{ \
			rect prect \
			origin porigin \
			textAlignX palignx \
			textAlignY paligny \
			textStyle 3 \
			textFont pfont \
			textAlign palign \
			textScale psize \
			forecolor pcolor \
			exp text ( ptext ) \
			visible visArg \
			decoration \
		}
// generic text draw
#define PREPROC_TEXT_DRAW_ALIGNED( prect, porigin, ptext, psize, palignx, paligny, palign, pcolor ) \
		itemDef \
		{ \
			rect prect \
			origin porigin \
			textAlignX palignx \
			textAlignY paligny \
			textStyle 0 \
			textfont 9 \
			textAlign palign \
			textScale psize \
			forecolor pcolor \
			exp text ( ptext ) \
			visible 1 \
			decoration \
		}
#define PREPROC_TEXT_DRAW_ALIGNED2( prect, porigin, ptext, psize, palignx, paligny, palign, pcolor ) \
		itemDef \
		{ \
			rect prect \
			origin porigin \
			textAlignX palignx \
			textAlignY paligny \
			textStyle 0 \
			textfont 3 \
			textAlign palign \
			textScale psize \
			forecolor pcolor \
			exp text ( ptext ) \
			visible 1 \
			decoration \
		}
// generic text draw with thickness
#define PREPROC_TEXT_DRAW_ALIGNED3( prect, porigin, ptext, psize, palignx, paligny, palign, pfont, pcolor ) \
		itemDef \
		{ \
			rect prect \
			origin porigin \
			textAlignX palignx \
			textAlignY paligny \
			textStyle 3 \
			textfont pfont \
			textAlign palign \
			textScale psize \
			forecolor pcolor \
			exp text ( ptext ) \
			visible 1 \
			decoration \
		}
// generic text draw
#define PREPROC_TEXT_DRAW_ALIGNED_EXP( prect, porigin, ptext, psize, palignx, paligny, palign, pcolor ) \
		itemDef \
		{ \
			rect prect \
			origin porigin \
			textAlignX palignx \
			textAlignY paligny \
			textStyle 3 \
			textAlign palign \
			textScale psize \
			forecolor pcolor \
			exp text( ptext ); \
			visible 1 \
			decoration \
			autowrapped \
		}

#define PREPROC_TEXT_DRAW_ALIGNED_EXP2( prect, porigin, ptext, pfont, psize, palignx, paligny, palign, pcolor ) \
		itemDef \
		{ \
			rect prect \
			origin porigin \
			textAlignX palignx \
			textAlignY paligny \
			textfont pfont \
			textStyle 3 \
			textAlign palign \
			textScale psize \
			forecolor pcolor \
			exp text( ptext ); \
			visible 1 \
			decoration \
			autowrapped \
		}
		
// generic shader draw using exp
#define PREPROC_SHADER_DRAW_EXP( prect, pshader, pstyle, pcolor ) \
		itemDef \
		{ \
			rect prect \
			forecolor pcolor \
			exp material ( pshader ) \
			visible 1 \
			style pstyle \
			decoration \
		}
#define PREPROC_SHADER_DRAW_EXP_VIS( prect, pshader, pstyle, pcolor, visArg ) \
		itemDef \
		{ \
			rect prect \
			foreColor pcolor \
			exp material ( pshader ) \
			visible visArg \
			style pstyle \
			decoration \
		}

// generic text draw using exp
#define PREPROC_TEXT_DRAW_EXP( prect, ptext, psize, palignx, paligny, palign, pcolor ) \
		itemDef \
		{ \
			rect prect \
			textAlignX palignx \
			textAlignY paligny \
			textStyle ITEM_TEXTSTYLE_SHADOWED \
			textAlign palign \
			textScale psize \
			foreColor pcolor \
			ptext; \
			visible 1 \
			decoration \
		}

// generic shader draw
#define PREPROC_SHADER_DRAW_ADV( px, py, pw, ph, pshader, pcolor ) \
		PREPROC_SHADER_DRAW_ADV_VIS( px, py, pw, ph, pshader, pcolor, 1 )
		
#define PREPROC_SHADER_DRAW_ADV_VIS( px, py, pw, ph, pshader, pcolor, visArg ) \
		itemDef \
		{ \
			style WINDOW_STYLE_SHADER \
			exp rect X( px ) \
			exp rect Y( py ) \
			exp rect W( pw ) \
			exp rect H( ph ) \
			forecolor pcolor \
			exp material( pshader ); \
			visible visArg \
			decoration \
		}		

// generic text draw
#define PREPROC_TEXT_DRAW_ADV( px, py, pw, ph, ptext, psize, palignx, paligny, palign, pcolor ) \
		itemDef \
		{ \
			exp rect X( px ) \
			exp rect Y( py ) \
			exp rect W( pw ) \
			exp rect H( ph ) \
			textAlignX palignx \
			textAlignY paligny \
			textStyle ITEM_TEXTSTYLE_SHADOWED \
			textAlign palign \
			textScale psize \
			forecolor pcolor \
			ptext; \
			visible 1 \
			decoration \
		}
	
#define PREPROC_PERFORATION( px, py, pw, ph, px2, py2, px3, py3 ) \
		itemDef \
		{ \
			style WINDOW_STYLE_SHADER \
			exp rect X( ( px ) + ( px2 ) ) \
			exp rect Y( ( py ) + ( py2 ) ) \
			exp rect W( pw ) \
			exp rect H( ph ) \
			origin px3 py3 \
			forecolor 1 1 1 1 \
			exp material( "ui_perforation" ); \
			visible 1 \
			decoration \
		}		

#define PREPROC_PERFORATION_ALIGNED( px, py, pw, ph, px2, py2, palign ) \
		itemDef \
		{ \
			style WINDOW_STYLE_SHADER \
			exp rect X( ( px ) + ( px2 ) ) \
			exp rect Y( ( py ) + ( py2 ) ) \
			exp rect W( pw ) \
			exp rect H( ph ) \
			rect 0 0 0 0 \
			palign \
			forecolor 1 1 1 1 \
			exp material( "ui_perforation" ); \
			visible 1 \
			decoration \
		}	

// art bar with perforation texture
#define PERFORATIONBAR( px, py, pw, ph, px2, py2 ) \
		PREPROC_PERFORATION( px, py, ( ph ) * 4, ph, px2, py2, 0, 0 ) \
		PREPROC_PERFORATION( ( px ) + ( pw ) - ( ph ) * 4, py, -4 * ( ph ), ph, px2, py2, 0, 0 )

// ------------------ preprocessing function definitions ------------------

#define LOADOUT_PLATING_RAW( porigin, px, py, pw, ph, palign, vis_gradient_top, vis_gradient_bottom ) \
		PREPROC_SHADER_DRAW_ALIGNED( (px-4) (py-8) pw ph palign, porigin, "white", 0.2 0.2 0.225 1, 0, 0, 0 0 0 0 ) \
		PREPROC_SHADER_DRAW_ALIGNED( (px-4) (py-8) pw ph palign, porigin, "line_horizontal", 0.9 0.9 0.95 0.5, 0, 0, 0 0 0 0 ) \
		PREPROC_SHADER_DRAW_ALIGNED( (px-4) (py+ph-8) pw 16 palign, porigin, "gradient_top", 1 1 1 0.4, 0, 0, 0 0 0 0 visible when( vis_gradient_bottom ) ) \
		PREPROC_SHADER_DRAW_ALIGNED( (px-4) (py-24) pw 16 palign, porigin, "gradient_bottom", 1 1 1 0.4, 0, 0, 0 0 0 0 visible when( vis_gradient_top ) )

// iw4

// generic text draw with exp forecolor r/g/b/a
#define PREPROC_TEXT_DRAW_EXP_RGBA_VIS( rectArg, textArg, foreColorArg, visArg ) \
		itemDef \
		{ \
			rect rectArg \
			decoration \
			visible visArg \
			forecolor 1 1 1 0.65 \
			textFont 3 \
			textAlign 4 \
			textScale 0.375 \
			exp text ( textArg ) \
			exp forecolor r ( foreColorArg ) \
			exp forecolor g ( foreColorArg ) \
			exp forecolor b ( foreColorArg ) \
			exp forecolor a ( foreColorArg ) \
		}
// singular buttons used for special pre processors that use groups
#define SINGULAR_BUTTON_RAW(rectArg, groupArg, bgArg, styleArg, actionArg ) \
		SINGULAR_BUTTON_RAW_FOCUS_VIS(rectArg, groupArg, bgArg, styleArg, actionArg, ;, ;, 1 )

#define SINGULAR_BUTTON_RAW_VIS(rectArg, groupArg, bgArg, styleArg, actionArg, visArg ) \
		SINGULAR_BUTTON_RAW_FOCUS_VIS(rectArg, groupArg, bgArg, styleArg, actionArg, ;, ;, visArg )

#define SINGULAR_BUTTON_RAW_FOCUS(rectArg, groupArg, bgArg, styleArg, actionArg, onFocusArg, leaveFocusArg ) \
		SINGULAR_BUTTON_RAW_FOCUS_VIS(rectArg, groupArg, bgArg, styleArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define SINGULAR_BUTTON_RAW_FOCUS_BGLESS_VIS(rectArg, styleArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		SINGULAR_BUTTON_RAW_FOCUS_VIS(rectArg, ;, ;, styleArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define SINGULAR_BUTTON_RAW_FOCUS_VIS(rectArg, groupArg, bgArg, styleArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		itemDef \
		{ \
			rect rectArg \
			visible visArg \
			group groupArg \
			background bgArg \
			style styleArg \
			forecolor 1 1 1 1 \
			type 1 \
			textScale 0.55 \
			onFocus \
			{ \
				play "mouse_over"; \
				onFocusArg \
			} \
			leaveFocus \
			{ \
				leaveFocusArg \
			} \
			action \
			{ \
				actionArg \
			} \
		}

// adds extra arguments for preprocessors
#define PREPROC_EXTRA_FOCUS_EX_VIS( prect, pshader, pcolor, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg ) \
		itemDef \
		{ \
			rect prect \
			decoration \
			style WINDOW_STYLE_SHADER \
			type ITEM_TYPE_BUTTON \
			textScale 0.55 \
			foreColor pcolor \
			background pshader \
			visible visArg \
			extraArg \
			onFocus \
			{ \
				play "mouse_over"; \
				onFocusArg \
			} \
			leaveFocus \
			{ \
				leaveFocusArg \
			} \
			action \
			{ \
				actionArg \
			} \
		}

// adds extra arguments missing for special itemdefs
#define PREPROC_SHADER_DRAW_EX( prect, pshader, pcolor, pgroup, actionArg, extraArg ) \
		PREPROC_SHADER_DRAW_FOCUS_EX_VIS( prect, pshader, pgroup, pcolor, actionArg, ;, ;, 1, extraArg ) \

#define PREPROC_SHADER_DRAW_EX_VIS( prect, pshader, pcolor, pgroup, actionArg, visArg, extraArg ) \
		PREPROC_SHADER_DRAW_FOCUS_EX_VIS( prect, pshader, pgroup, pcolor, actionArg, ;, ;, visArg, extraArg ) \

#define PREPROC_SHADER_DRAW_FOCUS_EX( prect, pshader, pcolor, pgroup, actionArg, onFocusArg, leaveFocusArg, extraArg ) \
		PREPROC_SHADER_DRAW_FOCUS_EX_VIS( prect, pshader, pcolor, pgroup, actionArg, onFocusArg, leaveFocusArg, 1, extraArg ) \

#define PREPROC_SHADER_DRAW_FOCUS_EX_VIS( prect, pshader, pcolor, pgroup, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg ) \
		itemDef \
		{ \
			style WINDOW_STYLE_SHADER \
			type ITEM_TYPE_BUTTON \
			textScale 0.55 \
			rect prect \
			foreColor pcolor \
			background pshader \
			group pgroup \
			visible visArg \
			decoration \
			extraArg \
			onFocus \
			{ \
				play "mouse_over"; \
				onFocusArg \
			} \
			leaveFocus \
			{ \
				leaveFocusArg \
			} \
			action \
			{ \
				actionArg \
			} \
		}