#define CHOICE_SEPARATOR( idx, visibility ) \
        CREATE_SHADER_VIS( CHOICE_X( idx ) CHOICE_Y( idx ) CHOICE_X_SIZE 0.5 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN, "white", 1 1 1 0.1, visibility )