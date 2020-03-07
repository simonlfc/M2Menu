#define LOCAL_CHD_EXARGS( chIndex ) \
		glowColor 0 0 0 1 \
		exp glowcolor r ( ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , 18 , 1 ) == "tier_prestige" ) * 0.25 * ( ( sin( milliseconds( ) / 150 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) ) \
		exp glowcolor g ( ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , 18 , 1 ) == "tier_prestige" ) * 0.75 * ( ( sin( milliseconds( ) / 150 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) ) \
		exp glowcolor b ( ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , 18 , 1 ) == "tier_prestige" ) * 0.25 * ( ( sin( milliseconds( ) / 150 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) ) \

#define LOCAL_CHD_FOCUS( chIndex ) \
		setLocalVarString "ui_selected_ref" ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) ); \
		setLocalVarString "ui_selected_unlock" ( tablelookup( "mp/unlockTable.csv" , 0 , localvarstring( "ui_selected_ref" ) , ( 4 + int( max( getplayerdata( "challengeState" , localvarstring( "ui_selected_ref" ) ) , 1 ) ) ) - 1 ) ); \
		setLocalVarString "ui_selected_unlockType" ( "" ); \
		if ( tablelookup( "mp/camoTable.csv" , 1 , localvarstring( "ui_selected_unlock" ) , 1 ) != "" ) \
		{ \
			setLocalVarString "ui_selected_unlockType" ( "camo" ); \
		} \
		if ( tablelookup( "mp/attachmentTable.csv" , 4 , localvarstring( "ui_selected_unlock" ) , 4 ) != "" ) \
		{ \
			setLocalVarString "ui_selected_unlockType" ( "attachment" ); \
		} \
		if ( localvarstring( "ui_selected_unlock" ) == "title" ) \
		{ \
			setLocalVarString "ui_selected_unlockType" ( "title" ); \
		} \
		if ( localvarstring( "ui_selected_unlock" ) == "icon" ) \
		{ \
			setLocalVarString "ui_selected_unlockType" ( "icon" ); \
		} \

#define LOCAL_CHD_BUTTON( itemIndex, buttonName, chIndex ) \
		CHOICE_BUTTON_FOCUS_VIS_EX( itemIndex, buttonName, locstring( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) , 1 ) ) + locstring( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) , 3 ) + "_" + int( max( getplayerdata( "challengeState" , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) ) , 1 ) ) ), ;, LOCAL_CHD_FOCUS( chIndex ), ;, \
		when ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) != "" && !( int( tablelookup( "mp/allChallengesTable.csv" , 0 , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) , 6 + ( ( int( max( getplayerdata( "challengeState" , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) ) , 1 ) ) - 1 ) * 2 ) ) ) == "" ) && !( ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 1 ) == "tier_prestige" ) && !isitemunlocked( "tier_prestige" ) ) ), LOCAL_CHD_EXARGS( chIndex ) disabled when ( !isitemunlocked( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) ) || !isitemunlocked( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 1 ) ) ) ) \
		CHOICE_BUTTON_FOCUS_VIS_EX( itemIndex, buttonName, locstring( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) , 1 ) ) + locstring( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) , 3 ) + "_" + ( int( max( getplayerdata( "challengeState" , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) ) , 1 ) ) - 1 ) ), ;, setLocalVarString "ui_selected_ref" ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) );, ;, \
		when ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) != "" && ( int( tablelookup( "mp/allChallengesTable.csv" , 0 , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) , 6 + ( ( int( max( getplayerdata( "challengeState" , tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) ) , 1 ) ) - 1 ) * 2 ) ) ) == "" ) && !( ( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 1 ) == "tier_prestige" ) && !isitemunlocked( "tier_prestige" ) ) ), LOCAL_CHD_EXARGS( chIndex ) disabled when ( !isitemunlocked( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 0 ) ) || !isitemunlocked( tablelookupbyrow( localvarstring( "ui_challengeTierTable" ) , chIndex , 1 ) ) ) ) \
		
		/*PREPROC_SHADER_DRAW_VIS( 216 (35+(itemIndex*20)+0) 40 10 1 1, ORIGIN_NONE, "black", 1 1 1 0.55, \
		when (tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0)!="" \
		&&!(int(tablelookup("mp/allChallengesTable.csv",0,tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0),6 \
		+((int(max(getplayerdata("challengeState",tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0)),1))-1)*2)))=="") \
		&&!((tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,1)=="tier_prestige") \
		&&!isitemunlocked("tier_prestige"))) exp rect w (40) exp rect x (216+(46*dvarbool("wideScreen")))) \
		PREPROC_SHADER_DRAW_VIS( 216 (35+(itemIndex*20)+2) 40 6 1 1, ORIGIN_NONE, "gradient_fadein", 0.85 0.85 0.85 1, \
		when (tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0)!=""&&!((tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,1)=="tier_prestige")&&!isitemunlocked("tier_prestige"))) \
		exp rect w (((getplayerdata("challengeProgress",tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0))-0) \
		/(int(tablelookup("mp/allChallengesTable.csv",0,tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0),6 \
		+((int(max(getplayerdata("challengeState",tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0)),1))-1)*2)))-0))*40) \
		exp rect x (216+(46*dvarbool("wideScreen")))) \
		PREPROC_SHADER_DRAW_VIS( 216 (35+(itemIndex*20)+2) 40 6 1 1 , ORIGIN_NONE, "white", 1 1 0.25 0.65, \
		when (tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0)!=""&&!((tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,1)=="tier_prestige")&&!isitemunlocked("tier_prestige"))) \
		exp rect w (((getplayerdata("challengeProgress",tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0))-0) \
		/(int(tablelookup("mp/allChallengesTable.csv",0,tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0),6 \
		+((int(max(getplayerdata("challengeState",tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0)),1))-1)*2)))-0))*40) \
		exp rect x (216+(46*dvarbool("wideScreen"))) ) \
		PREPROC_SHADER_DRAW_VIS( 216 (35+(itemIndex*20)+0) 40 10 1 1, ORIGIN_NONE, "white", 1 1 1 0.65, \
		when (tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0)!="" \
		&&(int(tablelookup("mp/allChallengesTable.csv",0,tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0),6 \
		+((int(max(getplayerdata("challengeState",tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,0)),1))-1)*2)))=="") \
		&&!((tablelookupbyrow(localvarstring("ui_challengeTierTable"),chIndex,1)=="tier_prestige")&&!isitemunlocked("tier_prestige"))) \
		style 1 backcolor 0 0 0 0.55 textfont 10 textalign 9 textscale 0.275 text "@MPUI_DONE_CAPS" exp rect x (216+(46*dvarbool("wideScreen"))) ) \
		*/