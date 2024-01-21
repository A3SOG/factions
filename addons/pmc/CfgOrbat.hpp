class CfgOrbat {
	class SOG {
		class SOG_Base {
			side = "West";
			color[] = {0,0,0,1};
		};

		class SOGDepartments_Base: SOG_Base {
			type = "HQ";
			text = "SOG PMC Departments";
			textShort = "Departments";
			assets[] = {};
			description = "SOG PMC Departments.";
		};

		class SOGLoki_Base: SOG_Base {
			type = "Recon";
			size = "FireTeam";
			description = "SOG Element: LOKI";
			text = "Task Force Loki";
			textShort = "LOKI";
		};

		class SOGCompanyHome {
			side = "West";
			type = "HQ";
			text = "SOG Private Military Company";
			textShort = "SOG PMC";
			assets[] = {"B_SOG_suburban_PMC_01", "B_SOG_tahoe_UNM_PMC_01"};
			color[] = {0,0,0,1};
			description = "SOG PMC Orbat Groups.";
			subordinates[] = {"SOGShareHolders", "SOGExecutiveMembers", "SOGDepartments"};
		};

		class SOGShareHolders {
			side = "West";
			type = "HQ";
			text = "SOG PMC Shareholders";
			textShort = "Shareholders";
			assets[] = {};
			color[] = {0,0,0,1};
			description = "SOG PMC Shareholders.";
		};
		class SOGExecutiveMembers {
			side = "West";
			type = "HQ";
			text = "SOG PMC Executive Members";
			textShort = "Executive Members";
			assets[] = {};
			color[] = {0,0,0,1};
			description = "SOG PMC Executive Members.";
		};

		class SOGDepartments {
			side = "West";
			type = "HQ";
			text = "SOG PMC Departments";
			textShort = "Departments";
			assets[] = {};
			color[] = {0,0,0,1};
			description = "SOG PMC Departments.";
			subordinates[] = {"SOGDepartmentsOperations", "SOGDepartmentsPersonnel", "SOGDepartmentsTech", "SOGDepartmentsMedia"};
		};

		class SOGDepartmentsOperations: SOGDepartments_Base {
			text = "Operations Department";
			textShort = "Operations Dept.";
			subordinates[] = {"SOGCommand", "SOGDepartmentsOperationsContracts"};
		};

		class SOGDepartmentsOperationsContracts: SOGDepartments_Base {
			text = "Contract Acquisition";
			textShort = "Contract Acquisition";
			type = "Unknown";
		};

		class SOGDepartmentsPersonnel: SOGDepartments_Base {
			text = "Personnel Department";
			textShort = "Personnel Dept.";
			subordinates[] = {"SOGDepartmentsPersonnelTraining", "SOGDepartmentsPersonnelEmployeeCare", "SOGDepartmentsPersonnelPayroll"};
		};
		class SOGDepartmentsPersonnelTraining: SOGDepartments_Base {
			text = "Training";
			textShort = "Training";
			type = "Unknown";
		};
		class SOGDepartmentsPersonnelEmployeeCare: SOGDepartments_Base {
			text = "Employee Care";
			textShort = "Employee Care";
			type = "Unknown";
		};
		class SOGDepartmentsPersonnelPayroll: SOGDepartments_Base {
			text = "Payroll";
			textShort = "Payroll";
			type = "Unknown";
		};

		class SOGDepartmentsTech: SOGDepartments_Base {
			text = "Tech Department";
			textShort = "Tech Dept.";
			subordinates[] = {"SOGDepartmentsTechWeaponMaintenance", "SOGDepartmentsTechResearchDevelopment"};
		};
		class SOGDepartmentsTechWeaponMaintenance: SOGDepartments_Base {
			text = "Weapon Maintenance";
			textShort = "Weapon Maint.";
			type = "Unknown";
		};
		class SOGDepartmentsTechResearchDevelopment: SOGDepartments_Base {
			text = "Research and Development";
			textShort = "R&D";
			type = "Unknown";
		};

		class SOGDepartmentsMedia: SOGDepartments_Base {
			text = "Media Department";
			textShort = "Media Dept.";
			subordinates[] = {"SOGDepartmentsMediaCompanyRelations", "SOGDepartmentsMediaNationalOutreach"};
		};
		class SOGDepartmentsMediaCompanyRelations: SOGDepartments_Base {
			text = "Company Relations";
			textShort = "Company Relations";
			type = "Unknown";
		};
		class SOGDepartmentsMediaNationalOutreach: SOGDepartments_Base {
			text = "National Outreach";
			textShort = "National Outreach";
			type = "Unknown";
		};

		class SOGCommand: SOG_Base {
			side = "West";
			type = "HQ";
			size = "Company";
			text = "SOG Command Group";
			textShort = "SOG Command";
			color[] = {0,0,0,1};
			description = "SOG Command Group";
			subordinates[] = {"SOGLoki_Command"};
		};

		class SOGLoki_Command: SOGLoki_Base {
			size = "Brigade";
			insignia = "\z\sog\addons\patch\data\sog_armpatch_bk.paa";
			// texture = "";
			subordinates[] = {"SOGLoki_Team1", "SOGLoki_Team2", "SOGLoki_Team3"};
		};
		class SOGLoki_Team1: SOGLoki_Base {
			text = "Field Operatives";
			TextShort = "Field Operatives";
			size = "Squad";
			type = "Unknown";
			commander = "J. Schmidt";
			commanderRank = "Captain";
		};
		class SOGLoki_Team2: SOGLoki_Base {
			text = "Intelligence Analysts";
			TextShort = "Intelligence Analysts";
			size = "Squad";
			type = "Unknown";
		};
		class SOGLoki_Team3: SOGLoki_Base {
			text = "Strike Team Echo";
			TextShort = "Strike Team Echo";
			size = "Squad";
		};
	};
};