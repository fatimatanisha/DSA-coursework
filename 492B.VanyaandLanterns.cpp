#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double d = max((double)a[0], (double)(1 - a[n - 1]));

    for (int i = 1; i < n; i++)
    {
        d = max(d,(a[i] - a[i-1])/2.0);
    }

    cout << fixed << setprecision(10) << d << endl;

    return 0;
}