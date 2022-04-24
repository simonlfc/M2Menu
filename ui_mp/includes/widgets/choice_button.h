#define CHOICE_BUTTON( idx, string, action_, visibility ) \
        itemDef \
		{ \
			rect 			CHOICE_RECT( idx ) \
			exp				text ( string ) \
            style           WINDOW_STYLE_FILLED \
            type            ITEM_TYPE_BUTTON \
			visible 		when ( visibility ) \
            background      "white" \
            forecolor       1 1 1 1 \
            backcolor       0 0 0 0 \
            textfont        UI_FONT_DEFAULT \
            textscale       TEXTSIZE_SMALL \
            textstyle       ITEM_TEXTSTYLE_NORMAL \
            textalign       ITEM_ALIGN_MIDDLE_LEFT \
            textalignx      10 \
            textaligny      -0.5 \
            onFocus \
			{ \
                setItemColor self backcolor 0 0 0 0.25; \
				play "mouse_over"; \
			} \
            leaveFocus \
            { \
                setItemColor self backcolor 0 0 0 0; \
            } \
			action \
			{ \
				play "mouse_click"; \
                action_; \
            } \
		}