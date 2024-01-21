class tahoe_08_base: Car_F {
	slingLoadCargoMemoryPoints[] = {"pip0_pos","pip1_pos","pip4_pos","pip4_pos"};
	weapons[] = {"airhorn_tahoe"};
	class Reflectors {
		// class LightCarHeadL01 {
		// 	color[] = {1550,1550,2000};
		// 	ambient[] = {5,5,5};
		// 	position = "LightCarHeadL01";
		// 	direction = "LightCarHeadL01_end";
		// 	hitpoint = "Light_L";
		// 	selection = "Light_L";
		// 	size = 1;
		// 	innerAngle = 10;
		// 	outerAngle = 200;
		// 	coneFadeCoef = 50;
		// 	intensity = 3;
		// 	useFlare = 1;
		// 	dayLight = 0;
		// 	flareSize = 1;
		// 	flareMaxDistance = 50;
		// 	class Attenuation {
		// 		start = 1;
		// 		constant = 0;
		// 		linear = 0;
		// 		quadratic = 0.25;
		// 		hardLimitStart = 30;
		// 		hardLimitEnd = 60;
		// 	};
		// };
		class LightCarHeadL01 {
			color[] = {1300,1200,2200};
			ambient[] = {5,5,5};
			position = "LightCarHeadL01";
			direction = "LightCarHeadL01_end";
			hitpoint = "Light_L";
			selection = "Light_L";
			size = 1;
			innerAngle = 10;
			outerAngle = 200;
			coneFadeCoef = 50;
			intensity = 1.5;
			useFlare = 1;
			dayLight = 0;
			flareSize = 1;
			class Attenuation {
				start = 5;
				constant = 0;
				linear = 0;
				quadratic = 0.25;
				hardLimitStart = 60;
				hardLimitEnd = 90;
			};
		};
		class LightCarHeadR01: LightCarHeadL01 {
			position = "LightCarHeadR01";
			direction = "LightCarHeadR01_end";
			hitpoint = "Light_R";
			selection = "Light_R";
		};
	};
	class EventHandlers: EventHandlers {
		init = "[(_this select 0)] call sog_factions_main_fnc_setLicense;";
	};
};
class tahoe_08: tahoe_08_base {
	scope = 0;
	armor = 40;
	armorStructural = 1;
	armorFuel = 1.4;
	armorGlass = 0.5;
	armorLights = 0.4;
	armorWheels = 0.05;
	gearBox[] = {-8,0,10,6.15,4.44,3.33};
	maxSpeed = 120;
};
class tahoe_LTZ_08: tahoe_08_base {
	scope = 0;
	armor = 40;
	armorStructural = 1;
	armorFuel = 1.4;
	armorGlass = 0.5;
	armorLights = 0.4;
	armorWheels = 0.05;
	gearBox[] = {-8,0,10,6.15,4.44,3.33};
	maxSpeed = 120;
};
class suburban: tahoe_08_base {
	scope = 0;
	armor = 40;
	armorStructural = 1;
	armorFuel = 1.4;
	armorGlass = 0.5;
	armorLights = 0.4;
	armorWheels = 0.05;
	gearBox[] = {-8,0,10,6.15,4.44,3.33};
	maxSpeed = 120;
};
class tahoe_LUMI: tahoe_08_base {
	scope = 0;
	armor = 40;
	armorStructural = 1;
	armorFuel = 1.4;
	armorGlass = 0.5;
	armorLights = 0.4;
	armorWheels = 0.05;
	gearBox[] = {-8,0,10,6.15,4.44,3.33};
	maxSpeed = 120;
};
class tahoe_UNM: tahoe_08_base {
	scope = 0;
	armor = 40;
	armorStructural = 1;
	armorFuel = 1.4;
	armorGlass = 0.5;
	armorLights = 0.4;
	armorWheels = 0.05;
	gearBox[] = {-8,0,10,6.15,4.44,3.33};
	maxSpeed = 120;
};