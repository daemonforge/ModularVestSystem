class CfgPatches
{
	class ModularVestSystem
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Scripts",
			"DZ_Characters_Headgear",
			"DZ_Gear_Drinks",
			"DZ_Gear_Medical",
			"DZ_Gear_Containers",
			"DZ_Weapons_Magazines"
		};
	};
};

class CfgMods
{
	class ModularVestSystem_Base
	{
		dir = "ModularVestSystem";
		name = "ModularVestSystem";
		credits = "DaddyPrapor";
		author = "FutureSixx";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"ModularVestSystem/scripts/4_World"};
			};
		};
	};
};
class cfgVehicles
{	
	class Clothing;
	class Bottle_Base;
	class Container_Base;
	class GasMask;
	class BalaclavaMask_ColorBase;
	class BaseballCap_ColorBase;
	class BDUPants;
	class TacticalShirt_ColorBase;
	class PlateCarrierHolster;
	class GorkaEJacket_Flat;
	class CargoPants_Beige;
	class TacticalShirt_Olive;
	class Mich2001Helmet;
	class GP5GasMask;
	class FlatCap_Black;
	class BoonieHat_Olive;
	class MVS_Canteen_Base: Bottle_Base
	{
		scope=0;
		displayName="Canteen";
		model="ModularVestSystem\data\canteen\MVS_Canteen.p3d";
		hiddenSelections[] = {"zbytek"};
		inventorySlot[] = {"Belt_Left"};
		weight = 250;
		itemSize[] = {2,2};
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		isMeleeWeapon = 1;
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\canteen\canteen_co.paa"};	
        hiddenSelectionsMaterials[] = {"ModularVestSystem\data\canteen\canteen.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\canteen\canteen.rvmat"}},
                        {0.7,{"ModularVestSystem\data\canteen\canteen.rvmat"}},
                        {0.5,{"ModularVestSystem\data\canteen\canteen_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\canteen\canteen_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\canteen\canteen_destruct.rvmat"}}
                    };
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Canteen_in_B
				{
					soundSet = "Canteen_in_B_SoundSet";
					id = 202;
				};
				class Canteen_in_C
				{
					soundSet = "Canteen_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class Canteen_out_A
				{
					soundSet = "Canteen_out_A_SoundSet";
					id = 205;
				};
				class Canteen_out_B
				{
					soundSet = "Canteen_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};		
	};
	class ModularChestRig_Base: Clothing
	{
		scope = 0;
		displayName = "Modular Vest";
		descriptionShort = "The Modular Vest System (MVS) is a chest rig designed to accept multiple pouches to enhance warfighter capabilities.";
		model = "ModularVestSystem\data\ModularVestRig_g.p3d";
		attachments[] = {"Belt_Left","VestGrenadeA","modular_pouch_2","VestPouch","modular_pouch_4","modular_pouch_5","modular_pouch_6","patch_01"};
		inventorySlot[] = {"Vest","MVS_vest"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 2400;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,5};
		quickBarBonus = 3;
		varWetMax = 0.79;
		heatIsolation = 0.75;
		repairableWithKits[] = {3};
		repairCosts[] = {25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa"};
        hiddenSelectionsMaterials[]={"ModularVestSystem\data\vestTextures\chestrig.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\vestTextures\chestrig.rvmat"}},
                        {0.7,{"ModularVestSystem\data\vestTextures\chestrig.rvmat"}},
                        {0.5,{"ModularVestSystem\data\vestTextures\chestrig_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\vestTextures\chestrig_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\vestTextures\chestrig_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\ModularVestRig.p3d";
			female = "ModularVestSystem\data\ModularVestRig_f.p3d";
		};
	};
	class MVS_ChestRig_OD: ModularChestRig_Base
	{
		scope = 2;
		displayName = "Chestrig";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co.paa"};
	};
	class MVS_ChestRig_ERDL: ModularChestRig_Base
	{
		scope = 2;
		displayName = "Chestrig";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co_ERDL.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_ERDL.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_ERDL.paa"};
	};
	class MVS_ChestRig_Tan: ModularChestRig_Base
	{
		scope = 2;
		displayName = "Chestrig";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Tan.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Tan.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Tan.paa"};
	};
	class MVS_ChestRig_Black: ModularChestRig_Base
	{
		scope = 2;
		displayName = "Chestrig";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Black.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Black.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Black.paa"};
	};
	class MVS_ChestRig_Snow: ModularChestRig_Base
	{
		scope = 2;
		displayName = "Chestrig";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Snow.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Snow.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_Snow.paa"};
	};
	class MVS_ChestRig_Multicam: ModularChestRig_Base
	{
		scope = 2;
		displayName = "Chestrig";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC.paa"};
	};
	class MVS_ChestRig_Multicam_Tropic: ModularChestRig_Base
	{
		scope = 2;
		displayName = "Chestrig";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Tropic.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Tropic.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Tropic.paa"};
	};
	class MVS_ChestRig_Multicam_Black: ModularChestRig_Base
	{
		scope = 2;
		displayName = "Chestrig";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Black.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Black.paa","ModularVestSystem\data\vestTextures\MVS_Chestrig_co_MC_Black.paa"};
	};
	class ModularVestSystem_Base: Clothing
	{
		scope = 0;
		displayName = "Modular Plate Vest";
		descriptionShort = "The Modular Vest System (MVS) is a plate carrier designed to accept multiple pouches to enhance warfighter capabilities.";
		model = "ModularVestSystem\data\ModularVestSystem_g.p3d";
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {"Belt_Left","VestGrenadeA","VestPouch","modular_pouch_2","modular_pouch_4","modular_pouch_5","modular_pouch_6","patch_01"};
		inventorySlot[] = {"Vest","MVS_vest"};
		weight = 5500;
		itemSize[] = {4,4};
		varWetMax = 0.49;
		heatIsolation = 0.7;
		repairableWithKits[] = {3};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa","ModularVestSystem\data\vestTextures\vest_co.paa","ModularVestSystem\data\vestTextures\vest_co.paa"};
        hiddenSelectionsMaterials[]= {"ModularVestSystem\data\vestTextures\vest.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\vestTextures\vest.rvmat"}},
                        {0.7,{"ModularVestSystem\data\vestTextures\vest.rvmat"}},
                        {0.5,{"ModularVestSystem\data\vestTextures\vest_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\vestTextures\vest_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\vestTextures\vest_destruct.rvmat"}}
                    };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};	
		class ClothingTypes
		{
			male = "ModularVestSystem\data\ModularVestSystem.p3d";
			female = "ModularVestSystem\data\ModularVestSystem.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Combat_Vest_OD: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Combat Vest";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa","ModularVestSystem\data\vestTextures\vest_co.paa","ModularVestSystem\data\vestTextures\vest_co.paa"};
	};
	class MVS_Combat_Vest_ERDL: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Combat Vest";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa","ModularVestSystem\data\vestTextures\vest_co_ERDL.paa","ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"};
	};
	class MVS_Combat_Vest_Tan: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Combat Vest";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_tan.paa","ModularVestSystem\data\vestTextures\vest_co_tan.paa","ModularVestSystem\data\vestTextures\vest_co_tan.paa"};
	};
	class MVS_Combat_Vest_Black: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Combat Vest";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_2.paa","ModularVestSystem\data\vestTextures\vest_co_2.paa","ModularVestSystem\data\vestTextures\vest_co_2.paa"};
	};
	class MVS_Combat_Vest_Snow: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Combat Vest";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_snow.paa","ModularVestSystem\data\vestTextures\vest_co_snow.paa","ModularVestSystem\data\vestTextures\vest_co_snow.paa"};
	};
	class MVS_Combat_Vest_Multicam: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Combat Vest";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC.paa","ModularVestSystem\data\vestTextures\vest_co_MC.paa","ModularVestSystem\data\vestTextures\vest_co_MC.paa"};
	};
	class MVS_Combat_Vest_Multicam_Black: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Combat Vest";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa","ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa","ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"};
	};
	class MVS_Combat_Vest_Multicam_Tropic: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Combat Vest";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa","ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa","ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"};
	};
	class ModularVestSystem_Heavy: Clothing
	{
		scope = 2;
		displayName = "Heavy Modular Vest";
		descriptionShort = "The Modular Vest System (MVS) is a plate carrier designed to accept multiple pouches to enhance warfighter capabilities.";
		model = "ModularVestSystem\data\ModularVestSystemHeavy_g.p3d";
		
		attachments[] = {"Belt_Left","VestGrenadeA","modular_pouch_11","modular_pouch_6","Belt_Right","patch_01"};
		inventorySlot[] = {"Vest","MVS_vest"};
		
		weight = 13500;
		itemSize[] = {5,5};
		varWetMax = 0.49;
		heatIsolation = 0.7;
		repairableWithKits[] = {3};		
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] ={"ModularVestSystem\data\vestTextures\MVSHeavy_co.paa","ModularVestSystem\data\vestTextures\MVSHeavy_co.paa","ModularVestSystem\data\vestTextures\MVSHeavy_co.paa"};	
        hiddenSelectionsMaterials[]={"ModularVestSystem\data\vestTextures\MVSHeavy.rvmat"};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\vestTextures\MVSHeavy.rvmat"}},
                        {0.7,{"ModularVestSystem\data\vestTextures\MVSHeavy.rvmat"}},
                        {0.5,{"ModularVestSystem\data\vestTextures\MVSHeavy_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\vestTextures\MVSHeavy_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\vestTextures\MVSHeavy_destruct.rvmat"}}
                    };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.17;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\ModularVestSystemHeavy.p3d";
			female = "ModularVestSystem\data\ModularVestSystemHeavy.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Combat_Vest_Heavy_OD: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Heavy Vest";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVSHeavy_co.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_ERDL: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Heavy Vest";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_ERDL.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_ERDL.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_ERDL.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_Tan: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Heavy Vest";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Tan.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Tan.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Tan.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_Black: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Heavy Vest";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Black.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Black.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Black.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_Snow: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Heavy Vest -Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Snow.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Snow.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_Snow.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_Multicam: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Heavy Vest";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_Multicam_Tropic: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Heavy Vest";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Tropic.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Tropic.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Tropic.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_Multicam_Black: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Heavy Vest Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Black.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Black.paa",
			"ModularVestSystem\data\vestTextures\MVSHeavy_co_MC_Black.paa"
		};
	};
	class MVS_Pouch_Base: Container_Base
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		model = "ModularVestSystem\data\modular_pouch_g.p3d";
		rotationFlags=0;
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,4};
		inventorySlot[] = {"VestPouch","modular_pouch_2"};
		weight=250;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
        hiddenSelectionsMaterials[]={"ModularVestSystem\data\vestTextures\vest.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\vestTextures\vest.rvmat"}},
                        {0.7,{"ModularVestSystem\data\vestTextures\vest.rvmat"}},
                        {0.5,{"ModularVestSystem\data\vestTextures\vest_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\vestTextures\vest_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\vestTextures\vest_destruct.rvmat"}}
                    };
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class Modular_Pouch_Base: MVS_Pouch_Base
	{
		scope = 0;
		displayName = "Magazine Pouch";
		descriptionShort = "The MVS magazine pouch, capable of holding single stack magazines, up to drum-size";
		model = "ModularVestSystem\data\modular_pouch_g.p3d";
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,4};
		inventorySlot[] = {"VestPouch","modular_pouch_2"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
		hiddenSelectionsMaterials[]={"ModularVestSystem\data\vestTextures\vest.rvmat"};
	};
	class MVS_Magazine_Pouch_OD: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
	};
	class MVS_Magazine_Pouch_ERDL: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"};
	};
	class MVS_Magazine_Pouch_Tan: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_tan.paa"};
	};	
	class MVS_Magazine_Pouch_Black: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_2.paa"};
	};
	class MVS_Magazine_Pouch_Snow: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_snow.paa"};
	};
	class MVS_Magazine_Pouch_Multicam: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC.paa"};
	};
	class MVS_Magazine_Pouch_Multicam_Black: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"};
	};
	class MVS_Magazine_Pouch_Multicam_Tropic: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"};
	};
	class MVS_Molle_Panel_Base: MVS_Pouch_Base
	{
		scope = 0;
		displayName = "Molle Panel";
		descriptionShort = "The MVS molle panel, which attaches to the MVS belt, can store up to four grenades or 40mm rounds from DayZ Expansion mod.";
		model = "ModularVestSystem\data\MVS_Molle_Panel.p3d";
		rotationFlags=0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		allowOwnedCargoManipulation = 1;
		itemSize[] = {2,3};
		itemsCargoSize[] = {};
		weight=250;
		inventorySlot[] = {"modular_pouch_10"};
		attachments[] = {"VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
		hiddenSelectionsMaterials[]={"ModularVestSystem\data\vestTextures\vest.rvmat"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};	
	class MVS_Molle_Panel_OD: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
	};
	class MVS_Molle_Panel_Black: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_2.paa"};
	};
	class MVS_Molle_Panel_Tan: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_Tan.paa"};
	};
	class MVS_Molle_Panel_ERDL: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"};
	};
	class MVS_Molle_Panel_Snow: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_Snow.paa"};
	};
	class MVS_Molle_Panel_Multicam: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC.paa"};
	};
	class MVS_Molle_Panel_Multicam_Tropic: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"};
	};
	class MVS_Molle_Panel_Multicam_Black: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"};
	};	
	class Modular_Pouch_Base_Taco: MVS_Pouch_Base
	{
		scope = 0;
		displayName = "Raid Pouch";
		descriptionShort = "The MVS Raid pouch, capable of holding Pliers, a Screwdriver, and lockpick";
		model = "ModularVestSystem\data\modular_pouch_12.p3d";
		attachments[] = {"MVS_Screwdriver","MVS_Pliers","Screwdriver1","Pliers1","MVS_Lockpick"};
		rotationFlags=0;		
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,4};
		inventorySlot[] = {"modular_pouch_2","modular_pouch_12","VestPouch"};
		weight=250;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co.paa"};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\vestTextures\taco.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\vestTextures\taco.rvmat"}},
						{0.7,{"ModularVestSystem\data\vestTextures\taco.rvmat"}},
						{0.5,{"ModularVestSystem\data\vestTextures\taco_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\vestTextures\taco_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\vestTextures\taco_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class MVS_Taco_Pouch_OD: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co.paa"};
	};	
	class MVS_Taco_Pouch_ERDL: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co_ERDL.paa"};
	};	
	class MVS_Taco_Pouch_Tan: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co_tan.paa"};
	};	
	class MVS_Taco_Pouch_Black: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co_black.paa"};
	};
	class MVS_Taco_Pouch_Snow: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co_snow.paa"};
	};
	class MVS_Taco_Pouch_Multicam: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co_MC.paa"};
	};
	class MVS_Taco_Pouch_Multicam_Tropic: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co_MC_Tropic.paa"};
	};
	class MVS_Taco_Pouch_Multicam_Black: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\taco_co_MC_Black.paa"};
	};
	class Modular_Pouch_Base_Admin: MVS_Pouch_Base
	{
		scope = 0;
		displayName = "Magazine Pouch";
		descriptionShort = "The MVS admin pouch, good for storing quick access items like NVGs, batteries, etc.";
		model = "ModularVestSystem\data\modular_pouch_4.p3d";
		itemSize[] = {2,3};
		itemsCargoSize[] = {3,4};
		inventorySlot[] = {"modular_pouch_4","modular_pouch_9","modular_pouch_10","modular_pouch_13"};
		weight=250;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
		hiddenSelectionsMaterials[]={"ModularVestSystem\data\vestTextures\vest.rvmat"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	
	class MVS_Admin_Pouch_OD: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
	};	
	class MVS_Admin_Pouch_ERDL: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"};
	};	
	class MVS_Admin_Pouch_Tan: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_tan.paa"};
	};		
	class MVS_Admin_Pouch_Black: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_2.paa"};
	};
	class MVS_Admin_Pouch_Snow: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_snow.paa"};
	};
	class MVS_Admin_Pouch_Multicam: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC.paa"};
	};
	class MVS_Admin_Pouch_Multicam_Black: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"};
	};
	class MVS_Admin_Pouch_Multicam_Tropic: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"};
	};
	class Modular_Pouch_Base_Heavy: MVS_Pouch_Base
	{
		scope = 0;
		displayName = "Heavy LMG Pouch";
		descriptionShort = "The MVS LMG pouch, good for storing belt-fed ammunition or drum mags";
		model = "ModularVestSystem\data\modular_pouch_11.p3d";
		itemSize[] = {4,5};
		itemsCargoSize[] = {6,5};
		inventorySlot[] = {"modular_pouch_11"};
		weight=450;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co.paa"};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\vestTextures\vestheavy.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\vestTextures\vestheavy.rvmat"}},
						{0.7,{"ModularVestSystem\data\vestTextures\vestheavy.rvmat"}},
						{0.5,{"ModularVestSystem\data\vestTextures\vestheavy_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\vestTextures\vestheavy_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\vestTextures\vestheavy_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class MVS_Heavy_Pouch_OD: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co.paa"};
	};	
	class MVS_Heavy_Pouch_ERDL: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co_ERDL.paa"};
	};
	
	class MVS_Heavy_Pouch_Tan: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co_tan.paa"};
	};		
	class MVS_Heavy_Pouch_Black: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co_2.paa"};
	};
	class MVS_Heavy_Pouch_Snow: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co_snow.paa"};
	};
	class MVS_Heavy_Pouch_Multicam: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co_MC.paa"};
	};
	class MVS_Heavy_Pouch_Multicam_Tropic: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co_MC_Tropic.paa"};
	};
	class MVS_Heavy_Pouch_Multicam_Black: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vestheavy_co_MC_Black.paa"};
	};
	class Modular_Pouch_Base_Utility: MVS_Pouch_Base
	{
		scope = 0;
		displayName = "Magazine Pouch";
		descriptionShort = "The MVS utility pouch, good for storing a knife or multitool";
		model = "ModularVestSystem\data\modular_pouch_5.p3d";
		itemSize[] = {1,3};
		itemsCargoSize[] = {1,3};
		inventorySlot[] = {"modular_pouch_5"};
		weight=250;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
		hiddenSelectionsMaterials[]={"ModularVestSystem\data\vestTextures\vest.rvmat"};
	};
	class MVS_Utility_Pouch_OD: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co.paa"};
	};
	class MVS_Utility_Pouch_ERDL: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"};
	};
	class MVS_Utility_Pouch_Tan: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_tan.paa"};
	};	
	class MVS_Utility_Pouch_Black: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_2.paa"};
	};
	class MVS_Utility_Pouch_Snow: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_snow.paa"};
	};
	class MVS_Utility_Pouch_Multicam: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC.paa"};
	};
	class MVS_Utility_Pouch_Multicam_Black: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"};
	};
	class MVS_Utility_Pouch_Multicam_Tropic: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"};
	};
	class Modular_Pouch_Base_Medical: MVS_Pouch_Base
	{
		scope = 0;
		displayName = "Medical Pouch";
		descriptionShort = "The MVS medical pouch, which has three external attachment points for morphine, epinephrine, and bandages";
		model = "ModularVestSystem\data\modular_pouch_6.p3d";
		itemSize[] = {2,2};
		itemsCargoSize[] = {2,4};
		attachments[]={"morphine","epinephrine","MedicalBandage"};
		inventorySlot[] = {"modular_pouch_6","modular_pouch_9","modular_pouch_10","modular_pouch_13"};
		weight=250;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_medical.paa"};
	};
	class MVS_Medical_Pouch_OD: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_medical.paa"};
	};
	class MVS_Medical_Pouch_ERDL: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_ERDL_medical.paa"};
	};
	class MVS_Medical_Pouch_Tan: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_tan_medical.paa"};
	};	
	class MVS_Medical_Pouch_Black: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_2_medical.paa"};
	};
	class MVS_Medical_Pouch_Snow: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_snow_medical.paa"};
	};
	class MVS_Medical_Pouch_Multicam: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_medical.paa"};
	};
	class MVS_Medical_Pouch_Multicam_Black: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Black_medical.paa"};
	};
	class MVS_Medical_Pouch_Multicam_Tropic: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic_medical.paa"};
	};
	class MVS_Helmet_Base: Clothing
	{
		scope = 0;
		displayName = "Combat Helmet";
		descriptionShort = "The MICH-style combat helmet offers good ballistic protection, much like the MICH 2001 combat helmet";
		model = "ModularVestSystem\data\Helmets\Combat_Helmet_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[]={"NVG","patch_03","MVSBattery1","MVSBattery2","helmetFlashlight"};
		rotationFlags = 2;
		weight = 1800;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\Combat_Helmet_1.p3d";
			female = "ModularVestSystem\data\Helmets\Combat_Helmet_1.p3d";
		};
		hiddenSelections[] = {"camoground","camomale","camofemale","zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\do_helmets_co.paa","ModularVestSystem\data\Helmets\do_helmets_co.paa","ModularVestSystem\data\Helmets\do_helmets_co.paa","modularvestsystem\data\helmets\do_helmets_2_co.paa"};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Helmets\do_helmet.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Helmets\do_helmet.rvmat"}},
						{0.7,{"ModularVestSystem\data\Helmets\do_helmet.rvmat"}},
						{0.5,{"ModularVestSystem\data\Helmets\do_helmet_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Helmets\do_helmet_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Helmets\do_helmet_destruct.rvmat"}}
					};
				};
			};
		};
		class GlobalArmor
		{
			class Projectile
			{
				class Health
				{
					damage = 0.35;
				};
				class Blood
				{
					damage = 0.0;
				};
				class Shock
				{
					damage = 0.5;
				};
			};
			class Melee
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0.0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class Infected
			{
				class Health
				{
					damage = 0.25;
				};
				class Blood
				{
					damage = 0.0;
				};
				class Shock
				{
					damage = 0.25;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage = 0.5;
				};
				class Blood
				{
					damage = 0.0;
				};
				class Shock
				{
					damage = 0.26;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};		
	};
	class MVS_Helmet_01_Tan: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co_Tan.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_Tan.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_01_Tan_Worn: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet - Scuffed";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co_Tan_Worn.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_Tan_Worn.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_Tan_Worn.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_01_OD: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_01_Black: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co_Black.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_Black.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_01_Snow: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co_Snow.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_Snow.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_Snow.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_01_ERDL: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_01_Multicam: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co_MC.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_MC.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_MC.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_01_Multicam_Black: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_01_Multicam_Tropic: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\OpsCoreComtacs_co.paa"
		};
	};
	class MVS_Helmet_2_Base: Mich2001Helmet
	{
		scope = 0;
		displayName = "Combat Helmet 2";
		descriptionShort = "The MICH-style combat helmet offers good ballistic protection, much like the MICH 2001 combat helmet";
		model = "ModularVestSystem\data\Helmets\Combat_Helmet_2_g.p3d";
		attachments[]={"NVG","patch_03","helmetFlashlight"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 2;
		weight = 1800;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\Combat_Helmet_2.p3d";
			female = "ModularVestSystem\data\Helmets\Combat_Helmet_2.p3d";
		};
		hiddenSelections[] = {"camoground","camomale","camofemale"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa"};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Helmets\mvs_helmet_2.rvmat"};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Helmets\mvs_helmet_2.rvmat"}},
						{0.7,{"ModularVestSystem\data\Helmets\mvs_helmet_2.rvmat"}},
						{0.5,{"ModularVestSystem\data\Helmets\mvs_helmet_2_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Helmets\mvs_helmet_2_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Helmets\mvs_helmet_2_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.35;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};		
	};
	class MVS_Helmet_02_OD: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa"};
	};
	class MVS_Helmet_02_Tan: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_Tan_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_Tan_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_Tan_co.paa"};
	};
	class MVS_Helmet_02_Black: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_Black_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_Black_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_Black_co.paa"};
	};
	class MVS_Helmet_02_Multicam_Black: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Black_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Black_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Black_co.paa"};
	};
	class MVS_Helmet_02_Multicam: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_co.paa"};
	};
	class MVS_Helmet_02_Multicam_Tropic: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Tropic_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Tropic_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Tropic_co.paa"};
	};
	class MVS_Helmet_02_ERDL: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_ERDL_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_ERDL_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_ERDL_co.paa"};
	};
	class MVS_Helmet_02_Snow: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_Helmet_2_snow_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_snow_co.paa","ModularVestSystem\data\Helmets\MVS_Helmet_2_snow_co.paa"};
	};
	class MVS_6B47Helmet_Base: Clothing
	{
		scope = 0;
		displayName = "6B47 Helmet";
		descriptionShort = "The Russian-designed 6B47 helmet is a part of ‘Ratnik’ (‘Warrior’) combat gear.";
		model = "ModularVestSystem\data\Helmets\MVS_6B47_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[]={"NVG","patch_03","helmetFlashlight"};
		rotationFlags = 2;
		weight = 2200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\MVS_6B47.p3d";
			female = "ModularVestSystem\data\Helmets\MVS_6B47_f.p3d";
		};
		hiddenSelections[] = {"camoground","camomale","camofemale"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\do_helmets_co.paa","ModularVestSystem\data\Helmets\do_helmets_co.paa","ModularVestSystem\data\Helmets\do_helmets_co.paa"};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Helmets\MVS_6B47.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Helmets\MVS_6B47.rvmat"}},
						{0.7,{"ModularVestSystem\data\Helmets\MVS_6B47.rvmat"}},
						{0.5,{"ModularVestSystem\data\Helmets\MVS_6B47_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Helmets\MVS_6B47_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Helmets\MVS_6B47_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.35;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};		
	};
	class MVS_6B47_Helmet_OD: MVS_6B47Helmet_Base
	{
		scope = 2;
		displayName = "6B47";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_6B47_OD_co.paa","ModularVestSystem\data\Helmets\MVS_6B47_OD_co.paa","ModularVestSystem\data\Helmets\MVS_6B47_OD_co.paa"};
	};
	class MVS_6B47_Helmet_Tan: MVS_6B47Helmet_Base
	{
		scope = 2;
		displayName = "6B47";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_6B47_Tan_co.paa","ModularVestSystem\data\Helmets\MVS_6B47_Tan_co.paa","ModularVestSystem\data\Helmets\MVS_6B47_Tan_co.paa"};
	};
	class MVS_6B47_Helmet_Black: MVS_6B47Helmet_Base
	{
		scope = 2;
		displayName = "6B47";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\MVS_6B47_Black_co.paa","ModularVestSystem\data\Helmets\MVS_6B47_Black_co.paa","ModularVestSystem\data\Helmets\MVS_6B47_Black_co.paa"};
	};
	class MVS_OpsCore_Base: Clothing
	{
		scope = 0;
		displayName = "High Cut Helmet";
		descriptionShort = "The High Cut style combat helmet offers good ballistic protection.";
		model = "ModularVestSystem\data\Helmets\OpsCore_Helmet_g.p3d";
		attachments[]={"NVG","patch_03","helmetFlashlight"};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		imulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\OpsCore_Helmet.p3d";
			female = "ModularVestSystem\data\Helmets\OpsCore_Helmet.p3d";
		};
		hiddenSelections[] = {"camoground","camomale","camofemale"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co.paa","ModularVestSystem\data\Helmets\OpsCore_co.paa","ModularVestSystem\data\Helmets\OpsCore_co.paa"};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Helmets\OpsCore.rvmat"};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Helmets\OpsCore.rvmat"}},
						{0.7,{"ModularVestSystem\data\Helmets\OpsCore.rvmat"}},
						{0.5,{"ModularVestSystem\data\Helmets\OpsCore_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Helmets\OpsCore_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Helmets\OpsCore_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.35;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};			
	};
	class MVS_OpsCore_Tan: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa","ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa","ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa"};
	};
	class MVS_OpsCore_OD: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co.paa","ModularVestSystem\data\Helmets\OpsCore_co.paa","ModularVestSystem\data\Helmets\OpsCore_co.paa"};
	};
	class MVS_OpsCore_ERDL: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa","ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa","ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa"};
	};
	class MVS_OpsCore_Black: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co_Black.paa","ModularVestSystem\data\Helmets\OpsCore_co_Black.paa","ModularVestSystem\data\Helmets\OpsCore_co_Black.paa"};
	};
	class MVS_OpsCore_Snow: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa","ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa","ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa"};
	};	
	class MVS_OpsCore_Multicam: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa","ModularVestSystem\data\Helmets\OpsCore_co_MC.paa","ModularVestSystem\data\Helmets\OpsCore_co_MC.paa"};
	};	
	class MVS_OpsCore_Multicam_Tropic: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa","ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa","ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa"};
	};	
	class MVS_OpsCore_Multicam_Black: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet";
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa","ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa","ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa"};
	};
	class MVS_ArmoredHelmet_Base: Clothing
	{
		scope=0;
		model="ModularVestSystem\data\Helmets\Armored_Helmet_g.p3d";
		descriptionShort = "The Armored MVS helmet offers the best ballistic protection, and comes prepped with a mandible and ballistic visor. Identifier patch can be attached.";
		attachments[]={"patch_03"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1600;
		itemSize[] = {4,4};
		varWetMax = 0.49;
		heatIsolation = 0.8;
		noMask = 0;
		headSelectionsToHide[] = {"Clipping_Maska"};
		class ClothingTypes
		{
			male="ModularVestSystem\data\Helmets\Armored_Helmet.p3d";
			female="ModularVestSystem\data\Helmets\Armored_Helmet.p3d";
		};
		hiddenSelections[]={"camoGround","camoMale","camoFemale","zbytek","visor"};
		hiddenSelectionsTextures[]={"ModularVestSystem\data\Helmets\OpsCore_co.paa","ModularVestSystem\data\Helmets\OpsCore_co.paa","ModularVestSystem\data\Helmets\OpsCore_co.paa","ModularVestSystem\data\Helmets\Mandible_OD.paa","ModularVestSystem\data\Helmets\MVS_Visor.paa"};
        hiddenSelectionsMaterials[]= {"ModularVestSystem\data\Helmets\OpsCoreMandible.rvmat","ModularVestSystem\data\Helmets\OpsCore.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
                    healthLevels[] = 
                    {
                        {1.0,{"ModularVestSystem\data\Helmets\OpsCore.rvmat","ModularVestSystem\data\Helmets\OpsCoreMandible.rvmat"}},
                        {0.7,{"ModularVestSystem\data\Helmets\OpsCore.rvmat","ModularVestSystem\data\Helmets\OpsCoreMandible.rvmat"}},
                        {0.5,{"ModularVestSystem\data\Helmets\OpsCore_damage.rvmat","ModularVestSystem\data\Helmets\OpsCoreMandible_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\Helmets\OpsCore_damage.rvmat","ModularVestSystem\data\Helmets\OpsCoreMandible_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\Helmets\OpsCore_destruct.rvmat","ModularVestSystem\data\Helmets\OpsCoreMandible_destruct.rvmat"}}
                    };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.13;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_ArmoredHelmet_Tan: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co_Tan.paa",
			"ModularVestSystem\data\Helmets\Mandible_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};
	class MVS_ArmoredHelmet_OD: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co.paa",
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co.paa",
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co.paa",
			"ModularVestSystem\data\Helmets\Mandible_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};
	class MVS_ArmoredHelmet_ERDL: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\Mandible_ERDL.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};
	class MVS_ArmoredHelmet_Black: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCoreArmored_co_Black.paa",
			"ModularVestSystem\data\Helmets\Mandible_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};
	class MVS_ArmoredHelmet_Snow: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa",
			"ModularVestSystem\data\Helmets\Mandible_Snow.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};	
	class MVS_ArmoredHelmet_Multicam: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa",
			"ModularVestSystem\data\Helmets\Mandible_MC.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};
	class MVS_ArmoredHelmet_Multicam_Tropic: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\Mandible_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};
	class MVS_ArmoredHelmet_Multicam_Black: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\Mandible_MC_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};
	class MVS_Altyn_Helmet_Base: Clothing
	{
		scope=0;
		displayName = "Altyn Helmet";
		descriptionShort = "The Altyn MVS helmet offers the best ballistic protection. Identifier patch and Altyn Visor can be attached.";
		model="ModularVestSystem\data\Helmets\MVS_Altyn_Helmet_g.p3d";
		attachments[]={"MVS_Altyn_Visor","patch_03"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1600;
		itemSize[] = {4,4};
		varWetMax = 0.49;
		heatIsolation = 0.8;
		noMask = 0;
		headSelectionsToHide[] = {"Clipping_Maska"};
		class ClothingTypes
		{
			male="ModularVestSystem\data\Helmets\MVS_Altyn_Helmet.p3d";
			female="ModularVestSystem\data\Helmets\MVS_Altyn_Helmet.p3d";
		};
		hiddenSelections[]={"camoGround","camoMale","camoFemale","zbytek"};
		hiddenSelectionsTextures[]={"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa","ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa","ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa","ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"}},
						{0.7,{"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"}},
						{0.5,{"ModularVestSystem\data\Helmets\MVS_Altyn_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Helmets\MVS_Altyn_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Helmets\MVS_Altyn_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.13;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};	
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "DarkMotoHelmet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "DarkMotoHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Altyn_OD: MVS_Altyn_Helmet_Base
	{
		scope = 2;
		displayName = "Altyn Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_Altyn_Tan: MVS_Altyn_Helmet_Base
	{
		scope = 2;
		displayName = "Altyn Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_Altyn_Black: MVS_Altyn_Helmet_Base
	{
		scope = 2;
		displayName = "Altyn Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_Altyn_Visor: Clothing
	{
		scope=0;
		displayName="Altyn Visor";
		descriptionShort="Attaches to the MVS Altyn Helmet";
		weight = 110;
		absorbency = 0.8;
		heatIsolation = 0.25;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		model="ModularVestSystem\data\Helmets\MVS_Altyn_Helmet_Visor.p3d";
		inventorySlot[]=
		{
			"MVS_Altyn_Visor"
		};
		itemSize[]={2,2};
		rotationFlags=0;
		attachments[]=
		{
		};
		simpleHiddenSelections[]=
		{
			"hide"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"}},
						{0.7,{"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"}},
						{0.5,{"ModularVestSystem\data\Helmets\MVS_Altyn_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Helmets\MVS_Altyn_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Helmets\MVS_Altyn_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Altyn_Visor_OD: MVS_Altyn_Visor
	{
		scope = 2;
		displayName = "Altyn Visor";
		color = "OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_Altyn_Visor_Tan: MVS_Altyn_Visor
	{
		scope = 2;
		displayName = "Altyn Visor";
		color = "Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_Altyn_Visor_Black: MVS_Altyn_Visor
	{
		scope = 2;
		displayName = "Altyn Visor";
		color = "Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_Altyn_Visor_Lifted: Clothing
	{
		scope=0;
		displayName="Altyn Visor";
		descriptionShort="Attaches to the MVS Altyn Helmet";
		weight = 110;
		absorbency = 0.8;
		heatIsolation = 0.25;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		model="ModularVestSystem\data\Helmets\MVS_Altyn_Helmet_Visor_Lifted.p3d";
		inventorySlot[]=
		{
			"MVS_Altyn_Visor"
		};
		itemSize[]={2,2};
		rotationFlags=0;
		attachments[]=
		{
		};
		simpleHiddenSelections[]=
		{
			"hide"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"}},
						{0.7,{"ModularVestSystem\data\Helmets\MVS_Altyn.rvmat"}},
						{0.5,{"ModularVestSystem\data\Helmets\MVS_Altyn_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Helmets\MVS_Altyn_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Helmets\MVS_Altyn_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Altyn_Visor_Lifted_OD: MVS_Altyn_Visor_Lifted
	{
		scope = 2;
		displayName = "Altyn Visor";
		color = "OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_Altyn_Visor_Lifted_Tan: MVS_Altyn_Visor_Lifted
	{
		scope = 2;
		displayName = "Altyn Visor";
		color = "Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_Altyn_Visor_Lifted_Black: MVS_Altyn_Visor_Lifted
	{
		scope = 2;
		displayName = "Altyn Visor";
		color = "Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_WarriorHelmet_Base: Clothing
	{
		scope=0;
		model="ModularVestSystem\data\Helmets\Mandalorian_Helmet_g.p3d";
		descriptionShort = "The MVS Warrior helmet offers the best ballistic protection, and comes prepped with a bounty hunter-worthy face shield. Identifier patch and NVGs can be attached.";
		attachments[]={"NVG","patch_03","helmetFlashlight"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		weight = 1600;
		itemSize[] = {4,4};
		varWetMax = 0.49;
		heatIsolation = 0.8;
		noMask = 0;
		headSelectionsToHide[] = {"Clipping_Maska"};
		class ClothingTypes
		{
			male="ModularVestSystem\data\Helmets\Mandalorian_Helmet.p3d";
			female="ModularVestSystem\data\Helmets\Mandalorian_Helmet.p3d";
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore.rvmat",
			"ModularVestSystem\data\Helmets\MandalorianHelmet.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Helmets\OpsCore.rvmat","ModularVestSystem\data\Helmets\MandalorianHelmet.rvmat"}},
						{0.7,{"ModularVestSystem\data\Helmets\OpsCore.rvmat","ModularVestSystem\data\Helmets\MandalorianHelmet.rvmat"}},
						{0.5,{"ModularVestSystem\data\Helmets\OpsCore_damage.rvmat","ModularVestSystem\data\Helmets\MandalorianHelmet_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Helmets\OpsCore_damage.rvmat","ModularVestSystem\data\Helmets\MandalorianHelmet_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Helmets\OpsCore_destruct.rvmat","ModularVestSystem\data\Helmets\MandalorianHelmet_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.13;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};			
	};
	class MVS_WarriorHelmet_Tan: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
	};
	class MVS_WarriorHelmet_OD: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_OD.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
	};
	class MVS_WarriorHelmet_Black: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Black.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_Black.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
	};
	class MVS_WarriorHelmet_ERDL: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
	};
	class MVS_WarriorHelmet_Snow: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_Snow.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
	};
	class MVS_WarriorHelmet_Multicam: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_MC.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
	};
	class MVS_WarriorHelmet_Multicam_Tropic: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
	};
	class MVS_WarriorHelmet_Multicam_Black: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
	};
	class MVS_Pack_Base: Clothing
	{
		scope = 0;
		displayName = "Combat Pack";
		descriptionShort = "The MVS Combat Pack - rugged, lightweight, and versatile.";
		model = "ModularVestSystem\data\Pack\MVS_pack_g.p3d";
		itemInfo[] = {"Clothing","Back"};
		inventorySlot[] = {"Back","MVS_pack"};
		attachments[] = {"Shoulder","modular_pouch_9","Chemlight","WalkieTalkie","patch_02"};
		itemSize[] = {5,7};
		itemsCargoSize[] = {7,10};
		rotationFlags=16;
		quickBarBonus = 2;
		weight = 2000;
		varWetMax = 0.79;
		heatIsolation = 0.7;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Pack\MVS_pack.p3d";
			female = "ModularVestSystem\data\Pack\MVS_pack.p3d";
		};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co.paa",
			"ModularVestSystem\data\Pack\pack_co.paa",
			"ModularVestSystem\data\Pack\pack_co.paa"
		};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Pack\pack.rvmat"};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Pack\pack.rvmat"}},
						{0.7,{"ModularVestSystem\data\Pack\pack.rvmat"}},
						{0.5,{"ModularVestSystem\data\Pack\pack_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Pack\pack_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Pack\pack_destruct.rvmat"}}
					};
				};
			};
		};			
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Assault_Pack_Tan: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Raider Pack";
		descriptionShort = "The MVS Raider's Pack - a larger pack with additional storage. Can attach MVS admin or medical pouches, Raid pouches for additional tool storage, grenades, a rifle, and Identifier Patch.";
		model = "ModularVestSystem\data\Pack\MVS_RaidPack_g.p3d";
		attachments[] = {"Shoulder","VestGrenadeA","VestGrenadeB","modular_pouch_9","modular_pouch_12","Chemlight","WalkieTalkie","patch_02"};
		itemSize[] = {5,7};
		itemsCargoSize[] = {8,10};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\RaidPack_co.paa",
			"ModularVestSystem\data\Pack\RaidPack_co.paa",
			"ModularVestSystem\data\Pack\RaidPack_co.paa"
		};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Pack\RaidPack.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Pack\RaidPack.rvmat"}},
						{0.7,{"ModularVestSystem\data\Pack\RaidPack.rvmat"}},
						{0.5,{"ModularVestSystem\data\Pack\RaidPack_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Pack\RaidPack_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Pack\RaidPack_destruct.rvmat"}}
					};
				};
			};
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Pack\MVS_RaidPack.p3d";
			female = "ModularVestSystem\data\Pack\MVS_RaidPack.p3d";
		};
	};
	class MVS_Assault_Pack_OD: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Raider Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\RaidPack_co_OD.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_OD.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_OD.paa"
			
		};
	};
	class MVS_Assault_Pack_ERDL: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Raider Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\RaidPack_co_ERDL.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_ERDL.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_ERDL.paa"
			
		};
	};
	class MVS_Assault_Pack_Black: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Raider Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\RaidPack_co_Black.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_Black.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_Black.paa"
			
		};
	};
	class MVS_Assault_Pack_Snow: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Raider Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\RaidPack_co_Snow.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_Snow.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_Snow.paa"
			
		};
	};
	class MVS_Assault_Pack_Multicam: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Raider Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\RaidPack_co_MC.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_MC.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_MC.paa"
			
		};
	};
	class MVS_Assault_Pack_Multicam_Tropic: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Raider Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\RaidPack_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_MC_Tropic.paa"
			
		};
	};
	class MVS_Assault_Pack_Multicam_Black: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Raider Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\RaidPack_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\RaidPack_co_MC_Black.paa"
		};
	};
	class MVS_Sling_Pack_Base: MVS_Pack_Base
	{
		scope = 0;
		displayName = "Sling Pack";
		descriptionShort = "The MVS Sling Pack - a medium sized pack with atttachable storage. Can attach MVS admin or medical pouches, a rifle, and Identifier Patch.";
		model = "ModularVestSystem\data\Pack\MVS_SlingPack_g.p3d";
		attachments[] = {"Shoulder","modular_pouch_9","Chemlight","WalkieTalkie","patch_02"};
		itemSize[] = {5,7};
		itemsCargoSize[] = {8,10};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_OD_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_OD_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_OD_co.paa"
			
		};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Pack\SlingPack.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Pack\SlingPack.rvmat"}},
						{0.7,{"ModularVestSystem\data\Pack\SlingPack.rvmat"}},
						{0.5,{"ModularVestSystem\data\Pack\SlingPack_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Pack\SlingPack_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Pack\SlingPack_destruct.rvmat"}}
					};
				};
			};
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Pack\MVS_SlingPack.p3d";
			female = "ModularVestSystem\data\Pack\MVS_SlingPack.p3d";
		};
	};
	class MVS_SlingPack_OD: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "Sling Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_OD_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_OD_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_OD_co.paa"
			
		};
	};	
	class MVS_SlingPack_Tan: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "Sling Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_Tan_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Tan_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Tan_co.paa"
			
		};
	};
	class MVS_SlingPack_Black: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "Sling Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_Black_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Black_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Black_co.paa"
			
		};
	};
	class MVS_SlingPack_Multicam: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "Sling Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_co.paa"
			
		};
	};
	class MVS_SlingPack_Multicam_Black: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "Sling Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_Black_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_Black_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_Black_co.paa"
			
		};
	};
	class MVS_SlingPack_Multicam_Tropic: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "Sling Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_Tropic_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_Tropic_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Multicam_Tropic_co.paa"
			
		};
	};
	class MVS_SlingPack_ERDL: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "Sling Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_ERDL_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_ERDL_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_ERDL_co.paa"
			
		};
	};
	class MVS_SlingPack_Snow: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "Sling Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Sling_Snow_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Snow_co.paa",
			"ModularVestSystem\data\Pack\MVS_Sling_Snow_co.paa"
		};
	};
	class MVS_Compact_Base: MVS_Pack_Base
	{
		scope = 0;
		displayName = "Compact Pack 1";
		descriptionShort = "The MVS Compact Pack - a smaller pack for light mobility. Can attach MVS admin or medical pouches, grenades, and Identifier Patch.";
		model = "ModularVestSystem\data\Pack\MVS_Compact_1_g.p3d";
		attachments[] = {"VestGrenadeB","modular_pouch_9","Chemlight","WalkieTalkie","patch_02"};
		itemSize[] = {5,7};
		itemsCargoSize[] = {5,10};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co.paa"
			
		};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Pack\MVS_Compact_1.rvmat"};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Pack\MVS_Compact_1.rvmat"}},
						{0.7,{"ModularVestSystem\data\Pack\MVS_Compact_1.rvmat"}},
						{0.5,{"ModularVestSystem\data\Pack\MVS_Compact_1_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Pack\MVS_Compact_1_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Pack\MVS_Compact_1_destruct.rvmat"}}
					};
				};
			};
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Pack\MVS_Compact_1.p3d";
			female = "ModularVestSystem\data\Pack\MVS_Compact_1.p3d";
		};
	};	
	class MVS_Compact_1_OD: MVS_Compact_Base
	{
		scope = 2;
		displayName = "Compact Pack 1";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co.paa"
		};
	};
	class MVS_Compact_1_Tan: MVS_Compact_Base
	{
		scope = 2;
		displayName = "Compact Pack 1";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Tan.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Tan.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Tan.paa"
		};
	};
	class MVS_Compact_1_Black: MVS_Compact_Base
	{
		scope = 2;
		displayName = "Compact Pack 1";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Black.paa"
		};
	};
	class MVS_Compact_1_ERDL: MVS_Compact_Base
	{
		scope = 2;
		displayName = "Compact Pack 1";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_ERDL.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_ERDL.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_ERDL.paa"
		};
	};
	class MVS_Compact_1_Snow: MVS_Compact_Base
	{
		scope = 2;
		displayName = "Compact Pack 1";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Snow.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Snow.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_Snow.paa"
		};
	};
	class MVS_Compact_1_Multicam: MVS_Compact_Base
	{
		scope = 2;
		displayName = "Compact Pack 1";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC.paa"
		};
	};
	class MVS_Compact_1_Multicam_Tropic: MVS_Compact_Base
	{
		scope = 2;
		displayName = "Compact Pack 1";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC_Tropic.paa"
		};
	};
	class MVS_Compact_1_Multicam_Black: MVS_Compact_Base
	{
		scope = 2;
		displayName = "Compact Pack 1";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_1_co_MC_Black.paa"
		};
	};
	class MVS_Compact_Base_2: MVS_Pack_Base
	{
		scope = 0;
		displayName = "Compact Pack 2";
		descriptionShort = "The MVS Compact Pack - a smaller pack for light mobility. Can attach MVS admin or medical pouches, grenades, and Identifier Patch.";
		model = "ModularVestSystem\data\Pack\MVS_Compact_2_g.p3d";
		itemSize[] = {5,7};
		itemsCargoSize[] = {5,10};
		attachments[] = {"VestGrenadeA","VestGrenadeB","modular_pouch_9","modular_pouch_13","Chemlight","WalkieTalkie","patch_02"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_OD.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2.rvmat",
			"ModularVestSystem\data\Pack\MVS_Compact_2_Detail.rvmat"
		};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Pack\MVS_Compact_2.rvmat","ModularVestSystem\data\Pack\MVS_Compact_2_Detail.rvmat"}},
						{0.7,{"ModularVestSystem\data\Pack\MVS_Compact_2.rvmat","ModularVestSystem\data\Pack\MVS_Compact_2_Detail.rvmat"}},
						{0.5,{"ModularVestSystem\data\Pack\MVS_Compact_2_damage.rvmat","ModularVestSystem\data\Pack\MVS_Compact_2_Detail_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Pack\MVS_Compact_2_damage.rvmat","ModularVestSystem\data\Pack\MVS_Compact_2_Detail_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Pack\MVS_Compact_2_destruct.rvmat","ModularVestSystem\data\Pack\MVS_Compact_2_Detail_destruct.rvmat"}}
					};
				};
			};
		};			
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Pack\MVS_Compact_2.p3d";
			female = "ModularVestSystem\data\Pack\MVS_Compact_2.p3d";
		};
	};
	class MVS_Compact_2_OD: MVS_Compact_Base_2
	{
		scope = 2;
		displayName = "Compact Pack 2";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_OD.paa"
		};
	};
	class MVS_Compact_2_Tan: MVS_Compact_Base_2
	{
		scope = 2;
		displayName = "Compact Pack 2";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Tan.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Tan.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Tan.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_Tan.paa"
		};
	};
	class MVS_Compact_2_Black: MVS_Compact_Base_2
	{
		scope = 2;
		displayName = "Compact Pack 2";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_Black.paa"
		};
	};
	class MVS_Compact_2_ERDL: MVS_Compact_Base_2
	{
		scope = 2;
		displayName = "Compact Pack 2";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_ERDL.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_ERDL.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_ERDL.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_OD.paa"
		};
	};
	class MVS_Compact_2_Snow: MVS_Compact_Base_2
	{
		scope = 2;
		displayName = "Compact Pack 2";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Snow.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Snow.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Snow.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_OD.paa"
		};
	};
	class MVS_Compact_2_Multicam: MVS_Compact_Base_2
	{
		scope = 2;
		displayName = "Compact Pack 2";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_MC.paa"
		};
	};
	class MVS_Compact_2_Multicam_Tropic: MVS_Compact_Base_2
	{
		scope = 2;
		displayName = "Compact Pack 2";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_OD.paa"
		};
	};
	class MVS_Compact_2_Multicam_Black: MVS_Compact_Base_2
	{
		scope = 2;
		displayName = "Compact Pack 2";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_OD.paa"
		};
	};
	class MVS_Rucksack_Base: Clothing
	{
		scope = 0;
		displayName = "Combat Pack";
		descriptionShort = "The MVS Rucksack - a large pack designed to withstand the elements and heavy weight. A rifle can be attached, along with Identifier Patch";
		model = "ModularVestSystem\data\Pack\MVS_Rucksack_g.p3d";
		inventorySlot[] = {"Back","MVS_pack"};
		attachments[] = {"Shoulder","Chemlight","WalkieTalkie","patch_02"};
		rotationFlags=16;
		itemSize[]={7,8};
		itemsCargoSize[]={10,12};
		weight=1400;
		varWetMax = 0.49;
		heatIsolation = 0.7;
		visibilityModifier = 1.2;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		soundAttType = "Military";
		quickBarBonus = 2;
		class ClothingTypes
		{
			male = "\ModularVestSystem\data\Pack\MVS_Rucksack.p3d";
			female = "\ModularVestSystem\data\Pack\MVS_Rucksack.p3d";
		};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co.paa"
		};
		hiddenSelectionsMaterials[] = {"ModularVestSystem\data\Pack\Rucksack.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 	
					{					
						{1.0,{"ModularVestSystem\data\Pack\Rucksack.rvmat"}},
						{0.7,{"ModularVestSystem\data\Pack\Rucksack.rvmat"}},
						{0.5,{"ModularVestSystem\data\Pack\Rucksack_damage.rvmat"}},
						{0.3,{"ModularVestSystem\data\Pack\Rucksack_damage.rvmat"}},
						{0.0,{"ModularVestSystem\data\Pack\Rucksack_destruct.rvmat"}}
					};
				};
			};
		};		
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Metal_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Metal_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};	
	};
	class MVS_Rucksack_OD: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co.paa"
		};
	};	
	class MVS_Rucksack_ERDL: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_ERDL.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_ERDL.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_ERDL.paa"
		};
	};
	class MVS_Rucksack_Tan: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Tan.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Tan.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Tan.paa"
		};
	};
	class MVS_Rucksack_Black: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Black.paa"
		};
	};
	class MVS_Rucksack_Snow: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Snow.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Snow.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_Snow.paa"
		};
	};
	class MVS_Rucksack_Multicam: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC.paa"
		};
	};
	class MVS_Rucksack_Multicam_Tropic: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC_Tropic.paa"
		};
	};
	class MVS_Rucksack_Multicam_Black: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Rucksack_co_MC_Black.paa"
		};
	};
	class MVS_Pack_OD: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Combat Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co.paa",
			"ModularVestSystem\data\Pack\pack_co.paa",
			"ModularVestSystem\data\Pack\pack_co.paa"
		};
	};	
	class MVS_Pack_ERDL: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Combat Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co_ERDL.paa",
			"ModularVestSystem\data\Pack\pack_co_ERDL.paa",
			"ModularVestSystem\data\Pack\pack_co_ERDL.paa"
		};
	};
	class MVS_Pack_Tan: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Combat Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co_Tan.paa",
			"ModularVestSystem\data\Pack\pack_co_Tan.paa",
			"ModularVestSystem\data\Pack\pack_co_Tan.paa"
		};
	};
	class MVS_Pack_Black: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Combat Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co_Black.paa",
			"ModularVestSystem\data\Pack\pack_co_Black.paa",
			"ModularVestSystem\data\Pack\pack_co_Black.paa"
		};
	};
	class MVS_Pack_Snow: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Combat Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co_snow.paa",
			"ModularVestSystem\data\Pack\pack_co_snow.paa",
			"ModularVestSystem\data\Pack\pack_co_snow.paa"
		};
	};
	class MVS_Pack_Multicam: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Combat Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co_MC.paa",
			"ModularVestSystem\data\Pack\pack_co_MC.paa",
			"ModularVestSystem\data\Pack\pack_co_MC.paa"
		};
	};
	class MVS_Pack_Multicam_Tropic: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Combat Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\pack_co_MC_Tropic.paa",
			"ModularVestSystem\data\Pack\pack_co_MC_Tropic.paa"
		};
	};
	class MVS_Pack_Multicam_Black: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Combat Pack";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\pack_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\pack_co_MC_Black.paa"
		};
	};
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
		weight = 20;
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
		displayName = "Combat Belt";
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
		displayName = "Combat Belt";
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
		displayName = "Combat Belt";
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
		displayName = "Combat Belt";
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
		displayName = "Combat Belt";
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
		displayName = "Combat Belt";
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
		displayName = "Combat Belt";
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
		displayName = "Combat Belt";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\belt_co_MC_Tropic.paa",
			"ModularVestSystem\data\Belt\belt_co_MC_Tropic.paa",
			"ModularVestSystem\data\Belt\belt_co_MC_Tropic.paa"
		};
	};
	class MVS_Holster_OD: PlateCarrierHolster
	{
		displayName = "Holster";
		descriptionShort = "Holster";
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
		displayName = "Holster";
		descriptionShort = "Holster";
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
		displayName = "Holster";
		descriptionShort = "Holster";
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
		displayName = "Holster";
		descriptionShort = "Holster";
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
		displayName = "Holster";
		descriptionShort = "Holster";
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
		displayName = "Holster";
		descriptionShort = "Holster";
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
		displayName = "Holster";
		descriptionShort = "Holster";
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
		displayName = "Holster";
		descriptionShort = "Holster";
		scope=2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\holster_co_MC_Tropic.paa",
			"ModularVestSystem\data\Belt\holster_co_MC_Tropic.paa"
		};
	};
	class NylonKnifeSheath;
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
		displayName = "Sheath";
		descriptionShort = "Sheath";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co.paa"
		};
	};
	class MVS_Sheath_ERDL: MVS_Sheath_Base
	{
		displayName = "Sheath";
		descriptionShort = "Sheath";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_ERDL.paa"
		};
	};
	class MVS_Sheath_Tan: MVS_Sheath_Base
	{
		displayName = "Sheath";
		descriptionShort = "Sheath";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_Tan.paa"
		};

	};
	class MVS_Sheath_Black: MVS_Sheath_Base
	{
		displayName = "Sheath";
		descriptionShort = "Sheath";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_Black.paa"
		};

	};
	class MVS_Sheath_Snow: MVS_Sheath_Base
	{
		displayName = "Sheath";
		descriptionShort = "Sheath";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_snow.paa"
		};
	};
	class MVS_Sheath_Multicam: MVS_Sheath_Base
	{
		displayName = "Sheath";
		descriptionShort = "Sheath";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_MC.paa"
		};

	};
	class MVS_Sheath_Multicam_Tropic: MVS_Sheath_Base
	{
		displayName = "Sheath";
		descriptionShort = "Sheath";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_MC_Tropic.paa"
		};
	};
	class MVS_Sheath_Multicam_Black: MVS_Sheath_Base
	{
		displayName = "Sheath";
		descriptionShort = "Sheath";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Belt\sheath_co_MC_Black.paa"
		};
	};
	class Inventory_Base;
	class Lockpick: Inventory_Base
	{
		inventorySlot[] = {"MVS_Lockpick"};
	};
	class Screwdriver: Inventory_Base
	{
		inventorySlot[] = {"Screwdriver","MassScrewDriver","Screwdriver1","Screwdriver2"};
	};
	class Pliers: Inventory_Base
	{
		inventorySlot[] = {"Pliers","Pliers1"};
	};
	class Morphine: Inventory_Base
	{
		inventorySlot[] = {"morphine","epinephrine"};
	};
	class Battery9V: Inventory_Base
	{
		inventorySlot[] = {"BatteryD","MVSBattery1","MVSBattery2"};
	};
	class Epinephrine: Inventory_Base
	{
		inventorySlot[] = {"epinephrine","morphine"};
	};
	class BandageDressing: Inventory_Base
	{
		inventorySlot[] = {"MedicalBandage"};
	};
	
	class MVS_GasMaskBase: GP5GasMask{};
	class MVS_S10Respirator: MVS_GasMaskBase
	{
		scope = 0;
		displayName = "S10 Respirator";
		descriptionShort = "The S10 NBC Respirator is a military gas mask that was formerly used within all branches of the British Armed Forces. Following the mask's replacement by the General Service Respirator in 2011, the S10 is now widely available to the public on the army surplus market.";
		inventorySlot[] = {"Mask","MVS_mask"};
		itemSize[] = {2,3};
		model = "ModularVestSystem\data\s10\s10_g.p3d";
		attachments[]={"GasMaskFilter"};
		headSelectionsToHide[] = {"Clipping_Gasmask","Clipping_Balaclava_3holes"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\s10\s10_co.paa","ModularVestSystem\data\s10\s10_co.paa","ModularVestSystem\data\s10\s10_co.paa","ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\s10\s10.rvmat"
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
                        {1.0,{"ModularVestSystem\data\s10\s10.rvmat"}},
                        {0.7,{"ModularVestSystem\data\s10\s10.rvmat"}},
                        {0.5,{"ModularVestSystem\data\s10\s10_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\s10\s10_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\s10\s10_destruct.rvmat"}}
                    };
				};
			};
		};			
		class ClothingTypes
		{
			male = "ModularVestSystem\data\s10\s10.p3d";
			female = "ModularVestSystem\data\s10\s10_f.p3d";
		};
	};
	class MVS_S10Respirator_FS: MVS_S10Respirator
	{
		scope = 2;
		displayName = "S10 Respirator - The 4th Survivor";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\s10_co_FS.paa",
			"ModularVestSystem\data\s10\s10_co_FS.paa",
			"ModularVestSystem\data\s10\s10_co_FS.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa"
		};
	};
	class MVS_S10Respirator_OD: MVS_S10Respirator
	{
		scope = 2;
		displayName = "S10 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\s10_co_OD.paa",
			"ModularVestSystem\data\s10\s10_co_OD.paa",
			"ModularVestSystem\data\s10\s10_co_OD.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"
		};
	};
	class MVS_S10Respirator_Tan: MVS_S10Respirator
	{
		scope = 2;
		displayName = "S10 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\s10_co_Tan.paa",
			"ModularVestSystem\data\s10\s10_co_Tan.paa",
			"ModularVestSystem\data\s10\s10_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa"
		};
	};
	class MVS_S10Respirator_Black: MVS_S10Respirator
	{
		scope = 2;
		displayName = "S10 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\s10_co.paa",
			"ModularVestSystem\data\s10\s10_co.paa",
			"ModularVestSystem\data\s10\s10_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_black.paa"
		};
	};
	class MVS_S10Respirator_Snow: MVS_S10Respirator
	{
		scope = 2;
		displayName = "S10 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\s10_co_Snow.paa",
			"ModularVestSystem\data\s10\s10_co_Snow.paa",
			"ModularVestSystem\data\s10\s10_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_snow.paa"
		};
	};
	class MVS_PMK2Respirator: MVS_GasMaskBase
	{
		scope = 0;
		displayName = "PMK2 Respirator";
		descriptionShort = "The PMK gas mask represents a family of gas masks used by the Soviet Armed Forces, and later by the Armed Forces of the Russian Federation.";
		model = "ModularVestSystem\data\s10\MVS_PMK2_g.p3d";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","zbytek","filter","lens"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_PMK2_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_Filter_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_ca.paa"			
			
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\s10\MVS_Balaclava2.rvmat",
			"ModularVestSystem\data\s10\MVS_PMK2.rvmat"
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
                        {1.0,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat","ModularVestSystem\data\s10\MVS_PMK2.rvmat"}},
                        {0.7,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat","ModularVestSystem\data\s10\MVS_PMK2.rvmat"}},
                        {0.5,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat","ModularVestSystem\data\s10\MVS_PMK2_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat","ModularVestSystem\data\s10\MVS_PMK2_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\s10\MVS_Balaclava2_destruct.rvmat","ModularVestSystem\data\s10\MVS_PMK2_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\s10\MVS_PMK2.p3d";
			female = "ModularVestSystem\data\s10\MVS_PMK2_f.p3d";
		};
	};
	class MVS_PMK2Respirator_Black: MVS_PMK2Respirator
	{
		scope = 2;
		displayName = "PMK-2 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_PMK2_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_black.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_Filter_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_ca.paa"	
		};
	};
	class MVS_PMK2Respirator_Tan: MVS_PMK2Respirator
	{
		scope = 2;
		displayName = "PMK-2 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_PMK2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_Filter_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_ca.paa"	
		};
	};
	class MVS_PMK2Respirator_OD: MVS_PMK2Respirator
	{
		scope = 2;
		displayName = "PMK-2 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_PMK2_co_OD.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co_OD.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co_OD.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_Filter_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_ca.paa"	
		};
	};
	class MVS_PMK2Respirator_Snow: MVS_PMK2Respirator
	{
		scope = 2;
		displayName = "PMK-2 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_PMK2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_Filter_co.paa",
			"ModularVestSystem\data\s10\MVS_PMK2_ca.paa"	
		};
	};
	class MVS_M50Respirator: MVS_GasMaskBase
	{
		scope = 0;
		displayName = "M50 Respirator";
		descriptionShort = "The M50 series protective mask consisting of the M50 and M51 variants, officially known as the Joint Service General Protective Mask (JSGPM) is a lightweight, protective mask system consisting of the mask, a mask carrier, and additional accessories";
		model = "ModularVestSystem\data\s10\MVS_M50_g.p3d";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","zbytek"};
		hiddenSelectionsTextures[] = {"ModularVestSystem\data\s10\MVS_M50_co.paa","ModularVestSystem\data\s10\MVS_M50_co.paa","ModularVestSystem\data\s10\MVS_M50_co.paa","ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\s10\MVS_Balaclava2.rvmat",
			"ModularVestSystem\data\s10\MVS_M50.rvmat"
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
                        {1.0,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat","ModularVestSystem\data\s10\MVS_M50.rvmat"}},
                        {0.7,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat","ModularVestSystem\data\s10\MVS_M50.rvmat"}},
                        {0.5,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat","ModularVestSystem\data\s10\MVS_M50_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat","ModularVestSystem\data\s10\MVS_M50_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\s10\MVS_Balaclava2_destruct.rvmat","ModularVestSystem\data\s10\MVS_M50_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\s10\MVS_M50.p3d";
			female = "ModularVestSystem\data\s10\MVS_M50_f.p3d";
		};
	};
	class MVS_M50Respirator_OD: MVS_M50Respirator
	{
		scope = 2;
		displayName = "M50 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_M50_co_OD.paa",
			"ModularVestSystem\data\s10\MVS_M50_co_OD.paa",
			"ModularVestSystem\data\s10\MVS_M50_co_OD.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"
		};
	};
	class MVS_M50Respirator_Tan: MVS_M50Respirator
	{
		scope = 2;
		displayName = "M50 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_M50_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_M50_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_M50_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa"
		};
	};
	class MVS_M50Respirator_Black: MVS_M50Respirator
	{
		scope = 2;
		displayName = "M50 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_M50_co.paa",
			"ModularVestSystem\data\s10\MVS_M50_co.paa",
			"ModularVestSystem\data\s10\MVS_M50_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_black.paa"
		};
	};
	class MVS_M50Respirator_Snow: MVS_M50Respirator
	{
		scope = 2;
		displayName = "M50 Respirator";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_M50_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_M50_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_M50_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_snow.paa"
		};
	};
	class MVS_Balaclava_Base: Clothing
	{
		scope = 0;
		displayName = "Balaclava";
		descriptionShort = "A mask used for concealing one's identity... spooky right?";
		model = "ModularVestSystem\data\s10\MVS_Balaclava_g.p3d";
		rotationFlags=0;
		weight = 130;
		inventorySlot[] = {"Mask"};
		itemSize[] = {3,2};
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		headSelectionsToHide[] = {"Clipping_Gasmask","Clipping_Balaclava_3holes"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","mask"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Wraith.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Wraith.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Wraith.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava_mask_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\s10\MVS_Balaclava2.rvmat",
			"ModularVestSystem\data\s10\MVS_Balaclava_mask.rvmat"
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
                        {1.0,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat","ModularVestSystem\data\s10\MVS_Balaclava_mask.rvmat"}},
                        {0.7,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat","ModularVestSystem\data\s10\MVS_Balaclava_mask.rvmat"}},
                        {0.5,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat","ModularVestSystem\data\s10\MVS_Balaclava_mask_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat","ModularVestSystem\data\s10\MVS_Balaclava_mask_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\s10\MVS_Balaclava2_destruct.rvmat","ModularVestSystem\data\s10\MVS_Balaclava_mask_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male = "\ModularVestSystem\data\s10\MVS_Balaclava.p3d";
			female = "\ModularVestSystem\data\s10\MVS_Balaclava_f.p3d";
		};
		class Protection
		{
			biological = 0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Balaclava_Wraith: MVS_Balaclava_Base
	{
		scope = 2;
		displayName = "Wraith Mask";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Wraith.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Wraith.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Wraith.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava_mask_co.paa"
		};
	};
	class MVS_Balaclava2_Base: Clothing
	{
		scope = 0;
		displayName = "Balaclava 2";
		descriptionShort = "A mask used for concealing one's identity... spooky right?";
		model = "ModularVestSystem\data\s10\MVS_Balaclava2_g.p3d";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags=0;
		itemSize[] = {3,2};
		weight = 130;
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		inventorySlot[] = {"Mask"};
		headSelectionsToHide[] = {"Clipping_Gasmask","Clipping_Balaclava_3holes"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\s10\MVS_Balaclava2.rvmat"
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
                        {1.0,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat"}},
                        {0.7,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat"}},
                        {0.5,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\s10\MVS_Balaclava2_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\s10\MVS_Balaclava2.p3d";
			female = "ModularVestSystem\data\s10\MVS_Balaclava2_f.p3d";
		};
		class Protection
		{
			biological = 0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Balaclava_OD: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "Balaclava";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"
		};
	};
	class MVS_Balaclava_Tan: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "Balaclava";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa"
		};
	};
	class MVS_Balaclava_Black: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "Balaclava";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa"
		};
	};
	class MVS_Balaclava_Snow: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "Balaclava";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa"
		};
	};
	class MVS_Balaclava3_Base: Clothing
	{
		scope = 0;
		displayName = "Balaclava 3";
		descriptionShort = "A mask used for concealing one's identity... spooky right?";
		model = "ModularVestSystem\data\s10\MVS_Balaclava3_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags=0;
		weight = 130;
		itemSize[] = {3,2};
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		headSelectionsToHide[] = {"Clipping_Gasmask"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\s10\MVS_Balaclava2.rvmat"
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
                        {1.0,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat"}},
                        {0.7,{"ModularVestSystem\data\s10\MVS_Balaclava2.rvmat"}},
                        {0.5,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\s10\MVS_Balaclava2_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\s10\MVS_Balaclava2_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\s10\MVS_Balaclava3.p3d";
			female = "ModularVestSystem\data\s10\MVS_Balaclava3_f.p3d";
		};
		class Protection
		{
			biological = 0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Facemask_OD: MVS_Balaclava3_Base
	{
		scope = 2;
		displayName = "Facemask";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"
		};
	};
	class MVS_Facemask_Tan: MVS_Balaclava3_Base
	{
		scope = 2;
		displayName = "Facemask";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa"
		};
	};
	class MVS_Facemask_Black: MVS_Balaclava3_Base
	{
		scope = 2;
		displayName = "Facemask";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa"
		};
	};
	class MVS_Facemask_Snow: MVS_Balaclava3_Base
	{
		scope = 2;
		displayName = "Facemask";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa"
		};
	};
	class MVS_Shroud_Base: Clothing
	{
		scope = 0;
		displayName = "Shroud";
		descriptionShort = "A thin veil of netting used to break up outlines in the brush.";
		model = "ModularVestSystem\data\s10\MVS_Shroud_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		itemSize[] = {3,2};
		rotationFlags=0;
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		weight = 210;
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Shroud_co.paa",
			"ModularVestSystem\data\s10\MVS_Shroud_co.paa",
			"ModularVestSystem\data\s10\MVS_Shroud_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\s10\MVS_Shroud.rvmat"
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
                        {1.0,{"ModularVestSystem\data\s10\MVS_Shroud.rvmat"}},
                        {0.7,{"ModularVestSystem\data\s10\MVS_Shroud.rvmat"}},
                        {0.5,{"ModularVestSystem\data\s10\MVS_Shroud_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\s10\MVS_Shroud_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\s10\MVS_Shroud_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male = "\ModularVestSystem\data\s10\MVS_Shroud.p3d";
			female = "\ModularVestSystem\data\s10\MVS_Shroud.p3d";
		};
		class AnimationSources
		{
			class CamoNet
			{
				source="user";
				animPeriod=0.01;
				initPhase=1;
			};
		};
		class Protection
		{
			biological = 0.35;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_Shroud_OD: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "Shroud";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Shroud_co.paa",
			"ModularVestSystem\data\s10\MVS_Shroud_co.paa",
			"ModularVestSystem\data\s10\MVS_Shroud_co.paa"
		};
	};
	class MVS_Shroud_Tan: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "Shroud";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Shroud_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Shroud_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Shroud_co_Tan.paa"
		};
	};
	class MVS_Shroud_Black: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "Shroud";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Shroud_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Shroud_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Shroud_co_Black.paa"
		};
	};
	class MVS_Beard_01: BalaclavaMask_ColorBase
	{
		scope = 0;
		displayName = "Beard";
		descriptionShort = "...";
		inventorySlot[] = {"Mask"};
		itemSize[] = {3,2};
		model = "ModularVestSystem\data\Beards\MVS_BeardKit_g.p3d";
		rotationFlags=0;
		headSelectionsToHide[] = {};
		hiddenSelections[] = {"zbytek","ground"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_01_co.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Beards\MVS_Beard_01.p3d";
			female = "ModularVestSystem\data\Beards\MVS_Beard_01.p3d";
		};
	};
	class MVS_Beard_01_Brown: MVS_Beard_01
	{
		scope = 2;
		displayName = "Beard - Brown";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_01_co.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_01_LightBrown: MVS_Beard_01
	{
		scope = 2;
		displayName = "Beard - Light Brown";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_01_co_LightBrown.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_01_Black: MVS_Beard_01
	{
		scope = 2;
		displayName = "Beard 01";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_01_co_Black.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_01_Blonde: MVS_Beard_01
	{
		scope = 2;
		displayName = "Beard 01 - Blonde";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_01_co_Blonde.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_01_White: MVS_Beard_01
	{
		scope = 2;
		displayName = "Beard 01 - White";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_01_co_White.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_02: BalaclavaMask_ColorBase
	{
		scope = 0;
		displayName = "Beard";
		descriptionShort = "...";
		inventorySlot[] = {"Mask"};
		rotationFlags=0;
		itemSize[] = {3,2};
		headSelectionsToHide[] = {};
		model = "ModularVestSystem\data\Beards\MVS_BeardKit_g.p3d";
		hiddenSelections[] = {"zbytek","ground"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Beards\MVS_Beard_02.p3d";
			female = "ModularVestSystem\data\Beards\MVS_Beard_02.p3d";
		};
	};
	class MVS_Beard_02_Brown: MVS_Beard_02
	{
		scope = 2;
		displayName = "Beard - Brown";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_02_LightBrown: MVS_Beard_02
	{
		scope = 2;
		displayName = "Beard - Light Brown";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co_LightBrown.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_02_Black: MVS_Beard_02
	{
		scope = 2;
		displayName = "Beard 02";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co_Black.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_02_Blonde: MVS_Beard_02
	{
		scope = 2;
		displayName = "Beard 02 - Blonde";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co_Blonde.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_02_White: MVS_Beard_02
	{
		scope = 2;
		displayName = "Beard 02 - White";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co_White.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_03: BalaclavaMask_ColorBase
	{
		scope = 0;
		displayName = "Beard";
		descriptionShort = "...";
		inventorySlot[] = {"Mask"};
		rotationFlags=0;
		itemSize[] = {3,2};
		headSelectionsToHide[] = {};
		model = "ModularVestSystem\data\Beards\MVS_BeardKit_g.p3d";
		hiddenSelections[] = {"zbytek","ground"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Beards\MVS_Beard_03.p3d";
			female = "ModularVestSystem\data\Beards\MVS_Beard_03.p3d";
		};
	};
	class MVS_Beard_03_Brown: MVS_Beard_03
	{
		scope = 2;
		displayName = "Beard - Brown";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_03_LightBrown: MVS_Beard_03
	{
		scope = 2;
		displayName = "Beard - Light Brown";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co_LightBrown.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_03_Black: MVS_Beard_03
	{
		scope = 2;
		displayName = "Beard 02";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co_Black.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_03_Blonde: MVS_Beard_03
	{
		scope = 2;
		displayName = "Beard 02 - Blonde";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co_Blonde.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Beard_03_White: MVS_Beard_03
	{
		scope = 2;
		displayName = "Beard 02 - White";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Beards\MVS_Beard_02_co_White.paa",
			"ModularVestSystem\data\Beards\MVS_BeardKit_co.paa"
		};
	};
	class MVS_Cap_Base: Clothing
	{
		scope = 0;
		displayName = "Patrol Cap";
		descriptionShort = "The MVS Patrol Cap - Identifier Patch can be attached.";
		model = "ModularVestSystem\data\Helmets\MVS_Cap_g.p3d";
		attachments[] = {"patch_04"};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=110;
		itemSize[]={3,2};
		absorbency=0.8;
		heatIsolation=0.25;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\Helmets\MVS_Cap.rvmat"
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
                        {1.0,{"ModularVestSystem\data\Helmets\MVS_Cap.rvmat"}},
                        {0.7,{"ModularVestSystem\data\Helmets\MVS_Cap.rvmat"}},
                        {0.5,{"ModularVestSystem\data\Helmets\MVS_Cap_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\Helmets\MVS_Cap_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\Helmets\MVS_Cap_destruct.rvmat"}}
                    };
				};
			};
		};
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\MVS_Cap.p3d";
			female = "ModularVestSystem\data\Helmets\MVS_Cap.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MVS_Cap_OD: MVS_Cap_Base
	{
		scope = 2;
		displayName = "Patrol Cap";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co.paa"
		};
	};
	class MVS_Cap_Tan: MVS_Cap_Base
	{
		scope = 2;
		displayName = "Patrol Cap";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Tan.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Tan.paa"
		};
	};
	class MVS_Cap_Black: MVS_Cap_Base
	{
		scope = 2;
		displayName = "Patrol Cap";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Black.paa"
		};
	};
	class MVS_Cap_Multicam: MVS_Cap_Base
	{
		scope = 2;
		displayName = "Patrol Cap";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC.paa"
		};
	};
	class MVS_Cap_Multicam_Black: MVS_Cap_Base
	{
		scope = 2;
		displayName = "Patrol Cap";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC_Black.paa"
		};
	};
	class MVS_Cap_Multicam_Tropic: MVS_Cap_Base
	{
		scope = 2;
		displayName = "Patrol Cap";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_MC_Tropic.paa"
		};
	};	
	class MVS_Cap_ERDL: MVS_Cap_Base
	{
		scope = 2;
		displayName = "Patrol Cap";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_ERDL.paa"
		};
	};
	class MVS_Cap_Snow: MVS_Cap_Base
	{
		scope = 2;
		displayName = "Patrol Cap";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Snow.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Snow.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Snow.paa"
		};
	};
	class MVS_CombatPants_Base: Clothing
	{
		scope=0;
		displayName="Combat Pants";
		descriptionShort="Designed as a no-compromise assault uniform, these pants are aggressively cut for maximum mobility.";
		model="ModularVestSystem\data\Uniforms\MVS_CombatPants_g.p3d";
		ContinuouActions[] = {"AT_WRING_CLOTHES"};
		inventorySlot[] = {"Legs"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,5};
		weight = 800;
		ragQuantity = 3;
		varWetMax = 0.79;
		heatIsolation = 0.5;
		visibilityModifier = 0.7;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		quickBarBonus=2;
		hiddenSelections[]={"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Tan_co.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Tan_co.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Tan_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\Uniforms\MVS_CombatPants.rvmat"
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
                        {1.0,{"ModularVestSystem\data\Uniforms\MVS_CombatPants.rvmat"}},
                        {0.7,{"ModularVestSystem\data\Uniforms\MVS_CombatPants.rvmat"}},
                        {0.5,{"ModularVestSystem\data\Uniforms\MVS_CombatPants_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\Uniforms\MVS_CombatPants_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\Uniforms\MVS_CombatPants_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male="ModularVestSystem\data\Uniforms\MVS_CombatPants.p3d";
			female="ModularVestSystem\data\Uniforms\MVS_CombatPants_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};	
	class MVS_CombatPants_Tan: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Tan_co.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Tan_co.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Tan_co.paa"
		};
	};
	class MVS_CombatPants_OD: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_OD.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_OD.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_OD.paa"
		};
	};
	class MVS_CombatPants_Black: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Black.paa"
		};
	};
	class MVS_CombatPants_ERDL: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_ERDL.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_ERDL.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_ERDL.paa"
		};
	};
	class MVS_CombatPants_Snow: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_Snow.paa"
		};
	};
	class MVS_CombatPants_Multicam: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC.paa"
		};
	};	
	class MVS_CombatPants_Multicam_Tropic: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Tropic.paa"
		};
	};	
	class MVS_CombatPants_Multicam_Black: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Black.paa"
		};
	};	
	class MVS_CombatShirt_Base: Clothing
	{
		scope=0;
		displayName="Combat Shirt";
		descriptionShort="The MVS Combat Shirt is a combat-specific garment specifically designed to be worn under body armor.";
		model="ModularVestSystem\data\Uniforms\MVS_CombatShirt_g.p3d";
		quickBarBonus=1;
		inventorySlot[] = {"Body"};
		itemInfo[] = {"Clothing","Body"};
		weight = 270;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,5};
		varWetMax = 0.79;
		heatIsolation = 0.7;
		ragQuantity = 4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		soundAttType = "WoolShirt";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\Uniforms\MVS_CombatShirt.rvmat"
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
                        {1.0,{"ModularVestSystem\data\Uniforms\MVS_CombatShirt.rvmat"}},
                        {0.7,{"ModularVestSystem\data\Uniforms\MVS_CombatShirt.rvmat"}},
                        {0.5,{"ModularVestSystem\data\Uniforms\MVS_CombatShirt_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\Uniforms\MVS_CombatShirt_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\Uniforms\MVS_CombatShirt_destruct.rvmat"}}
                    };
				};
			};
		};
		class ClothingTypes
		{
			male="ModularVestSystem\data\Uniforms\MVS_CombatShirt.p3d";
			female="ModularVestSystem\data\Uniforms\MVS_CombatShirt_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class MVS_CombatShirt_Tan: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt";
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Tan.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Tan.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Tan.paa"
		};
	};
	class MVS_CombatShirt_OD: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt";
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_OD.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_OD.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_OD.paa"
		};
	};
	class MVS_CombatShirt_Black: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt";
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Black.paa"
		};
	};
	class MVS_CombatShirt_ERDL: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt";
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_ERDL.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_ERDL.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_ERDL.paa"
		};
	};
	class MVS_CombatShirt_Snow: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt";
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_Snow.paa"
		};
	};
	class MVS_CombatShirt_Multicam: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt";
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC.paa"
		};
	};
	class MVS_CombatShirt_Multicam_Tropic: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt";
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC_Tropic.paa"
		};
	};
	class MVS_CombatShirt_Multicam_Black: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt";
		visibilityModifier=0.7;
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatShirt_MC_Black.paa"
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
						{1.0,{"DZ\characters\pants\Data\GorkaEPants.rvmat","DZ\characters\pants\Data\GorkaEPants_dropped.rvmat"}},
						{0.7,{"DZ\characters\pants\Data\GorkaEPants.rvmat","DZ\characters\pants\Data\GorkaEPants_dropped.rvmat"}},
						{0.5,{"DZ\characters\pants\Data\GorkaEPants_damage.rvmat","DZ\characters\pants\Data\GorkaEPants_dropped_damage.rvmat"}},
						{0.3,{"DZ\characters\pants\Data\GorkaEPants_damage.rvmat","DZ\characters\pants\Data\GorkaEPants_dropped_damage.rvmat"}},
						{0.0,{"DZ\characters\pants\Data\GorkaEPants_destruct.rvmat","DZ\characters\pants\Data\GorkaEPants_dropped_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class GorkaPants_Flat;
	class MVS_GorkaPants: GorkaPants_Flat
	{
		displayName = "Gorka Pants";
		descriptionShort = "Gorka Pants";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants.paa"
		};
	};
	class MVS_GorkaPants_Snow: GorkaPants_Flat
	{
		displayName = "Gorka Pants";
		descriptionShort = "Gorka Pants";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_Snow.paa"
		};
	};
	class MVS_GorkaPants_Multicam: GorkaPants_Flat
	{
		displayName = "Gorka Pants";
		descriptionShort = "Gorka Pants";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC.paa"
		};
	};
	class MVS_GorkaPants_Multicam_Tropic: GorkaPants_Flat
	{
		displayName = "Gorka Pants";
		descriptionShort = "Gorka Pants";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC_Tropic.paa"
		};
	};
	class MVS_GorkaPants_Multicam_Black: GorkaPants_Flat
	{
		displayName = "Gorka Pants";
		descriptionShort = "Gorka Pants";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaPants_MC_Black.paa"
		};
	};
	class MVS_GorkaJacket: GorkaEJacket_Flat
	{
		displayName = "Gorka Top";
		descriptionShort = "Gorka Top";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket.paa"
		};
	};
	class MVS_GorkaJacket_Snow: GorkaEJacket_Flat
	{
		displayName = "Gorka Top";
		descriptionShort = "Gorka Top";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_Snow.paa"
		};
	};
	class MVS_GorkaJacket_Multicam: GorkaEJacket_Flat
	{
		displayName = "Gorka Top";
		descriptionShort = "Gorka Top";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC.paa"
		};
	};
	class MVS_GorkaJacket_Multicam_Tropic: GorkaEJacket_Flat
	{
		displayName = "Gorka Top";
		descriptionShort = "Gorka Top";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC_Tropic.paa"
		};
	};
	class MVS_GorkaJacket_Multicam_Black: GorkaEJacket_Flat
	{
		displayName = "Gorka Top";
		descriptionShort = "Gorka Top";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_GorkaJacket_MC_Black.paa"
		};
	};
	class MVS_FlatCap: FlatCap_Black
	{
		displayName = "Flat Cap";
		descriptionShort = "Flat Cap";		
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_FlatCap.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap.paa"
		};
	};
	class MVS_FlatCap_Snow: FlatCap_Black
	{
		displayName = "Flat Cap";
		descriptionShort = "Flat Cap";		
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_Snow.paa"
		};
	};
	class MVS_FlatCap_Multicam: FlatCap_Black
	{
		displayName = "Flat Cap";
		descriptionShort = "Flat Cap";		
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC.paa"
		};
	};
	class MVS_FlatCap_Multicam_Tropic: FlatCap_Black
	{
		displayName = "Flat Cap";
		descriptionShort = "Flat Cap";		
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC_Tropic.paa"
		};
	};
	class MVS_FlatCap_Multicam_Black: FlatCap_Black
	{
		displayName = "Flat Cap";
		descriptionShort = "Flat Cap";		
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_FlatCap_MC_Black.paa"
		};
	};
	class MVS_Pants_BDU: CargoPants_Beige
	{
		scope = 2;
		displayName = "BDU Pants";
		descriptionShort = "BDU Pants";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_pants_BDU.paa",
			"ModularVestSystem\data\Uniforms\MVS_pants_BDU.paa",
			"ModularVestSystem\data\Uniforms\MVS_pants_BDU.paa"
		};
	};
	class MVS_Pants_BDU_Snow: CargoPants_Beige
	{
		scope = 2;
		displayName = "BDU Pants";
		descriptionShort = "BDU Pants";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_pants_BDU_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_pants_BDU_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_pants_BDU_Snow.paa"
		};
	};
	class MVS_Shirt_BDU: TacticalShirt_Olive
	{
		scope = 2;
		displayName = "BDU Top";
		descriptionShort = "BDU Top";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU.paa"
		};
	};
	class MVS_Shirt_BDU_Snow: TacticalShirt_Olive
	{
		scope = 2;
		displayName = "BDU Top";
		descriptionShort = "BDU Top";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_Snow.paa"
		};
	};
	class MVS_Shirt_BDU_Multicam: TacticalShirt_Olive
	{
		scope = 2;
		displayName = "BDU Top";
		descriptionShort = "BDU Top";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC.paa"
		};
	};	
	class MVS_Shirt_BDU_Multicam_Tropic: TacticalShirt_Olive
	{
		scope = 2;
		displayName = "BDU Top";
		descriptionShort = "BDU Top";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC_Tropic.paa"
		};
	};
	class MVS_Shirt_BDU_Multicam_Black: TacticalShirt_Olive
	{
		scope = 2;
		displayName = "BDU Top";
		descriptionShort = "BDU Top";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_jacket_BDU_MC_Black.paa"
		};
	};
	class MVS_BoonieHat: BoonieHat_Olive
	{
		displayName = "Boonie Hat";
		descriptionShort = "Boonie Hat";
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat.paa"
		};
	};
	class MVS_BoonieHat_Snow: BoonieHat_Olive
	{
		displayName = "Boonie Hat";
		descriptionShort = "Boonie Hat";
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_Snow.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_Snow.paa"
		};
	};
	class MVS_BoonieHat_Multicam: BoonieHat_Olive
	{
		displayName = "Boonie Hat";
		descriptionShort = "Boonie Hat";
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC.paa"
		};
	};
	class MVS_BoonieHat_Multicam_Tropic: BoonieHat_Olive
	{
		displayName = "Boonie Hat";
		descriptionShort = "Boonie Hat";
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Tropic.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Tropic.paa"
		};
	};
	class MVS_BoonieHat_Multicam_Black: BoonieHat_Olive
	{
		displayName = "Boonie Hat";
		descriptionShort = "Boonie Hat";
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Black.paa"
		};
	};
	class Modular_Patch_Base: Clothing
	{
		scope = 0;
		displayName = "Identifier Patch";
		descriptionShort = "Identifier Patch - comes in a variety of patterns and emblems";
		model = "ModularVestSystem\data\patch.p3d";
		itemSize[] = {2,1};
		inventorySlot[] = {"Armband","patch_01","patch_02","patch_03","patch_04"};
		weight=0;
		hiddenSelections[] = {"zbytek","armband"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_sl.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\vestTextures\patch.rvmat",
			"ModularVestSystem\data\vestTextures\MVS_Armband.rvmat"
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
                        {1.0,{"ModularVestSystem\data\vestTextures\patch.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband.rvmat"}},
                        {0.7,{"ModularVestSystem\data\vestTextures\patch.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband.rvmat"}},
                        {0.5,{"ModularVestSystem\data\vestTextures\patch_damage.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\vestTextures\patch_damage.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\vestTextures\patch_destruct.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male="ModularVestSystem\data\MVS_Patch_m.p3d";
			female="ModularVestSystem\data\MVS_Patch_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class Modular_Patch_Base_2: Clothing
	{
		scope = 0;
		displayName = "Country Flag";
		descriptionShort = "Country Flag Patch";
		model = "ModularVestSystem\data\MVS_Country_Patch.p3d";
		itemSize[] = {2,1};
		inventorySlot[] = {"Armband","patch_01","patch_02","patch_03","patch_04"};
		weight=0;
		hiddenSelections[] = {"zbytek","armband"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Afghanistan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\vestTextures\MVS_Country_Patch.rvmat",
			"ModularVestSystem\data\vestTextures\MVS_Armband.rvmat"
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
                        {1.0,{"ModularVestSystem\data\vestTextures\MVS_Country_Patch.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband.rvmat"}},
                        {0.7,{"ModularVestSystem\data\vestTextures\MVS_Country_Patch.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband.rvmat"}},
                        {0.5,{"ModularVestSystem\data\vestTextures\MVS_Country_Patch_damage.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\vestTextures\MVS_Country_Patch_damage.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\vestTextures\MVS_Country_Patch_destruct.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_destruct.rvmat"}}
                    };
				};
			};
		};		
		class ClothingTypes
		{
			male="ModularVestSystem\data\MVS_Patch_m2.p3d";
			female="ModularVestSystem\data\MVS_Patch_m2.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class MVS_CountryFlag_Afghanistan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Afghanistan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Afghanistan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Albania: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Albania";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Albania.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Algeria: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Algeria";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Algeria.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_AmericanSamoa: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - American Samoa";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\AmericanSamoa.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Andorra: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Andorra";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Andorra.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Angola: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Angola";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Angola.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Antigua: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Antigua";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Antigua.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Argentina: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Argentina";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Argentina.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Armenia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Armenia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Armenia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Aruba: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Aruba";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Aruba.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Australia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Australia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Australia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Austria: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Austria";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Austria.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Azerbaijan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Azerbaijan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Azerbaijan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Azores: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Azores";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Azores.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Bahamas: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Bahamas";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Bahamas.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Bahrain: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Bahrain";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Bahrain.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Bangladesh: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Bangladesh";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Bangladesh.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Barbados: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Barbados";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Barbados.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Belarus: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Belarus";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Belarus.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Belgium: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Belgium";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Belgium.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Belize: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Belize";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Belize.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Benin: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Benin";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Benin.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Bermuda: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Bermuda";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Bermuda.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Bhutan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Bhutan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Bhutan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Bolivia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Bolivia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Bolivia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class MVS_CountryFlag_Bosnia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Bosnia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Bosnia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Botswana: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Botswana";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Botswana.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Brazil: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Brazil";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Brazil.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_BritishVirginIslands: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - British Virgin Islands";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\BritishVirginIslands.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_BruneiDarussalam: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Brunei Darussalam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\BruneiDarussalam.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Bulgaria: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Bulgaria";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Bulgaria.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_BurkinaFaso: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Burkina Faso";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\BurkinaFaso.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Burma: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Burma";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Burma.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Burundi: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Burundi";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Burundi.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Cambodia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Cambodia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Cambodia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Cameroon: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Cameroon";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Cameroon.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Canada: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Canada";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Canada.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_CapeVerde: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Cape Verde";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\CapeVerde.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_CaymanIslands: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Cayman Islands";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\CaymanIslands.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Chad: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Chad";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Chad.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Chile: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Chile";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Chile.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_China: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - China";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\China.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Colombia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Colombia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Colombia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Comoros: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Comoros";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Comoros.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_CookIslands: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Cook Islands";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\CookIslands.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_CostaRica: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Costa Rica";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\CostaRica.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Croatia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Croatia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Croatia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Cuba: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Cuba";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Cuba.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Curacao: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Curacao";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Curacao.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Cyprus: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Cyprus";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Cyprus.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Czech: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Czech";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Czech.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Denmark: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Denmark";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Denmark.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Djibouti: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Djibouti";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Djibouti.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_DominicanRepublic: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Dominican Republic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\DominicanRepublic.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_EastTimor: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - East Timor";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\EastTimor.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Ecuador: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Ecuador";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Ecuador.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Egypt: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Egypt";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Egypt.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_ElSalvador: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - El Salvador";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\ElSalvador.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Eritrea: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Eritrea";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Eritrea.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Estonia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Estonia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Estonia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Ethiopia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Ethiopia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Ethiopia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_FalklandIslands: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Falkland Islands";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\FalklandIslands.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Fiji: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Fiji";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Fiji.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Finland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Finland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Finland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_France: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - France";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\France.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Gabon: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Gabon";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Gabon.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Gambia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Gambia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Gambia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Germany: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Germany";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Germany.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Ghana: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Ghana";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Ghana.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Gibraltar: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Gibraltar";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Gibraltar.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Greece: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Greece";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Greece.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Greenland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Greenland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Greenland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Grenada: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Grenada";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Grenada.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Guam: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Guam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Guam.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Guatemala: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Guatemala";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Guatemala.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Guinea: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Guinea";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Guinea.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Guyana: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Guyana";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Guyana.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_GypsyRomani: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Gypsy Romani";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\GypsyRomani.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Haiti: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Haiti";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Haiti.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Honduras: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Honduras";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Honduras.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Hungary: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Hungary";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Hungary.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Iceland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Iceland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Iceland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_India: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - India";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\India.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Indonesia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Indonesia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Indonesia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Iran: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Iran";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Iran.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Iraq: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Iraq";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Iraq.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Ireland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Ireland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Ireland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Israel: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Israel";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Israel.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Italy: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Italy";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Italy.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Jamaica: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Jamaica";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Jamaica.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Japan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Japan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Japan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Jordan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Jordan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Jordan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Kazakhstan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Kazakhstan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Kazakhstan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Kenya: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Kenya";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Kenya.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Kiribati: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Kiribati";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Kiribati.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Kosovo: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Kosovo";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Kosovo.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Kuwait: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Kuwait";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Kuwait.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Kyrgyzstan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Kyrgyzstan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Kyrgyzstan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Laos: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Laos";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Laos.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Latvia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Latvia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Latvia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Lebanon: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Lebanon";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Lebanon.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Lesotho: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Lesotho";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Lesotho.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Liberia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Liberia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Liberia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Libya: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Libya";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Libya.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Lithuania: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Lithuania";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Lithuania.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Macau: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Macau";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Macau.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Macedonia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Macedonia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Macedonia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Madagascar: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Madagascar";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Madagascar.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Malawi: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Malawi";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Malawi.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Malaysia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Malaysia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Malaysia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Maldives: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Maldives";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Maldives.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Mali: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Mali";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Mali.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Malta: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Malta";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Malta.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_MarshallIslands: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Marshall Islands";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\MarshallIslands.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Mauritius: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Mauritius";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Mauritius.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Mexico: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Mexico";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Mexico.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Micronesia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Micronesia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Micronesia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Moldova: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Moldova";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Moldova.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Monaco: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Monaco";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Monaco.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Mongolia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Mongolia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Mongolia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Montenegro: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Montenegro";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Montenegro.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Morocco: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Morocco";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Morocco.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Mozambique: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Mozambique";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Mozambique.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Namibia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Namibia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Namibia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Nauru: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Nauru";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Nauru.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Netherlands: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Netherlands";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Netherlands.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_NewZealand: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - New Zealand";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\NewZealand.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Nicaragua: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Nicaragua";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Nicaragua.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Niger: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Niger";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Niger.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Nigeria: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Nigeria";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Nigeria.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_NorthernIreland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Northern Ireland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\NorthernIreland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Norway: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Norway";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Norway.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Oman: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Oman";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Oman.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Pakistan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Pakistan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Pakistan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Palau: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Palau";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Palau.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Palestine: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Palestine";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Palestine.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Panama: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Panama";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Panama.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_PapuaNewGuinea: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Papua New Guinea";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\PapuaNewGuinea.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Paraguay: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Paraguay";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Paraguay.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Peru: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Peru";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Peru.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Philippines: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Philippines";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Philippines.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Poland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Poland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Poland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Portugal: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Portugal";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Portugal.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_PuertoRico: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Puerto Rico";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\PuertoRico.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Qatar: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Qatar";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Qatar.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Romania: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Romania";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Romania.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Russia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Russia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Russia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	
	class MVS_CountryFlag_Rwanda: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Rwanda";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Rwanda.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Samoa: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Samoa";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Samoa.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_SanMarino: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - San Marino";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\SanMarino.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_SaudiArabia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Saudi Arabia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\SaudiArabia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Scotland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Scotland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Scotland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Senegal: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Senegal";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Senegal.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Serbia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Serbia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Serbia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Seychelles: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Seychelles";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Seychelles.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Sicily: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Sicily";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Sicily.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_SierraLeone: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Sierra Leone";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\SierraLeone.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Singapore: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Singapore";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Singapore.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Slovakia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Slovakia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Slovakia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Slovenia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Slovenia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Slovenia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_SolomonIslands: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Solomon Islands";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\SolomonIslands.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Somalia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Somalia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Somalia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_SouthAfrica: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - South Africa";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\SouthAfrica.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_SouthKorea: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - South Korea";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\SouthKorea.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_SouthVietnam: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - South Vietnam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\SouthVietnam.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Spain: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Spain";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Spain.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_SriLanka: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Sri Lanka";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\SriLanka.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_StLucia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - St Lucia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\StLucia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_StMaarten: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - St Maarten";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\StMaarten.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Sudan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Sudan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Sudan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Suriname: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Suriname";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Suriname.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Swaziland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Swaziland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Swaziland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Sweden: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Sweden";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Sweden.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Switzerland: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Switzerland";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Switzerland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Syria: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Syria";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Syria.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Taiwan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Taiwan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Taiwan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Tajikistan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Tajikistan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Tajikistan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Tanzania: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Tanzania";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Tanzania.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Thailand: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Thailand";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Thailand.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Tibet: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Tibet";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Tibet.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Togo: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Togo";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Togo.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Tonga: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Tonga";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Tonga.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Trinidad: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Trinidad";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Trinidad.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Tunisia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Tunisia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Tunisia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Turkey: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Turkey";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Turkey.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Turkmenistan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Turkmenistan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Turkmenistan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_TurksCaicos: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Turks & Caicos";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\TurksCaicos.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Tuvalu: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Tuvalu";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Tuvalu.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_UAE: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - UAE";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\UAE.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Uganda: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Uganda";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Uganda.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Ukraine: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Ukraine";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Ukraine.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_UnitedKingdom: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - United Kingdom";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\UnitedKingdom.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_UnitedNations: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - United Nations";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\UnitedNations.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_UnitedStates: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - United States";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\UnitedStates.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Uruguay: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Uruguay";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Uruguay.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_USSR: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - USSR";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\USSR.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Uzbekistan: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Uzbekistan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Uzbekistan.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Vanuatu: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Vanuatu";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Vanuatu.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Venezuela: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Venezuela";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Venezuela.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Vietnam: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Vietnam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Vietnam.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Wales: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Wales";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Wales.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Yemen: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Yemen";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Yemen.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Yugoslavia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Yugoslavia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Yugoslavia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Zambia: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Zambia";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Zambia.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_CountryFlag_Zimbabwe: Modular_Patch_Base_2
	{
		scope = 2;
		displayName = "Country Flag - Zimbabwe";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\CountryFlags\Zimbabwe.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class MVS_Patch_01: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Squad Leader";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_sl.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_02: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Team Leader";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_tl.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_03: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Machinegunner";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_gnr.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_04: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Medic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_med.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_05: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Sniper";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_snpr.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_06: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Rifleman";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_rfl.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_07: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - US";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_US.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_08: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - UK";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_UK.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_09: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - AUS";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_AUS.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_10: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - US";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_US_IR.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_11: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - UK";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_UK_IR.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_12: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - AUS";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_AUS_IR.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_13: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Rotten's Raiders";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_cobra.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_14: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - A10 Warthog";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_a10.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_15: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - EOD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_EOD.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_16: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - F*ck Sh*t Up";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_FSU.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_17: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - No F*cks Given";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_fcks.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_18: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - I'm Too Old for This Sh*t";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_old.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_19: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Weyland-Yutani Corp";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_Weyland.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_20: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - The Warriors";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_warriors.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_21: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Canada";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_CAN.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_22: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Canada";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_CAN_IR.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_23: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - OBEY";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_obey.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_24: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Blackwater";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_Blackwater.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_25: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Lagoon Trade & Courier Services";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_lagoon.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_26: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - HCLI";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_HCLI.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_27: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Boogaloo";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_boogaloo.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_28: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - UN";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_UN.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_29: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Umbrella";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_Umbrella.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_30: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Umbrella";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_USS.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_31: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Romania";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_ROM.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_32: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Sweden";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_SWE.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_33: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - Anarchy";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_AN.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_34: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - RTO";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_RTO.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa",
			
		};
	};
	class MVS_Patch_35: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - This is the Way";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\patch_warrior.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class MVS_Patch_36: Modular_Patch_Base
	{
		scope = 2;
		displayName = "Identifier Patch - ADMIN";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\MVS_admin_patch.paa",
			"ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
};
class CfgSlots
{
	class Slot_MVSBattery1
	{
		name="MVSBattery1";
		displayName="Battery";
		ghostIcon="batteryd";
	};
	class Slot_MVSBattery2
	{
		name="MVSBattery2";
		displayName="Battery";
		ghostIcon="batteryd";
	};
	class Slot_modular_pouch_2
	{
		name = "modular_pouch_2";
		displayName = "Modular Pouch";
		ghostIcon = "vestpouches";
	};
	class Slot_modular_pouch_4
	{
		name = "modular_pouch_4";
		displayName = "Modular Pouch";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_5
	{
		name = "modular_pouch_5";
		displayName = "Modular Pouch";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_6
	{
		name = "modular_pouch_6";
		displayName = "Modular Pouch";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_8
	{
		name = "modular_pouch_8";
		displayName = "Modular Pouch";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_9
	{
		name = "modular_pouch_9";
		displayName = "Modular Pouch";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_10
	{
		name = "modular_pouch_10";
		displayName = "Modular Pouch";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_11
	{
		name = "modular_pouch_11";
		displayName = "Modular Pouch";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_12
	{
		name = "modular_pouch_12";
		displayName = "Modular Pouch";
		ghostIcon = "vestpouches";
	};
	class Slot_modular_pouch_13
	{
		name = "modular_pouch_13";
		displayName = "Modular Pouch";
		ghostIcon = "pouches";
	};
	class Slot_patch_01
	{
		name = "patch_01";
		ghostIcon = "set:mvs_ghost image:patch";
		displayName = "Patch";
	};
	class Slot_patch_02
	{
		name = "patch_02";
		ghostIcon = "set:mvs_ghost image:patch";
		displayName = "Patch";
	};
	class Slot_patch_03
	{
		name = "patch_03";
		ghostIcon = "set:mvs_ghost image:patch";
		displayName = "Patch";
	};
	class Slot_patch_04
	{
		name = "patch_04";
		ghostIcon = "set:mvs_ghost image:patch";
		displayName = "Patch";
	};	
	class Slot_morphine
	{
		name = "morphine";
		displayName = "morphine";
		ghostIcon = "set:mvs_ghost image:morphine";
	};
	class Slot_epinephrine
	{
		name = "epinephrine";
		displayName = "epinephrine";
		ghostIcon = "mset:vs_ghost image:morphine";
	};
	class Slot_MVS_vest
	{
		name = "MVS_vest";
		displayName = "Vest";
		ghostIcon = "vest";
	};
	class Slot_MVS_helmet
	{
		name = "MVS_helmet";
		displayName = "Helmet";
		ghostIcon = "headgear";
	};
	class Slot_MVS_mask
	{
		name = "MVS_mask";
		displayName = "Mask";
		ghostIcon = "mask";
	};
	class Slot_MVS_pack
	{
		name = "MVS_pack";
		displayName = "Pack";
		ghostIcon = "back";
	};
	class Slot_MVS_belt
	{
		name = "MVS_belt";
		displayName = "Belt";
		ghostIcon = "hips";
	};
	class Slot_MVS_Screwdriver
	{
		name="MVS_Screwdriver";
		ghostIcon = "set:mvs_ghost image:screwdriver";
		displayName = "Screwdriver";
	};
	class Slot_MVS_Pliers
	{
		name="MVS_Pliers";
		ghostIcon = "set:mvs_ghost pliers";
		displayName = "Pliers";
	};
	class Slot_Screwdriver1
	{
		name="Screwdriver1";
		ghostIcon = "set:mvs_ghost image:screwdriver";
		displayName = "Screwdriver";
	};
	class Slot_Pliers1
	{
		name="Pliers1";
		ghostIcon = "set:mvs_ghost image:pliers";
		displayName = "Pliers";
	};
	class Slot_MVS_Lockpick
	{
		name="MVS_Lockpick";
		ghostIcon = "set:mvs_ghost image:lockpick";
		displayName = "Lockpick";
	};
	class Slot_MVS_Altyn_Visor
	{
		name="MVS_Altyn_Visor";
		displayName = "Altyn Visor";
		ghostIcon = "gorkavisor";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMVS_Altyn_Helmet_Visor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MVS_Altyn_Visor";
		model = "ModularVestSystem\data\helmets\MVS_Altyn_Helmet_Visor.p3d";
	};	
	class Proxymodular_pouch_2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_2";
		model = "ModularVestSystem\data\modular_pouch_2.p3d";
	};
	class Proxymodular_pouch_4: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_4";
		model = "ModularVestSystem\data\modular_pouch_4.p3d";
	};
	
	class Proxymodular_pouch_5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_5";
		model = "ModularVestSystem\data\modular_pouch_5.p3d";
	};
	class Proxymodular_pouch_6: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_6";
		model = "ModularVestSystem\data\modular_pouch_6.p3d";
	};
	class Proxymodular_pouch_8: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_8";
		model = "ModularVestSystem\data\modular_pouch_8.p3d";
	};
	class Proxymodular_pouch_9: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_9";
		model = "ModularVestSystem\data\modular_pouch_9.p3d";
	};
	class Proxymodular_pouch_10: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_10";
		model = "ModularVestSystem\data\modular_pouch_10.p3d";
	};
	class Proxymodular_pouch_11: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_11";
		model = "ModularVestSystem\data\modular_pouch_11.p3d";
	};
	class Proxymodular_pouch_12: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_12";
		model = "ModularVestSystem\data\modular_pouch_12.p3d";
	};
	class Proxymodular_pouch_13: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "modular_pouch_13";
		model = "ModularVestSystem\data\modular_pouch_13.p3d";
	};
	class Proxymodular_weapon: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder";
		model = "ModularVestSystem\data\modular_weapon.p3d";
	};
	class Proxymodular_weapon_rack: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder";
		model = "ModularVestSystem\data\modular_weapon_rack.p3d";
	};
	class ProxyMorphine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "morphine";
		model = "DZ\gear\medical\Morphine.p3d";
	};
	class ProxyEpinephrine: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "epinephrine";
		model = "DZ\gear\medical\Epinephrine.p3d";
	};
	class ProxyBandage: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MedicalBandage";
		model = "DZ\gear\medical\Bandage.p3d";
	};
	class ProxyspawnVest: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MVS_vest";
		model = "ModularVestSystem\data\ArmorRack\spawnVest.p3d";
	};
	class ProxyspawnHeadgear: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MVS_helmet";
		model = "ModularVestSystem\data\ArmorRack\spawnHeadgear.p3d";
	};
	class ProxyspawnMask: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MVS_mask";
		model = "ModularVestSystem\data\ArmorRack\spawnMask.p3d";
	};
	class ProxyspawnPack: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MVS_pack";
		model = "ModularVestSystem\data\ArmorRack\spawnPack.p3d";
	};
	class ProxyspawnBelt: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MVS_belt";
		model = "ModularVestSystem\data\ArmorRack\spawnBelt.p3d";
	};
	class Proxypatch: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "patch_01";
		model = "ModularVestSystem\data\patch.p3d";
	};
	class Proxypatch_01: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "patch_02";
		model = "ModularVestSystem\data\patch_01.p3d";
	};
	class Proxypatch_02: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "patch_03";
		model = "ModularVestSystem\data\patch_02.p3d";
	};
	class Proxypatch_03: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "patch_04";
		model = "ModularVestSystem\data\patch_03.p3d";
	};	
	class ProxyMVS_Pliers: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pliers1";
		model = "ModularVestSystem\data\MVS_Pliers.p3d";
	};
	class ProxyMVS_Screwdriver: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Screwdriver1";
		model = "ModularVestSystem\data\MVS_Screwdriver.p3d";
	};
	class ProxyMVS_Lockpick: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MVS_Lockpick";
		model = "ModularVestSystem\data\MVS_Lockpick.p3d";
	};
};