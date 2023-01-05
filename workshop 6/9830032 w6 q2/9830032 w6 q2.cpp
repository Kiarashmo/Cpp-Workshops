#include <iostream>
using namespace std;

int main()
{
	int n;
	string decode,encode;
	cin >> n;
	cin >> encode;
	for (int i = 0; i < n ; i++)
	{
		if ((n - i) % 2 != 0)
			decode = decode + encode[i];
		else
			decode = encode[i] + decode;
	}
	cout << decode;
	return 0;
}