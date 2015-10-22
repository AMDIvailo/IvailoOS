void terminal();
#include <iostream>
#include "usermodes.cpp"
#include <stdlib.h> 
using namespace std;
string command;
void terminal()
{
for(;;)
{
	if (usermode == "xuser")
	{
	cout << "Terminal-Xuser: ";
	}
	else if (usermode == "normal")
	{
	cout << "Terminal: ";
	}
	else if (usermode == "calcmod")
	{
	cout << "Calculator:  ";
	}
cin >> command;//Commands
	if (command == "xuser")
	{
	 	if (usermode == "xuser")
		{
		xuser(false);
		cout << "Xuser mode is: OFF" << endl;
		}
		else if (usermode == "normal")
		{
		xuser(true);
		cout << "Xuser mode is: ON" << endl;
		}
		else if (usermode == "calcmod")
		{
		cout << "You can't enter xuser when calculator is active!" << endl;
		}
	}
	else if (command == "calculator")
	{
		if (usermode == "calcmod")
		{
		calcmod(false);
		cout << "Calculator mode is: OFF" << endl;
		}
		else if (usermode == "normal")
		{
		calcmod(true);
		cout << "Calculator mode is: ON" << endl;
		}
		else if (usermode == "xuser")
		{
		cout << "You can't enter calculator when xuser is active!" << endl;
		}
	}
	else if (command == "exit" && usermode == "normal" || usermode == "xuser")
	{
	exit(1);
	}
	else if (command == "+" && usermode == "calcmod")
	{
	int value1;
	int value2;
	
	cin >> value1;
	cin >> value2;
		if (!isdigit(value1) && !isdigit(value2))
		{
		cout << "Please enter a valid number!" << endl;
		}
		//else
		//{
		//cout << value1 + value2 <<endl;
		//}
	}
	else
	{
	cout << "Command not found!" << endl;
	}
}
}
