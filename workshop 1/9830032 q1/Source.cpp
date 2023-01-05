#include <iostream>
#include <math.h>
using namespace std;
int main() {

	long long int sum=0, input=1;
	double n;
	cin >> sum;
	sum = 2 * sum;
	while (n > input)
	{
		n=2 * sum / (1 + input);
		if (n == int(n)) {
			cout << input;
			break;
		}
		input++;
	}
	if (input > n) {
		cout << "not possible";
	}
	return 0;
}
