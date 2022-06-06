class CFGWeapons{

    		class TruckHorn3;
		class FAF_Horn : TruckHorn3
		{
			drySound[] = { "Ferryman\data\clown.ogg", 1, 1, 200 };
		};
};

class CfgPatches{

	class unit_config {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};

};

class CfgFactionClasses {

	class a_units
	{

		displayName = "I.S.I.S. 7";
		author = "Sir Faffles";
		icon = "Ferryman\data\icon.paa";
		priority = 2;
		side = 2;

	};

};


class CfgVehicles{
		class CUP_O_BTR60_Green_RU;
    	class FAF_V_BTR60_LB : CUP_O_BTR60_Green_RU
		{

			// vehicleClass = "APC";
			faction = a_units;
			side = 2;
			hiddenSelectionsTextures[] = { "Ferryman\data\btr60_FAF_1_co.paa", "Ferryman\data\btr60_un_2_co.paa" };
			displayName = "The Ferryman";
			Picture = "Ferryman\data\Ferryman.paa";
			crew = "";
			editorPreview = "Ferryman\data\Ferryman.paa";
			weapons[] = { "FAF_Horn" };
		};

};

class CfgGroups{

	class Indep
	{
		name = "I.S.I.S. 7";
	};

}