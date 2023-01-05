#include <iostream>
#include <string>

using namespace std;

bool ispal(string &name, int i, int j);

int main()
{
	string name; 
	cin >> name;
	int i = 0;
	int j = size(name)-1;
	if (ispal(name,i,j))
		cout << "yes"<<endl;
	else
		cout << "no"<<endl;
	return 0;
}
bool ispal(string &name,int i, int j)
{
	if (i == j)
		return true;
	else if (name[i] != name[j])
		return false;
	else
		return ispal(name, (i + 1), (j - 1));
}