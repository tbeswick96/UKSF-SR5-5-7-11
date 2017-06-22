#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // Vanilla
            "a3_3den",
            "a3_3den_language",
            "a3_air_f",
            "a3_air_f_beta",
            "a3_air_f_beta_heli_attack_01",
            "a3_air_f_beta_heli_attack_02",
            "a3_air_f_beta_heli_transport_01",
            "a3_air_f_beta_heli_transport_02",
            "a3_air_f_beta_parachute_01",
            "a3_air_f_beta_parachute_02",
            "a3_air_f_epb",
            "a3_air_f_epb_heli_light_03",
            "a3_air_f_epc",
            "a3_air_f_epc_plane_cas_01",
            "a3_air_f_epc_plane_cas_02",
            "a3_air_f_epc_plane_fighter_03",
            "a3_air_f_exp",
            "a3_air_f_exp_heli_light_01",
            "a3_air_f_exp_heli_transport_01",
            "a3_air_f_exp_plane_civil_01",
            "a3_air_f_exp_uav_03",
            "a3_air_f_exp_uav_04",
            "a3_air_f_exp_vtol_01",
            "a3_air_f_exp_vtol_02",
            "a3_air_f_gamma",
            "a3_air_f_gamma_plane_fighter_03",
            "a3_air_f_gamma_uav_01",
            "a3_air_f_gamma_uav_02",
            "a3_air_f_heli",
            "a3_air_f_heli_heli_attack_01",
            "a3_air_f_heli_heli_attack_02",
            "a3_air_f_heli_heli_light_01",
            "a3_air_f_heli_heli_light_02",
            "a3_air_f_heli_heli_light_03",
            "a3_air_f_heli_heli_transport_01",
            "a3_air_f_heli_heli_transport_02",
            "a3_air_f_heli_heli_transport_03",
            "a3_air_f_heli_heli_transport_04",
            "a3_air_f_heli_light_01",
            "a3_air_f_heli_light_02",
            "a3_animals_f",
            "a3_animals_f_animconfig",
            "a3_animals_f_beta",
            "a3_animals_f_beta_chicken",
            "a3_animals_f_beta_dog",
            "a3_animals_f_beta_goat",
            "a3_animals_f_beta_sheep",
            "a3_animals_f_chicken",
            "a3_animals_f_dog",
            "a3_animals_f_fishes",
            "a3_animals_f_goat",
            "a3_animals_f_kestrel",
            "a3_animals_f_rabbit",
            "a3_animals_f_seagull",
            "a3_animals_f_sheep",
            "a3_animals_f_snakes",
            "a3_animals_f_turtle",
            "a3_anims_f",
            "a3_anims_f_bootcamp",
            "a3_anims_f_config_sdr",
            "a3_anims_f_config_sdr_weaponswitching",
            "a3_anims_f_data",
            "a3_anims_f_epa",
            "a3_anims_f_epc",
            "a3_anims_f_exp",
            "a3_anims_f_exp_a",
            "a3_anims_f_exp_revive",
            "a3_anims_f_heli",
            "a3_anims_f_kart",
            "a3_anims_f_mark",
            "a3_anims_f_mark_deployment",
            "a3_armor_f",
            "a3_armor_f_amv",
            "a3_armor_f_apc_wheeled_03",
            "a3_armor_f_beta",
            "a3_armor_f_beta_apc_tracked_01",
            "a3_armor_f_beta_apc_tracked_02",
            "a3_armor_f_beta_apc_wheeled_01",
            "a3_armor_f_beta_apc_wheeled_02",
            "a3_armor_f_epb",
            "a3_armor_f_epb_apc_tracked_03",
            "a3_armor_f_epb_mbt_03",
            "a3_armor_f_epc",
            "a3_armor_f_epc_mbt_01",
            "a3_armor_f_exp",
            "a3_armor_f_exp_apc_tracked_02",
            "a3_armor_f_exp_apc_wheeled_02",
            "a3_armor_f_exp_mbt_02",
            "a3_armor_f_gamma",
            "a3_armor_f_gamma_apc_wheeled_03",
            "a3_armor_f_gamma_mbt_01",
            "a3_armor_f_gamma_mbt_02",
            "a3_armor_f_marid",
            "a3_armor_f_panther",
            "a3_armor_f_slammer",
            "a3_armor_f_t100k",
            "a3_baseconfig_f",
            "a3_boat_f",
            "a3_boat_f_beta",
            "a3_boat_f_beta_boat_armed_01",
            "a3_boat_f_beta_boat_transport_01",
            "a3_boat_f_beta_sdv_01",
            "a3_boat_f_boat_armed_01",
            "a3_boat_f_boat_transport_01",
            "a3_boat_f_civilian_boat",
            "a3_boat_f_epc",
            "a3_boat_f_epc_submarine_01",
            "a3_boat_f_epc_submarine_01_f",
            "a3_boat_f_exp",
            "a3_boat_f_exp_boat_transport_01",
            "a3_boat_f_exp_boat_transport_02",
            "a3_boat_f_exp_scooter_transport_01",
            "a3_boat_f_gamma",
            "a3_boat_f_gamma_boat_civil_01",
            "a3_boat_f_gamma_boat_civil_04",
            "a3_boat_f_gamma_boat_transport_01",
            "a3_boat_f_heli",
            "a3_boat_f_heli_boat_armed_01",
            "a3_boat_f_heli_sdv_01",
            "a3_boat_f_sdv_01",
            "a3_boat_f_trawler",
            "a3_cargoposes_f",
            "a3_cargoposes_f_exp",
            "a3_cargoposes_f_heli",
            "a3_characters_f",
            "a3_characters_f_beta",
            "a3_characters_f_beta_indep",
            "a3_characters_f_blufor",
            "a3_characters_f_bootcamp",
            "a3_characters_f_bootcamp_common",
            "a3_characters_f_civil",
            "a3_characters_f_common",
            "a3_characters_f_epa",
            "a3_characters_f_epb",
            "a3_characters_f_epb_heads",
            "a3_characters_f_epc",
            "a3_characters_f_exp",
            "a3_characters_f_exp_civil",
            "a3_characters_f_exp_headgear",
            "a3_characters_f_exp_vests",
            "a3_characters_f_gamma",
            "a3_characters_f_heads",
            "a3_characters_f_indep",
            "a3_characters_f_kart",
            "a3_characters_f_mark",
            "a3_characters_f_opfor",
            "a3_characters_f_proxies",
            "a3_data_f",
            "a3_data_f_bootcamp",
            "a3_data_f_curator",
            "a3_data_f_curator_characters",
            "a3_data_f_curator_eagle",
            "a3_data_f_curator_intel",
            "a3_data_f_curator_misc",
            "a3_data_f_curator_respawn",
            "a3_data_f_curator_virtual",
            "a3_data_f_exp",
            "a3_data_f_exp_a",
            "a3_data_f_exp_a_virtual",
            "a3_data_f_exp_b",
            "a3_data_f_exp_particleeffects",
            "a3_data_f_heli",
            "a3_data_f_hook",
            "a3_data_f_kart",
            "a3_data_f_kart_particleeffects",
            "a3_data_f_mark",
            "a3_data_f_particleeffects",
            "a3_drones_f",
            "a3_drones_f_air_f_gamma_uav_01",
            "a3_drones_f_air_f_gamma_uav_02",
            "a3_drones_f_characters_f_gamma",
            "a3_drones_f_soft_f_gamma_ugv_01",
            "a3_drones_f_weapons_f_gamma_ammoboxes",
            "a3_drones_f_weapons_f_gamma_items",
            "a3_dubbing_f",
            "a3_dubbing_f_beta",
            "a3_dubbing_f_bootcamp",
            "a3_dubbing_f_epa",
            "a3_dubbing_f_epb",
            "a3_dubbing_f_epc",
            "a3_dubbing_f_exp",
            "a3_dubbing_f_gamma",
            "a3_dubbing_f_heli",
            "a3_dubbing_f_mark",
            "a3_dubbing_f_mp_mark",
            "a3_dubbing_radio_f",
            "a3_dubbing_radio_f_data_eng",
            "a3_dubbing_radio_f_data_engb",
            "a3_dubbing_radio_f_data_gre",
            "a3_dubbing_radio_f_data_per",
            "a3_dubbing_radio_f_data_vr",
            "a3_dubbing_radio_f_exp",
            "a3_dubbing_radio_f_exp_data_chi",
            "a3_dubbing_radio_f_exp_data_engfre",
            "a3_dubbing_radio_f_exp_data_fre",
            "a3_editor_f",
            "a3_editorpreviews_f",
            "a3_editorpreviews_f_exp",
            "a3_functions_f",
            "a3_functions_f_bootcamp",
            "a3_functions_f_curator",
            "a3_functions_f_epa",
            "a3_functions_f_epc",
            "a3_functions_f_exp",
            "a3_functions_f_exp_a",
            "a3_functions_f_heli",
            "a3_functions_f_mark",
            "a3_functions_f_mp_mark",
            "a3_language_f",
            "a3_language_f_beta",
            "a3_language_f_bootcamp",
            "a3_language_f_curator",
            "a3_language_f_epa",
            "a3_language_f_epb",
            "a3_language_f_epc",
            "a3_language_f_exp",
            "a3_language_f_exp_a",
            "a3_language_f_exp_b",
            "a3_language_f_gamma",
            "a3_language_f_heli",
            "a3_language_f_kart",
            "a3_language_f_mark",
            "a3_language_f_mp_mark",
            "a3_languagemissions_f",
            "a3_languagemissions_f_beta",
            "a3_languagemissions_f_bootcamp",
            "a3_languagemissions_f_epa",
            "a3_languagemissions_f_epb",
            "a3_languagemissions_f_epc",
            "a3_languagemissions_f_exp",
            "a3_languagemissions_f_exp_a",
            "a3_languagemissions_f_gamma",
            "a3_languagemissions_f_heli",
            "a3_languagemissions_f_kart",
            "a3_languagemissions_f_mark",
            "a3_languagemissions_f_mp_mark",
            "a3_map_altis",
            "a3_map_altis_data",
            "a3_map_altis_data_layers",
            "a3_map_altis_scenes",
            "a3_map_altis_scenes_f",
            "a3_map_data",
            "a3_map_stratis",
            "a3_map_stratis_data",
            "a3_map_stratis_data_layers",
            "a3_map_stratis_scenes",
            "a3_map_stratis_scenes_f",
            "a3_map_vr",
            "a3_map_vr_scenes",
            "a3_map_vr_scenes_f",
            "a3_misc_f",
            "a3_misc_f_helpers",
            "a3_missions_f",
            "a3_missions_f_beta",
            "a3_missions_f_beta_data",
            "a3_missions_f_beta_video",
            "a3_missions_f_bootcamp",
            "a3_missions_f_bootcamp_data",
            "a3_missions_f_bootcamp_video",
            "a3_missions_f_curator",
            "a3_missions_f_data",
            "a3_missions_f_epa",
            "a3_missions_f_epa_data",
            "a3_missions_f_epa_video",
            "a3_missions_f_epb",
            "a3_missions_f_epc",
            "a3_missions_f_exp",
            "a3_missions_f_exp_a",
            "a3_missions_f_exp_a_data",
            "a3_missions_f_exp_data",
            "a3_missions_f_exp_video",
            "a3_missions_f_gamma",
            "a3_missions_f_gamma_data",
            "a3_missions_f_gamma_video",
            "a3_missions_f_heli",
            "a3_missions_f_heli_data",
            "a3_missions_f_heli_video",
            "a3_missions_f_kart",
            "a3_missions_f_kart_data",
            "a3_missions_f_mark",
            "a3_missions_f_mark_data",
            "a3_missions_f_mark_video",
            "a3_missions_f_mp_mark",
            "a3_missions_f_mp_mark_data",
            "a3_missions_f_video",
            "a3_modules_f",
            "a3_modules_f_beta",
            "a3_modules_f_beta_data",
            "a3_modules_f_beta_firingdrills",
            "a3_modules_f_bootcamp",
            "a3_modules_f_bootcamp_misc",
            "a3_modules_f_curator",
            "a3_modules_f_curator_animals",
            "a3_modules_f_curator_cas",
            "a3_modules_f_curator_chemlights",
            "a3_modules_f_curator_curator",
            "a3_modules_f_curator_effects",
            "a3_modules_f_curator_environment",
            "a3_modules_f_curator_flares",
            "a3_modules_f_curator_intel",
            "a3_modules_f_curator_lightning",
            "a3_modules_f_curator_mines",
            "a3_modules_f_curator_misc",
            "a3_modules_f_curator_multiplayer",
            "a3_modules_f_curator_objectives",
            "a3_modules_f_curator_ordnance",
            "a3_modules_f_curator_respawn",
            "a3_modules_f_curator_smokeshells",
            "a3_modules_f_data",
            "a3_modules_f_dyno",
            "a3_modules_f_effects",
            "a3_modules_f_epb",
            "a3_modules_f_epb_misc",
            "a3_modules_f_events",
            "a3_modules_f_exp",
            "a3_modules_f_exp_a",
            "a3_modules_f_groupmodifiers",
            "a3_modules_f_hc",
            "a3_modules_f_heli",
            "a3_modules_f_heli_misc",
            "a3_modules_f_heli_spawnai",
            "a3_modules_f_intel",
            "a3_modules_f_kart",
            "a3_modules_f_kart_data",
            "a3_modules_f_kart_timetrials",
            "a3_modules_f_livefeed",
            "a3_modules_f_mark",
            "a3_modules_f_mark_firingdrills",
            "a3_modules_f_mark_objectives",
            "a3_modules_f_marta",
            "a3_modules_f_misc",
            "a3_modules_f_mp_mark",
            "a3_modules_f_mp_mark_objectives",
            "a3_modules_f_multiplayer",
            "a3_modules_f_objectmodifiers",
            "a3_modules_f_sites",
            "a3_modules_f_skirmish",
            "a3_modules_f_strategicmap",
            "a3_modules_f_supports",
            "a3_modules_f_uav",
            "a3_music_f",
            "a3_music_f_bootcamp",
            "a3_music_f_bootcamp_music",
            "a3_music_f_epa",
            "a3_music_f_epa_music",
            "a3_music_f_epb",
            "a3_music_f_epb_music",
            "a3_music_f_epc",
            "a3_music_f_epc_music",
            "a3_music_f_exp",
            "a3_music_f_exp_music",
            "a3_music_f_heli",
            "a3_music_f_heli_music",
            "a3_music_f_mark",
            "a3_music_f_mark_music",
            "a3_music_f_music",
            "a3_plants_f",
            "a3_plants_f_bush",
            "a3_props_f_exp",
            "a3_props_f_exp_a",
            "a3_props_f_exp_a_military",
            "a3_props_f_exp_a_military_equipment",
            "a3_props_f_exp_civilian",
            "a3_props_f_exp_civilian_garbage",
            "a3_props_f_exp_commercial",
            "a3_props_f_exp_commercial_market",
            "a3_props_f_exp_industrial",
            "a3_props_f_exp_industrial_heavyequipment",
            "a3_props_f_exp_infrastructure",
            "a3_props_f_exp_infrastructure_railways",
            "a3_props_f_exp_infrastructure_traffic",
            "a3_props_f_exp_military",
            "a3_props_f_exp_military_camps",
            "a3_props_f_exp_military_oldplanewrecks",
            "a3_props_f_exp_naval",
            "a3_props_f_exp_naval_boats",
            "a3_roads_f",
            "a3_rocks_f",
            "a3_rocks_f_blunt",
            "a3_rocks_f_sharp",
            "a3_rocks_f_water",
            "a3_signs_f",
            "a3_signs_f_ad",
            "a3_signs_f_signs_ad",
            "a3_soft_f",
            "a3_soft_f_beta",
            "a3_soft_f_beta_mrap_03",
            "a3_soft_f_beta_quadbike",
            "a3_soft_f_beta_quadbike_01",
            "a3_soft_f_beta_truck_01",
            "a3_soft_f_beta_truck_02",
            "a3_soft_f_bootcamp",
            "a3_soft_f_bootcamp_offroad_01",
            "a3_soft_f_bootcamp_quadbike",
            "a3_soft_f_bootcamp_quadbike_01",
            "a3_soft_f_bootcamp_truck",
            "a3_soft_f_bootcamp_van_01",
            "a3_soft_f_car",
            "a3_soft_f_crusher_ugv",
            "a3_soft_f_epc",
            "a3_soft_f_epc_truck_03",
            "a3_soft_f_exp",
            "a3_soft_f_exp_lsv_01",
            "a3_soft_f_exp_lsv_02",
            "a3_soft_f_exp_mrap_02",
            "a3_soft_f_exp_offroad_01",
            "a3_soft_f_exp_offroad_02",
            "a3_soft_f_exp_quadbike_01",
            "a3_soft_f_exp_truck_03",
            "a3_soft_f_exp_ugv_01",
            "a3_soft_f_exp_van_01",
            "a3_soft_f_gamma",
            "a3_soft_f_gamma_hatchback_01",
            "a3_soft_f_gamma_hemtt",
            "a3_soft_f_gamma_offroad",
            "a3_soft_f_gamma_offroad_01",
            "a3_soft_f_gamma_quadbike",
            "a3_soft_f_gamma_quadbike_01",
            "a3_soft_f_gamma_suv_01",
            "a3_soft_f_gamma_truck_01",
            "a3_soft_f_gamma_truck_02",
            "a3_soft_f_gamma_truckheavy",
            "a3_soft_f_gamma_van_01",
            "a3_soft_f_heli",
            "a3_soft_f_heli_car",
            "a3_soft_f_heli_crusher_ugv",
            "a3_soft_f_heli_hatchback_01",
            "a3_soft_f_heli_mrap_01",
            "a3_soft_f_heli_mrap_02",
            "a3_soft_f_heli_mrap_03",
            "a3_soft_f_heli_quadbike",
            "a3_soft_f_heli_quadbike_01",
            "a3_soft_f_heli_suv",
            "a3_soft_f_heli_suv_01",
            "a3_soft_f_heli_truck",
            "a3_soft_f_heli_ugv_01",
            "a3_soft_f_heli_van_01",
            "a3_soft_f_hemtt",
            "a3_soft_f_kart",
            "a3_soft_f_kart_kart_01",
            "a3_soft_f_mrap_01",
            "a3_soft_f_mrap_02",
            "a3_soft_f_mrap_03",
            "a3_soft_f_offroad_01",
            "a3_soft_f_quadbike",
            "a3_soft_f_quadbike_01",
            "a3_soft_f_suv",
            "a3_soft_f_truck",
            "a3_soft_f_truckheavy",
            "a3_sounds_f",
            "a3_sounds_f_arsenal",
            "a3_sounds_f_bootcamp",
            "a3_sounds_f_characters",
            "a3_sounds_f_environment",
            "a3_sounds_f_epb",
            "a3_sounds_f_epc",
            "a3_sounds_f_exp",
            "a3_sounds_f_exp_a",
            "a3_sounds_f_heli",
            "a3_sounds_f_kart",
            "a3_sounds_f_mark",
            "a3_sounds_f_sfx",
            "a3_sounds_f_vehicles",
            "a3_static_f",
            "a3_static_f_aa_01",
            "a3_static_f_at_01",
            "a3_static_f_beta",
            "a3_static_f_beta_mortar_01",
            "a3_static_f_exp",
            "a3_static_f_gamma",
            "a3_static_f_gamma_aa",
            "a3_static_f_gamma_at",
            "a3_static_f_gamma_mortar_01",
            "a3_static_f_mark",
            "a3_static_f_mark_designator_01",
            "a3_static_f_mark_designator_02",
            "a3_static_f_mortar_01",
            "a3_structures_f",
            "a3_structures_f_bootcamp",
            "a3_structures_f_bootcamp_civ_camping",
            "a3_structures_f_bootcamp_civ_sportsgrounds",
            "a3_structures_f_bootcamp_ind_cargo",
            "a3_structures_f_bootcamp_items_electronics",
            "a3_structures_f_bootcamp_items_food",
            "a3_structures_f_bootcamp_items_sport",
            "a3_structures_f_bootcamp_system",
            "a3_structures_f_bootcamp_training",
            "a3_structures_f_bootcamp_vr_blocks",
            "a3_structures_f_bootcamp_vr_coverobjects",
            "a3_structures_f_bootcamp_vr_helpers",
            "a3_structures_f_bridges",
            "a3_structures_f_civ",
            "a3_structures_f_civ_accessories",
            "a3_structures_f_civ_ancient",
            "a3_structures_f_civ_belltowers",
            "a3_structures_f_civ_calvaries",
            "a3_structures_f_civ_camping",
            "a3_structures_f_civ_chapels",
            "a3_structures_f_civ_constructions",
            "a3_structures_f_civ_dead",
            "a3_structures_f_civ_garbage",
            "a3_structures_f_civ_graffiti",
            "a3_structures_f_civ_infoboards",
            "a3_structures_f_civ_kiosks",
            "a3_structures_f_civ_lamps",
            "a3_structures_f_civ_market",
            "a3_structures_f_civ_offices",
            "a3_structures_f_civ_pavements",
            "a3_structures_f_civ_playground",
            "a3_structures_f_civ_sportsgrounds",
            "a3_structures_f_civ_statues",
            "a3_structures_f_civ_tourism",
            "a3_structures_f_data",
            "a3_structures_f_dominants",
            "a3_structures_f_dominants_amphitheater",
            "a3_structures_f_dominants_castle",
            "a3_structures_f_dominants_church",
            "a3_structures_f_dominants_hospital",
            "a3_structures_f_dominants_lighthouse",
            "a3_structures_f_dominants_wip",
            "a3_structures_f_epa",
            "a3_structures_f_epa_civ_camping",
            "a3_structures_f_epa_civ_constructions",
            "a3_structures_f_epa_items_electronics",
            "a3_structures_f_epa_items_food",
            "a3_structures_f_epa_items_medical",
            "a3_structures_f_epa_items_tools",
            "a3_structures_f_epa_items_vessels",
            "a3_structures_f_epa_mil_scrapyard",
            "a3_structures_f_epa_walls",
            "a3_structures_f_epb",
            "a3_structures_f_epb_civ_accessories",
            "a3_structures_f_epb_civ_camping",
            "a3_structures_f_epb_civ_dead",
            "a3_structures_f_epb_civ_garbage",
            "a3_structures_f_epb_civ_graffiti",
            "a3_structures_f_epb_civ_playground",
            "a3_structures_f_epb_furniture",
            "a3_structures_f_epb_items_documents",
            "a3_structures_f_epb_items_luggage",
            "a3_structures_f_epb_items_military",
            "a3_structures_f_epb_items_vessels",
            "a3_structures_f_epb_naval_fishing",
            "a3_structures_f_epc",
            "a3_structures_f_epc_civ_accessories",
            "a3_structures_f_epc_civ_camping",
            "a3_structures_f_epc_civ_garbage",
            "a3_structures_f_epc_civ_infoboards",
            "a3_structures_f_epc_civ_kiosks",
            "a3_structures_f_epc_civ_playground",
            "a3_structures_f_epc_civ_tourism",
            "a3_structures_f_epc_dominants_ghosthotel",
            "a3_structures_f_epc_dominants_stadium",
            "a3_structures_f_epc_furniture",
            "a3_structures_f_epc_items_documents",
            "a3_structures_f_epc_items_electronics",
            "a3_structures_f_epc_walls",
            "a3_structures_f_exp_a",
            "a3_structures_f_exp_a_vr_blocks",
            "a3_structures_f_exp_a_vr_helpers",
            "a3_structures_f_furniture",
            "a3_structures_f_heli",
            "a3_structures_f_heli_civ_accessories",
            "a3_structures_f_heli_civ_constructions",
            "a3_structures_f_heli_civ_garbage",
            "a3_structures_f_heli_civ_market",
            "a3_structures_f_heli_furniture",
            "a3_structures_f_heli_ind_airport",
            "a3_structures_f_heli_ind_cargo",
            "a3_structures_f_heli_ind_machines",
            "a3_structures_f_heli_items_airport",
            "a3_structures_f_heli_items_electronics",
            "a3_structures_f_heli_items_food",
            "a3_structures_f_heli_items_luggage",
            "a3_structures_f_heli_items_sport",
            "a3_structures_f_heli_items_tools",
            "a3_structures_f_heli_vr_helpers",
            "a3_structures_f_households",
            "a3_structures_f_households_addons",
            "a3_structures_f_households_house_big01",
            "a3_structures_f_households_house_big02",
            "a3_structures_f_households_house_shop01",
            "a3_structures_f_households_house_shop02",
            "a3_structures_f_households_house_small01",
            "a3_structures_f_households_house_small02",
            "a3_structures_f_households_house_small03",
            "a3_structures_f_households_slum",
            "a3_structures_f_households_stone_big",
            "a3_structures_f_households_stone_shed",
            "a3_structures_f_households_stone_small",
            "a3_structures_f_households_wip",
            "a3_structures_f_ind",
            "a3_structures_f_ind_airport",
            "a3_structures_f_ind_cargo",
            "a3_structures_f_ind_carservice",
            "a3_structures_f_ind_concretemixingplant",
            "a3_structures_f_ind_crane",
            "a3_structures_f_ind_dieselpowerplant",
            "a3_structures_f_ind_factory",
            "a3_structures_f_ind_fuelstation",
            "a3_structures_f_ind_fuelstation_small",
            "a3_structures_f_ind_pipes",
            "a3_structures_f_ind_powerlines",
            "a3_structures_f_ind_reservoirtank",
            "a3_structures_f_ind_shed",
            "a3_structures_f_ind_solarpowerplant",
            "a3_structures_f_ind_tank",
            "a3_structures_f_ind_transmitter_tower",
            "a3_structures_f_ind_wavepowerplant",
            "a3_structures_f_ind_windmill",
            "a3_structures_f_ind_windpowerplant",
            "a3_structures_f_items",
            "a3_structures_f_items_cans",
            "a3_structures_f_items_documents",
            "a3_structures_f_items_electronics",
            "a3_structures_f_items_food",
            "a3_structures_f_items_gadgets",
            "a3_structures_f_items_luggage",
            "a3_structures_f_items_medical",
            "a3_structures_f_items_military",
            "a3_structures_f_items_stationery",
            "a3_structures_f_items_tools",
            "a3_structures_f_items_valuables",
            "a3_structures_f_items_vessels",
            "a3_structures_f_kart",
            "a3_structures_f_kart_civ_sportsgrounds",
            "a3_structures_f_kart_mil_flags",
            "a3_structures_f_kart_signs_companies",
            "a3_structures_f_mark",
            "a3_structures_f_mark_items_military",
            "a3_structures_f_mark_items_sport",
            "a3_structures_f_mark_mil_flags",
            "a3_structures_f_mark_training",
            "a3_structures_f_mark_vr_helpers",
            "a3_structures_f_mark_vr_shapes",
            "a3_structures_f_mark_vr_targets",
            "a3_structures_f_mil",
            "a3_structures_f_mil_bagbunker",
            "a3_structures_f_mil_bagfence",
            "a3_structures_f_mil_barracks",
            "a3_structures_f_mil_bunker",
            "a3_structures_f_mil_cargo",
            "a3_structures_f_mil_flags",
            "a3_structures_f_mil_fortification",
            "a3_structures_f_mil_helipads",
            "a3_structures_f_mil_offices",
            "a3_structures_f_mil_radar",
            "a3_structures_f_mil_scrapyard",
            "a3_structures_f_mil_shelters",
            "a3_structures_f_mil_tenthangar",
            "a3_structures_f_naval",
            "a3_structures_f_naval_buoys",
            "a3_structures_f_naval_fishing",
            "a3_structures_f_naval_piers",
            "a3_structures_f_naval_rowboats",
            "a3_structures_f_research",
            "a3_structures_f_signs_companies",
            "a3_structures_f_system",
            "a3_structures_f_training",
            "a3_structures_f_training_invisibletarget",
            "a3_structures_f_walls",
            "a3_structures_f_wrecks",
            "a3_supplies_f_exp",
            "a3_supplies_f_exp_ammoboxes",
            "a3_supplies_f_heli",
            "a3_supplies_f_heli_bladders",
            "a3_supplies_f_heli_cargonets",
            "a3_supplies_f_heli_fuel",
            "a3_supplies_f_heli_slingload",
            "a3_supplies_f_mark",
            "a3_uav_f_characters_f_gamma",
            "a3_uav_f_weapons_f_gamma_ammoboxes",
            "a3_ui_f",
            "a3_ui_f_bootcamp",
            "a3_ui_f_curator",
            "a3_ui_f_data",
            "a3_ui_f_exp",
            "a3_ui_f_exp_a",
            "a3_ui_f_heli",
            "a3_ui_f_kart",
            "a3_ui_f_mark",
            "a3_ui_f_mp_mark",
            "a3_uifonts_f",
            "a3_weapons_f",
            "a3_weapons_f_aaf",
            "a3_weapons_f_acc",
            "a3_weapons_f_ammoboxes",
            "a3_weapons_f_beta",
            "a3_weapons_f_beta_acc",
            "a3_weapons_f_beta_ammoboxes",
            "a3_weapons_f_beta_ebr",
            "a3_weapons_f_beta_longrangerifles_ebr",
            "a3_weapons_f_beta_longrangerifles_gm6",
            "a3_weapons_f_beta_longrangerifles_m320",
            "a3_weapons_f_beta_rifles_khaybar",
            "a3_weapons_f_beta_rifles_mx",
            "a3_weapons_f_beta_rifles_trg20",
            "a3_weapons_f_bootcamp",
            "a3_weapons_f_bootcamp_ammoboxes",
            "a3_weapons_f_bootcamp_longrangerifles_gm6",
            "a3_weapons_f_bootcamp_longrangerifles_gm6_camo",
            "a3_weapons_f_bootcamp_longrangerifles_m320",
            "a3_weapons_f_bootcamp_longrangerifles_m320_camo",
            "a3_weapons_f_csat",
            "a3_weapons_f_dummyweapons",
            "a3_weapons_f_ebr",
            "a3_weapons_f_epa",
            "a3_weapons_f_epa_acc",
            "a3_weapons_f_epa_ammoboxes",
            "a3_weapons_f_epa_ebr",
            "a3_weapons_f_epa_longrangerifles_dmr_01",
            "a3_weapons_f_epa_longrangerifles_gm6",
            "a3_weapons_f_epa_rifles_mx",
            "a3_weapons_f_epb",
            "a3_weapons_f_epb_acc",
            "a3_weapons_f_epb_ammoboxes",
            "a3_weapons_f_epb_longrangerifles_gm3",
            "a3_weapons_f_epb_longrangerifles_gm6",
            "a3_weapons_f_epb_longrangerifles_m320",
            "a3_weapons_f_epb_rifles_mx_black",
            "a3_weapons_f_epc",
            "a3_weapons_f_exp",
            "a3_weapons_f_exp_launchers_rpg32",
            "a3_weapons_f_exp_launchers_rpg7",
            "a3_weapons_f_exp_launchers_titan",
            "a3_weapons_f_exp_longrangerifles_dmr_07",
            "a3_weapons_f_exp_machineguns_lmg_03",
            "a3_weapons_f_exp_pistols_pistol_01",
            "a3_weapons_f_exp_rifles_ak12",
            "a3_weapons_f_exp_rifles_akm",
            "a3_weapons_f_exp_rifles_aks",
            "a3_weapons_f_exp_rifles_arx",
            "a3_weapons_f_exp_rifles_ctar",
            "a3_weapons_f_exp_rifles_ctars",
            "a3_weapons_f_exp_rifles_spar_01",
            "a3_weapons_f_exp_rifles_spar_02",
            "a3_weapons_f_exp_rifles_spar_03",
            "a3_weapons_f_exp_smgs_smg_05",
            "a3_weapons_f_explosives",
            "a3_weapons_f_fia",
            "a3_weapons_f_gamma",
            "a3_weapons_f_gamma_acc",
            "a3_weapons_f_gamma_ammoboxes",
            "a3_weapons_f_gamma_items",
            "a3_weapons_f_gamma_longrangerifles_ebr",
            "a3_weapons_f_gamma_rifles_mx",
            "a3_weapons_f_headgear",
            "a3_weapons_f_itemholders",
            "a3_weapons_f_items",
            "a3_weapons_f_kart",
            "a3_weapons_f_kart_pistols_pistol_signal_f",
            "a3_weapons_f_launchers_law",
            "a3_weapons_f_launchers_nlaw",
            "a3_weapons_f_launchers_rpg32",
            "a3_weapons_f_launchers_titan",
            "a3_weapons_f_longrangerifles_dmr_01",
            "a3_weapons_f_longrangerifles_ebr",
            "a3_weapons_f_longrangerifles_gm6",
            "a3_weapons_f_longrangerifles_m320",
            "a3_weapons_f_machineguns_m200",
            "a3_weapons_f_machineguns_zafir",
            "a3_weapons_f_mark",
            "a3_weapons_f_mark_acc",
            "a3_weapons_f_mark_ebr",
            "a3_weapons_f_mark_longrangerifles_dmr_01",
            "a3_weapons_f_mark_longrangerifles_dmr_02",
            "a3_weapons_f_mark_longrangerifles_dmr_03",
            "a3_weapons_f_mark_longrangerifles_dmr_04",
            "a3_weapons_f_mark_longrangerifles_dmr_05",
            "a3_weapons_f_mark_longrangerifles_dmr_06",
            "a3_weapons_f_mark_longrangerifles_ebr",
            "a3_weapons_f_mark_longrangerifles_gm6",
            "a3_weapons_f_mark_longrangerifles_gm6_camo",
            "a3_weapons_f_mark_longrangerifles_m320",
            "a3_weapons_f_mark_longrangerifles_m320_camo",
            "a3_weapons_f_mark_machineguns_m200",
            "a3_weapons_f_mark_machineguns_mmg_01",
            "a3_weapons_f_mark_machineguns_mmg_02",
            "a3_weapons_f_mark_machineguns_zafir",
            "a3_weapons_f_mark_rifles_khaybar",
            "a3_weapons_f_mark_rifles_mk20",
            "a3_weapons_f_mark_rifles_mx",
            "a3_weapons_f_mark_rifles_sdar",
            "a3_weapons_f_mark_rifles_trg20",
            "a3_weapons_f_nato",
            "a3_weapons_f_pistols_acpc2",
            "a3_weapons_f_pistols_p07",
            "a3_weapons_f_pistols_pdw2000",
            "a3_weapons_f_pistols_pistol_heavy_01",
            "a3_weapons_f_pistols_pistol_heavy_02",
            "a3_weapons_f_pistols_rook40",
            "a3_weapons_f_rifles_khaybar",
            "a3_weapons_f_rifles_mk20",
            "a3_weapons_f_rifles_mx",
            "a3_weapons_f_rifles_mx_black",
            "a3_weapons_f_rifles_sdar",
            "a3_weapons_f_rifles_smg_02",
            "a3_weapons_f_rifles_trg20",
            "a3_weapons_f_rifles_vector",
            "a3_weapons_f_smgs_pdw2000",
            "a3_weapons_f_smgs_smg_01",
            "a3_weapons_f_smgs_smg_02",
            "a3_weapons_f_uniforms",
            "a3_weapons_f_vests",
            "curatoronly_air_f_beta_heli_attack_01",
            "curatoronly_air_f_beta_heli_attack_02",
            "curatoronly_air_f_gamma_uav_01",
            "curatoronly_armor_f_amv",
            "curatoronly_armor_f_beta_apc_tracked_02",
            "curatoronly_armor_f_marid",
            "curatoronly_armor_f_panther",
            "curatoronly_armor_f_slammer",
            "curatoronly_armor_f_t100k",
            "curatoronly_boat_f_boat_armed_01",
            "curatoronly_characters_f_blufor",
            "curatoronly_characters_f_common",
            "curatoronly_characters_f_opfor",
            "curatoronly_modules_f_curator_animals",
            "curatoronly_modules_f_curator_chemlights",
            "curatoronly_modules_f_curator_effects",
            "curatoronly_modules_f_curator_environment",
            "curatoronly_modules_f_curator_flares",
            "curatoronly_modules_f_curator_lightning",
            "curatoronly_modules_f_curator_mines",
            "curatoronly_modules_f_curator_objectives",
            "curatoronly_modules_f_curator_ordnance",
            "curatoronly_modules_f_curator_smokeshells",
            "curatoronly_signs_f",
            "curatoronly_soft_f_crusher_ugv",
            "curatoronly_soft_f_mrap_01",
            "curatoronly_soft_f_mrap_02",
            "curatoronly_soft_f_quadbike",
            "curatoronly_static_f_gamma",
            "curatoronly_static_f_mortar_01",
            "curatoronly_structures_f_civ_ancient",
            "curatoronly_structures_f_civ_camping",
            "curatoronly_structures_f_civ_garbage",
            "curatoronly_structures_f_epa_civ_constructions",
            "curatoronly_structures_f_epb_civ_dead",
            "curatoronly_structures_f_ind_cargo",
            "curatoronly_structures_f_ind_crane",
            "curatoronly_structures_f_ind_reservoirtank",
            "curatoronly_structures_f_ind_transmitter_tower",
            "curatoronly_structures_f_items_vessels",
            "curatoronly_structures_f_mil_bagbunker",
            "curatoronly_structures_f_mil_bagfence",
            "curatoronly_structures_f_mil_cargo",
            "curatoronly_structures_f_mil_fortification",
            "curatoronly_structures_f_mil_radar",
            "curatoronly_structures_f_mil_shelters",
            "curatoronly_structures_f_research",
            "curatoronly_structures_f_walls",
            "curatoronly_structures_f_wrecks",
            "a3data",
            "3den",
            "map_vr",

            // CBA
            "cba_ui",
            "cba_xeh",
            "cba_jr",

            //ACE
            "ace_main",
            "ace_common",
            "ace_aircraft",
            "ace_cargo",
            "ace_dragging",
            "ace_hellfire",
            "ace_interaction",
            "ace_rearm",
            "ace_refuel"
        };
        author = QUOTE(UKSF);
        url = QUOTE(www.uk-sf.com);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        dir = "@uksf";
        name = "UKSF Mods";
        author = "UKSF";
        picture = QPATHTO_R(data\uksf_logo_ca);
        logo = QPATHTO_R(data\uksf_logo_ca);
        logoOver = QPATHTO_R(data\uksf_logo_ca);
        logoSmall = QPATHTO_R(data\uksf_logo_ca);
        hideName = 0;
        hidePicture = 0;
        actionName = "Website";
        action = "http://uk-sf.com/";
        description = "Issue Tracker: https://github.com/uksf/modpack/issues";
        tooltip = "UKSF Mods";
        tooltipOwned = "UKSF Mods - Owned";
        overview = "Collection of custom mods and patches tailor made for use with UKSF";
    };
    class UK3CB_BAF_Weapons: Mod_Base {
        picture = QPATHTO_R(data\uksf_logo_ca);
        logo = QPATHTO_R(data\uksf_logo_ca);
        logoOver = QPATHTO_R(data\uksf_logo_ca);
        logoSmall = QPATHTO_R(data\uksf_logo_ca);
    };
    class UK3CB_BAF_Equipment: Mod_Base {
        picture = QPATHTO_R(data\uksf_logo_ca);
        logo = QPATHTO_R(data\uksf_logo_ca);
        logoOver = QPATHTO_R(data\uksf_logo_ca);
        logoSmall = QPATHTO_R(data\uksf_logo_ca);
    };
};

#include "CfgSettings.hpp"
