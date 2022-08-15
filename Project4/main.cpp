#include <iostream>
#include <fstream>
#include "employee.h"
#include "FullTime.h"
#include "Manager.h"                                                                                 //  ___   _   _    ____   _       _   _   ____    _____   ____  
#include "PartTime.h"                                                                                // |_ _| | \ | |  / ___| | |     | | | | |  _ \  | ____| / ___| 
#include "Staff.h"																			    	 //  | |  |  \| | | |     | |     | | | | | | | | |  _|   \___ \ 
#include <fstream>							    													 //  | |  | |\  | | |___  | |___  | |_| | | |_| | | |___   ___) |
#include <windows.h>																				 // |___| |_| \_|  \____| |_____|  \___/  |____/  |_____| |____/

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


using namespace std;
void main()
{
	string Name;
	string line;
	ifstream file("data.txt");
	string item_name;
	ifstream nameFileout;
	nameFileout.open("data.txt");
	string line1;
	int count = 0;
	while (getline(nameFileout, line1))
	{
		count++;
	}
	nameFileout.close();
	cout << "The System is going to load "<< count << " Employees." << endl;
	cout << "==========================================================================" << endl;
	if (file.is_open())
	{
		Employee **Employee1 = new Employee*[count];

		while (!file.eof())
		{
			for (int i = 0; i < count; i++)
			{
				file >> Name;
				if (Name == "Staff")
				{
					int year, salary, counter, len;
					double empvalue;
					file >> Name >> year >> salary;
					Employee1[i] =  new Staff(Name, year, salary);
					empvalue = Employee1[i]->monthlypay();
					len = log10(empvalue) + 1;
					SetConsoleTextAttribute(hConsole, 10);

					cout << Name;
					Employee1[i]->annualpay();
					for (int i = 0; i < (15 - Name.length()); i++)
					{
						cout << " ";
					}

					cout << "  Monthly Pay : " << Employee1[i]->monthlypay();
					cout << '\t' << '\t';
					cout << "Annual Pay : " << Employee1[i]->Get_salary() << endl;
				}

				else if (Name == "Manager")
				{
					SetConsoleTextAttribute(hConsole,9);

					int year, salary, len;
					double empvalue;
					file >> Name >> year >> salary;
					Employee1[i] = new Manager(Name, year, salary);
					empvalue = Employee1[i]->monthlypay();
					len = log10(empvalue) + 1;
					cout << Name;
					Employee1[i]->annualpay();
					for (int i = 0; i < 15 - Name.length(); i++)
					{
						cout << " ";
					} cout << "  Monthly Pay : " << Employee1[i]->monthlypay();
					cout << '\t' << '\t';
					cout << "Annual Pay : " << Employee1[i]->Get_salary() << endl;
				}

				else if (Name == "FullTime")
				{
					SetConsoleTextAttribute(hConsole, 5);

					int len;
					double year, hoursweek, wage, empvalue;
					file >> Name >> year >> hoursweek >> wage;
					Employee1[i] = new FullTime(Name, year, hoursweek, wage);
					empvalue = Employee1[i]->monthlypay();
					len = log10(empvalue) + 1;
					cout << Name;
					for (int i = 0; i < 15 - Name.length(); i++)
					{
						cout << " ";
					}
					cout << "  Monthly Pay : " << Employee1[i]->monthlypay();
					cout << '\t' << '\t';
					cout << "Annual Pay : " << Employee1[i]->annualpay() << endl;
				}

				else if (Name == "PartTime")
				{
					SetConsoleTextAttribute(hConsole, 14);

					int len;
					double year, hoursweek, wage, empvalue;
					file >> Name >> year >> hoursweek >> wage;
					Employee1[i] = new PartTime(Name, year, hoursweek, wage);
					empvalue = Employee1[i]->monthlypay();
					len = log10(empvalue) + 1;
					cout << Name;
					for (int i = 0; i < 15 - Name.length(); i++)
					{
					 cout << " ";
					} 
					cout << "  Monthly Pay : " << Employee1[i]->monthlypay();
					cout << '\t' << '\t';
					cout << "Annual Pay : " << Employee1[i]->annualpay() << endl;
				}

			}			

		}
	}
	else 
	{
	cout << "Error Opening The file." << endl;
	}
	                                                                    //   __  __   ____        ____            _                   _   
																		//  |  \/  | / ___|      / ___|   _   _  | |__     __ _    __| |
																		 // | |\/| | \___ \      \___ \  | | | | | '_ \   / _` |  / _` |
																		//  | |  | |  ___) |  _   ___) | | |_| | | | | | | (_| | | (_| |
																		//  |_|  |_| |____/  (_) |____/   \__,_| |_| |_|  \__,_|  \__,_|
	SetConsoleTextAttribute(hConsole, 10);                             
	cout << "Green is Staff || ";                                    //  __  __   ____        ____                               _                      _  
	SetConsoleTextAttribute(hConsole, 9);	                         // |  \/  | |  _ \      / ___|    __ _  __      __   __ _  | |  _ __ ___     ___  | |__ 
	cout << "Blue is Manager|| ";	                                 // | |\/| | | |_) |     \___ \   / _` | \ \ /\ / /  / _` | | | | '_ ` _ \   / _ \ | '_ \ 
	SetConsoleTextAttribute(hConsole, 5);                            // | |  | | |  _ <   _   ___) | | (_| |  \ V  V /  | (_| | | | | | | | | | |  __/ | | | |
	cout << "Purple is FullTime || ";                                // |_|  |_| |_| \_\ (_) |____/   \__,_|   \_/\_/    \__,_| |_| |_| |_| |_|  \___| |_| |_|
	SetConsoleTextAttribute(hConsole, 14);
	cout << "Dark White is PartTime";                                //  ____   __   __       _      _               _____           _               _   _          _     
	cout << endl;                                                    // | __ )  \ \ / /      / \    | |__    _   _  |_   _|  _   _  | |__     __ _  (_) | |   ___  | |__  
	SetConsoleTextAttribute(hConsole, 15);					       	//  |  _ \   \ V /      / _ \   | '_ \  | | | |   | |   | | | | | '_ \   / _` | | | | |  / _ \ | '_ \  	   
																	//  | |_) |   | |      / ___ \  | |_) | | |_| |   | |   | |_| | | |_) | | (_| | | | | | |  __/ | | | |
																	//  |____/    |_|     /_/   \_\ |_.__/   \__,_|   |_|    \__,_| |_.__/   \__,_| |_| |_|  \___| |_| |_|	
																		
																		
																		
                                                                                                   
                                                                                                                                            
	system("pause");
}

	

