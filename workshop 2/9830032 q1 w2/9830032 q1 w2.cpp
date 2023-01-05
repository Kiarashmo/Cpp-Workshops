#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char num[150];
	cin >> num;
	int x;
	x = strlen(num);
	int k;
	int sum=0;
	for (int i = 0; i < x; i++)
	{
		k = num[i];
		k = k - 48;
		cout << k << ":";
		for (int i = 0; i < k; i++)
		{
			cout << k;
		}
		cout << endl;
		sum =sum + k;
	}
	cout << "sum of the digits:";
	cout << sum;
	return 0;
}