#pragma once
#include "SalariedEmployee.h"
class Staff : public  SalariedEmployee
{
public :
	Staff()
	{
		name = "Unknown";
		hireYear = 0000;
		currentyear = 2020;
		AnnualSalary = 0;
	}
	Staff(string name, int hireYear, int AnnualSalary)
	{
		this->name = name;
		this->hireYear = hireYear;
		this->AnnualSalary = AnnualSalary;
		currentyear = 2020;
	}
	~Staff()
	{
	}
	void Set_salary(double salary)
	{
		this->AnnualSalary = salary;
	}
	double Get_salary()
	{
		return AnnualSalary;
	}
	double annualpay()                                                                                                                  
	{	
		double bonus;                                                                                                                    // ____    _____      _      _____   _____ 
		double value;                                                                                                                   // / ___|  |_   _|    / \    |  ___| |  ___|
		int yearscounted;																												// \___ \    | |     / _ \   | |_    | |_   
		yearscounted = currentyear - hireYear;																			                //  ___) |   | |    / ___ \  |  _|   |  _|  
		if (yearscounted >= 5)																											// |____/    |_|   /_/   \_\ |_|     |_|    
		{
		    bonus = (2 * 0.01)*yearscounted*AnnualSalary;
			value = (AnnualSalary+bonus);
			AnnualSalary = value;
			Set_salary(value);
			return AnnualSalary;
		}
		else return (AnnualSalary);
	}
	double monthlypay()
	{
		Get_salary();
	return	AnnualSalary / 12;
	}

};

