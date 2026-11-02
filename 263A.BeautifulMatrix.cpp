#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[5][5];
    int r, c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                r = i + 1;
                c = j + 1;
            }
        }
    }
    cout << abs(r - 3) + abs(c - 3) << endl;
    return 0;
}