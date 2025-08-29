/*
*   CVO Arsenal Define File
*   https://github.com/CVO-Org/CVO-Auxiliary/blob/main/addons/arsenal/readme.md
*   Example File: https://github.com/CVO-Org/CVO-Auxiliary/blob/main/.hemtt/missions/Arsenal.Altis/cvo_arsenal_kits.hpp
*/

class cvo_arsenal_kits
{
    editor_layer_name = "cvo_arsenal_boxes";
    object_variable_names[] = {"source"};

    // Imports Base from configFile
    import baseKit from cvo_arsenal_kits;

    //  MISCELLANEOUS
    
    class Rations: baseKit {
        condition = "missionNamespace getVariable ['ace_field_rations_enabled', true]";
        class items {
	        class ACE_MRE_BeefStew {};
	        class ACE_MRE_ChickenTikkaMasala {};
	        class ACE_MRE_ChickenHerbDumplings {};
	        class ACE_MRE_CreamChickenSoup {};
	        class ACE_MRE_CreamTomatoSoup {};
	        class ACE_MRE_LambCurry {};
	        class ACE_MRE_MeatballsPasta {};
	        class ACE_MRE_SteakVegetables {};
            class ACE_Canteen {};
        };
    };

    class Binoculars: baseKit {
        class items {
            class SPEX_Binocular_CW {};
            class SPEX_K35_PH324 {};
        };
    };

    class Tools: baseKit {
        class items {
            class SPEX_CW_LE_No4_Signal_Flashlight_SCC1A {};
            class ItemMap {};
            class SPE_US_ItemCompass {};
            class SPE_US_ItemWatch {};
        };
    };

    class Immersion_Cigs: baseKit {
        addon_dependency = "cigs_core";
        class items {
            class cigs_cigars_cigarbox_5 {};
            class cigs_craven_cigpack {};
            class cigs_lucky_strike_cigpack {};
            class cigs_morley_cigpack {};
        };
    };

    // Wearables / Gear
    class Base_Uniforms: baseKit {
        class items {
            class U_SPEX_CW_BD_KD {};
            class U_SPEX_CW_BD_KD_roll {};
            class U_SPEX_CW_BD_KD_long {};
            class U_SPEX_CW_BD_KD_long_open {};
            class U_SPEX_CW_BD_KD_long_roll {};
            class U_SPEX_CW_BD_KD_long_trop {};
            class U_SPEX_CW_BD_KD_long_trop_roll {};
            class U_SPEX_CW_KD_BD {};
            class U_SPEX_CW_KD_BD_roll {};
            class U_SPEX_CW_Bush_BD {};
            class U_SPEX_CW_Bush_BD_roll {};
            class U_SPEX_CW_Bush_short {};
            class U_SPEX_CW_Bush_short_roll {};
            class U_SPEX_CW_KD_full {};
            class U_SPEX_CW_KD_full_roll {};
            class U_SPEX_CW_KD_full_medic_sb {};
            class U_SPEX_CW_KD_long {};
            class U_SPEX_CW_KD_long_roll {};
            class U_SPEX_CW_KD_long_medic_sb {};
        };
    };

    class Base_Vests: baseKit {
        class items {
            class V_SPEX_CW_Vest_P37_N61_Rifle {};
            class V_SPEX_CW_Vest_P37_N61_Rifle_golok {};
            class V_SPEX_CW_Vest_P37_N61_Rifle_no1 {};
            class V_SPEX_CW_Vest_P37_N61_Rifle_p39 {};
            class V_SPEX_CW_Vest_P37_N61_Rifle_no1_p39 {};
            class V_SPEX_CW_Vest_P37_N61 {};
            class V_SPEX_CW_Vest_P37_N61_binoc {};
            class V_SPEX_CW_Vest_P37_N61_Canteen {};
            class V_SPEX_CW_Vest_P37_N61_golok {};
            class V_SPEX_CW_Vest_P37_N61_golok_Canteen {};
            class V_SPEX_cw_vest_p37_n61_medical {};
            class V_SPEX_CW_Vest_P37_N61_Tin {};
            class V_SPEX_cw_vest_p37_n61_no1 {};
            class V_SPEX_cw_vest_p37_n61_no1_bandoleer {};
            class V_SPEX_cw_vest_p37_n61_no1_Canteen {}; 
            class V_SPEX_CW_Vest_P37_N61_offz_light {}; 
            class V_SPEX_cw_vest_p37_n61_sten {};
            class V_SPEX_cw_vest_p37_n61_sten_Canteen {};
            class V_SPEX_cw_vest_p37_n61_sten_Tin {};
            class V_SPEX_CW_Vest_P37_N61_p39 {};
            class V_SPEX_cw_vest_p37_N61_p39_binoc {};
            class V_SPEX_cw_vest_p37_N61_no1_p39 {};
            class V_SPEX_cw_vest_p37_N61_no1_p39_bandoleer {};
        };
    };

    class Base_Backpacks: baseKit {
        class items {
			class B_SPEX_CW_Sack_bandoleer_1 {};
        	class B_SPEX_CW_Sack_bandoleer_2 {};
        	class B_SPEX_CW_Sack_bandoleer_1_left {};
			class B_SPEX_CW_Sack_bandoleer_1_right {};
        	class B_SPEX_CW_Sack_bandoleer_3 {};
        	class B_SPEX_CW_Sack_P37_N61 {};
        	class B_SPEX_CW_Sack_P37_N61_bandoleer {};
			class B_SPEX_CW_Sack_P37_N61_bandoleer_roll {};
			class B_SPEX_CW_Sack_P37_N61_cup {};
        	class B_SPEX_CW_Sack_P37_N61_PIAT {};
			class B_SPEX_CW_Sack_P37_N61_bren_1 {};
			class B_SPEX_CW_Sack_P37_N61_bren_roll_1_front {};
			class B_SPEX_CW_Sack_P37_N61_bren_roll_1_side {};
        	class B_SPEX_CW_Sack_P37_N61_bren_roll_2_front {};
        	class B_SPEX_CW_Sack_P37_N61_bren_roll_2_side {};
        	class B_SPEX_CW_Sack_P37_N61_bren_roll_3_front {};
        	class B_SPEX_CW_Sack_P37_N61_bren_roll_3_side {};
        	class B_SPEX_CW_Sack_P37_N61_bren_2 {};
        	class B_SPEX_CW_Sack_P37_N61_roll_1 {};
        	class B_SPEX_CW_Sack_P37_N61_roll_2 {};
        	class B_SPEX_CW_Sack_P37_N61_roll_3 {};
        	class B_SPEX_CW_Sack_P37_N61_rope {};
        	class B_SPEX_CW_Sack_P37_N61_rope_bandoleer {};
        	class B_SPEX_CW_Sack_P37_N61_rope_bandoleer_roll {};
        	class B_SPEX_CW_Sack_P37_N61_rope_PIAT {};
        	class B_SPEX_CW_Sack_P37_N61_Rope_shovel_roll {};
        	class B_SPEX_CW_Sack_P37_N61_shovel {};
            class B_SPEX_CW_Sack_PIAT {};
            class B_SPEX_CW_Sack_P37_N61_gas_assault_PIAT {};
        };
    };

    class Base_Headgear: baseKit {
        class items {
            // JM's Second Assault
            class JMSSA_arab_scarfFull_black {};
            class JMSSA_arab_scarfFull_white {};
            class JMSSA_arab_turban_black {};
            class JMSSA_aus_hat2_brown_NA {};
            class JMSSA_aus_hatL2_brown_NA {};
            class JMSSA_brit_commando_cap_des {};
            class JMSSA_brit_glen {};
            class JMSSA_brit_glenC {};
            class JMSSA_brit_glenC_BW {};
            class JMSSA_brit_sas_scarf {};
            class JMSSA_brit_sas_headscarf {};
            class JMSSA_brit_sas_headscarf2 {};
            class JMSSA_brit_sas_headscarf2_dark {};
			class JMSSA_brit_sas_headscarf2_khaki {};
            class JMSSA_brit_woolhat {};
            // Berets
            class H_SPEX_CW_beret_cdo {};
            class H_SPEX_CW_beret_DCLI_GS {};
            class H_SPEX_CW_beret_durham_GS {};
			class H_SPEX_CW_beret_East_Yorks_GS {};
			class H_SPEX_CW_beret_Essex_GS {};
			class H_SPEX_CW_beret_KRRC_GS {};
			class H_SPEX_CW_beret_KSLI_GS {};
			class H_SPEX_CW_beret_ox_bucks {};
			class H_SPEX_CW_beret_QUEENS {};
            class H_SPEX_CW_beret_GEWEHR {};
            class H_SPEX_CW_beret_ENG_GS {};
            class H_SPEX_CW_beret_ULSTER_GS {};
            class H_SPEX_CW_beret_SOMERSET_GS {};
            class H_SPEX_CW_beret_Welch_GS {};
            class H_SPEX_CW_beret_gs {};
            class H_SPEX_CW_beret_RECCE {};
            class H_SPEX_CW_beret_RECCE_goggle {};
            class H_SPEX_CW_beret_ARTY_GS {};
            class H_SPEX_CW_beret_ARTY_goggle {};
            class H_SPEX_CW_beret_pz {};
            class H_SPEX_CW_beret_pz_goggle {};
            class H_SPEX_CW_mutsdas {};
            class H_SPEX_CW_SIDECAP {};
            // Helmets
            class H_SPEX_CW_Helmet_mk2_burlap {};
            class H_SPEX_CW_Helmet_mk2_burlap_op {};
            class H_SPEX_CW_Helmet_mk2_burlap_op_tilt {};
            class H_SPEX_CW_Helmet_mk2_burlap_tilt {};
            class H_SPEX_CW_Helmet_mk2_desert {};
            class H_SPEX_CW_Helmet_mk2_desert_op {};
            class H_SPEX_CW_Helmet_mk2_desert_op_tilt {};
            class H_SPEX_CW_Helmet_mk2_desert_tilt {};
            class H_SPEX_CW_Helmet_mk2_desert_net {};
            class H_SPEX_CW_Helmet_mk2_desert_net_op {};
            class H_SPEX_CW_Helmet_mk2_desert_net_op_tilt {};
            class H_SPEX_CW_Helmet_mk2_desert_net_tilt {};
            class H_SPEX_CW_hat_felt {};
            class H_SPEX_PL_beret_cdo {};
            // Turbans and Wraps
            class lxWS_H_turban_03_sand {};
            class lxWS_H_turban_03_black {};
            class lxWS_H_turban_04_black {};
            class lxWS_H_turban_04_sand {};
            class lxWS_H_turban_02_black {};
            class lxWS_H_turban_02_sand {};
            class H_Bandanna_sand {};
            class H_Bandanna_cbr {};
        };
    };

    class Base_Facewear: baseKit {
        class items {
            // Vanilla Facewear
            class G_Aviator {};
            class G_Bandanna_khk {};
            class G_Bandanna_tan {};
            // JM's Second Assault
            class G_JMSSA_arab_scarf {};
            class G_JMSSA_arab_scarfFace {};
            class G_JMSSA_GB_des_googles {};
            class G_JMSSA_GB_scarfHigh {};
            class G_JMSSA_GB_scarfSc_white {};
            class G_JMSSA_GER_des_scarf {};
            class G_JMSSA_ITA_bando {};
            // Spearhead Facewear
            class G_SPE_Binoculars {};
            class G_SPE_Dienst_Brille {};
            class G_SPE_Dust_Goggles_2 {};
            class G_SPE_Ful_Vue {};
            class G_SPE_Dust_Goggles {};
            class G_SPE_SWDG_Goggles {};
            class G_SPE_Pipe_Sir_Winston {};
        };
    };

    // Officer Uniforms, Gear, Headwear

    class Officer_Uniforms: baseKit {
        role = "Officer";
        class items {
            class U_SPEX_CW_BD_KD_long_1LT {};
            class U_SPEX_CW_Bush_BD_1LT {};
            class U_SPEX_CW_Bush_short_1LT {};
            class U_SPEX_CW_Bush_long_1LT {};
        };
    };

    class Officer_Vests: baseKit {
        role = "Officer";
        class items {
            class V_SPEX_CW_Vest_P37_N61_offz {};
            class V_SPEX_CW_Vest_P37_N61_offz_canteen {};
            class V_SPEX_CW_Vest_P37_N61_offz_sack {};
            class V_SPEX_CW_Vest_P37_N61_rac_offz {};
        };
    };

    class Officer_Headgear: baseKit {
        class items {
            // JM's Second Assault
            class JMSSA_brit_ofcap_khaki {};
            class JMSSA_brit_ofcap_NA {};
            class JMSSA_brit_ofcapW_khaki_coldstr {};
            class JMSSA_brit_ofcapW_khaki_durham {};
            class JMSSA_brit_ofcapW_khaki_eastYork {};
            class JMSSA_brit_ofcapW_khaki_gh {};
            class JMSSA_brit_ofcapW_khaki_gren {};
            class JMSSA_brit_ofcapW_khaki_irish {};
            class JMSSA_brit_ofcapW_khaki_RA {};
            class JMSSA_brit_ofcapW_khaki_eng {};
            class JMSSA_brit_ofcapW_khaki_southLanc {};
            class JMSSA_brit_ofcapW_khaki_welsh {};
            class JMSSA_brit_SDcap_khaki {};
            class JMSSA_brit_SDcap_NA {};
        };
    };


    // Weapons
    class Weapons_Primary_SMGs: baseKit {
        class items {
            // SMGs
            class SPEX_M1928_Thompson {};
            class SPEX_M1928A1_Thompson {};
            class SPE_Sten_Mk2 {};
            //SMG Mags
            class SPE_20Rnd_Thompson_45ACP {};
            class SPE_20Rnd_Thompson_45ACP_t {};
            class SPEX_50Rnd_Thompson_45ACP {};
            class SPEX_50Rnd_Thompson_45ACP_t {};
            class SPE_32Rnd_9x19_Sten {};
            //class SPE_30Rnd_Thompson_45ACP {};    // 30rnd Mag
			//class SPE_30Rnd_Thompson_45ACP_t {};  // 30rnd Mag
        };
    };

    class Weapons_Primary_Rifle: baseKit {
        class items {
            // No.1 MkIII*
			class SPEX_No1_Mk3_late_Enfield {};
            class SPEX_10Rnd_770x56 {};
			// No.4 MkI
            //class SPEX_No4_Mk1_Enfield_dunkel {}; // Late War
        };
    };

    class Weapons_Sidearms_Pistols: baseKit {
        class items {
            // No.2 MkI Enfield
	        class SPEX_Enfield_No2 {};
	        class SPEX_6rnd_9x20R {};
            // M1911
	        class SPE_M1911 {};
	        class SPE_7Rnd_45ACP_1911 {};
        };
    };

    class Weapons_Accessories: baseKit {
        class items {
            // Bayonets
			class SPEX_ACC_P1907_Bayo {};
            class SPEX_ACC_No4_Mk2_Bayo {};
            // Bren Magazines
            class SPE_30Rnd_770x56 {};

        };
    };

    class Weapons_Grenade_Launcher: baseKit {
        class items {
            role = "Grenadier";
            // Cup Discharger and Wire Wrap
            class SPEX_ACC_Enfield_No1_Wires {};
            class SPEX_ACC_2HalfInch_GL_CUP {};
            class SPEX_1Rnd_G_No36_MKI {};

        };
    };

    class Weapons_Throwables: baseKit {
        class items {
            // Frag Grenades
            class SPEX_CW_No36_MKI {};
            class SPE_US_Mk_3 {};

            // Illumination
            class SPE_US_Mk_1 {};
            class ACE_HandFlare_Green {};
            class ACE_HandFlare_Red {};
            class ACE_HandFlare_White {};
            class ACE_HandFlare_Yellow {};

            // Smoke
            class SPEX_CW_No77 {};
            class SPEX_CW_No79 {};
            class SPE_Handrauchzeichen_Red {};
        };
    };

    // ROLE KITS
    class EOD: baseKit {
        role = "ExplosiveSpecialist";
        class items {
            class ACE_Clacker {};
			class ACE_wirecutter {};
			class Toolkit {};
			class ACE_DefusalKit {};
			
			//Minesweepers
			class ACE_VMM3 {};
			class ACE_VMH3 {};
        };
    };
    class MG: baseKit {
        role = "Machinegunner";
        class items {
            // Bren Gun
            class SPEX_LMG_303_Mk1 {};
            class SPE_LMG_303_Mk2 {};
            class SPE_30Rnd_770x56_AP_MKI {};
            // Lewis Gun
            class JMSSA_lewis_Rifle {};
            class JMSSA_47Rnd_770x56 {};
        };
    };

    class AntiTank: baseKit {
        role = "Anti-Tank";
        class items {
            // AT Grenades
            class SPEX_CW_No74_Grenade {};  // Sticky Bomb
            class SPEX_CW_No75_Grenade {};  // Hawkins Mine
            //class SPEX_CW_No82_Heavy {};    // Gammon Bomb

            // Boys AT Gun
            class JMSSA_boys_Rifle {};
            class JMSSA_5Rnd_139x99_AP {};

            // PIAT
            class SPEX_PIAT_Brown {};
            class SPEX_1Rnd_89mm_PIAT {};
        };
    };

    class Marksman: baseKit {
        role = "Marksman";
        class items {
            // No.4 Telescopic
            class SPEX_No4_Mk1_Enfield_Scoped_dunkel {};
			//Utility
			class ACE_RangeCard {};
        };
    };

    class Radio_Officer: baseKit {
        role = "Radio";
        class items {
            class ACRE_PRC77 {};
            class B_SPEX_CW_Sack_P37_N61_no38 {};
            class B_SPEX_CW_Sack_P37_N61_no38_roll {};
            class B_SPEX_CW_Sack_P37_N61_rope_no38 {};
            class B_SPEX_CW_Sack_P37_N61_rope_no38_roll {};
            class ACRE_VHF30108SPIKE {};
        };
    };
    
    class Radio_Zeus: baseKit {
        role = "Zeus";
        class items {
            class ACRE_PRC152 {};
            class B_SPEX_CW_Sack_P37_N61_no38 {};
            class B_SPEX_CW_Sack_P37_N61_no38_roll {};
            class B_SPEX_CW_Sack_P37_N61_rope_no38 {};
            class B_SPEX_CW_Sack_P37_N61_rope_no38_roll {};
        };
    };
};
