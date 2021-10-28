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
			"DZ_Characters",
			"DZ_Gear_Drinks",
			"DZ_Gear_Medical",
			"DZ_Gear_Containers",
			"DZ_Weapons_Magazines"
		};
	};
};

class CfgMods
{
	class ModularVestSystem_Scripts
	{
		dir = "ModularVestSystem";
		name = "ModularVestSystem";
		credits = "DaddyPrapor,FutureSixx";
		author = "DaemonForge";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			
			class imageSets
			{
				files[] =
				{
					"ModularVestSystem/Images/mvs_ghost.imageset"
				};
			};
			class worldScriptModule
			{
				files[] = {
					"ModularVestSystem/scripts/4_World"
				};
			};
		};
	};
};
class cfgVehicles
{	
	class Inventory_Base;
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class Container_Base;
	class MountainBag_ColorBase;
	class BDUPants;
	class TacticalShirt_ColorBase;
	class CargoPants_Beige;
	class TacticalShirt_Olive;
	class GorkaPants_Flat;
	class GorkaEJacket_Flat;
	class FlatCap_Black;
	class BoonieHat_Olive;
	
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
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
		};
		weight=800;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
        hiddenSelectionsMaterials[]=
        {
            "ModularVestSystem\data\vestTextures\vest.rvmat"
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
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
		};
	};
	class MVS_Magazine_Pouch_OD: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
		};
	};
	class MVS_Magazine_Pouch_ERDL: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"
		};
	};
	class MVS_Magazine_Pouch_Tan: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_tan.paa"
		};
	};	
	class MVS_Magazine_Pouch_Black: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_2.paa"
		};
	};
	class MVS_Magazine_Pouch_Snow: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_snow.paa"
		};
	};
	class MVS_Magazine_Pouch_Multicam: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC.paa"
		};
	};
	class MVS_Magazine_Pouch_Multicam_Black: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"
		};
	};
	class MVS_Magazine_Pouch_Multicam_Tropic: Modular_Pouch_Base
	{
		scope = 2;
		displayName = "Magazine Pouch - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"
		};
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
		weight=800;
		inventorySlot[] = {"modular_pouch_10"};
		attachments[] = {"VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
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
	class MVS_Molle_Panel_OD: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
		};
	};
	class MVS_Molle_Panel_Black: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_2.paa"
		};
	};
	class MVS_Molle_Panel_Tan: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_Tan.paa"
		};
	};
	class MVS_Molle_Panel_ERDL: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"
		};
	};
	class MVS_Molle_Panel_Snow: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_Snow.paa"
		};
	};
	class MVS_Molle_Panel_Multicam: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC.paa"
		};
	};
	class MVS_Molle_Panel_Multicam_Tropic: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"
		};
	};
	class MVS_Molle_Panel_Multicam_Black: MVS_Molle_Panel_Base
	{
		scope = 2;
		displayName = "Molle Panel - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"
		};
	};	
	class Modular_Pouch_Base_Taco: MVS_Pouch_Base
	{
		scope = 0;
		displayName = "Raid Pouch";
		descriptionShort = "The MVS Raid pouch, capable of holding Pliers, a Screwdriver, and lockpick";
		model = "ModularVestSystem\data\modular_pouch_12.p3d";
		attachments[] = {"magazine4","magazine5","magazine7","MVS_Screwdriver","MVS_Pliers","Screwdriver1","Pliers1","MVS_Lockpick"};
		rotationFlags=0;		
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,4};
		inventorySlot[] = {"modular_pouch_2","modular_pouch_12","VestPouch"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co.paa"
		};
		weight=800;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
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
		displayName = "Raid Pouch - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co.paa"
		};
	};	
	class MVS_Taco_Pouch_ERDL: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co_ERDL.paa"
		};
	};	
	class MVS_Taco_Pouch_Tan: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co_tan.paa"
		};
	};	
	class MVS_Taco_Pouch_Black: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co_black.paa"
		};
	};
	class MVS_Taco_Pouch_Snow: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co_snow.paa"
		};
	};
	class MVS_Taco_Pouch_Multicam: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co_MC.paa"
		};
	};
	class MVS_Taco_Pouch_Multicam_Tropic: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co_MC_Tropic.paa"
		};
	};
	class MVS_Taco_Pouch_Multicam_Black: Modular_Pouch_Base_Taco
	{
		scope = 2;
		displayName = "Raid Pouch - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\taco_co_MC_Black.paa"
		};
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
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
		};
		weight=600;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
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
	class MVS_Admin_Pouch_OD: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
		};
	};	
	class MVS_Admin_Pouch_ERDL: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"
		};
	};	
	class MVS_Admin_Pouch_Tan: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_tan.paa"
		};
	};		
	class MVS_Admin_Pouch_Black: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_2.paa"
		};
	};
	class MVS_Admin_Pouch_Snow: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_snow.paa"
		};
	};
	class MVS_Admin_Pouch_Multicam: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC.paa"
		};
	};
	class MVS_Admin_Pouch_Multicam_Black: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"
		};
	};
	class MVS_Admin_Pouch_Multicam_Tropic: Modular_Pouch_Base_Admin
	{
		scope = 2;
		displayName = "Admin Pouch - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"
		};
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
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co.paa"
		};
		weight=1200;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
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
		displayName = "Heavy LMG Pouch - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co.paa"
		};
	};	
	class MVS_Heavy_Pouch_ERDL: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co_ERDL.paa"
		};
	};
	
	class MVS_Heavy_Pouch_Tan: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co_tan.paa"
		};
	};		
	class MVS_Heavy_Pouch_Black: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co_2.paa"
		};
	};
	class MVS_Heavy_Pouch_Snow: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co_snow.paa"
		};
	};
	class MVS_Heavy_Pouch_Multicam: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co_MC.paa"
		};
	};
	class MVS_Heavy_Pouch_Multicam_Tropic: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co_MC_Tropic.paa"
		};
	};
	class MVS_Heavy_Pouch_Multicam_Black: Modular_Pouch_Base_Heavy
	{
		scope = 2;
		displayName = "Heavy LMG Pouch - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vestheavy_co_MC_Black.paa"
		};
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
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
		};
		weight=700;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
	};
	class MVS_Utility_Pouch_OD: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co.paa"
		};
	};
	class MVS_Utility_Pouch_ERDL: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_ERDL.paa"
		};
	};
	class MVS_Utility_Pouch_Tan: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_tan.paa"
		};
	};	
	class MVS_Utility_Pouch_Black: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_2.paa"
		};
	};
	class MVS_Utility_Pouch_Snow: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_snow.paa"
		};
	};
	class MVS_Utility_Pouch_Multicam: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC.paa"
		};
	};
	class MVS_Utility_Pouch_Multicam_Black: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Black.paa"
		};
	};
	class MVS_Utility_Pouch_Multicam_Tropic: Modular_Pouch_Base_Utility
	{
		scope = 2;
		displayName = "Utility Pouch - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic.paa"
		};
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
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_medical.paa"
		};
		weight=600;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
	};
	class MVS_Medical_Pouch_OD: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_medical.paa"
		};
	};
	class MVS_Medical_Pouch_ERDL: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_ERDL_medical.paa"
		};
	};
	class MVS_Medical_Pouch_Tan: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_tan_medical.paa"
		};
	};	
	class MVS_Medical_Pouch_Black: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_2_medical.paa"
		};
	};
	class MVS_Medical_Pouch_Snow: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_snow_medical.paa"
		};
	};
	class MVS_Medical_Pouch_Multicam: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_medical.paa"
		};
	};
	class MVS_Medical_Pouch_Multicam_Black: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Black_medical.paa"
		};
	};
	class MVS_Medical_Pouch_Multicam_Tropic: Modular_Pouch_Base_Medical
	{
		scope = 2;
		displayName = "Medical Pouch - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\vestTextures\vest_co_MC_Tropic_medical.paa"
		};
	};
	class MVS_Pack_Base: MountainBag_ColorBase
	{
		scope = 0;
		displayName = "Combat Pack";
		descriptionShort = "The MVS Combat Pack - rugged, lightweight, and versatile.";
		model = "ModularVestSystem\data\Pack\MVS_pack_g.p3d";
		inventorySlot[] = {"Back","MVS_pack"};
		attachments[] = {"Shoulder","modular_pouch_9","Chemlight","WalkieTalkie","patch_02"};
		rotationFlags=16;
		quickBarBonus = 2;
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
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Pack\MVS_pack.p3d";
			female = "ModularVestSystem\data\Pack\MVS_pack.p3d";
		};
	};
	class MVS_Assault_Pack_Tan: MVS_Pack_Base
	{
		scope = 2;
		displayName = "Raider Pack - Tan";
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
		displayName = "Raider Pack - OD";
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
		displayName = "Raider Pack - ERDL";
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
		displayName = "Raider Pack - Black";
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
		displayName = "Raider Pack - Snow";
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
		displayName = "Raider Pack - Multicam";
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
		displayName = "Raider Pack - Multicam Tropic";
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
		displayName = "Raider Pack - Multicam Black";
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
		displayName = "Sling Pack - OD";
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
		displayName = "Sling Pack - Tan";
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
		displayName = "Sling Pack - Black";
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
		displayName = "Sling Pack - Multicam";
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
		displayName = "Sling Pack - Multicam Black";
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
		displayName = "Sling Pack - Multicam Tropic";
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
		displayName = "Sling Pack - ERDL";
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
		displayName = "Sling Pack - Snow";
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
		displayName = "Compact Pack 1 - OD";
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
		displayName = "Compact Pack 1 - Tan";
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
		displayName = "Compact Pack 1 - Black";
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
		displayName = "Compact Pack 1 - ERDL";
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
		displayName = "Compact Pack 1 - Snow";
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
		displayName = "Compact Pack 1 - Multicam";
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
		displayName = "Compact Pack 1 - Multicam Tropic";
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
		displayName = "Compact Pack 1 - Multicam Black";
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
		displayName = "Compact Pack 2 - OD";
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
		displayName = "Compact Pack 2 - Tan";
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
		displayName = "Compact Pack 2 - Black";
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
		displayName = "Compact Pack 2 - ERDL";
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
		displayName = "Compact Pack 2 - Snow";
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
		displayName = "Compact Pack 2 - Multicam";
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
		displayName = "Compact Pack 2 - Multicam Tropic";
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
		displayName = "Compact Pack 2 - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\MVS_Compact_2_co_Details_OD.paa"
		};
	};
	class MVS_Rucksack_Base: MVS_Pack_Base
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
		weight=2000;
		quickBarBonus = 2;
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
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Pack\MVS_Rucksack.p3d";
			female = "ModularVestSystem\data\Pack\MVS_Rucksack.p3d";
		};
	};
	class MVS_Rucksack_OD: MVS_Rucksack_Base
	{
		scope = 2;
		displayName = "Rucksack - OD";
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
		displayName = "Rucksack - ERDL";
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
		displayName = "Rucksack - Tan";
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
		displayName = "Rucksack - Black";
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
		displayName = "Rucksack - Snow";
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
		displayName = "Rucksack - Multicam";
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
		displayName = "Rucksack - Multicam Tropic";
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
		displayName = "Rucksack - Multicam Black";
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
		displayName = "Combat Pack - OD";
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
		displayName = "Combat Pack - ERDL";
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
		displayName = "Combat Pack - Tan";
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
		displayName = "Combat Pack - Black";
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
		displayName = "Combat Pack - Snow";
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
		displayName = "Combat Pack - Multicam";
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
		displayName = "Combat Pack - Multicam Tropic";
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
		displayName = "Combat Pack - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Pack\pack_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\pack_co_MC_Black.paa",
			"ModularVestSystem\data\Pack\pack_co_MC_Black.paa"
		};
	};
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
	class Morphine: Container_Base
	{
		inventorySlot[] = {"morphine","epinephrine"};
	};
	class Battery9V: Inventory_Base
	{
		inventorySlot[] = {"BatteryD","MVSBattery1","MVSBattery2"};
	};
	class Epinephrine: Container_Base
	{
		inventorySlot[] = {"epinephrine","morphine"};
	};
	class BandageDressing: Inventory_Base
	{
		inventorySlot[] = {"MedicalBandage"};
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
		weight=280;
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
		displayName = "Patrol Cap - OD";
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
		displayName = "Patrol Cap - Tan";
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
		displayName = "Patrol Cap - Black";
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
		displayName = "Patrol Cap - Multicam";
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
		displayName = "Patrol Cap - Multicam Black";
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
		displayName = "Patrol Cap - Multicam Tropic";
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
		displayName = "Patrol Cap - ERDL";
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
		displayName = "Patrol Cap - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Snow.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Snow.paa",
			"ModularVestSystem\data\Helmets\MVS_Cap_co_Snow.paa"
		};
	};
	class MVS_CombatPants_Base: BDUPants
	{
		scope=0;
		displayName="Combat Pants";
		descriptionShort="Designed as a no-compromise assault uniform, these pants are aggressively cut for maximum mobility.";
		model="ModularVestSystem\data\Uniforms\MVS_CombatPants_g.p3d";
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
	};	
	class MVS_CombatPants_Tan: MVS_CombatPants_Base
	{
		scope=2;
		displayName="Combat Pants - Tan";
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
		displayName="Combat Pants - OD";
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
		displayName="Combat Pants - Black";
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
		displayName="Combat Pants - ERDL";
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
		displayName="Combat Pants - Snow";
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
		displayName="Combat Pants - Multicam";
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
		displayName="Combat Pants - Multicam Tropic";
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
		displayName="Combat Pants - Multicam Black";
		hiddenSelectionsTextures[]=
		{
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_CombatPants_MC_Black.paa"
		};
	};	
	class MVS_CombatShirt_Base: TacticalShirt_ColorBase
	{
		scope=0;
		displayName="Combat Shirt";
		descriptionShort="The MVS Combat Shirt is a combat-specific garment specifically designed to be worn under body armor.";
		model="ModularVestSystem\data\Uniforms\MVS_CombatShirt_g.p3d";
		quickBarBonus=1;
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
	};
	class MVS_CombatShirt_Tan: MVS_CombatShirt_Base
	{
		scope=2;
		displayName="Combat Shirt - Tan";
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
		displayName="Combat Shirt - OD";
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
		displayName="Combat Shirt - Black";
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
		displayName="Combat Shirt - ERDL";
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
		displayName="Combat Shirt - Snow";
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
		displayName="Combat Shirt - Multicam";
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
		displayName="Combat Shirt - Multicam Tropic";
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
		displayName="Combat Shirt - Multicam Black";
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
	class MVS_GorkaPants: GorkaPants_Flat
	{
		displayName = "Gorka Pants - ERDL";
		descriptionShort = "Gorka Pants - ERDL";
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
		displayName = "Gorka Pants - Snow";
		descriptionShort = "Gorka Pants - Snow";
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
		displayName = "Gorka Pants - Multicam";
		descriptionShort = "Gorka Pants - Multicam";
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
		displayName = "Gorka Pants - Multicam Tropic";
		descriptionShort = "Gorka Pants - Multicam Tropic";
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
		displayName = "Gorka Pants - Multicam Black";
		descriptionShort = "Gorka Pants - Multicam Black";
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
		displayName = "Gorka Top - ERDL";
		descriptionShort = "Gorka Top - ERDL";
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
		displayName = "Gorka Top - Snow";
		descriptionShort = "Gorka Top - Snow";
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
		displayName = "Gorka Top - Multicam";
		descriptionShort = "Gorka Top - Multicam";
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
		displayName = "Gorka Top - Multicam Tropic";
		descriptionShort = "Gorka Top - Multicam Tropic";
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
		displayName = "Gorka Top - Multicam Black";
		descriptionShort = "Gorka Top - Multicam Black";
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
		displayName = "Flat Cap - ERDL";
		descriptionShort = "Flat Cap - ERDL";		
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
		displayName = "Flat Cap - Snow";
		descriptionShort = "Flat Cap - Snow";		
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
		displayName = "Flat Cap - Multicam";
		descriptionShort = "Flat Cap - Multicam";		
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
		displayName = "Flat Cap - Multicam Tropic";
		descriptionShort = "Flat Cap - Multicam Tropic";		
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
		displayName = "Flat Cap - Multicam Black";
		descriptionShort = "Flat Cap - Multicam Black";		
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
		displayName = "BDU Pants - ERDL";
		descriptionShort = "BDU Pants - ERDL";
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
		displayName = "BDU Pants - Snow";
		descriptionShort = "BDU Pants - Snow";
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
		displayName = "BDU Top - ERDL";
		descriptionShort = "BDU Top - ERDL";
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
		displayName = "BDU Top - Snow";
		descriptionShort = "BDU Top - Snow";
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
		displayName = "BDU Top - Multicam";
		descriptionShort = "BDU Top - Multicam";
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
		displayName = "BDU Top - Multicam Tropic";
		descriptionShort = "BDU Top - Multicam Tropic";
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
		displayName = "BDU Top - Multicam Black";
		descriptionShort = "BDU Top - Multicam Black";
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
		displayName = "Boonie Hat - ERDL";
		descriptionShort = "Boonie Hat - ERDL";
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
		displayName = "Boonie Hat - Snow";
		descriptionShort = "Boonie Hat - Snow";
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
		displayName = "Boonie Hat - Multicam";
		descriptionShort = "Boonie Hat - Multicam";
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
		displayName = "Boonie Hat - Multicam Tropic";
		descriptionShort = "Boonie Hat - Multicam Tropic";
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
		displayName = "Boonie Hat - Multicam Black";
		descriptionShort = "Boonie Hat - Multicam Black";
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Black.paa",
			"ModularVestSystem\data\Uniforms\MVS_BoonieHat_MC_Black.paa"
		};
	};
};
class CfgSlots
{
	class Slot_MVSBattery1
	{
		name="MVSBattery1";
		displayName="MVSBattery1";
		ghostIcon="batteryd";
	};
	
	class Slot_MVSBattery2
	{
		name="MVSBattery2";
		displayName="MVSBattery2";
		ghostIcon="batteryd";
	};
	
	class Slot_magazine4
	{
		name="magazine4";
		displayName="magazine4";
		ghostIcon="magazine2";
	};	
	class Slot_magazine5
	{
		name="magazine5";
		displayName="magazine5";
		ghostIcon="magazine2";
	};
	class Slot_magazine7
	{
		name="magazine7";
		displayName="magazine7";
		ghostIcon="magazine";
	};	
	class Slot_magazine8
	{
		name="magazine8";
		displayName="magazine8";
		ghostIcon="magazine2";
	};	
	class Slot_magazine9
	{
		name="magazine9";
		displayName="magazine9";
		ghostIcon="magazine2";
	};
	class Slot_magazine10
	{
		name="magazine10";
		displayName="magazine10";
		ghostIcon="magazine";
	};
	class Slot_modular_pouch_2
	{
		name = "modular_pouch_2";
		displayName = "modular_pouch_2";
		ghostIcon = "vestpouches";
	};
	class Slot_modular_pouch_4
	{
		name = "modular_pouch_4";
		displayName = "modular_pouch_4";
		ghostIcon = "pouches";
	};
	
	class Slot_modular_pouch_5
	{
		name = "modular_pouch_5";
		displayName = "modular_pouch_5";
		ghostIcon = "pouches";
	};
	
	class Slot_modular_pouch_6
	{
		name = "modular_pouch_6";
		displayName = "modular_pouch_6";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_8
	{
		name = "modular_pouch_8";
		displayName = "modular_pouch_8";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_9
	{
		name = "modular_pouch_9";
		displayName = "modular_pouch_9";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_10
	{
		name = "modular_pouch_10";
		displayName = "modular_pouch_10";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_11
	{
		name = "modular_pouch_11";
		displayName = "modular_pouch_11";
		ghostIcon = "pouches";
	};
	class Slot_modular_pouch_12
	{
		name = "modular_pouch_12";
		displayName = "modular_pouch_12";
		ghostIcon = "vestpouches";
	};
	class Slot_modular_pouch_13
	{
		name = "modular_pouch_13";
		displayName = "modular_pouch_13";
		ghostIcon = "pouches";
	};
	class Slot_patch_01
	{
		name = "patch_01";
		displayName = "patch_01";
		ghostIcon = "set:mvs_ghost image:patch";
	};
	class Slot_patch_02
	{
		name = "patch_02";
		displayName = "patch_02";
		ghostIcon = "set:mvs_ghost image:patch";
	};
	class Slot_patch_03
	{
		name = "patch_03";
		displayName = "patch_03";
		ghostIcon = "set:mvs_ghost image:patch";
	};
	class Slot_patch_04
	{
		name = "patch_04";
		displayName = "patch_04";
		ghostIcon = "set:mvs_ghost image:patch";
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
		displayName = "MVS_vest";
		ghostIcon = "vest";
	};
	class Slot_MVS_helmet
	{
		name = "MVS_helmet";
		displayName = "MVS_helmet";
		ghostIcon = "headgear";
	};
	class Slot_MVS_mask
	{
		name = "MVS_mask";
		displayName = "MVS_mask";
		ghostIcon = "mask";
	};
	class Slot_MVS_pack
	{
		name = "MVS_pack";
		displayName = "MVS_pack";
		ghostIcon = "back";
	};
	class Slot_MVS_belt
	{
		name = "MVS_belt";
		displayName = "MVS_belt";
		ghostIcon = "hips";
	};
	class Slot_MVS_Screwdriver
	{
		name="MVS_Screwdriver";
		displayName = "MVS_Screwdriver";
		ghostIcon = "set:mvs_ghost image:screwdriver";
	};
	class Slot_MVS_Pliers
	{
		name="MVS_Pliers";
		displayName = "MVS_Pliers";
		ghostIcon = "set:mvs_ghost pliers";
	};
	class Slot_Screwdriver1
	{
		name="Screwdriver1";
		displayName = "Screwdriver1";
		ghostIcon = "set:mvs_ghost image:screwdriver";
	};
	class Slot_Pliers1
	{
		name="Pliers1";
		displayName = "Pliers1";
		ghostIcon = "set:mvs_ghost image:pliers";
	};
	class Slot_MVS_Lockpick
	{
		name="MVS_Lockpick";
		displayName = "MVS_Lockpick";
		ghostIcon = "set:mvs_ghost image:lockpick";
	};
	class Slot_MVS_Altyn_Visor
	{
		name="MVS_Altyn_Visor";
		displayName = "MVS_Altyn_Visor";
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
	class ProxyMVS_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine4";
		model = "ModularVestSystem\data\MVS_Mag.p3d";
	};
	class ProxyMVS_Mag2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine5";
		model = "ModularVestSystem\data\MVS_Mag2.p3d";
	};
	class ProxyMVS_MagPistol: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine7";
		model = "ModularVestSystem\data\MVS_MagPistol.p3d";
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