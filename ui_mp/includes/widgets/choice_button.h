#define CHOICE_BUTTON( idx, string, action_, visibility ) \
        CHOICE_BUTTON_EX( idx, string, action_, visibility, ; )

#define CHOICE_BUTTON_EX( idx, string, action_, visibility, extra ) \
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
            disablecolor    1 1 1 0.25 \
            textfont        UI_FONT_DEFAULT \
            textscale       TEXTSIZE_SMALL \
            textstyle       ITEM_TEXTSTYLE_NORMAL \
            textalign       ITEM_ALIGN_MIDDLE_LEFT \
            textalignx      10 \
            extra \
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