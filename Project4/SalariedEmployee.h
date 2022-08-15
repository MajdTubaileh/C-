#pragma once
#include "employee.h"

class SalariedEmployee : public Employee
{
protected :	
	double AnnualSalary;
public:
	SalariedEmployee()
	{
		name = "Unknown";
		hireYear = 0000;
		AnnualSalary = 0;
		currentyear = 2020;
	}
	SalariedEmployee(string name, int hireYear, int AnnualSalary)
	{
		this->name = name;
		this->hireYear = hireYear;
		this->AnnualSalary = AnnualSalary;
		currentyear = 2020;
	}
	~SalariedEmployee()
	{
	}
	double monthlypay()                                                                     //  ____       _      _          _      ____    ___   _____   ____      _____   __  __   ____    _        ___   __   __  _____   _____ 
	{																						// / ___|     / \    | |        / \    |  _ \  |_ _| | ____| |  _ \    | ____| |  \/  | |  _ \  | |      / _ \  \ \ / / | ____| | ____|
		return (AnnualSalary / 12);										    				// \___ \    / _ \   | |       / _ \   | |_) |  | |  |  _|   | | | |   |  _|   | |\/| | | |_) | | |     | | | |  \ V /  |  _|   |  _|  
	}																						//  ___) |  / ___ \  | |___   / ___ \  |  _ <   | |  | |___  | |_| |   | |___  | |  | | |  __/  | |___  | |_| |   | |   | |___  | |___ 
};																							// |____/  /_/   \_\ |_____| /_/   \_\ |_| \_\ |___| |_____| |____/    |_____| |_|  |_| |_|     |_____|  \___/    |_|   |_____| |_____|
                                                                                                                                     






