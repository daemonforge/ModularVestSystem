class CfgPatches
{
	class ModularVestSystemArmorRack
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
	};
};
/*
class cfgVehicles
{	

	class WoodenCrate;
	class Container_Base;
	class ArmorRack_Kit: WoodenCrate
	{
		scope = 2;
		displayName = "Armor Rack Kit";
		descriptionShort = "Armor Rack Kit designed to display Modular Vest System (MVS) components";
		model = "ModularVestSystem\data\ArmorRack\kit_base.p3d";
		itemSize[] = {5,3};
		carveNavmesh = 1;
		canBeDigged = 0;
		simulation = "inventoryItem";
		physLayer = "item_small";
		SingleUseActions[] = {527};
		ContinuousActions[] = {231};
		rotationFlags = 2;
		InteractActions[] = {};
		weight = 300;
		itemBehaviour = 2;
		class Cargo{};
	};
	class ArmorRack_Base: Container_Base
	{
		scope = 0;
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\spotlight.rvmat"}},{0.7,{"DZ\gear\camping\data\spotlight.rvmat"}},{0.5,{"DZ\gear\camping\data\spotlight_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\spotlight_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\spotlight_destruct.rvmat"}}};
				};
			};
		};
	};
	class Armor_Rack: ArmorRack_Base
	{
		scope = 2;
		displayName = "Armor Rack Kit";
		descriptionShort = "Armor Rack Kit designed to display Modular Vest System (MVS) components";
		model = "ModularVestSystem\data\ArmorRack\ArmorRack.p3d";
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		itemSize[] = {10,10};
		physLayer = "item_large";
		rotationFlags = 0;
		class Cargo
		{
			itemsCargoSize[] = {10,2};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		attachments[] = {"MVS_helmet","MVS_mask","MVS_vest","MVS_belt","MVS_pack","Shoulder"};
		class GUIInventoryAttachmentsProps
		{
			class MVSHelmet
			{
				name = "Helmet";
				description = "";
				attachmentSlots[] = {"MVS_helmet"};
				icon = "missing";
			};
			class MVSMask
			{
				name = "S10 Respirator";
				description = "";
				attachmentSlots[] = {"MVS_mask"};
				icon = "missing";
			};			
			class MVSRig
			{
				name = "Rig";
				description = "";
				attachmentSlots[] = {"MVS_vest"};
				icon = "missing";
			};
			class MVSBelt
			{
				name = "Belt";
				description = "";
				attachmentSlots[] = {"MVS_belt"};
				icon = "missing";
			};
			class MVSPack
			{
				name = "Pack";
				description = "";
				attachmentSlots[] = {"MVS_pack"};
				icon = "missing";
			};
			class MVSWeapon
			{
				name = "Rifle";
				description = "";
				attachmentSlots[] = {"Shoulder"};
				icon = "missing";
			};
		};
	};
	class ArmorRack_Holo: Armor_Rack
	{
		scope = 0;
	};
};*/