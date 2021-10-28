class CfgPatches
{
	class ModularVestSystemHelmets
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Characters_Masks"
		};
	};
};
class cfgVehicles
{	
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class BalaclavaMask_ColorBase;
	class GP5GasMask;
	class Mich2001Helmet;
	class MVS_Helmet_Base: Mich2001Helmet
	{
		scope = 0;
		displayName = "Combat Helmet";
		descriptionShort = "The MICH-style combat helmet offers good ballistic protection, much like the MICH 2001 combat helmet";
		attachments[]={"NVG","patch_03","MVSBattery1","MVSBattery2","helmetFlashlight"};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		model = "ModularVestSystem\data\Helmets\Combat_Helmet_g.p3d";
		hiddenSelections[] = {"camoground","camomale","camofemale","zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co.paa",
			"modularvestsystem\data\helmets\do_helmets_2_co.paa"
		};
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
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\Combat_Helmet_1.p3d";
			female = "ModularVestSystem\data\Helmets\Combat_Helmet_1.p3d";
		};
	};
	class MVS_Helmet_01_Tan: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Combat Helmet - Tan";
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
		displayName = "Combat Helmet - OD";
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
		displayName = "Combat Helmet - Black";
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
		displayName = "Combat Helmet - Snow";
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
		displayName = "Combat Helmet - ERDL";
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
		displayName = "Combat Helmet - Multicam";
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
		displayName = "Combat Helmet - Multicam Black";
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
		displayName = "Combat Helmet - Multicam Tropic";
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
		attachments[]={"NVG","patch_03","helmetFlashlight"};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		model = "ModularVestSystem\data\Helmets\Combat_Helmet_2_g.p3d";
		hiddenSelections[] = {"camoground","camomale","camofemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa"
		};
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
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\Combat_Helmet_2.p3d";
			female = "ModularVestSystem\data\Helmets\Combat_Helmet_2.p3d";
		};
	};
	class MVS_Helmet_02_OD: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_OD_co.paa"
		};
	};
	class MVS_Helmet_02_Tan: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_Tan_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_Tan_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_Tan_co.paa"
		};
	};
	class MVS_Helmet_02_Black: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_Black_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_Black_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_Black_co.paa"
		};
	};
	class MVS_Helmet_02_Multicam_Black: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Black_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Black_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Black_co.paa"
		};
	};
	class MVS_Helmet_02_Multicam: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_co.paa"
		};
	};
	class MVS_Helmet_02_Multicam_Tropic: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Tropic_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Tropic_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_MC_Tropic_co.paa"
		};
	};
	class MVS_Helmet_02_ERDL: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_ERDL_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_ERDL_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_ERDL_co.paa"
		};
	};
	class MVS_Helmet_02_Snow: MVS_Helmet_2_Base
	{
		scope = 2;
		displayName = "Combat Helmet - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_snow_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_snow_co.paa",
			"ModularVestSystem\data\Helmets\MVS_Helmet_2_snow_co.paa"
		};
	};
	class MVS_6B47Helmet_Base: Mich2001Helmet
	{
		scope = 0;
		displayName = "6B47 Helmet";
		descriptionShort = "The Russian-designed 6B47 helmet is a part of ‘Ratnik’ (‘Warrior’) combat gear.";
		attachments[]={"NVG","patch_03","helmetFlashlight"};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		model = "ModularVestSystem\data\Helmets\MVS_6B47_g.p3d";
		hiddenSelections[] = {"camoground","camomale","camofemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\do_helmets_co.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co.paa",
			"ModularVestSystem\data\Helmets\do_helmets_co.paa"
		};
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
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\MVS_6B47.p3d";
			female = "ModularVestSystem\data\Helmets\MVS_6B47_f.p3d";
		};
	};
	class MVS_6B47_Helmet_OD: MVS_6B47Helmet_Base
	{
		scope = 2;
		displayName = "6B47 - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_6B47_OD_co.paa",
			"ModularVestSystem\data\Helmets\MVS_6B47_OD_co.paa",
			"ModularVestSystem\data\Helmets\MVS_6B47_OD_co.paa"
		};
	};
	class MVS_6B47_Helmet_Tan: MVS_6B47Helmet_Base
	{
		scope = 2;
		displayName = "6B47 - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_6B47_Tan_co.paa",
			"ModularVestSystem\data\Helmets\MVS_6B47_Tan_co.paa",
			"ModularVestSystem\data\Helmets\MVS_6B47_Tan_co.paa"
		};
	};
	class MVS_6B47_Helmet_Black: MVS_6B47Helmet_Base
	{
		scope = 2;
		displayName = "6B47 - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_6B47_Black_co.paa",
			"ModularVestSystem\data\Helmets\MVS_6B47_Black_co.paa",
			"ModularVestSystem\data\Helmets\MVS_6B47_Black_co.paa"
		};
	};
	class MVS_OpsCore_Base: Mich2001Helmet
	{
		scope = 0;
		displayName = "High Cut Helmet";
		descriptionShort = "The High Cut style combat helmet offers good ballistic protection.";
		attachments[]={"NVG","patch_03","helmetFlashlight"};
		inventorySlot[] = {"Headgear","MVS_helmet"};
		model = "ModularVestSystem\data\Helmets\OpsCore_Helmet_g.p3d";
		hiddenSelections[] = {"camoground","camomale","camofemale"};
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co.paa"
		};
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
		};		
		class ClothingTypes
		{
			male = "ModularVestSystem\data\Helmets\OpsCore_Helmet.p3d";
			female = "ModularVestSystem\data\Helmets\OpsCore_Helmet.p3d";
		};
	};
	class MVS_OpsCore_Tan: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Tan.paa"
		};
	};
	class MVS_OpsCore_OD: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co.paa"
		};
	};
	class MVS_OpsCore_ERDL: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet - ERDL";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_ERDL.paa"
		};
	};
	class MVS_OpsCore_Black: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Black.paa"
		};
	};
	class MVS_OpsCore_Snow: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_Snow.paa"
		};
	};	
	class MVS_OpsCore_Multicam: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet - Multicam";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC.paa"
		};
	};	
	class MVS_OpsCore_Multicam_Tropic: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet - Multicam Tropic";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Tropic.paa"
		};
	};	
	class MVS_OpsCore_Multicam_Black: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "High Cut Helmet - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa"
		};
	};
	class MVS_ArmoredHelmet_Base: MVS_OpsCore_Base
	{
		scope=0;
		model="ModularVestSystem\data\Helmets\Armored_Helmet_g.p3d";
		descriptionShort = "The Armored MVS helmet offers the best ballistic protection, and comes prepped with a mandible and ballistic visor. Identifier patch can be attached.";
		attachments[]={"patch_03"};
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
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co.paa",
			"ModularVestSystem\data\Helmets\Mandible_OD.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
        hiddenSelectionsMaterials[]=
        {
			"ModularVestSystem\data\Helmets\OpsCoreMandible.rvmat",
			"ModularVestSystem\data\Helmets\OpsCore.rvmat"
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
		class ClothingTypes
		{
			male="ModularVestSystem\data\Helmets\Armored_Helmet.p3d";
			female="ModularVestSystem\data\Helmets\Armored_Helmet.p3d";
		};
	};
	class MVS_ArmoredHelmet_Tan: MVS_ArmoredHelmet_Base
	{
		scope = 2;
		displayName = "Armored Helmet - Tan";
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
		displayName = "Armored Helmet - OD";
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
		displayName = "Armored Helmet - ERDL";
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
		displayName = "Armored Helmet - Black";
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
		displayName = "Armored Helmet - Snow";
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
		displayName = "Armored Helmet - Multicam";
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
		displayName = "Armored Helmet - Multicam Tropic";
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
		displayName = "Armored Helmet - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\Mandible_MC_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Visor.paa"
		};
	};
	class MVS_Altyn_Helmet_Base: MVS_ArmoredHelmet_Base
	{
		scope=0;
		model="ModularVestSystem\data\Helmets\MVS_Altyn_Helmet_g.p3d";
		descriptionShort = "The Altyn MVS helmet offers the best ballistic protection. Identifier patch and Altyn Visor can be attached.";
		attachments[]={"MVS_Altyn_Visor","patch_03"};
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
		class ClothingTypes
		{
			male="ModularVestSystem\data\Helmets\MVS_Altyn_Helmet.p3d";
			female="ModularVestSystem\data\Helmets\MVS_Altyn_Helmet.p3d";
		};
	};
	class MVS_Altyn_OD: MVS_Altyn_Helmet_Base
	{
		scope = 2;
		displayName = "Altyn Helmet - OD";
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
		displayName = "Altyn Helmet - Tan";
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
		displayName = "Altyn Helmet - Black";
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
		weight = 400;
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
		displayName = "Altyn Visor - OD";
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
		displayName = "Altyn Visor - Tan";
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
		displayName = "Altyn Visor - Black";
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
		weight = 400;
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
		displayName = "Altyn Visor - OD";
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
		displayName = "Altyn Visor - Tan";
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
		displayName = "Altyn Visor - Black";
		color = "Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_co_Black.paa",
			"ModularVestSystem\data\Helmets\MVS_Altyn_ca.paa"
		};
	};
	class MVS_WarriorHelmet_Base: MVS_ArmoredHelmet_Base
	{
		scope=0;
		model="ModularVestSystem\data\Helmets\Mandalorian_Helmet_g.p3d";
		descriptionShort = "The MVS Warrior helmet offers the best ballistic protection, and comes prepped with a bounty hunter-worthy face shield. Identifier patch and NVGs can be attached.";
		attachments[]={"NVG","patch_03","helmetFlashlight"};
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
		class ClothingTypes
		{
			male="ModularVestSystem\data\Helmets\Mandalorian_Helmet.p3d";
			female="ModularVestSystem\data\Helmets\Mandalorian_Helmet.p3d";
		};
	};
	class MVS_WarriorHelmet_Tan: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Warrior Helmet - Tan";
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
		displayName = "Warrior Helmet - OD";
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
		displayName = "Warrior Helmet - Black";
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
		displayName = "Warrior Helmet - ERDL";
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
		displayName = "Warrior Helmet - Snow";
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
		displayName = "Warrior Helmet - Multicam";
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
		displayName = "Warrior Helmet - Multicam Tropic";
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
		displayName = "Warrior Helmet - Multicam Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\OpsCore_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_MC_Black.paa",
			"ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
		};
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
		displayName = "S10 Respirator - OD";
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
		displayName = "S10 Respirator - Tan";
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
		displayName = "S10 Respirator - Black";
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
		displayName = "S10 Respirator - Snow";
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
		displayName = "PMK-2 Respirator - Black";
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
		displayName = "PMK-2 Respirator - Tan";
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
		displayName = "PMK-2 Respirator - OD";
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
		displayName = "PMK-2 Respirator - Snow";
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
		displayName = "M50 Respirator - OD";
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
		displayName = "M50 Respirator - Tan";
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
		displayName = "M50 Respirator - Black";
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
		displayName = "M50 Respirator - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_M50_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_M50_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_M50_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_snow.paa"
		};
	};
	
	class MVS_Balaclava: BalaclavaMask_ColorBase
	{
		scope = 0;
		displayName = "Balaclava";
		descriptionShort = "A mask used for concealing one's identity... spooky right?";
		inventorySlot[] = {"Mask"};
		itemSize[] = {3,2};
		rotationFlags=0;
		model = "ModularVestSystem\data\s10\MVS_Balaclava_g.p3d";
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
			male = "ModularVestSystem\data\s10\MVS_Balaclava.p3d";
			female = "ModularVestSystem\data\s10\MVS_Balaclava_f.p3d";
		};
	};
	class MVS_Balaclava_Wraith: MVS_Balaclava
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
	class MVS_Balaclava2: BalaclavaMask_ColorBase
	{
		scope = 0;
		displayName = "Balaclava 2";
		descriptionShort = "A mask used for concealing one's identity... spooky right?";
		inventorySlot[] = {"Mask"};
		itemSize[] = {3,2};
		rotationFlags=0;
		model = "ModularVestSystem\data\s10\MVS_Balaclava2_g.p3d";
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
	};
	class MVS_Balaclava_OD: MVS_Balaclava2
	{
		scope = 2;
		displayName = "Balaclava - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"
		};
	};
	class MVS_Balaclava_Tan: MVS_Balaclava2
	{
		scope = 2;
		displayName = "Balaclava - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa"
		};
	};
	class MVS_Balaclava_Black: MVS_Balaclava2
	{
		scope = 2;
		displayName = "Balaclava - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa"
		};
	};
	class MVS_Balaclava_Snow: MVS_Balaclava2
	{
		scope = 2;
		displayName = "Balaclava - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa"
		};
	};
	class MVS_Balaclava3: BalaclavaMask_ColorBase
	{
		scope = 0;
		displayName = "Balaclava 3";
		descriptionShort = "A mask used for concealing one's identity... spooky right?";
		inventorySlot[] = {"Mask"};
		itemSize[] = {3,2};
		rotationFlags=0;
		model = "ModularVestSystem\data\s10\MVS_Balaclava3_g.p3d";
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
	};
	class MVS_Facemask_OD: MVS_Balaclava3
	{
		scope = 2;
		displayName = "Facemask - OD";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co.paa"
		};
	};
	class MVS_Facemask_Tan: MVS_Balaclava3
	{
		scope = 2;
		displayName = "Facemask - Tan";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Tan.paa"
		};
	};
	class MVS_Facemask_Black: MVS_Balaclava3
	{
		scope = 2;
		displayName = "Facemask - Black";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Black.paa"
		};
	};
	class MVS_Facemask_Snow: MVS_Balaclava3
	{
		scope = 2;
		displayName = "Facemask - Snow";
		hiddenSelectionsTextures[] = 
		{
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa",
			"ModularVestSystem\data\s10\MVS_Balaclava2_co_Snow.paa"
		};
	};
	class MVS_Shroud_Base: BalaclavaMask_ColorBase
	{
		scope = 0;
		displayName = "Shroud";
		descriptionShort = "A thin veil of netting used to break up outlines in the brush.";
		inventorySlot[] = {"Headgear"};
		itemSize[] = {3,2};
		rotationFlags=0;
		model = "ModularVestSystem\data\s10\MVS_Shroud_g.p3d";
		headSelectionsToHide[] = {"Clipping_Gasmask","Clipping_Balaclava_3holes"};
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
			male = "ModularVestSystem\data\s10\MVS_Shroud.p3d";
			female = "ModularVestSystem\data\s10\MVS_Shroud.p3d";
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
	};
	class MVS_Shroud_OD: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "Shroud - OD";
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
		displayName = "Shroud - Tan";
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
		displayName = "Shroud - Black";
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
		displayName = "Beard 01 - Black";
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
		displayName = "Beard 02 - Black";
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
		displayName = "Beard 02 - Black";
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
};