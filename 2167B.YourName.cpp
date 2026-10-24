#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        string s, t;
        cin>> n>> s>> t;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    
    return 0;
}