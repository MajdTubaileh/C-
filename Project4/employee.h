#pragma once
#include<string>
#include <iostream>
#include<cmath>
using namespace std;
class Employee
{
protected :
	string name;
	int hireYear;
	int currentyear;

public:
	Employee()
	{
		name = "Unknown";
		hireYear = 0000;
		currentyear = 2020;
	}

	Employee(string name, int year)
	{
		this->name = name;
		this->hireYear = year;
		currentyear = 2020;
	}

	~Employee()
	{
	}

   virtual double Get_salary()
	{
		return 0;
	}

	virtual	double monthlypay()                                                      // _____   __  __   ____    _        ___   __   __  _____   _____     ____    ___    ____     ____     ___    ____    ____       _    
	{																				// | ____| |  \/  | |  _ \  | |      / _ \  \ \ / / | ____| | ____|   | __ )  |_ _|  / ___|   |  _ \   / _ \  |  _ \  |  _ \     / \   
		return 0;															 		// |  _|   | |\/| | | |_) | | |     | | | |  \ V /  |  _|   |  _|     |  _ \   | |  | |  _    | |_) | | | | | | |_) | | |_) |   / _ \  
	}	                                                                            // | |___  | |  | | |  __/  | |___  | |_| |   | |   | |___  | |___    | |_) |  | |  | |_| |   |  __/  | |_| | |  __/  |  __/   / ___ \ 
																					// |_____| |_|  |_| |_|     |_____|  \___/    |_|   |_____| |_____|   |____/  |___|  \____|   |_|      \___/  |_|     |_|     /_/   \_\ 
	virtual	double annualpay()														
	{
		return 0;
	}

};
