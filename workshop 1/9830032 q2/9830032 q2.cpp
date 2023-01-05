#include <iostream>

using namespace std;

int main() {
    int h;
    cin >> h;
    int n=1;
    for (int i = 0; i < h; i++)
    {
        for (int j = i; j < h; j++)
        {
            cout << " ";
        }
        cout << ".";
        if (i != 0)
        {
            for (int k = 0; k < n; k++)
            {
                cout << " ";
            }
            cout << ".";
            n += 2;
        }
        cout << endl;
    }
    return 0;

}
