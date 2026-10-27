#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int largest = a[0];

        for (int i = 1; i < n-1; i++)
        {
            if (a[i] > largest)
            {
                largest = a[i];
            }
        }
        cout<< largest + a[n-1] <<'\n';
    }
    return 0;
}