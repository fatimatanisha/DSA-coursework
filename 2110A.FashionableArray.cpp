#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
            sort(a.begin(), a.end());
            
            if(a[0] + a[n-1] % 2 == 0){
                cout<< 0<< '\n';
            } else {
            int left = 0;
            while(left<n && a[left] % 2 != a[n-1] % 2){
                left++;
            }
            int right = n-1;
            while(right>=0 && a[right] % 2 != a[0] % 2){
                right--;
            }
            cout<< min(left, n-1-right) << '\n';
        }
    }
    return 0;
}