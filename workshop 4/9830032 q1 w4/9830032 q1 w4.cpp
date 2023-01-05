#include <iostream>

using namespace std;

//int bmm(int x, int y);

int main()
{
	int a;
	int b;
	cin >> a >> b;
	int x = a % b;
	cout << x;
	//cout << bmm(a, b);
	return 0;
}
//int bmm(int x, int y)
//{
//	if (y == 0)
//	{
//		return x;
//	}
//	else
//	{
//		return bmm(y, x%y);
//	}
//}