#include <iostream>
#include <string>
#include "core.cpp"
void login();
void terminal();
int attemptsleft = 3;
using namespace std;
int main(){
	login();
}

void login()
{
cout << "Attempts left: " << attemptsleft <<endl; //Prints attempts left
string username;
string password;
bool isLoginCorrect;
cout << "Enter username" <<endl;
cin >> username;//username user input
cout << "Enter password" <<endl;
cin >> password;//password user input
if (username == "a" && password == "b")//username and pass check
{
	isLoginCorrect = true;
	//cout << isLoginCorrect << endl; DEBUG
}
else
{
	isLoginCorrect = false;
	//cout << isLoginCorrect << endl; DEBUG
	attemptsleft--;
}
if(isLoginCorrect == true)
	terminal();//runs the core(terminal)
else if(isLoginCorrect == false)
{
	if (attemptsleft > 0)//runs if there are attempts left and restart the function
	{
	cout << "Login failed... Try again." << endl;
	login();
	}
	else if (attemptsleft <= 0)//runs if no more attempts and quit
	{
	cout << "Too many wrong attempts!" <<endl;
	}
}
}
//this is a new line, cuz we want to reach 50th line :D:D:D !:DDDD
