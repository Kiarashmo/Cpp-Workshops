#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int mat[30][30];
	int flag = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mat[i][j];
		}
	}

	if (m == 1)
	{
		cout << "Row Matrix" << endl;
	}

	if (n == 1)
	{
		cout << "Column Matrix" << endl;
	}

	if (m == 1 && n == 1)
	{
		cout << "1*1" << endl;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mat[i][j] != 0)
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
	{
		cout << "Zero Matrix" << endl;
	}
	flag = 0;
	if (m == n)
	{
		cout << "Square Matrix" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((mat[i][j] != 1) && (mat[j][i] != 0))
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
		{
			cout << "Identity Matrix" << endl;
		}
		int flagu = 0;
		int flagd = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i > j)
				{
					if (mat[i][j] != 0)
					{
						flagu = 1;
						break;
					}
				}
				if (i < j)
				{
					if (mat[i][j] != 0)
					{
						flagd = 1;
						break;
					}

				}
			}
		}
		if (flagu == 0)
		{
			cout << "Upper Triangular Matrix" << endl;
		}
		if (flagd == 0)
		{
			cout << "Lower Triangular Matrix" << endl;
		}
	}
	return 0;
}
