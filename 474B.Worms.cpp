#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>prefix(n);
    for(int i=0; i<n; i++){
        cin >> prefix[i];

        if(i>0){
            prefix[i] += prefix[i-1];
        }
    }
    int m;
    cin >> m;
    while(m--){
        int q;
        cin >> q;

        int pile=lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin()+1;
        cout << pile << '\n';
    }

    return 0;
}