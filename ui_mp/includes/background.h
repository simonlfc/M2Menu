#ifdef MENU_BACKGROUND
    CREATE_SHADER( 0 0 640 480 4 4, MENU_BACKGROUND, 1 1 1 1 )
    CREATE_SHADER_EX( -574.85 0 1708 480 0 0, "mw2_main_cloud_overlay", 0.35 0.35 0.35 0.55, 1, exp rect x ( ( 0 - 107 ) - ( ( float( milliseconds( ) % 60000 ) / 60000 ) * ( 854 ) ) ) )
    CREATE_SHADER_EX( -228.78 0 -1708 -480 0 0, "mw2_main_cloud_overlay", 0.35 0.35 0.35 0.55, 1, exp rect x ( ( - 107 + 854 ) + ( ( float( milliseconds( ) % 50000 ) / 50000 ) * ( 854 ) ) ) )

#endif

#ifndef BG_HIDE_TITLE
    #ifdef MENU_TITLE
        CREATE_TEXT( ( CHOICE_X_START + 10 ) ( CHOICE_Y_START - 40 ) 0 0 1 1, MENU_TITLE, 1 1 1 1, 1, textalign ITEM_ALIGN_TOP_LEFT; textscale TEXTSIZE_TITLE; textfont 9 )
    #endif
#endif