#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        unordered_map<int, int>freq;
        for(int i= 0; i<n; i++){
            cin>>a[i];
            freq [a[i]]++;
        }
        int ans = -1;
        for(int i = 0; i<n; i++){
            if(freq[a[i]] >= 3){
                ans = a[i];
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}