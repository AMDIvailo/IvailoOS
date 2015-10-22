void xuser(bool enabled);
#include <iostream>
using namespace std;
string usermode = "normal";
void xuser(bool enabled)
{
	if (enabled == true)
	{
	usermode = "xuser";
	}
	
	else if (enabled == false)
	{
	usermode = "normal";
	}
}
void calcmod(bool enabled)
{
	if (enabled == true)
	{
	usermode = "calcmod";
	}
	
	else if (enabled == false)
	{
	usermode = "normal";
	}
}
