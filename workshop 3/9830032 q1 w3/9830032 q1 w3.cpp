#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char sym;
	vector<char>symbol;
	int count;
	vector<long int> counter;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> sym;
		symbol.push_back(sym);
		if (sym == '*')
		{
			continue;
		}
		cin >> count;
		counter.push_back(count);
	}
	for (int i = 0; i < n; i++)
	{
		//cout<<i<<": "<<symbol.at(i)<<"-"<< counter.at(i)<<endl;
		if (symbol.at(i) == '+')
		{
			sum += counter.at(i);
		}
		if (symbol.at(i) == '-')
		{
			sum -= counter.at(i);
		}	
	}
	if (sum<=0)
	{
		cout << "garden is now empty"<<endl;
		sum = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (symbol.at(i) == '*')
		{
			cout << sum<<endl;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (symbol.at(i) == '?')
		{
			if (sum % 3 == 0)
			{
				cout << "very pretty!";
			}
			if (sum % 3 == 2)
			{
				cout << "normal!";
			}
			if (sum % 3 == 1)
			{
				cout << "ugly!";
			}
		}
	}
	return 0;
}