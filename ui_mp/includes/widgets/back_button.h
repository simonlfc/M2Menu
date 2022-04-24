#define BACK_BUTTON( action_, visibility ) \
        itemDef \
		{ \
			rect 			CHOICE_X_START -15 45 20 1 3; \
			exp				text ( "BACK" ) \
            style           WINDOW_STYLE_FILLED \
            type            ITEM_TYPE_BUTTON \
			visible 		when ( visibility ) \
            background      "white" \
            forecolor       1 1 1 0.5 \
            backcolor       0 0 0 0 \
            textfont        UI_FONT_DEFAULT \
            textscale       0.325 \
            textalign       ITEM_ALIGN_MIDDLE_CENTER \
            textalignx      -0.5 \
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