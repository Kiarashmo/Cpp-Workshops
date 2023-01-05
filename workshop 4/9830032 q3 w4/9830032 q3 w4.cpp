#include <iostream>

using namespace std;

int go(int n);

int main()
{
	int n;
	cin >> n;
	cout<<go(n);
	return 0;
}
int go(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else if (n == 3)
	{
		return go(n - 2) + go(n - 1);
	}
	else
		return go(n - 4) + go(n - 2) + go(n - 1);
}