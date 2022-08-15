#pragma once
#include "employee.h"
class HourlyEmployee : public Employee
{
protected :	
	int HoursPerWeek;
	double HourlyWage;
public :
	
	HourlyEmployee()
	{
		name = "Unknown";
		hireYear = 0000;
		HourlyWage = 0;
		HoursPerWeek = 0;
		currentyear = 2020;
	}
	HourlyEmployee(char* name, int hireYear, int HoursPerWeek, double HourlyWage)
	{
		this->name = name;
		this->hireYear = hireYear;
		this->HourlyWage = HourlyWage;
		this->HoursPerWeek = HoursPerWeek;
		currentyear = 2020;
	}
	~HourlyEmployee()
	{
	}
	double monthlypay()                                                                             //  _   _    ___    _   _   ____    _      __   __    _____   __  __   ____    _        ___   __   __  _____   _____ 
	{																								// | | | |  / _ \  | | | | |  _ \  | |     \ \ / /   | ____| |  \/  | |  _ \  | |      / _ \  \ \ / / | ____| | ____|
		return (HoursPerWeek*HourlyWage * 4);														// | |_| | | | | | | | | | | |_) | | |      \ V /    |  _|   | |\/| | | |_) | | |     | | | |  \ V /  |  _|   |  _|  
	}																				     			// |  _  | | |_| | | |_| | |  _ <  | |___    | |     | |___  | |  | | |  __/  | |___  | |_| |   | |   | |___  | |___ 
																		    						// |_| |_|  \___/   \___/  |_| \_\ |_____|   |_|     |_____| |_|  |_| |_|     |_____|  \___/    |_|   |_____| |_____|






};
