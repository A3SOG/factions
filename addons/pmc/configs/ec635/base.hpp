class EC135Unarmedlu;
class ec135_01_base: EC135Unarmedlu {
	scope = 0;
	class Sounds {
		class EngineExt {
			sound[] = {"A3\Sounds_F\dummysound",1.2589254,1,400};
			frequency = "rotorSpeed";
			volume = "4 * camPos * (0 max (rotorSpeed-0.4))";
		};

		class RotorExt {
			sound[] = {QUOTE(PATHTOF(sounds\Heli_EC635_01_ext_rotor.wss)), 2, 1, 2500};
			frequency = "rotorSpeed * (1-rotorThrust/10)*0.9";
			volume = "camPos*((rotorSpeed-0.72)*6)";
		};

		class RainExt {
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
			frequency = 1;
			volume = "camPos * (rain - rotorSpeed/2) * 2";
		};

		class SlingLoadDownExt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,-1])";
		};

		class SlingLoadUpExt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,1])";
		};

		class TransmissionDamageExt_phase1 {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};

		class TransmissionDamageExt_phase2 {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};

		class damageAlarmExt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.2238721,1,20};
			frequency = 1;
			volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
		};

		class rotorLowAlarmExt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1,20};
			frequency = 1;
			volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};

		class scrubLandExt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt",1,1,100};
			frequency = 1;
			volume = "camPos * (scrubLand factor[0.02, 0.05])";
		};

		class scrubBuildingExt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",1,1,100};
			frequency = 1;
			volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
		};

		class scrubTreeExt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
			frequency = 1;
			volume = "camPos * ((scrubTree) factor [0, 0.01])";
		};

		class EngineInt {
			sound[] = {QUOTE(PATHTOF(sounds\Heli_EC635_01_int_engine.wss)), 0.7943282, 1};
			frequency = "rotorSpeed / (1+rotorThrust/6)*0.8";
			volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
		};

		class RotorInt {
			sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
			frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
			volume = "(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
		};

		class RainInt {
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int_open",1,1,100};
			frequency = 1;
			volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
		};

		class SlingLoadDownInt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
		};

		class SlingLoadUpInt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,1])";
		};

		class TransmissionDamageInt_phase1 {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};

		class TransmissionDamageInt_phase2 {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};

		class damageAlarmInt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
		};

		class rotorLowAlarmInt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};

		class scrubLandInt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",1,1,100};
			frequency = 1;
			volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
		};

		class scrubBuildingInt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",1,1,100};
			frequency = 1;
			volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
		};

		class scrubTreeInt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
			frequency = 1;
			volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
		};

		class WindLateralMovementInt {
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",1.9952624,1,50};
			frequency = 1;
			volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
		};

		class GStress {
			sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.31622776,1,50};
			frequency = 1;
			volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
		};

		class RotorBench {
			sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
			frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
			volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";

			cone[] = {1.6,3.14,1.6,0.95};
		};

		class EngineBench {
			sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
			frequency = "rotorSpeed";
			volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
		};

		class WindBench {
			sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
			frequency = 1;
			volume = "4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
		};

		class WindInt {
			sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
			frequency = 1;
			volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
		};

		class RotorSwist {
			sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
			frequency = 1;
			volume = "camPos * (rotorThrust factor [0.7, 0.9])";
		};
	};

	class SoundsExt {
		class SoundEvents {};
		class Sounds {
			class EngineExt {
				sound[] = {"A3\Sounds_F\dummysound",1.2589254,1,400};
				frequency = "rotorSpeed";
				volume = "4 * camPos * (0 max (rotorSpeed-0.4))";
			};

			class RotorExt {
				sound[] = {QUOTE(PATHTOF(sounds\Heli_EC635_01_ext_rotor.wss)), 2, 1, 2500};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*6)";
				cone[] = {1.6,3.14,1.6,0.95};
			};

			class RainExt {
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};

			class SlingLoadDownExt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};

			class SlingLoadUpExt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};

			class TransmissionDamageExt_phase1 {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};

			class TransmissionDamageExt_phase2 {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};

			class damageAlarmExt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};

			class rotorLowAlarmExt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.2238721,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};

			class scrubLandExt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandExt",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05])";
			};

			class scrubBuildingExt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};

			class scrubTreeExt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};

			class EngineInt {
				sound[] = {QUOTE(PATHTOF(sounds\Heli_EC635_01_int_engine.wss)), 0.7943282, 1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};

			class RotorInt {
				sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "(1 - camPos) * (rotorSpeed factor [0.3, 0.7]) * (1 + rotorThrust) * 0.7";
			};

			class RainInt {
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int_open",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};

			class SlingLoadDownInt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};

			class SlingLoadUpInt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};

			class TransmissionDamageInt_phase1 {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};

			class TransmissionDamageInt_phase2 {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};

			class damageAlarmInt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};

			class rotorLowAlarmInt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};

			class scrubLandInt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
			};

			class scrubBuildingInt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",1,1,100};
				frequency = 1;
				volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
			};

			class scrubTreeInt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};

			class WindLateralMovementInt {
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",1.9952624,1,50};
				frequency = 1;
				volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
			};

			class GStress {
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2b",0.31622776,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};

			class RotorBench {
				sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
				frequency = "(rotorSpeed factor [0.3, 0.7]) * (rotorSpeed factor [0.3, 1]) * (1 - rotorThrust/4)";
				volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (rotorSpeed factor [0.3, 1]) * (1 + rotorThrust) * 0.4";
				cone[] = {1.6,3.14,1.6,0.95};
			};

			class EngineBench {
				sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
				frequency = "rotorSpeed";
				volume = "(playerPos factor [3.9, 4]) * (1 - camPos) * (0 max (rotorSpeed-0.4))";
			};

			class WindBench {
				sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
				frequency = 1;
				volume = "4 * (playerPos factor [3.9, 4]) * (1 - camPos) * ((speed factor[0, 30]) + (speed factor[0, -30]))";
			};

			class WindInt {
				sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};

			class RotorSwist {
				sound[] = {"A3\Sounds_F\dummysound",0.63095737,1};
				frequency = 1;
				volume = "camPos * (rotorThrust factor [0.7, 0.9])";
			};
		};
	};
};