#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	double t;
	cin >> t;
	double c=0;
	c = ((t - 32) * 5) / 9;
	if (c <= 0)
	{
		cout << "Ice";
	}
	if (c>0 && c < 100)
	{
		cout << "Water";
	}
	if(c >= 100)
	{
		cout << "Steam";
	}
	return 0;
}