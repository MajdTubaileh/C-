#pragma once
#include "HourlyEmployee.h"
class PartTime : public  HourlyEmployee
{
public:
	PartTime()
	{
		name = "Unkown";
		hireYear = 0000;
		currentyear = 2020;
		HoursPerWeek = 0;
		HourlyWage = 0;
	}
	PartTime(string name, int hireYear, int HoursPerWeek, double HourlyWage)
	{
		this->name = name;
		this->hireYear = hireYear;
		this->HoursPerWeek = HoursPerWeek;
		this->HourlyWage = HourlyWage;
		currentyear = 2020;
	}
	~PartTime()
	{
    }
	double annualpay()                                                                                                      //  ____       _      ____    _____     _____   ___   __  __   _____ 
	{																													   // |  _ \     / \    |  _ \  |_   _|   |_   _| |_ _| |  \/  | | ____|
		/*																												   // | |_) |   / _ \   | |_) |   | |       | |    | |  | |\/| | |  _|
		double weeks;																								       // |  __/   / ___ \  |  _ <    | |       | |    | |  | |  | | | |___
		weeks = ((currentyear - hireYear)*365/7))																		   // |_|     /_/   \_\ |_| \_\   |_|       |_|   |___| |_|  |_| |_____|
		*/
		double weeks;
		weeks = 50;
		return (HoursPerWeek*HourlyWage*weeks);
	}

};

