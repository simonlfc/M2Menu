// applies to most popup_secondary/primary popup_cac_* menus

#define PREPROC_LOCAL_TAB_DEPTH( tabDepthInt, tabName ) \
		PREPROC_SHADER_DRAW_ALIGNED( 0 0 280 20 1 1, ORIGIN_NONE, "white", 1 1 1 1, 0.25 0.25 0.25 1, 1 \
		exp rect y ( - 20 - ( ( localvarint( "ui_tabDepth" ) - tabDepthInt ) * 20 ) )  \
		visible when ( localvarint( "ui_tabDepth" ) > ( tabDepthInt - 1 ) ) ) \
		PREPROC_SHADER_DRAW_ALIGNED( 0 0 280 20 1 1, ORIGIN_NONE, "gradient_fadein", 1 1 1 1, 0 0 0 1, 1 \
		exp rect y ( - 20 - ( ( localvarint( "ui_tabDepth" ) - tabDepthInt ) * 20 ) ) \
		visible when ( localvarint( "ui_tabDepth" ) > ( tabDepthInt - 1 ) ) ) \
		PREPROC_TEXT_DRAW_ALIGNED( 0 0 280 20 1 1, ORIGIN_NONE, localvarstring( tabName ), 0.375, 68, 0, 4, 1 1 1 1 \
		exp rect y ( - 20 - ( ( localvarint( "ui_tabDepth" ) - tabDepthInt ) * 20 ) ) \
		exp forecolor r ( 1 - ( ( localvarint( "ui_tabDepth" ) > tabDepthInt ) * 0.35 ) ) \
		exp forecolor g ( 1 - ( ( localvarint( "ui_tabDepth" ) > tabDepthInt ) * 0.35 ) ) \
		exp forecolor b ( 1 - ( ( localvarint( "ui_tabDepth" ) > tabDepthInt ) * 0.35 ) ) \
		visible when ( localvarint( "ui_tabDepth" ) > ( tabDepthInt - 1 ) ) ) \		

// applies to cac.inc

	#define UI_TABDEPTH( actionArg, textArg ) \
			setLocalVarInt "ui_tabDepth" ( 0 ); \
			if ( localvarint( "ui_tabDepth" ) == 0 ) \
			{ setLocalVarString "ui_tab1Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 1 ) \
			{ setLocalVarString "ui_tab2Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 2 ) \
			{ setLocalVarString "ui_tab3Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 3 ) \
			{ setLocalVarString "ui_tab4Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 4 ) \
			{ setLocalVarString "ui_tab5Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 5 ) \
			{ setLocalVarString "ui_tab6Name" ( textArg ); } \
			actionArg \

	#define UI_TABDEPTH2( actionArg, textArg ) \
			if ( localvarint( "ui_tabDepth" ) == 0 ) \
			{ setLocalVarString "ui_tab1Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 1 ) \
			{ setLocalVarString "ui_tab2Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 2 ) \
			{ setLocalVarString "ui_tab3Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 3 ) \
			{ setLocalVarString "ui_tab4Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 4 ) \
			{ setLocalVarString "ui_tab5Name" ( textArg ); } \
			if ( localvarint( "ui_tabDepth" ) == 5 ) \
			{ setLocalVarString "ui_tab6Name" ( textArg ); } \
			actionArg \
				
#define LOCAL_TYPE_FOCUS( cacTypeStat, UI_REF1, UI_REF2, UI_REF3, UI_REF4 ) \
		UI_REF1 \
		UI_REF2 \
		UI_REF3 \
		UI_REF4 \

#define LOCAL_CH_REF( chType ) \
		if ( ( localvarstring( "ui_challenge_ref" ) == chType + localvarstring( "ui_weapon_ref" ) + "_2" ) ) \
		{ \
			setLocalVarString "ui_challenge_ref" ( chType + localvarstring( "ui_weapon_ref" ) ); \
			setLocalVarInt "ui_challenge_state" ( 2 ); \
		} \
		if ( ( localvarstring( "ui_challenge_ref" ) == chType + localvarstring( "ui_weapon_ref" ) + "_3" ) ) \
		{ \
			setLocalVarString "ui_challenge_ref" ( chType + localvarstring( "ui_weapon_ref" ) ); \
			setLocalVarInt "ui_challenge_state" ( 3 ); \
		} \
		if ( ( localvarstring( "ui_challenge_ref" ) == chType + localvarstring( "ui_weapon_ref" ) + "_4" ) ) \
		{ \
			setLocalVarString "ui_challenge_ref" ( chType + localvarstring( "ui_weapon_ref" ) ); \
			setLocalVarInt "ui_challenge_state" ( 4 ); \
		} \
		if ( ( localvarstring( "ui_challenge_ref" ) == chType + localvarstring( "ui_weapon_ref" ) + "_5" ) ) \
		{ \
			setLocalVarString "ui_challenge_ref" ( chType + localvarstring( "ui_weapon_ref" ) ); \
			setLocalVarInt "ui_challenge_state" ( 5 ); \
		} \
		if ( ( localvarstring( "ui_challenge_ref" ) == chType + localvarstring( "ui_weapon_ref" ) + "_6" ) ) \
		{ \
			setLocalVarString "ui_challenge_ref" ( chType + localvarstring( "ui_weapon_ref" ) ); \
			setLocalVarInt "ui_challenge_state" ( 6 ); \
		} \
		if ( ( localvarstring( "ui_challenge_ref" ) == chType + localvarstring( "ui_weapon_ref" ) + "_7" ) ) \
		{ \
			setLocalVarString "ui_challenge_ref" ( chType + localvarstring( "ui_weapon_ref" ) ); \
			setLocalVarInt "ui_challenge_state" ( 7 ); \
		} \
		if ( ( localvarstring( "ui_challenge_ref" ) == chType + localvarstring( "ui_weapon_ref" ) + "_8" ) ) \
		{ \
			setLocalVarString "ui_challenge_ref" ( chType + localvarstring( "ui_weapon_ref" ) ); \
			setLocalVarInt "ui_challenge_state" ( 8 ); \
		} \

#define LOCAL_CH_STATE \
		if ( ( tablelookup( "mp/unlockTable.csv" , 0 , localvarstring( "ui_upgrade_ref" ) , 3 ) ) == localvarstring( "ui_challenge_ref" ) + "_2" ) \
		{ \
			setLocalVarInt "ui_challenge_state" ( 2 ); \
		} \
		if ( ( tablelookup( "mp/unlockTable.csv" , 0 , localvarstring( "ui_upgrade_ref" ) , 3 ) ) == localvarstring( "ui_challenge_ref" ) + "_3" ) \
		{ \
			setLocalVarInt "ui_challenge_state" ( 3 ); \
		} \
		if ( ( tablelookup( "mp/unlockTable.csv" , 0 , localvarstring( "ui_upgrade_ref" ) , 3 ) ) == localvarstring( "ui_challenge_ref" ) + "_4" ) \
		{ \
			setLocalVarInt "ui_challenge_state" ( 4 ); \
		} \
		setLocalVarString "ui_challengeName" ( "@" + tablelookup( "mp/allChallengesTable.csv" , 0 , localvarstring( "ui_challenge_ref" ) , 1 ) ); \

#define REF_PERK1 			1
#define REF_PERK2 			2
#define REF_PERK3 			3
#define REF_DEATHSTREAK 	4

#define LOCAL_IS_PERK_STAT( refPerk, perkStat ) \
		if ( perkStat != "specialty_bling" ) \
		{ \
			close "self"; \
		} \
		if ( refPerk == 1 && perkStat != "specialty_bling" ) \
		{ \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , 0 , "attachment" , 1 , "none" ); \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , 1 , "attachment" , 1 , "none" ); \
		} \
		if ( refPerk == 1 && perkStat == "specialty_onemanarmy" ) \
		{ \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , 1 , "weapon" , "onemanarmy" ); \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , 1 , "attachment" , 0 , "none" ); \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , 1 , "attachment" , 1 , "none" ); \
			LOCAL_CACSETVARSTRINGS \
		} \
		if ( refPerk == 1 && perkStat != "specialty_onemanarmy" && getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "weapon" ) == "onemanarmy" ) \
		{ \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , 1 , "weapon" , "glock" ); \
			LOCAL_CACSETVARSTRINGS \
		} \
		if ( refPerk == 4 ) \
		{ \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "perks" , 4 , perkStat ); \
		} \
		if ( refPerk != 4 ) \
		{ \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "perks" , refPerk , perkStat ); \
		} \

#define REF_IS_PRIMARY 		0
#define REF_IS_SECONDARY	1

#define LOCAL_CAC_WEAPON_TYPE( REF_TYPE, cacTypeStat ) \
		if ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , REF_TYPE , "weapon" ) != cacTypeStat ) \
		{ \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 0 , "none" ); \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 1 , "none" ); \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "camo" , "none" ); \
		} \
		setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "weapon" , cacTypeStat ); \
		setPlayerData( "weaponNew" , cacTypeStat , "false" ); \

#define LOCAL_CAC_WEAPON_ATTACHMENT_TYPE( REF_TYPE, cacTypeStat ) \
		if ( REF_TYPE == 0 ) \
		{ \
			if ( ( tablelookup( "mp/statsTable.csv" , 4 , cacTypeStat , 11 ) != "" ) ) \
			{ \
				if ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 1 ) == "specialty_bling" ) \
				{ \
					open "popup_primary_attachments_bling"; \
				} \
				else \
				{ \
					open "popup_primary_attachments"; \
				} \
			} \
			else \
			{ \
				open "popup_cac_primary_camo"; \
			} \
		} \
		else \
		{ \
			if ( ( tablelookup( "mp/statsTable.csv" , 4 , cacTypeStat , 11 ) != "" ) ) \
			{ \
				if ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 1 ) == "specialty_bling" && isitemunlocked( "specialty_secondarybling" ) ) \
				{ \
					open "popup_secondary_attachments_bling"; \
				} \
				else \
				{ \
					open "popup_secondary_attachments"; \
				} \
			} \
			else \
			{ \
				PREPROC_CAC_CLOSEALL \
			} \
		} \

#define LOCAL_CAC_WEAPON_ATTACHMENT_ACTION1( REF_TYPE, cacTypeStat ) \
		setLocalVarString "tempName" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , REF_TYPE, "weapon" ) ); \
		setPlayerData( "attachmentNew" , "localVarString" ( "tempName" ) , "localVarString" ( "ui_selected_ref" ) , "false" ); \
		if ( menuisopen( "popup_primary_attachments_bling" ) || menuisopen( "popup_secondary_attachments_bling" ) ) \
		{ \
			setLocalVarString "tempName" ( "none" ); \
			if ( ( localvarstring( "ui_attachment1" ) == "none" || localvarstring( "ui_attachment2" ) == "none" ) ) \
			{ \
				setLocalVarInt "tempInt" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 1 ) == "none" ); \
				setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , "localVarInt" ( "tempInt" ) , "none" ); \
			} \
			else \
			{ \
				setLocalVarInt "tempInt" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 0 ) != "none" ); \
				setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , "localVarInt" ( "tempInt" ) , "localVarString" ( "tempName" ) ); \
			} \
			setLocalVarString "ui_attachment1" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 0 ) ); \
			setLocalVarString "ui_attachment2" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 1 ) ); \
			setLocalVarInt "ui_numAttachments" ( 0 ); \
			if ( localvarstring( "ui_attachment1" ) != "none" ) \
			{ \
				setLocalVarInt "ui_numAttachments" ( localvarint( "ui_numAttachments" ) + 1 ); \
			} \
			if ( localvarstring( "ui_attachment2" ) != "none" ) \
			{ \
				setLocalVarInt "ui_numAttachments" ( localvarint( "ui_numAttachments" ) + 1 ); \
			} \
			LOCAL_CACSETVARSTRINGS \
			LOCAL_CAC_WEAPON_ATTACHMENT_ACTION3_EXTRA( REF_TYPE, cacTypeStat ) \
		} \
		LOCAL_CAC_WEAPON_ATTACHMENT_ACTION2( REF_TYPE, cacTypeStat ) \


#define LOCAL_CAC_WEAPON_ATTACHMENT_ACTION2( REF_TYPE, cacTypeStat ) \
		else \
		{ \
			if ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 1 ) == "specialty_bling" ) \
			{ \
				setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 1 , "none" ); \
			} \
			if ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 1 ) == "specialty_bling" && getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 1 ) == "none" ) \
			{ \
				setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 1 , "none" ); \
			} \
			setLocalVarString "tempName" ( "none" ); \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "weaponSetups" , REF_TYPE , "attachment" , 0 , "localVarString" ( "tempName" ) ); \
			if ( REF_TYPE == 0 ) \
			{ \
				open "popup_cac_primary_camo"; \
			} \
			else \
			{ \
				PREPROC_CAC_CLOSEALL \
			} \
			LOCAL_CACSETVARSTRINGS \
		} \

#define LOCAL_CAC_WEAPON_ATTACHMENT_ACTION3_EXTRA( REF_TYPE, cacTypeStat ) \
		if ( ( localvarstring( "ui_attachment1" ) == tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , cacTypeStat ) || localvarstring( "ui_attachment2" ) == tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , cacTypeStat ) ) ) \
		{ \
			setItemColor self backcolor 0 0 0 "0.35"; \
		} \
		else \
		{ \
			setItemColor self backcolor 0 0 0 1; \
		} \
		if ( localvarint( "ui_numAttachments" ) == 2 ) \
		{ \
			if ( REF_TYPE == 0 ) \
			{ \
				UI_TABDEPTH2( open "popup_cac_primary_camo";, "@" + tablelookup( "mp/perkTable.csv" , 1 , "specialty_bling" , 2 ) ) \
				open "popup_cac_primary_camo"; \
			} \
			else \
			{ \
				PREPROC_CAC_CLOSEALL \
			} \
			LOCAL_CACSETVARSTRINGS \
		} \

#define LOCAL_CAC_WEAPON_ATTACHMENT_ACTION4_EXTRA( cacTypeStat ) \
		if ( ( localvarstring( "ui_attachment1" ) == tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , cacTypeStat ) || localvarstring( "ui_attachment2" ) == tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , cacTypeStat ) ) ) \
		{ \
			setItemColor self backcolor 0 0 0 "0.35"; \
		} \
		else \
		{ \
			if ( !( tablelookup( "mp/attachmentCombos.csv" , 0 , tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , cacTypeStat ) , tablegetrownum( "mp/attachmentCombos.csv" , 0 , localvarstring( "ui_attachment1" ) ) ) != "no" ) ) \
			{ \
				setLocalVarString "ui_attachment_hint" ( localvarstring( "ui_attachment1" ) ); \
			} \
			if ( !( tablelookup( "mp/attachmentCombos.csv" , 0 , tablelookup( "mp/statsTable.csv" , 4 , localvarstring( "loadoutPrimary" ) , cacTypeStat ) , tablegetrownum( "mp/attachmentCombos.csv" , 0 , localvarstring( "ui_attachment2" ) ) ) != "no" ) ) \
			{ \
				setLocalVarString "ui_attachment_hint" ( localvarstring( "ui_attachment2" ) ); \
			} \
		} \

#define LOCAL_CACATTACHMENT_WEAPONTYPE( REF_IS_WEAPONTYPE ) \
		if(localvarint("ui_tabDepth")==0) \
		{ setLocalVarString "ui_tab1Name"("@"+tablelookup("mp/attachmentTable.csv",4,tablelookup("mp/statsTable.csv",4,getplayerdata("customClasses",localvarint("classIndex"),"weaponSetups",REF_IS_WEAPONTYPE,"weapon"),attachmentStat),3)); } \
		if(localvarint("ui_tabDepth")==1) \
		{ setLocalVarString "ui_tab2Name"("@"+tablelookup("mp/attachmentTable.csv",4,tablelookup("mp/statsTable.csv",4,getplayerdata("customClasses",localvarint("classIndex"),"weaponSetups",REF_IS_WEAPONTYPE,"weapon"),attachmentStat),3)); } \
		if(localvarint("ui_tabDepth")==2) \
		{ setLocalVarString "ui_tab3Name"("@"+tablelookup("mp/attachmentTable.csv",4,tablelookup("mp/statsTable.csv",4,getplayerdata("customClasses",localvarint("classIndex"),"weaponSetups",REF_IS_WEAPONTYPE,"weapon"),attachmentStat),3)); } \
		if(localvarint("ui_tabDepth")==3) \
		{ setLocalVarString "ui_tab4Name"("@"+tablelookup("mp/attachmentTable.csv",4,tablelookup("mp/statsTable.csv",4,getplayerdata("customClasses",localvarint("classIndex"),"weaponSetups",REF_IS_WEAPONTYPE,"weapon"),attachmentStat),3)); } \
		if(localvarint("ui_tabDepth")==4) \
		{ setLocalVarString "ui_tab5Name"("@"+tablelookup("mp/attachmentTable.csv",4,tablelookup("mp/statsTable.csv",4,getplayerdata("customClasses",localvarint("classIndex"),"weaponSetups",REF_IS_WEAPONTYPE,"weapon"),attachmentStat),3)); } \
		if(localvarint("ui_tabDepth")==5) \
		{ setLocalVarString "ui_tab6Name"("@"+tablelookup("mp/attachmentTable.csv",4,tablelookup("mp/statsTable.csv",4,getplayerdata("customClasses",localvarint("classIndex"),"weaponSetups",REF_IS_WEAPONTYPE,"weapon"),attachmentStat),3)); } \

#define LOCAL_CACSETVARSTRINGS \
		if ( !( tablelookup( "mp/attachmentTable.csv" , 4 , getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "attachment" , 0 ) , 12 ) \
		!= "" || tablelookup( "mp/attachmentTable.csv" , 4 , getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "attachment" , 0 ) , 12 ) != "" ) \
		&& ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 0 ) \
		== "specialty_null_gl" || getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 0 ) \
		== "specialty_null_grip" || getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 0 ) \
		== "specialty_null_shotgun" ) || getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 0 ) \
		== "specialty_null_heartbeat" ) \
		{ \
			setPlayerData( "customClasses" , "localVarInt" ( "classIndex" ) , "perks" , 0 , "specialty_null" ); \
		} \
		setLocalVarString "loadoutPrimary" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "weapon" ) ); \
		setLocalVarString "loadoutPrimaryAttachment" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "attachment" , 0 ) ); \
		setLocalVarString "loadoutPrimaryAttachment2" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "attachment" , 1 ) ); \
		if ( localvarstring( "loadoutPrimaryAttachment2" ) == "" ) \
		{ \
			setLocalVarString "loadoutPrimaryAttachment2" ( "none" ); \
		} \
		setLocalVarString "loadoutPrimaryCamo" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "camo" ) ); \
		setLocalVarString "loadoutSecondaryCamo" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "camo" ) ); \
		setLocalVarString "loadoutSecondary" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "weapon" ) ); \
		setLocalVarString "loadoutSecondaryAttachment" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "attachment" , 0 ) ); \
		setLocalVarString "loadoutSecondaryAttachment2" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "attachment" , 1 ) ); \
		if ( localvarstring( "loadoutSecondaryAttachment2" ) == "" ) \
		{ \
			setLocalVarString "loadoutSecondaryAttachment2" ( "none" ); \
		} \
		setLocalVarString "loadoutSecondaryCamo" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "camo" ) ); \
		setLocalVarString "loadoutEquipment" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 0 ) ); \
		setLocalVarString "loadoutPerk1" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 1 ) ); \
		setLocalVarString "loadoutPerk2" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 2 ) ); \
		setLocalVarString "loadoutPerk3" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 3 ) ); \
		setLocalVarString "loadoutStreak1" ( getplayerdata( "killstreaks" , 0 ) ); \
		setLocalVarString "loadoutStreak2" ( getplayerdata( "killstreaks" , 1 ) ); \
		setLocalVarString "loadoutStreak3" ( getplayerdata( "killstreaks" , 2 ) ); \
		setLocalVarString "loadoutDeathStreak" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 4 ) ); \
		setLocalVarString "loadoutOffhandSecondary" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "specialGrenade" ) ); \
		setLocalVarString "loadoutClassName" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "name" ) ); \

#define CAC_LOCALVARSTRINGS( itemIndex ) \
		setLocalVarString "loadoutPrimary" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutPrimary" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutPrimaryAttachment" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutPrimaryAttachment" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutPrimaryAttachment2" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutPrimaryAttachment2" , itemIndex + 1 ) ); \
		if ( localvarstring( "loadoutPrimaryAttachment2" ) == "" ) \
		{ \
			setLocalVarString "loadoutPrimaryAttachment2" ( "none" ); \
		} \
		setLocalVarString "loadoutPrimaryCamo" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutPrimaryCamo" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutSecondary" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutSecondary" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutSecondaryAttachment" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutSecondaryAttachment" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutSecondaryAttachment2" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutSecondaryAttachment2" , itemIndex + 1 ) ); \
		if ( localvarstring( "loadoutSecondaryAttachment2" ) == "" ) \
		{ \
			setLocalVarString "loadoutSecondaryAttachment2" ( "none" ); \
		} \
		setLocalVarString "loadoutSecondaryCamo" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutSecondaryCamo" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutEquipment" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutEquipment" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutPerk1" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutPerk1" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutPerk2" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutPerk2" ,itemIndex + 1 ) ); \
		setLocalVarString "loadoutPerk3" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutPerk3" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutStreak1" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutStreak1" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutStreak2" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutStreak2" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutStreak3" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutStreak3" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutDeathStreak" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutDeathStreak" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutOffhandSecondary" ( tablelookup( "mp/classTable.csv" , 0 , "loadoutOffhand" , itemIndex + 1 ) ); \
		setLocalVarString "loadoutClassName" ( "@" + ( tablelookup( "mp/classTable.csv" , 0 , "loadoutName" , itemIndex + 1 ) ) ); \

		#define CAC_LOCALVARSTRINGS2 \
		setLocalVarString "loadoutPrimary" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "weapon" ) ); \
		setLocalVarString "loadoutPrimaryAttachment" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "attachment" , 0 ) ); \
		setLocalVarString "loadoutPrimaryAttachment2" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "attachment" , 1 ) ); \
		if ( localvarstring( "loadoutPrimaryAttachment2" ) == "" ) \
		{ \
			setLocalVarString "loadoutPrimaryAttachment2" ( "none" ); \
		} \
		setLocalVarString "loadoutPrimaryCamo" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 0 , "camo" ) ); \
		setLocalVarString "loadoutSecondary" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "weapon" ) ); \
		setLocalVarString "loadoutSecondaryAttachment" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "attachment" , 0 ) ); \
		setLocalVarString "loadoutSecondaryAttachment2" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "attachment" , 1 ) ); \
		if ( localvarstring( "loadoutSecondaryAttachment2" ) == "" ) \
		{ \
			setLocalVarString "loadoutSecondaryAttachment2" ( "none" ); \
		} \
		setLocalVarString "loadoutSecondaryCamo" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "weaponSetups" , 1 , "camo" ) ); \
		setLocalVarString "loadoutEquipment" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 0 ) ); \
		setLocalVarString "loadoutPerk1" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 1 ) ); \
		setLocalVarString "loadoutPerk2" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 2 ) ); \
		setLocalVarString "loadoutPerk3" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 3 ) ); \
		setLocalVarString "loadoutStreak1" ( getplayerdata( "killstreaks" , 0 ) ); \
		setLocalVarString "loadoutStreak2" ( getplayerdata( "killstreaks" , 1 ) ); \
		setLocalVarString "loadoutStreak3" ( getplayerdata( "killstreaks" , 2 ) ); \
		setLocalVarString "loadoutDeathStreak" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "perks" , 4 ) ); \
		setLocalVarString "loadoutOffhandSecondary" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "specialGrenade" ) ); \
		setLocalVarString "loadoutClassName" ( getplayerdata( "customClasses" , localvarint( "classIndex" ) , "name" ) ); \
		
// scriptmenus/changeclass.menu

#define CHOICE_CAC_DEFAULT( itemIndex, buttonName, textArg, actionArg, visArg ) \
		CHOICE_BUTTON_FOCUS_VIS( itemIndex, buttonName, textArg, actionArg, CAC_LOCALVARSTRINGS( itemIndex ), leaveFocusArg, visArg )
	
#define CHOICE_CAC_CUSTOM( itemIndex, buttonName, classNum, actionArg ) \
		CHOICE_BUTTON_FOCUS_VIS( itemIndex, buttonName, getplayerdata( "customClasses" , classNum , "name" ), actionArg, setLocalVarInt "classIndex" ( classNum ); CAC_LOCALVARSTRINGS2, leaveFocusArg, when ( getplayerdata( "customClasses" , classNum , "inUse" ) ) )
