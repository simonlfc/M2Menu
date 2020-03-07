#include "ui_mp/ch_detail.inc"

#define CLEAR_CH_HINT \
setLocalVarString "ui_selected_tier_ref" ( "@NULL_EMPTY" );  \
setLocalVarString "ui_hint_text" ( "@NULL_EMPTY" ); \
	
		#define LOCAL_CH_VIS( ch_name ) \
				when ( ( tablelookup( "mp/challengeTable.csv" , 5 , ch_name , 5 ) != "" ) && ( !( tablelookup( "mp/challengeTable.csv" , 5 , ch_name , 7 ) != "" ) || isitemunlocked( "tier_prestige" ) )

		#define LOCAL_CH_ACTION( ch_name ) \
				setLocalVarString "ui_challengeTierTable" ( tablelookup( "mp/challengeTable.csv" , 5 , ch_name , 4 ) ); \
				open "menu_challenge_details"; \
				setLocalVarInt "dataValue" ( tablelookup( "mp/challengeTable.csv" , 5 , ch_name , 0 ) ); \
				setPlayerData( "challengeTierNew" , "localVarInt" ( "dataValue" ) , "false" ); \

		#define LOCAL_CH_FOCUS( ch_name ) \
				if ( isitemunlocked( "tier_" + ( ch_name - 1 ) ) ) \
				{ \
					setLocalVarString "ui_hint_text" ( ( "@" + tablelookup( "mp/challengeTable.csv" , 5 , ch_name , 2 ) ) ); \
				} \
				else \
				{ \
					if ( tablelookup( "mp/unlockTable.csv" , 0 , "tier_" + ( ch_name - 1 ) , 2 ) == 9999 ) \
					{ \
						setLocalVarString "ui_hint_text" ( "@PERKS_UNLOCKED_AT_NONE" ); \
					} \
					else \
					{ \
						if ( tablelookup( "mp/unlockTable.csv" , 0 , "tier_" + ( ch_name - 1 ) , 3 ) != "" ) \
						{ \
							setLocalVarString "ui_hint_text" ( "@PERKS_UNLOCKED_BY_CHALLENGE" ); \
						} \
						else \
						{ \
							setLocalVarString "ui_hint_text" ( "@" + tablelookup( "mp/rankTable.csv" , 0 , tablelookup( "mp/unlockTable.csv" , 0 , "tier_" + ( ch_name - 1 ) , 2 ) , 17 ) ); \
						} \
					} \
				} \
				setLocalVarString "ui_selected_tier_ref" ( "@" + tablelookup( "mp/challengeTable.csv" , 5 , ch_name , 1 ) ); \
				setLocalVarInt "ui_menuIndex" ( ch_name ); \

		#define LOCAL_CH_NAME( ch_name ) \
				"@" + tablelookup( "mp/challengeTable.csv" , 5 , ch_name , 1 ) \

		#define LOCAL_CH_BUTTON( itemIndex, buttonName, ch_name ) \
				CHOICE_BUTTON_FOCUS_VIS( itemIndex, buttonName, LOCAL_CH_NAME( ch_name ), LOCAL_CH_ACTION( ch_name ), LOCAL_CH_FOCUS( ch_name ), CLEAR_CH_HINT, LOCAL_CH_VIS( ch_name ) )
