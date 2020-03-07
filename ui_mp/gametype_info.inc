/*
#ifndef GAMETYPE_LIST
#error "GAMETYPE undefined"
#endif

#ifndef GAMETYPE_TABLE
#error "GAMETYPE_TABLE undefined"
#endif
*/
// --- gametype list --------

#define LOCAL_GAMETYPE_SHOW( p_gametype ) \
		setLocalVarString ui_info_name "@" + tablelookup( "mp/gameTypesTable.csv" , 0 , p_gametype , 1  ); \
		setLocalVarString ui_info_desc "@" + tablelookup( "mp/gameTypesTable.csv" , 0 , p_gametype , 2  ); \

#define LOCAL_GAMETYPE_ACTION( p_gametype ) \
		setdvar ui_gametype p_gametype; \
		close "self"; \
	
#define LOCAL_GAMETYPE_NAME( p_gametype_name ) \
		"@" + tablelookup( "mp/gameTypesTable.csv" , 0 ,  p_gametype_name , 1 ) + "_CAPS" \
		
#define	LOCAL_GAMETYPE_SELECTION( itemIndex, buttonName, p_gametype_name, p_gametype ) \
 		CHOICE_BUTTON_FOCUS_VIS( itemIndex, buttonName, LOCAL_GAMETYPE_NAME( p_gametype_name ), LOCAL_GAMETYPE_ACTION( p_gametype ), LOCAL_GAMETYPE_SHOW( p_gametype ), ;, 1 )
