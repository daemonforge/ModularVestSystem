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
	class Modular_Patch_Base_2: Clothing
	{
		scope = 0;
		displayName = "Country Flag";
		descriptionShort = "Country Flag Patch";
		model = "ModularVestSystem\data\MVS_Country_Patch.p3d";
		itemSize[] = {2,1};
		inventorySlot[] = {"Armband","patch_01","patch_02","patch_03","patch_04"};
		weight=200;
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
};