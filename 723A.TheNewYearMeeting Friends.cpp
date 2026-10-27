
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int smallest = min({x1, x2, x3});
    int largest = max({x1, x2, x3});
    cout << largest - smallest;
    return 0;
}