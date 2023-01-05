#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char name1[40];
	cin >> name1;
	int len;
	len = strlen(name1);
	int flag=0;
	for (int i = 0; i < len; i++)
	{
		if (name1[i] != name1[len - i - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
	return 0;
}