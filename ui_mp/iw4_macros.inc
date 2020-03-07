			#define LOCAL_CLOSE_ALL_IW5 \
					close "pc_options_actions"; \
					close "pc_options_advanced_video"; \
					close "pc_options_audio"; \
					close "pc_options_controls"; \
					close "pc_options_look"; \
					close "pc_options_movement"; \
					close "pc_options_video"; \
					close "pc_options_voice"; \
					close "options_graphics"; \
					close "options_graphics_texture"; \
					close "options_graphics_defaults"; \
					close "options_control_defaults"; \
					close "options_voice"; \
					close "options_multi"; \
					close "controls_multi"; \
					close "main_options"; \
					close "main_controls";

		#define MENU_OPTION_IS_OPEN \
				if ( !menuisopen( "pc_options_advanced_video" ) && !menuisopen( "pc_options_video" ) && !menuisopen( "pc_options_Audio" ) && !menuisopen( "pc_options_controls" ) && !menuisopen( "pc_options_voice" ) ) \
				{ \
					if ( localvarbool( "ui_showApply" ) || localvarbool( "ui_showAudioApply" ) ) \
					{ \
						open "all_restart_popmenu"; \
					} \
				}
		
		#define DO_THE_SERVER_EXEC \
				exec "xrequirelivesignin"; \
				setDvar "systemlink" 0; \
				setDvar "splitscreen" 0; \
				setDvar "onlinegame" 1; \
				exec "exec default_xboxlive.cfg"; \
				setDvar "party_maxplayers" 18; \
				setDvar "xblive_privateserver" 0; \
				setDvar	"xblive_rankedmatch" 0; \
				exec "xstartprivateparty"; \
				setDvar "ui_mptype" 0; \
				exec "xcheckezpatch"; \
				exec "exec default_xboxlive.cfg" \
				setDvar "xblive_rankedmatch" 0; \
				exec "ui_enumeratesaved"; \
				setDvar "xblive_privateserver" 1; \
				exec "xstartprivatematch"; \
				open "createserver"; )
		
		#define SETUP_ACTION_START \
				exec "selectStringTableEntryInDvar mp/didyouknow.csv 0 didyouknow"; \
				exec "xpartygo";
			
		#define SETUP_ACTION_STARTDEV \
				if (dvarstring( "ui_mapname" ) == "mp_afghan") \
				{ \
					exec "devmap mp_afghan"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_boneyard") \
				{ \
					exec "devmap mp_boneyard"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_brecourt") \
				{ \
					exec "devmap mp_brecourt"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_checkpoint") \
				{ \
					exec "devmap mp_checkpoint"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_derail") \
				{ \
					exec "devmap mp_derail"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_estate") \
				{ \
					exec "devmap mp_estate"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_favela") \
				{ \
					exec "devmap mp_favela"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_highrise") \
				{ \
					exec "devmap mp_highrise"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_invasion") \
				{ \
					exec "devmap mp_invasion"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_nightshift") \
				{ \
					exec "devmap mp_nightshift"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_quarry") \
				{ \
					exec "devmap mp_quarry"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_rundown") \
				{ \
					exec "devmap mp_rundown"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_rust") \
				{ \
					exec "devmap mp_rust"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_subbase") \
				{ \
					exec "devmap mp_subbase"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_terminal") \
				{ \
					exec "devmap mp_terminal"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_underpass") \
				{ \
					exec "devmap mp_underpass"; \
				} \
				if (dvarstring( "ui_mapname" ) == "af_caves") \
				{ \
					exec "devmap af_caves"; \
				} \
				if (dvarstring( "ui_mapname" ) == "af_chase") \
				{ \
					exec "devmap af_chase"; \
				} \
				if (dvarstring( "ui_mapname" ) == "airport") \
				{ \
					exec "devmap airport"; \
				} \
				if (dvarstring( "ui_mapname" ) == "arcadia") \
				{ \
					exec "devmap arcadia"; \
				} \
				if (dvarstring( "ui_mapname" ) == "boneyard") \
				{ \
					exec "devmap boneyard"; \
				} \
				if (dvarstring( "ui_mapname" ) == "cliffhanger") \
				{ \
					exec "devmap cliffhanger"; \
				} \
				if (dvarstring( "ui_mapname" ) == "co_hunted") \
				{ \
					exec "devmap co_hunted"; \
				} \
				if (dvarstring( "ui_mapname" ) == "contingency") \
				{ \
					exec "devmap contingency"; \
				} \
				if (dvarstring( "ui_mapname" ) == "dc_whitehouse") \
				{ \
					exec "devmap dc_whitehouse"; \
				} \
				if (dvarstring( "ui_mapname" ) == "dcburning") \
				{ \
					exec "devmap dcburning"; \
				} \
				if (dvarstring( "ui_mapname" ) == "dcemp") \
				{ \
					exec "devmap dcemp"; \
				} \
				if (dvarstring( "ui_mapname" ) == "ending") \
				{ \
					exec "devmap ending"; \
				} \
				if (dvarstring( "ui_mapname" ) == "estate") \
				{ \
					exec "devmap estate"; \
				} \
				if (dvarstring( "ui_mapname" ) == "favela") \
				{ \
					exec "devmap favela"; \
				} \
				if (dvarstring( "ui_mapname" ) == "favela_escape") \
				{ \
					exec "devmap favela_escape"; \
				} \
				if (dvarstring( "ui_mapname" ) == "gulag") \
				{ \
					exec "devmap gulag"; \
				} \
				if (dvarstring( "ui_mapname" ) == "invasion") \
				{ \
					exec "devmap invasion"; \
				} \
				if (dvarstring( "ui_mapname" ) == "iw4_credits") \
				{ \
					exec "devmap iw4_credits"; \
				} \
				if (dvarstring( "ui_mapname" ) == "oilrig") \
				{ \
					exec "devmap oilrig"; \
				} \
				if (dvarstring( "ui_mapname" ) == "so_bridge") \
				{ \
					exec "devmap so_bridge"; \
				} \
				if (dvarstring( "ui_mapname" ) == "so_ghillies") \
				{ \
					exec "devmap so_ghillies"; \
				} \
				if (dvarstring( "ui_mapname" ) == "trainer") \
				{ \
					exec "devmap trainer"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_abandon") \
				{ \
					exec "devmap mp_abandon"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_bloc") \
				{ \
					exec "devmap mp_bloc"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_bog_sh") \
				{ \
					exec "devmap mp_bog_sh"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_cargoship") \
				{ \
					exec "devmap mp_cargoship"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_compact") \
				{ \
					exec "devmap mp_compact"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_complex") \
				{ \
					exec "devmap mp_complex"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_crash") \
				{ \
					exec "devmap mp_crash"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_cross_fire") \
				{ \
					exec "devmap mp_cross_fire"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_fuel2") \
				{ \
					exec "devmap mp_fuel2"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_killhouse") \
				{ \
					exec "devmap mp_killhouse"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_nuked") \
				{ \
					exec "devmap mp_nuked"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_overgrown") \
				{ \
					exec "devmap mp_overgrown"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_storm") \
				{ \
					exec "devmap mp_storm"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_strike") \
				{ \
					exec "devmap mp_strike"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_trailerpark") \
				{ \
					exec "devmap mp_trailerpark"; \
				} \
				if (dvarstring( "ui_mapname" ) == "mp_vacant") \
				{ \
					exec "devmap mp_vacant"; \
				}
		
		#define SETUP_LEAVE_CALL \
				if ( ( dvarbool( "onlinegame" ) && !dvarbool( "xblive_privatematch" ) ) == 0 && ( ( dvarbool( "sv_running" ) ) == 0 ) && ( inprivateparty( ) && !privatepartyhost( ) && privatepartyhostinlobby( ) ) ) \
				{ open "popup_leavegameandparty"; } \
				if ( ( dvarbool( "onlinegame" ) && !dvarbool( "xblive_privatematch" ) ) == 0 && ( ( dvarbool( "sv_running" ) ) == 0 ) && ( !inprivateparty( ) || privatepartyhost( ) || !privatepartyhostinlobby( ) ) ) \
				{ open "popup_leavegame"; } \
				if ( ( dvarbool( "onlinegame" ) && !dvarbool( "xblive_privatematch" ) ) && ( dvarbool( "sv_running" ) ) ) \
				{ open "popup_endgame_ranked"; } \
				if ( ( dvarbool( "onlinegame" ) && !dvarbool( "xblive_privatematch" ) ) && ( dvarbool( "sv_running" ) ) == 0 && ( inprivateparty( ) && !privatepartyhost( ) && privatepartyhostinlobby( ) ) ) \
				{ open "popup_leavegameandparty_ranked"; } \
				if ( ( dvarbool( "onlinegame" ) && !dvarbool( "xblive_privatematch" ) ) && ( dvarbool( "sv_running" ) ) == 0 && ( !inprivateparty( ) || privatepartyhost( ) || !privatepartyhostinlobby( ) ) ) \
				{ open "popup_leavegame_ranked"; } \

		#define SETUP_ACTION_BACK \
				exec "xstopparty"; \
				if (inprivateparty() && !privatepartyhost() && privatepartyhostinlobby()) \
				{ \
					exec "xstopprivateparty"; \
					exec "xstartprivateparty"; \
				} \
				setdvar xblive_privatematch 0; \
				close self;

		// this works pretty well here ;)
		#define SETUP_SETTING_HARDCORE \
				if (dvarInt( "g_hardcore" ) != 0 ) \
				{ \
					exec "exec hardcore_settings.cfg"; \
				} \
				if (dvarInt( "g_hardcore" ) != 1 ) \
				{ \
					exec "exec hardcore_disable.cfg"; \
				}

#define PRESTIGE_VIS when ( !( getplayerdata( "prestige" ) == int( tablelookup( "mp/rankIconTable.csv" , 0 , "maxprestige" , 1 ) ) )
#define PRESTIGE_DIS when ( !( getplayerdata( "prestige" ) < int( tablelookup( "mp/rankIconTable.csv" , 0 , "maxprestige" , 1 ) ) && getplayerdata( "experience" ) >= int( tablelookup( "mp/rankTable.csv" , 0 , int( tablelookup( "mp/rankTable.csv" , 0 , "maxrank" , 1 ) ) , 7 ) ) ) && !( getplayerdata( "prestige" ) == int( tablelookup( "mp/rankIconTable.csv" , 0 , "maxprestige" , 1 ) ) ) )

#define CLEAR_UI_HINT setLocalVarString "ui_hint_text" ( "@NULL_EMPTY" );

#define NEWUNLOCKS when ( ( ( getplayerdataanybooltrue( "weaponNew" ) || getplayerdataanybooltrue( "camoNew" ) || getplayerdataanybooltrue( "attachmentNew" ) ) || getplayerdataanybooltrue( "perkNew" ) || ( ( getplayerdata( "perkNew" , "frag_grenade_mp" ) || getplayerdata( "perkNew" , tablelookup( "mp/perkTable.csv" , 1 , "frag_grenade_mp" , 8 ) ) ) || ( getplayerdata( "perkNew" , "semtex_mp" ) || getplayerdata( "perkNew" , tablelookup( "mp/perkTable.csv" , 1 , "semtex_mp" , 8 ) ) ) || ( getplayerdata( "perkNew" , "c4_mp" ) || getplayerdata( "perkNew" , tablelookup( "mp/perkTable.csv" , 1 , "c4_mp" , 8 ) ) ) || ( getplayerdata( "perkNew" , "claymore_mp" ) || getplayerdata( "perkNew" , tablelookup( "mp/perkTable.csv" , 1 , "claymore_mp" , 8 ) ) ) || ( getplayerdata( "perkNew" , "throwingknife_mp" ) || getplayerdata( "perkNew" , tablelookup( "mp/perkTable.csv" , 1 , "throwingknife_mp" , 8 ) ) ) || ( getplayerdata( "perkNew" , "specialty_tacticalinsertion" ) || getplayerdata( "perkNew" , tablelookup( "mp/perkTable.csv" , 1 , "specialty_tacticalinsertion" , 8 ) ) ) || ( getplayerdata( "perkNew" , "specialty_blastshield" ) || getplayerdata( "perkNew" , tablelookup( "mp/perkTable.csv" , 1 , "specialty_blastshield" , 8 ) ) ) || weaponclassnew( "weapon_grenade" ) || weaponclassnew( "weapon_equipment" ) ) || getplayerdata( "featureNew" , "cac" ) ) )
#define NEWUNLOCKS_PLAYERCARD when ( ( getplayerdata( "featureNew" , "cas" ) || getplayerdata( "featureNew" , "token_1" ) || getplayerdata( "featureNew" , "token_2" ) || getplayerdata( "featureNew" , "token_3" ) || getplayerdata( "featureNew" , "token_4" ) || getplayerdata( "featureNew" , "token_5" ) || getplayerdata( "featureNew" , "token_6" ) || getplayerdata( "featureNew" , "token_7" ) || getplayerdata( "featureNew" , "token_8" ) || getplayerdata( "featureNew" , "token_9" ) || getplayerdata( "featureNew" , "token_10" ) || getplayerdata( "featureNew" , "token_11" ) || getplayerdata( "featureNew" , "token_12" ) ) || getplayerdata( "featureNew" , "clantag" ) || ( getplayerdataanybooltrue( "iconNew" ) || getplayerdata( "featureNew" , "playercard_icon" ) ) || ( getplayerdataanybooltrue( "titleNew" ) || getplayerdata( "featureNew" , "playercard_title" ) ) )
#define NEWUNLOCKS_CHALLENGES when ( ( ( getplayerdataanybooltrue( "challengeTierNew" ) || getplayerdata( "featureNew" , "challenges" ) ) || getplayerdata( "featureNew" , "challenges" ) || ( ( getplayerdata( "prestige" ) < int( tablelookup( "mp/rankIconTable.csv" , 0 , "maxprestige" , 1 ) ) && getplayerdata( "experience" ) >= int( tablelookup( "mp/rankTable.csv" , 0 , int( tablelookup( "mp/rankTable.csv" , 0 , "maxrank" , 1 ) ) , 7 ) ) ) && getplayerdata( "featureNew" , "prestige" ) ) ) )

#define MAY_CHOOSE_CLASS	(dvarInt( "scr_oldschool" ) != 1)

#define TEAM_IS_SPECTATOR ( localVarString( "ui_team" ) == "spectator" ) )

#define TEAM_IS_AXIS ( ( localvarstring( "ui_team" ) == "opfor" ) )
#define TEAM_IS_ALLIES ( ( localvarstring( "ui_team" ) == "marines" ) )
#define TEAM_IS_AXIS_ALLIES ( !( localvarstring( "ui_team" ) == "marines" ) || ( localvarstring( "ui_team" ) == "opfor" ) ) || !( 1 ) ) )

#define TEAM_IS_NONE ( localVarString( "ui_team" ) == "" ) )

#define ALLIES_DISABLED ( localVarString( "ui_team" ) == "marines" ) || ( localVarString( "ui_team" ) == "opfor" ) ) || !( 1 ) )

// graphic settings stuff
#define ASPECT_RATIO_STRLIST { "@MENU_AUTO" 0 "@MENU_STANDARD_4_3" 1 "@MENU_WIDE_16_10" 2 "@MENU_WIDE_16_9" 3 }
#define AA_STRLIST { "@MENU_OFF" 1 "@MENU_2X" 2 "@MENU_4X" 4 }
#define DLIGHT_STRLIST { "@MENU_OFF" 0 "@MENU_LOW" 2 "@MENU_NORMAL" "4" }
#define ZFEATHER_STRLIST { "@MENU_NO" 0 "@MENU_YES" 1 }
#define MDL_DETAIL_STRLIST { "@MENU_NORMAL" 1 "@MENU_LOW" 2 }
#define WTR_DETAIL_STRLIST { "@MENU_NORMAL" 1 "@MENU_LOW" 0 }

// graphic textures stuff
#define TEXTURE_MM_STRLIST { "@MENU_AUTOMATIC" "Unchanged" "@MENU_BILINEAR" "Force Bilinear" "@MENU_TRILINEAR" "Force Trilinear" }
#define TEXTURE_QUALITY_STRLIST { "@MENU_AUTOMATIC" 0 "@MENU_MANUAL" 1 }
#define TEXTURE_RESOLUTION_STRLIST { "@MENU_LOW" 3 "@MENU_NORMAL" 2 "@MENU_HIGH" 1 "@MENU_EXTRA" 0 }

// sound stuff
#define SOUND_EQ_STRLIST { "@MENU_OFF" 0 "@MENU_ON" 1 }
#define SOUND_QUALITY_STRLIST { "@MENU_11KHZ" 11 "@MENU_22KHZ" 22 "@MENU_44KHZ" 44 }
#define SOUND_CONFIG_STRLIST { "@MENU_WINDOWS_DEFAULT"; "Windows Default"; "@MENU_MONO"; "Mono"; "@MENU_STEREO"; "Stereo"; "@MENU_FOUR_SPEAKERS"; "4 Speakers"; "@MENU_FIVE_ONE_SPEAKERS"; "5.1 Speakers"; }

// game options stuff
#define ENABLE_CONSOLE_STRLIST { "@MENU_YES" 0 "@MENU_NO" 1 }

// string list defined for buttons.
// 12/14 languages listed
#define LANG_STRLIST { "@MENU_ENGLISH" 0 "@MENU_FRENCH" 1 "@MENU_GERMAN" 2 "@MENU_ITALIAN" 3 "@MENU_SPANISH" 4 "@MENU_BRITISH" 5 "@MENU_RUSSIAN" 6 "@MENU_POLISH" 7 "@MENU_KOREAN" 8 "@MENU_TAIWANESE" 9 "@MENU_JAPANESE" 10 "@MENU_CHINESE" 11 "@MENU_THAI" 12 }

// Voice
#define VOICE_STRLIST { "@MENU_NO" 1 "@MENU_YES" 0 }
			