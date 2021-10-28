class CfgPatches
{
	class ModularVestSystemFlags
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
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	
	class Modular_Patch_Base: Clothing
	{
		scope = 0;
		displayName = "Identifier Patch";
		descriptionShort = "Identifier Patch - comes in a variety of patterns and emblems";
		model = "ModularVestSystem\data\patch.p3d";
		itemSize[] = {2,1};
		inventorySlot[] = {"Armband","patch_01","patch_02","patch_03","patch_04"};
		weight=250;
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