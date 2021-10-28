class CfgPatches
{
	class ModularVestSystemBelts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Characters"
		};
	};
};

class cfgVehicles
{	
	class NylonKnifeSheath;
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class Modular_Belt_Base: Clothing
	{
		scope = 0;
		displayName = "Combat Belt";
		descriptionShort = "The MVS Combat Belt, a rugged piece of equipment with plenty of molle space for pouches and warfighter tools";
		model = "ModularVestSystem\data\Belt\ModularBeltSystem_g.p3d";
		attachments[] = {"Chemlight","modular_pouch_2","VestPouch","Belt_Back","modular_pouch_10","Belt_Right","WalkieTalkie"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips","MVS_belt"};
		itemInfo[] = {"Clothing","Hips"};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		itemSize[] = {4,2};
		weight = 700;
		allowOwnedCargoManipulation=1;
		lootCategory = "Crafted";
		quickBarBonus = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co.paa",
			"ModularVestSystem\data\Belt\belt_co.paa",
			"ModularVestSystem\data\Belt\belt_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\Belt\belt.rvmat"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\Belt\belt.rvmat"}},
                        {0.7,{"ModularVestSystem\data\Belt\belt.rvmat"}},
                        {0.5,{"ModularVestSystem\data\Belt\belt_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\Belt\belt_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\Belt\belt_destruct.rvmat"}}
                    };
				};
			};
		};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Belt\ModularBeltSystem.p3d";
			female = "ModularVestSystem\data\Belt\ModularBeltSystem.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Belt_OD: Modular_Belt_Base
	{
		scope = 2;
		displayName = "Combat Belt - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co.paa",
			"ModularVestSystem\data\Belt\belt_co.paa",
			"ModularVestSystem\data\Belt\belt_co.paa"
		};
	};
	class MVS_Belt_ERDL: Modular_Belt_Base
	{
		scope = 2;
		displayName = "Combat Belt - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co_ERDL.paa",
			"ModularVestSystem\data\Belt\belt_co_ERDL.paa",
			"ModularVestSystem\data\Belt\belt_co_ERDL.paa"
		};
	};
	class MVS_Belt_Tan: Modular_Belt_Base
	{
		scope = 2;
		displayName = "Combat Belt - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co_Tan.paa",
			"ModularVestSystem\data\Belt\belt_co_Tan.paa",
			"ModularVestSystem\data\Belt\belt_co_Tan.paa"
		};
	};
	class MVS_Belt_Black: Modular_Belt_Base
	{
		scope = 2;
		displayName = "Combat Belt - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co_Black.paa",
			"ModularVestSystem\data\Belt\belt_co_Black.paa",
			"ModularVestSystem\data\Belt\belt_co_Black.paa"
		};
	};
	class MVS_Belt_Snow: Modular_Belt_Base
	{
		scope = 2;
		displayName = "Combat Belt - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co_snow.paa",
			"ModularVestSystem\data\Belt\belt_co_snow.paa",
			"ModularVestSystem\data\Belt\belt_co_snow.paa"
		};
	};
	class MVS_Belt_Multicam: Modular_Belt_Base
	{
		scope = 2;
		displayName = "Combat Belt - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co_MC.paa",
			"ModularVestSystem\data\Belt\belt_co_MC.paa",
			"ModularVestSystem\data\Belt\belt_co_MC.paa"
		};
	};
	class MVS_Belt_Multicam_Black: Modular_Belt_Base
	{
		scope = 2;
		displayName = "Combat Belt - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co_MC_Black.paa",
			"ModularVestSystem\data\Belt\belt_co_MC_Black.paa",
			"ModularVestSystem\data\Belt\belt_co_MC_Black.paa"
		};
	};
	class MVS_Belt_Multicam_Tropic: Modular_Belt_Base
	{
		scope = 2;
		displayName = "Combat Belt - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co_MC_Tropic.paa",
			"ModularVestSystem\data\Belt\belt_co_MC_Tropic.paa",
			"ModularVestSystem\data\Belt\belt_co_MC_Tropic.paa"
		};
	};
	
	class PlateCarrierHolster;
	class MVS_Holster_OD: PlateCarrierHolster
	{
		displayName = "Holster - OD";
		descriptionShort = "Holster - OD";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co.paa",
			"ModularVestSystem\data\Belt\holster_co.paa"
		};
	};
	class MVS_Holster_ERDL: PlateCarrierHolster
	{
		displayName = "Holster - ERDL";
		descriptionShort = "Holster - ERDL";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co_ERDL.paa",
			"ModularVestSystem\data\Belt\holster_co_ERDL.paa"
		};
	};
	class MVS_Holster_Tan: PlateCarrierHolster
	{
		displayName = "Holster - Tan";
		descriptionShort = "Holster - Tan";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co_Tan.paa",
			"ModularVestSystem\data\Belt\holster_co_Tan.paa"
		};
	};
	class MVS_Holster_Black: PlateCarrierHolster
	{
		displayName = "Holster - Black";
		descriptionShort = "Holster - Black";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co_Black.paa",
			"ModularVestSystem\data\Belt\holster_co_Black.paa"
		};
	};
	class MVS_Holster_Snow: PlateCarrierHolster
	{
		displayName = "Holster - Snow";
		descriptionShort = "Holster - Snow";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co_snow.paa",
			"ModularVestSystem\data\Belt\holster_co_snow.paa"
		};
	};
	class MVS_Holster_Multicam: PlateCarrierHolster
	{
		displayName = "Holster - Multicam";
		descriptionShort = "Holster - Multicam";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co_MC.paa",
			"ModularVestSystem\data\Belt\holster_co_MC.paa"
		};
	};
	class MVS_Holster_Multicam_Black: PlateCarrierHolster
	{
		displayName = "Holster - Multicam Black";
		descriptionShort = "Holster - Multicam Black";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co_MC_Black.paa",
			"ModularVestSystem\data\Belt\holster_co_MC_Black.paa"
		};
	};
	class MVS_Holster_Multicam_Tropic: PlateCarrierHolster
	{
		displayName = "Holster - Multicam Tropic";
		descriptionShort = "Holster - Multicam Tropic";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co_MC_Tropic.paa",
			"ModularVestSystem\data\Belt\holster_co_MC_Tropic.paa"
		};
	};
	
	class MVS_Sheath_Base: NylonKnifeSheath
	{
		scope = 0;
		displayName = "Sheath";
		descriptionShort = "$STR_cfgvehicles_knifesheath1";
		model = "ModularVestSystem\data\Belt\knife_sheath.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\Belt\sheath.rvmat"
        };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\Belt\sheath.rvmat"}},
                        {0.7,{"ModularVestSystem\data\Belt\sheath.rvmat"}},
                        {0.5,{"ModularVestSystem\data\Belt\sheath_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\Belt\sheath_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\Belt\sheath_destruct.rvmat"}}
                    };
				};
			};
		};		
	};
	class MVS_Sheath_OD: MVS_Sheath_Base
	{
		displayName = "Sheath - OD";
		descriptionShort = "Sheath - OD";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co.paa"
		};
	};
	class MVS_Sheath_ERDL: MVS_Sheath_Base
	{
		displayName = "Sheath - ERDL";
		descriptionShort = "Sheath - ERDL";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_ERDL.paa"
		};
	};
	class MVS_Sheath_Tan: MVS_Sheath_Base
	{
		displayName = "Sheath - Tan";
		descriptionShort = "Sheath - Tan";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_Tan.paa"
		};

	};
	class MVS_Sheath_Black: MVS_Sheath_Base
	{
		displayName = "Sheath - Black";
		descriptionShort = "Sheath - Black";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_Black.paa"
		};

	};
	class MVS_Sheath_Snow: MVS_Sheath_Base
	{
		displayName = "Sheath - Snow";
		descriptionShort = "Sheath - Snow";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_snow.paa"
		};
	};
	class MVS_Sheath_Multicam: MVS_Sheath_Base
	{
		displayName = "Sheath - Multicam";
		descriptionShort = "Sheath - Multicam";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_MC.paa"
		};

	};
	class MVS_Sheath_Multicam_Tropic: MVS_Sheath_Base
	{
		displayName = "Sheath - Multicam Tropic";
		descriptionShort = "Sheath - Multicam Tropic";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_MC_Tropic.paa"
		};
	};
	class MVS_Sheath_Multicam_Black: MVS_Sheath_Base
	{
		displayName = "Sheath - Multicam Black";
		descriptionShort = "Sheath - Multicam Black";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_MC_Black.paa"
		};
	};
};