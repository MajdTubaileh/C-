#pragma once
#include "HourlyEmployee.h"
class FullTime : public  HourlyEmployee
{
public :
	FullTime()
	{
		name = "Unkown";
		hireYear = 0000;
		currentyear = 2020;
		HoursPerWeek = 0;
		HourlyWage = 0;
	}
	FullTime(string name, int hireYear, int HoursPerWeek, double HourlyWage)
	{
		this->name = name;
		this->hireYear = hireYear;
		this->HoursPerWeek = HoursPerWeek;
		this->HourlyWage = HourlyWage;
		currentyear = 2020;
	}
	~FullTime()
	{
	}
	double annualpay()                                                                                                                        //  _____   _   _   _       _         _____   ___   __  __   _____ 
	{																																          // |  ___| | | | | | |     | |       |_   _| |_ _| |  \/  | | ____|
		/*																														              // | |_    | | | | | |     | |         | |    | |  | |\/| | |  _|
		double weeks;																													      // |  _|   | |_| | | |___  | |___      | |    | |  | |  | | | |___
		weeks = ((currentyear - hireYear)*365/7))																							  // |_|      \___/  |_____| |_____|     |_|   |___| |_|  |_| |_____|
		*/
		double weeks;
		weeks = 52;
		return (HoursPerWeek*HourlyWage*weeks);
	}

};

