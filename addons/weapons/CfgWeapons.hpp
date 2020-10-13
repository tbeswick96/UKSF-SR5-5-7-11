class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_MuzzleSlot;
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_OpticRail1913 : asdg_OpticRail {
    class compatibleItems {
        RKSL_optic_PMII_525_NV = 1;
    };
};
class asdg_FrontSideRail : asdg_SlotInfo {
    class compatibleItems {
        UK3CB_BAF_LLM_Flashlight_Far_Black = 1;
    };
};
class asdg_MuzzleSlot_556_3CB_L119 : asdg_MuzzleSlot {
    class compatibleItems {
        UK3CB_BAF_BFA_L85 = 1;
        UK3CB_BAF_SFFH = 1;
        muzzle_snds_M = 1;
    };
};
class CfgWeapons {
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class UK3CB_BAF_SpecterLDS_Dot;
    class UK3CB_BAF_SpecterLDS : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class UK3CB_BAF_LDS {
                    visionMode[] = {};
                };
            };
        };
    };
    class UK3CB_BAF_SpecterLDS_3D : UK3CB_BAF_SpecterLDS {
        scope = 2;
        scopeCurator = 2;
        class ItemInfo : InventoryOpticsItem_Base_F {
            allowedSlots[] = { 801, 701, 901 };
            mass = 4;
            mountAction = "MountOptic";
            muzzleEnd = "konec hlavne";
            muzzlePos = "usti hlavne";
            optics = 1;
            scope = 0;
            type = 201;
            unmountAction = "DismountOptic";
            modelOptics = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_Elcan_Optic.p3d";
            class OpticsModes {
                class UK3CB_BAF_LDS {
                    cameraDir = "";
                    discreteDistance[] = { 300 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    opticsFlare = 1;
                    opticsID = 1;
                    opticsPPEffects[] = { "OpticsCHAbera5", "OpticsBlur5" };
                    opticsZoomInit = 0.09;
                    opticsZoomMax = 0.09;
                    opticsZoomMin = 0.09;
                    visionMode[] = {};
                    useModelOptics = 0;
                    opticsDisablePeripherialVision = 0;
                };
            };
        };
    };
    class UK3CB_BAF_SpecterLDS_Dot_3D : UK3CB_BAF_SpecterLDS_Dot {
        scope = 2;
        scopeCurator = 2;
        model = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_Elcan_Reflex.p3d";
        modelOptics = "";
        class ItemInfo : InventoryOpticsItem_Base_F {
            allowedSlots[] = { 801, 701, 901 };
            mass = 4;
            mountAction = "MountOptic";
            muzzleEnd = "konec hlavne";
            muzzlePos = "usti hlavne";
            optics = 1;
            scope = 0;
            type = 201;
            unmountAction = "DismountOptic";
            modelOptics = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_Elcan_Optic.p3d";
            class OpticsModes {
                class UK3CB_BAF_LDS {
                    cameraDir = "";
                    discreteDistance[] = { 300 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    opticsFlare = 1;
                    opticsID = 1;
                    opticsPPEffects[] = { "OpticsCHAbera5", "OpticsBlur5" };
                    opticsZoomInit = 0.09;
                    opticsZoomMax = 0.09;
                    opticsZoomMin = 0.09;
                    visionMode[] = {};
                    useModelOptics = 0;
                    opticsDisablePeripherialVision = 0;
                };
                class UK3CB_BAF_LDS_Top {
                    cameraDir = "";
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMax = 100;
                    distanceZoomMin = 100;
                    memoryPointCamera = "eye";
                    opticsFlare = 1;
                    opticsID = 2;
                    opticsPPEffects[] = { "OpticsCHAbera5", "OpticsBlur5" };
                    opticsZoomInit = 0.75;
                    opticsZoomMax = 1.1;
                    opticsZoomMin = 0.375;
                    visionMode[] = {};
                    useModelOptics = 0;
                    opticsDisablePeripherialVision = 0;
                };
            };
        };
    };
    class UK3CB_BAF_TA31F : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class UK3CB_BAF_ACOG {
                    visionMode[] = {};
                };
            };
        };
    };
    class UK3CB_BAF_TA648 : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACOG_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class UK3CB_BAF_SUSAT : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class UK3CB_BAF_SUSAT {
                    visionMode[] = {};
                };
            };
        };
    };
    class RKSL_optic_LDS : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class LDS {
                    visionMode[] = {};
                };
            };
        };
    };
    class optic_LRPS : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class CUP_optic_Elcan_SpecterDR : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Specter4x {
                    visionMode[] = {};
                };
            };
        };
    };
    class RKSL_optic_PMII_525 : ItemCore {
        class ItemInfo;
    };
    class RKSL_optic_PMII_525_NV : RKSL_optic_PMII_525 {
        displayName = "S+B 5-25x56 PM II (NV)";
        class ItemInfo : ItemInfo {
            opticType = 2;
            mass = 30;
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    opticsDisplayName = "WFOV";
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.01;
                    opticsZoomMax = 0.025;
                    opticsZoomInit = 0.05;
                    discreteDistance[] = { 100 };
                    distanceZoomMin = 300;
                    distanceZoomMax = 2300;
                    discretefov[] = { 0.05, 0.025, 0.0167, 0.0125, 0.01 };
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = { "\RKSL_PM_525\Optic\RKSL_Mildot-5x", "\RKSL_PM_525\Optic\RKSL_Mildot-10x", "\RKSL_PM_525\Optic\RKSL_Mildot-15x", "\RKSL_PM_525\Optic\RKSL_Mildot-20x", "\RKSL_PM_525\Optic\RKSL_Mildot-25x" };
                    visionMode[] = { "Normal", "NVG" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                    discreteDistanceInitIndex = 0;
                };
                class Snip_Illum : Snip {
                    opticsID = 2;
                    modelOptics[] = { "\RKSL_PM_525\Optic\RKSL_Mildot-5x_Illum", "\RKSL_PM_525\Optic\RKSL_Mildot-10x_Illum", "\RKSL_PM_525\Optic\RKSL_Mildot-15x_Illum", "\RKSL_PM_525\Optic\RKSL_Mildot-20x_Illum", "\RKSL_PM_525\Optic\RKSL_Mildot-25x_Illum" };
                };
            };
        };
    };
    class UK3CB_BAF_LLM_IR_Tan;
    class UK3CB_BAF_LLM_IR_Black : UK3CB_BAF_LLM_IR_Tan {
        mrt_SwitchItemNextClass = "UK3CB_BAF_LLM_Flashlight_Black";
        mrt_SwitchItemPrevClass = "UK3CB_BAF_LLM_Flashlight_Far_Black";
        mrt_SwitchItemHintText = "IR";
        ace_nextModeClass = "UK3CB_BAF_LLM_Flashlight_Black";
        ace_modeDescription = "IR";
        UK3CB_nextItem = "UK3CB_BAF_LLM_Flashlight_Black";
    };
    class UK3CB_BAF_LLM_Flashlight_Tan;
    class UK3CB_BAF_LLM_Flashlight_Black : UK3CB_BAF_LLM_Flashlight_Tan {
        mrt_SwitchItemNextClass = "UK3CB_BAF_LLM_Flashlight_Far_Black";
        mrt_SwitchItemPrevClass = "UK3CB_BAF_LLM_IR_Black";
        mrt_SwitchItemHintText = "Flashlight";
        ace_nextModeClass = "UK3CB_BAF_LLM_Flashlight_Far_Black";
        ace_modeDescription = "Flashlight";
        UK3CB_nextItem = "UK3CB_BAF_LLM_Flashlight_Far_Black";
    };
    class InventoryFlashLightItem_Base_F;
    class UK3CB_BAF_LLM_Flashlight_Far_Black : UK3CB_BAF_LLM_Flashlight_Black {
        displayName = "LLM Mk3 Flashlight Far (Black)";
        mrt_SwitchItemNextClass = "UK3CB_BAF_LLM_IR_Black";
        mrt_SwitchItemPrevClass = "UK3CB_BAF_LLM_Flashlight_Black";
        mrt_SwitchItemHintText = "Flashlight (Far)";
        ace_nextModeClass = "UK3CB_BAF_LLM_IR_Black";
        ace_modeDescription = "Flashlight (Far)";
        UK3CB_nextItem = "UK3CB_BAF_LLM_IR_Black";
        class ItemInfo : InventoryFlashLightItem_Base_F {
            mass = 4;
            class FlashLight {
                color[] = { 180, 156, 120 };
                ambient[] = { 0.9, 0.78, 0.6 };
                intensity = 40;
                size = 1;
                innerAngle = 5;
                outerAngle = 50;
                coneFadeCoef = 10;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = "100.0f";
                dayLight = 0;
                class Attenuation {
                    start = 0.5;
                    constant = 0;
                    linear = 0;
                    quadratic = 1.1;
                    hardLimitStart = 100;
                    hardLimitEnd = 150;
                };
                scale[] = { 0 };
            };
        };
    };

    class ACE_NVG_Wide;
    class ACE_NVG_Pilot : ACE_NVG_Wide {
        scope = 2;
        scopeArsenal = 2;
        author = "UKSF";
        displayName = "Pilot NVG";
        ace_nightvision_generation = 4;
        ace_nightvision_bluRadius = 0.26;
        ace_nightvision_border = QPATHTOF(data\nvg_mask_binos_large_4096.paa);
        modelOptics = "";
    };
    class NVGoggles;
    class UK3CB_BAF_HMNVS : NVGoggles {
        ace_nightvision_generation = 3;
        ace_nightvision_bluRadius = 0.20;
        ace_nightvision_border = QPATHTOF(data\nvg_mask_large_4096.paa);
        modelOptics = "";
    };
    class Integrated_NVG_F : NVGoggles {
        ace_nightvision_generation = 4;
        ace_nightvision_bluRadius = 0.36;
    };

    class arifle_Mk20_F;
    class arifle_Mk20_plain_F : arifle_Mk20_F {
        class Single;
        class FullAuto;
    };
    class UK3CB_BAF_L85A2 : arifle_Mk20_plain_F {
        ace_barrelLength = 518;  // c:441.96, a:518
    };

    class UK3CB_BAF_L119_Base : arifle_Mk20_plain_F {
        ace_barrelLength = 398;  // c:410, a:398
        class WeaponSlotsInfo {
            allowedslots[] = { 901 };
            mass = 84;
            delete asdg_MuzzleSlot_UK3CB_BAF_L85;
            class asdg_MuzzleSlot_UK3CB_BAF_L119 : asdg_MuzzleSlot_556_3CB_L119 {};
            class asdg_OpticRail_UK3CB_BAF_L85 : asdg_OpticRail1913 {};
            class asdg_FrontSideRail_L85 : asdg_FrontSideRail {};
        };
        class Single : Single {
            class BaseSoundModeType;
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "3CB_BAF_M4_Closure_SoundSet", "3CB_BAF_M4_ShotSD_SoundSet", "3CB_BAF_Rifle1_SD_Tail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            class BaseSoundModeType;
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "3CB_BAF_M4_Closure_SoundSet", "3CB_BAF_M4_ShotSD_SoundSet", "3CB_BAF_Rifle1_SD_Tail_SoundSet" };
            };
        };
    };
    class UK3CB_BAF_L119A1_CQB : UK3CB_BAF_L119_Base {
        ace_barrelLength = 254;  // c:250, a:250
        class WeaponSlotsInfo {
            allowedslots[] = { 901 };
            mass = 84;
            delete asdg_MuzzleSlot_UK3CB_BAF_L85;
            class asdg_MuzzleSlot_UK3CB_BAF_L119 : asdg_MuzzleSlot_556_3CB_L119 {};
            class asdg_OpticRail_UK3CB_BAF_L85 : asdg_OpticRail1913 {};
        };
    };
    class UK3CB_BAF_L119A1 : UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo {
            allowedslots[] = { 901 };
            mass = 84;
            delete asdg_MuzzleSlot_UK3CB_BAF_L85;
            class asdg_MuzzleSlot_UK3CB_BAF_L119 : asdg_MuzzleSlot_556_3CB_L119 {};
            class asdg_OpticRail_UK3CB_BAF_L85 : asdg_OpticRail1913 {};
            class asdg_FrontSideRail_L85 : asdg_FrontSideRail {};
        };
    };

    class Rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
    };
    class Tavor_base_F : Rifle_Base_F {
        class Single;
        class FullAuto;
    };
    class SSQN_L119A1_Base : Tavor_base_F {
        magazines[] = { "UK3CB_BAF_556_30Rnd", "UK3CB_BAF_556_30Rnd_T", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red" };
        class Single : Single {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = { "L119_Shot_SoundSet", "FRAME_CALIBER_5x56MM", "ALL_DIST_TAIL" };
            };
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "3CB_BAF_M4_Closure_SoundSet", "3CB_BAF_M4_ShotSD_SoundSet", "3CB_BAF_Rifle1_SD_Tail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = { "L119_Shot_SoundSet", "FRAME_CALIBER_5x56MM", "ALL_DIST_TAIL" };
            };
            class SilencedSound : BaseSoundModeType {
                soundSetShot[] = { "3CB_BAF_M4_Closure_SoundSet", "3CB_BAF_M4_ShotSD_SoundSet", "3CB_BAF_Rifle1_SD_Tail_SoundSet" };
            };
        };
    };

    class srifle_EBR_F;
    class UK3CB_BAF_L129A1 : srifle_EBR_F {
        ace_barrelLength = 410;
    };
    class UK3CB_BAF_L128A1 : srifle_EBR_F {
        magazineWell[] = {};
    };

    class UK3CB_BAF_L110_Base;
    class UK3CB_BAF_L110_556_Base : UK3CB_BAF_L110_Base {
        magazines[] = { "UK3CB_BAF_556_200Rnd", "UK3CB_BAF_556_200Rnd_Blank", "UK3CB_BAF_556_200Rnd_T", "UK3CB_BAF_556_100Rnd", "UK3CB_BAF_556_100Rnd_Blank", "UK3CB_BAF_556_100Rnd_T", "UK3CB_BAF_556_30Rnd", "UK3CB_BAF_556_30Rnd_T" };
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
            class SilencedSound : BaseSoundModeType {
                SoundSetShot[] = { "DS_lim_Closure_SoundSet", "DS_lim_ShotSD_SoundSet", "DS_rifle1_SD_Tail_SoundSet" };
            };
        };
    };
    class UK3CB_BAF_L110_762_Base : UK3CB_BAF_L110_Base {
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
            class SilencedSound : BaseSoundModeType {
                SoundSetShot[] = { "DS_lim_Closure_SoundSet", "DS_lim_ShotSD_SoundSet", "DS_rifle1_SD_Tail_SoundSet" };
            };
        };
    };

    class LMG_03_base_F;
    class SSQN_L110A1 : LMG_03_base_F {
        magazines[] = { "UK3CB_BAF_556_200Rnd", "UK3CB_BAF_556_200Rnd_Blank", "UK3CB_BAF_556_200Rnd_T", "UK3CB_BAF_556_100Rnd", "UK3CB_BAF_556_100Rnd_Blank", "UK3CB_BAF_556_100Rnd_T", "UK3CB_BAF_556_30Rnd", "UK3CB_BAF_556_30Rnd_T" };
        magazineWell[] = {};
        modes[] = { "FullAuto", "close", "short", "medium", "far_optic1", "far_optic2" };
        class FullAuto: Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "L110_Shot_SoundSet", "FRAME_CALIBER_5x56MM", "ALL_DIST_TAIL" };
            };
            class SilencedSound: BaseSoundModeType {
                SoundSetShot[] = { "DS_lim_Closure_SoundSet", "DS_lim_ShotSD_SoundSet", "DS_rifle1_SD_Tail_SoundSet" };
            };
            reloadTime = 0.08278;
            dispersion = 0.0012;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
        };
    };

    class LMG_Zafir_F;
    class UK3CB_BAF_L7A2 : LMG_Zafir_F {
        magazines[] = {
            "UK3CB_BAF_762_200Rnd_T", "UK3CB_BAF_762_200Rnd", "UK3CB_BAF_762_200Rnd_Blank", "UK3CB_BAF_762_100Rnd_T", "UK3CB_BAF_762_100Rnd", "UK3CB_BAF_762_100Rnd_Blank", "UK3CB_BAF_762_100Rnd_EL", "UK3CB_BAF_762_100Rnd_T_EL", "UK3CB_BAF_762_200Rnd_EL", "UK3CB_BAF_762_200Rnd_T_EL"
        };
        class WeaponSlotsInfo;
        class FullAuto : Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                soundSetShot[] = { "DS_zafir_Closure_SoundSet", "DS_zafir_Shot_SoundSet", "DS_lmg1_Tail_SoundSet" };
            };
        };
    };
    class UK3CB_BAF_L7A2_FIST : UK3CB_BAF_L7A2 {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 240;
        };
    };
    class LMG_RCWS;
    class UK3CB_BAF_L7A2_veh : LMG_RCWS {
        magazines[] = {
            "UK3CB_BAF_762_200Rnd_T", "UK3CB_BAF_762_200Rnd", "UK3CB_BAF_762_200Rnd_Blank", "UK3CB_BAF_762_100Rnd_T", "UK3CB_BAF_762_100Rnd", "UK3CB_BAF_762_100Rnd_Blank", "UK3CB_BAF_762_100Rnd_EL", "UK3CB_BAF_762_100Rnd_T_EL", "UK3CB_BAF_762_200Rnd_EL", "UK3CB_BAF_762_200Rnd_T_EL"
        };
    };
    class UK3CB_BAF_L85A3_Grippod;
    class UK3CB_BAF_L85A3_Grippod_Elcan : UK3CB_BAF_L85A3_Grippod {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L85A3";
                item = "UK3CB_BAF_SpecterLDS_Dot_3D";
            };
        };
    };
    class UK3CB_BAF_L22A2;
    class UK3CB_BAF_L22A2_Elcan : UK3CB_BAF_L22A2 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L85";
                item = "UK3CB_BAF_SpecterLDS_Dot_3D";
            };
        };
    };
    class UK3CB_BAF_L85A3_UGL;
    class UK3CB_BAF_L85A3_UGL_Elcan : UK3CB_BAF_L85A3_UGL {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L85A3";
                item = "UK3CB_BAF_SpecterLDS_Dot_3D";
            };
        };
    };

    class UK3CB_BAF_L110A3;
    class UK3CB_BAF_L110A3_Elcan : UK3CB_BAF_L110A3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L110A2";
                item = "UK3CB_BAF_SpecterLDS_Dot_3D";
            };
        };
    };

    class UK3CB_BAF_L129A1_Grippod;
    class UK3CB_BAF_L129A1_Grippod_Acog : UK3CB_BAF_L129A1_Grippod {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L129A1";
                item = "UK3CB_BAF_TA31F";
            };
        };
    };

    class UK3CB_BAF_L115A3;
    class UK3CB_BAF_L115A3_LRPS : UK3CB_BAF_L115A3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L115";
                item = "optic_LRPS";
            };
        };
    };
    class UK3CB_BAF_L115A3_DE;
    class UK3CB_BAF_L115A3_DE_LRPS : UK3CB_BAF_L115A3_DE {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L115";
                item = "optic_LRPS";
            };
        };
    };
    class srifle_GM6_F;
    class UK3CB_BAF_L135A1 : srifle_GM6_F {
        magazines[] = { "UK3CB_BAF_127_10Rnd", "UK3CB_BAF_127_10Rnd_AP", "UK3CB_BAF_127_10Rnd_T" };
    };
    class UK3CB_BAF_L135A1_LRPS : UK3CB_BAF_L135A1 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_rifles";
                item = "optic_LRPS";
            };
        };
    };

    class CUP_arifle_M4_Base;
    class CUP_arifle_M4A1_BUIS_Base: CUP_arifle_M4_Base {
        class WeaponSlotsInfo;
    };
    class CUP_arifle_mk18_black: CUP_arifle_M4A1_BUIS_Base {
        magazines[] = { "UK3CB_BAF_556_30Rnd", "UK3CB_BAF_556_30Rnd_T", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red" };
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            class asdg_MuzzleSlot_UK3CB_BAF_L119 : asdg_MuzzleSlot_556_3CB_L119 {};
        };
    };

    class Launcher;
    class Launcher_Base_F : Launcher {
        class WeaponSlotsInfo;
    };
    class launch_NLAW_F : Launcher_Base_F {
        modes[] = { "Overfly", "Single" };
    };
    class UK3CB_BAF_NLAW_Launcher : launch_NLAW_F {
        magazines[] = {"ACE_PreloadedMissileDummy"};
        magazineWell[] = {"NLAW"};
        ACE_UsedTube = "ACE_launch_NLAW_Used_F";
        ace_nlaw_enabled = 1;
        uk3cb_used_launcher = "";
        canLock = 1;
        ace_overpressure_priority = 1;
        ace_overpressure_angle = 30;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.6;
    };
    class ACE_launch_NLAW_Used_F : launch_NLAW_F {
        modelOptics = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Launchers\uk3cb_nlaw_optic.p3d";
    };
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class UK3CB_BAF_Javelin_CLU : CBA_MiscItem {
        scope = 2;
        displayName = "Javelin CLU";
        descriptionShort = "Mid-range fire-and-forget anti-tank missile system<br/>by www.3commandobrigade.com";
        model = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Launchers\UK3CB_Javelin_CLU.p3d";
        picture = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Launchers\data\clu_javelin_ca.paa";
        icon = "iconObject_circle";
        delete OpticsModes;
        delete WeaponSlotsInfo;
        class ItemInfo : CBA_MiscItem_ItemInfo {
            mass = 141;
            allowedSlots[] = { 901 };
        };
    };
    class launch_Titan_short_base;
    class launch_B_Titan_short_F : launch_Titan_short_base {
        class WeaponSlotsInfo;
    };
    class UK3CB_BAF_Javelin_Launcher : launch_B_Titan_short_F {
        modes[] = { "TopDown", "Single" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 231;
        };
    };
    class UK3CB_BAF_Javelin_Slung_Tube : Launcher_Base_F {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 350;
        };
    };
    class UK3CB_BAF_Javelin_Slung_Tube_Used : UK3CB_BAF_Javelin_Slung_Tube {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90;
        };
    };
    class launch_MRAWS_base_F : Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 150;
        };
    };

    class Default;
    class Put : Default {
        muzzles[] += { "BreachChargeMuzzle" };
        class DemoChargeMuzzle;
        class BreachChargeMuzzle : DemoChargeMuzzle {
            displayName = "Breach Charge";
            magazines[] = { "BreachCharge_Remote_Mag" };
        };
    };

    class CUP_weapon_mastersafe : Default {
        displayName = "Safe";
        displayNameMagazine = "Safe";
        shortNameMagazine = "Safe";
        nameSound = "cannon";
        cursor = "EmptyCursor";
        cursorAim = "EmptyCursor";
        magazines[] = { "FakeMagazine" };
        reloadMagazineSound[] = { "", 1, 1 };
        canLock = 0;
        burst = 0;
        reloadTime = 0.01;
        magazineReloadTime = 0.1;
    };
    class CMFlareLauncher;
    class UK3CB_BAF_CMFlareLauncher : CMFlareLauncher {
        modes[] = { "Single", "Burst1", "AIBurst" };
        class Burst1 : Mode_Burst {
            reloadTime = 0.2;
            displayName = "Flares 10/1s";
            burst = 5;
        };
    };
    class RocketPods;
    class ace_hellfire_launcher : RocketPods {
        displayName = "AGM-114K";
        magazines[] = { "2Rnd_ACE_Hellfire_AGM114K", "4Rnd_ACE_Hellfire_AGM114K", "PylonMissile_1Rnd_ACE_Hellfire_AGM114K", "PylonRack_1Rnd_ACE_Hellfire_AGM114K", "PylonRack_3Rnd_ACE_Hellfire_AGM114K", "PylonRack_4Rnd_ACE_Hellfire_AGM114K" };
    };
    class ace_hellfire_launcher_N : ace_hellfire_launcher {
        displayName = "AGM-114N";
        magazines[] = { "2Rnd_ACE_Hellfire_AGM114N", "4Rnd_ACE_Hellfire_AGM114N", "6Rnd_ACE_Hellfire_AGM114N", "PylonMissile_1Rnd_ACE_Hellfire_AGM114N", "PylonRack_1Rnd_ACE_Hellfire_AGM114N", "PylonRack_3Rnd_ACE_Hellfire_AGM114N", "PylonRack_4Rnd_ACE_Hellfire_AGM114N" };
    };
    class ace_hellfire_launcher_drone : ace_hellfire_launcher {
        magazines[] = { "PylonRack_2Rnd_ACE_Hellfire_AGM114K_Drone" };
    };
    class ace_hellfire_launcher_drone_N : ace_hellfire_launcher_N {
        magazines[] = { "PylonRack_2Rnd_ACE_Hellfire_AGM114N_Drone" };
    };
    class ace_hellfire_launcher_L : ace_hellfire_launcher {
        displayName = "AGM-114L";
        magazines[] = { "2Rnd_ACE_Hellfire_AGM114L", "4Rnd_ACE_Hellfire_AGM114L", "PylonMissile_1Rnd_ACE_Hellfire_AGM114L", "PylonRack_1Rnd_ACE_Hellfire_AGM114L", "PylonRack_3Rnd_ACE_Hellfire_AGM114L", "PylonRack_4Rnd_ACE_Hellfire_AGM114L" };
    };
    class CannonCore;
    class CUP_Vacannon_M230_veh : CannonCore {
        magazines[] = { "CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M", "CUP_1200Rnd_TE1_Green_Tracer_30x113mm_M789_HEDP_M", "CUP_1200Rnd_TE1_Yellow_Tracer_30x113mm_M789_HEDP_M", "CUP_1200Rnd_TE1_White_Tracer_30x113mm_M789_HEDP_M" };
        ballisticsComputer = "1 + 2 + 16";
        canLock = 0;
        reloadTime = 0.096;
        modes[] = { "close", "short", "medium", "far", "manual", "burst_15", "burst_25" };
        cursorAim = "EmptyCursor";
        class GunParticles {
            class EffectSmokeLeft {
                effectName = "MachineGun2";
                positionName = "usti hlavne";
                directionName = "gun_smoke_left";
            };
            class EffectSmokeRight {
                effectName = "MachineGun2";
                positionName = "usti hlavne";
                directionName = "gun_smoke_right";
            };
            class EffectCartridge {
                positionName = "gun_eject";
                directionName = "gun_eject_dir";
                effectName = "MachineGunCartridge1";
            };
        };
        class manual : CannonCore {
            displayName = "Burst 10";
            textureType = "semi";
            burst = 10;
            soundBurst = 0;
            dispersion = 0.00015;
        };
        class burst_15 : manual {
            displayName = "Burst 20";
            textureType = "burst";
            burst = 20;
        };
        class burst_25 : manual {
            displayName = "Full";
            textureType = "fullAuto";
            burst = 1;
        };
    };
    class MGun;
    class CUP_Vacannon_M621_AW159_veh : CannonCore {
        class GunParticles {
            class FirstEffect {
                effectName = "machinegun1";
                positionName = "muzzle_1";
                directionName = "chamber_1";
            };
            class EffectCartridge {
                positionName = "eject_1";
                directionName = "eject_1_dir";
                effectName = "MachineGunCartridge";
            };
        };
        cartridgePos = "eject_1";
        cartridgeVel = "eject_1_dir";
        class manual : MGun {
            class StandardSound {
                begin1[] = { "A3\Sounds_F\arsenal\weapons_vehicles\gatling_20mm\20mm_01_burst", 3.98107, 1, 1300, { 2, 35740 } };
                soundBegin[] = { "begin1", 1 };
                closure1[] = { "A3\Sounds_F\weapons\Closure\sfx10", 0.63095737, 1, 20 };
                closure2[] = { "A3\sounds_f\weapons\closure\sfx11", 0.63095737, 1.2, 20 };
                soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            };
        };
    };
    class CUP_Vmlauncher_FFAR_veh;
    class CUP_Vmlauncher_CRV7_veh : CUP_Vmlauncher_FFAR_veh {
        class Single;
        class Double : Single {
            displayName = "Ripple 2";
        };
        class Quadruple : Single {
            displayName = "Ripple 4";
        };
    };
    class CUP_Vlmg_M240_veh : MGun {
        displayName = "L7A2";
        magazines[] = { "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_1200Rnd_TE4_White_Tracer_762x51_M240_M", "CUP_100Rnd_TE4_White_Tracer_762x51_M240_M", "CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M", , "UK3CB_BAF_762_200Rnd_T", "UK3CB_BAF_762_200Rnd", "UK3CB_BAF_762_200Rnd_Blank", "UK3CB_BAF_762_100Rnd_T", "UK3CB_BAF_762_100Rnd", "UK3CB_BAF_762_100Rnd_Blank", "UK3CB_BAF_762_100Rnd_EL", "UK3CB_BAF_762_100Rnd_T_EL", "UK3CB_BAF_762_200Rnd_EL", "UK3CB_BAF_762_200Rnd_T_EL" };
        class manual : MGun {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_CoaxMG_Closure_SoundSet", "DS_CoaxMG_Shot_SoundSet", "DS_lmg1_Tail_SoundSet" };
            };
        };
    };
    class HMG_M2;
    class CUP_Vhmg_M2_veh : HMG_M2 {
        displayName = "L111A1";
        magazines[] = { "CUP_100Rnd_127x99_M", "CUP_100Rnd_TE4_Red_Tracer_127x99_M", "CUP_100Rnd_TE4_Green_Tracer_127x99_M", "CUP_100Rnd_TE4_Yellow_Tracer_127x99_M", "CUP_100Rnd_TE4_White_Tracer_127x99_M", "CUP_100Rnd_TE1_Red_Tracer_127x99_M", "CUP_100Rnd_TE1_Green_Tracer_127x99_M", "CUP_100Rnd_TE1_Yellow_Tracer_127x99_M", "CUP_100Rnd_TE1_White_Tracer_127x99_M", "CUP_200Rnd_TE1_Red_Tracer_127x99_M", "UK3CB_BAF_127_100Rnd" };
        class manual : MGun {
            class StandardSound {
                soundSetShot[] = { "DS_HMG_Shot_SoundSet", "DS_sniper1_Tail_SoundSet" };
            };
        };
    };
    class GMG_20mm;
    class GMG_F;
    class CUP_Vhmg_AGS30_veh : GMG_20mm {
        class manual : GMG_F {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_GMG_Shot_SoundSet", "DS_mmg1_Tail_SoundSet" };
            };
        };
    };
    class CUP_Vgmg_MK19_veh : CUP_Vhmg_AGS30_veh {
        displayName = "L134A1";
        magazines[] = { "CUP_48Rnd_40mm_MK19_M", "CUP_32Rnd_40mm_MK19_M", "CUP_96Rnd_40mm_MK19_M", "UK3CB_BAF_32Rnd_40mm_G_Box" };
    };
    class MGunCore;
    class CUP_Vlmg_M134_veh : MGunCore {
        class LowROF : Mode_FullAuto {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_Minigun762_Shot_SoundSet", "DS_mmg1_Tail_SoundSet" };
            };
        };
        class HighROF : LowROF {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_Minigun762_Shot_SoundSet", "DS_mmg1_Tail_SoundSet" };
            };
        };
    };

    class gatling_30mm_base : CannonCore {
        class LowROF : Mode_FullAuto {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet", "DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class close : LowROF {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet", "DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class near : close {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet", "DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class short : close {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet", "DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class medium : close {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet", "DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class far : close {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet", "DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
    };

    class Binocular;
    class UK3CB_BAF_Soflam_Laserdesignator : Binocular {
        distanceZoomMax = 10000;
    };

    // AA weapons range changes
    // Ural ZU-23, BMP-2 ZU-23, ZU-23
    class CUP_Vacannon_2A14_veh : CannonCore {
        class manual;
        class close : manual {
            midRange = 200;  // 300
            maxRange = 500;  // 600
            aiDispersionCoefX = 5;
            aiDispersionCoefY = 5;
        };
        class short : close {
            minRange = 300;  // 400
            midRange = 500;  // 600
            maxRange = 800;  // 900
            aiDispersionCoefX = 6;
            aiDispersionCoefY = 6;
        };
        class medium : close {
            minRange = 600;   // 700
            midRange = 800;   // 900
            maxRange = 1100;  // 1200
            aiDispersionCoefX = 7;
            aiDispersionCoefY = 7;
        };
        class far : close {
            minRange = 900;   // 1000
            midRange = 1100;  // 1200
            maxRange = 1400;  // 1500
            aiDispersionCoefX = 8;
            aiDispersionCoefY = 8;
        };
    };
    // Tunguska
    class CUP_Vacannon_GSh302K_veh;
    class CUP_Vacannon_2A38M_veh : CUP_Vacannon_GSh302K_veh {
        class LowROF;
        class close : LowROF {
            midRange = 50;   // 150
            maxRange = 200;  // 300
            aiDispersionCoefX = 5;
            aiDispersionCoefY = 5;
        };
        class near : close {
            midRange = 150;  // 250
            maxRange = 300;  // 400
            aiDispersionCoefX = 5;
            aiDispersionCoefY = 5;
        };
        class short : close {
            minRange = 100;  // 200
            midRange = 300;  // 400
            maxRange = 500;  // 600
            aiDispersionCoefX = 6;
            aiDispersionCoefY = 6;
        };
        class medium : close {
            minRange = 300;  // 400
            midRange = 600;  // 700
            maxRange = 800;  // 900
            aiDispersionCoefX = 7;
            aiDispersionCoefY = 7;
        };
        class far : close {
            minRange = 700;   // 800
            midRange = 900;   // 1000
            maxRange = 1400;  // 1500
            aiDispersionCoefX = 8;
            aiDispersionCoefY = 8;
        };
    };
    // ZSU-23-4
    class CUP_Vacannon_AZP23_veh : CannonCore {
        class manual;
        class close : manual {
            midRange = 200;  // 300
            maxRange = 500;  // 600
            aiDispersionCoefX = 5;
            aiDispersionCoefY = 5;
        };
        class short : close {
            minRange = 300;  // 400
            midRange = 500;  // 600
            maxRange = 800;  // 900
            aiDispersionCoefX = 6;
            aiDispersionCoefY = 6;
        };
        class medium : close {
            minRange = 600;   // 700
            midRange = 800;   // 900
            maxRange = 1100;  // 1200
            aiDispersionCoefX = 7;
            aiDispersionCoefY = 7;
        };
        class far : close {
            minRange = 900;   // 1000
            midRange = 1100;  // 1200
            maxRange = 1400;  // 1500
            aiDispersionCoefX = 8;
            aiDispersionCoefY = 8;
        };
    };
    // Tunguska
    class missiles_titan;
    class CUP_Vmlauncher_9M311_veh : missiles_titan {
        midRange = 1000;   // 4500
        maxRange = 5000;   // 8000
        aiRateOfFire = 7;  // 5
    };
    class CUP_Vmlauncher_Igla_twice_veh : missiles_titan {
        midRange = 1000;   // 3100
        maxRange = 4000;   // 5200
        aiRateOfFire = 7;  // 5
    };
    class CUP_Vmlauncher_Stinger_vehicle_veh : missiles_titan {
        midRange = 1000;   // 3100
        maxRange = 4000;   // 5200
        aiRateOfFire = 7;  // 5
    };
    class CUP_Vmlauncher_RBS70_veh : missiles_titan {
        midRange = 1000;   // 3100
        maxRange = 4000;   // 5200
        aiRateOfFire = 7;  // 5
    };
    class CUP_launch_Igla_loaded : Launcher_Base_F {
        midRange = 1000;   // 2500
        maxRange = 3000;   // 4800
        aiRateOfFire = 7;  // 5
    };
    class CUP_launch_FIM92Stinger_loaded : Launcher_Base_F {
        midRange = 1000;   // 2500
        maxRange = 3000;   // 4800
        aiRateOfFire = 7;  // 5
    };
    class CUP_launch_9K32Strela_loaded : Launcher_Base_F {
        midRange = 1000;   // 2500
        maxRange = 3000;   // 4800
        aiRateOfFire = 7;  // 5
    };

    // Weapons for virtual army faction
    class CUP_arifle_M4A1;
    class CUP_arifle_M4A1_Acog : CUP_arifle_M4A1 {
        scopeArsenal = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "CUP_optic_RCO";
            };
        };
    };
    class CUP_lmg_M240;
    class CUP_lmg_M240_LDS : CUP_lmg_M240 {
        scopeArsenal = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "UK3CB_BAF_SpecterLDS";
            };
        };
    };
    class CUP_launch_FIM92Stinger_Rubber : CUP_launch_FIM92Stinger_loaded {
        scopeArsenal = 1;
        magazines[] = { "CUP_Stinger_M_Rubber" };
        ace_overpressure_damage = 0;
    };
    class CUP_Vmlauncher_Stinger_vehicle_veh_Rubber : CUP_Vmlauncher_Stinger_vehicle_veh {
        magazines[] = { "CUP_4Rnd_Stinger_M_Rubber" };
    };
    class CUP_arifle_AK_Base : Rifle_Base_F {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.3, 0.35 };
                iconScale = 0.2;
            };
        };
    };
    class CUP_arifle_AKS_Base : CUP_arifle_AK_Base {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.3, 0.35 };
                iconScale = 0.2;
            };
        };
    };
    class CUP_arifle_AK107_Base : CUP_arifle_AK_Base {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.3, 0.35 };
                iconScale = 0.2;
            };
        };
    };

#include "CfgWeaponsPrivate.hpp"
};
