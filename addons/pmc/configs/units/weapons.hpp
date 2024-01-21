class CUP_arifle_M16_Base {
	class WeaponSlotInfo: WeaponSlotInfo {
		class MuzzleSlot;
		class CUP_PicatinnyTopMountM16;
		class CUP_PicatinnySideMountM16;
		class CUP_PicatinnyUnderMountM16;
	};
};
class CUP_arifle_M4_Base {
	class WeaponSlotInfo: WeaponSlotInfo {
		class MuzzleSlot;
		class CUP_PicatinnyTopMountM4;
		class CUP_PicatinnySideMountM4;
		class CUP_PicatinnyUnderMountM16;
	};
};
class CUP_smg_MP5SD6 {
	class WeaponSlotInfo: WeaponSlotInfo {
		class MuzzleSlot;
		class MP5TopMount;
		class PointerSlot;
	};
};
class CUP_arifle_M16A4_Base: CUP_arifle_M16_Base;
class CUP_arifle_M4A1_BUIS_Base: CUP_arifle_M4_Base;
class CUP_arifle_M16A4_Grip: CUP_arifle_M16A4_Base;
class CUP_arifle_M4A1_BUIS_GL: CUP_arifle_M4A1_BUIS_Base;
class CUP_arifle_M4A3_black: CUP_arifle_M4A1_BUIS_Base;
class CUP_smg_MP5A5: CUP_smg_MP5SD6;

class sog_smg_MP5A5_acc_Flashlight_MicroT1_low: CUP_smg_MP5A5 {
	scope = 1;
	displayName = "SOG MP5A5 MicroT1 Low Flashlight";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "MP5TopMount";
			item = "CUP_optic_MicroT1_low";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "CUP_acc_Flashlight_MP5";
		};
		class LinkedItemsMuzzle {
			slot = "muzzleSlot";
			item = "";
		};
	};
};

class sog_arifle_M16A4_Grip_acc_ANPEQ_15_Flashlight_Black_L_optic_ACOG: CUP_arifle_M16A4_Grip {
	scope = 1;
	displayName = "M16A4 Grip ACOG ANPEQ 15 Flashlight";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CUP_PicatinnyTopMountM16";
			item = "CUP_optic_ACOG";
		};
		class LinkedItemsAcc {
			slot = "CUP_PicatinnySideMountM16";
			item = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
		};
		class LinkedItemsMuzzle {
			slot = "muzzleSlot";
			item = "";
		};
	};
};
class sog_arifle_M4A1_GL_acc_ANPEQ_15_Flashlight_Black_L_optic_ACOG: CUP_arifle_M4A1_BUIS_GL {
	scope = 1;
	displayName = "M4A1 GL ACOG ANPEQ 15 Flashlight";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CUP_PicatinnyTopMountM4";
			item = "CUP_optic_ACOG";
		};
		class LinkedItemsAcc {
			slot = "CUP_PicatinnySideMountM4";
			item = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
		};
		class LinkedItemsMuzzle {
			slot = "muzzleSlot";
			item = "";
		};
	};
};
class sog_arifle_M4A3_acc_ANPEQ_15_Flashlight_Black_L_optic_ACOG: CUP_arifle_M4A3_black {
	scope = 1;
	displayName = "M4A3 ACOG ANPEQ 15 Flashlight";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CUP_PicatinnyTopMountM4";
			item = "CUP_optic_ACOG";
		};
		class LinkedItemsAcc {
			slot = "CUP_PicatinnySideMountM4";
			item = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
		};
		class LinkedItemsMuzzle {
			slot = "muzzleSlot";
			item = "";
		};
	};
};