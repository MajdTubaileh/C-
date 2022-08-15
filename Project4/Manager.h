#pragma once
#include "SalariedEmployee.h"
class Manager : public  SalariedEmployee
{
public:
	Manager()
	{
		name = "Unknown";
		hireYear = 0000;
		AnnualSalary = 0;
		currentyear = 2020;
	}
	Manager(string name, int hireYear, int AnnualSalary)
	{
		this->name = name;
		this->hireYear = hireYear;
		this->AnnualSalary = AnnualSalary;
		currentyear = 2020;
	}
	~Manager()
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
	double annualpay()                                                                                                      //  __  __      _      _   _      _       ____   _____   ____  
	{	                                                                                                                   	// |  \/  |    / \    | \ | |    / \     / ___| | ____| |  _ \ 
		double value;                                                                                                       // | |\/| |   / _ \   |  \| |   / _ \   | |  _  |  _|   | |_) |
		double bonus;                                                                                                       // | |  | |  / ___ \  | |\  |  / ___ \  | |_| | | |___  |  _ <    
		bonus = 10 * 0.01 * AnnualSalary;                                                                                   // |_|  |_| /_/   \_\ |_| \_| /_/   \_\  \____| |_____| |_| \_\ 
		value = bonus + AnnualSalary;
		Set_salary(value);                                                                                     
		return AnnualSalary;																	  
	}                                                     
	double monthlypay()
	{
		Get_salary();
		return AnnualSalary / 12;
	}
};																													         
                                                             






