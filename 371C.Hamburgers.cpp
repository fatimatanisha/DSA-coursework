#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int main(){

    string recipe;
    cin>> recipe;

    long long nb, ns, nc;
    cin>>nb>>ns>>nc;

    long long pb,ps,pc;
    cin>>pb>>ps>>pc;

    long long r;
    cin>>r;

    long long needB=0, needS=0, needC=0;
    for(char ch: recipe){
        if(ch == 'B'){
            needB++;
        }
        if(ch == 'S'){
            needS++;
        }
        if (ch == 'C')
        {
            needC++;
        }
    }
    long long low = 0; 
    long long high = 1e13;     //1e13 = 10000000000000
    long long ans = 0;
    while(low <= high){
        long long mid = low+(high-low)/2;
        long long buyB = max(0LL, needB*mid-nb);
        long long buyS = max(0LL, needS * mid - ns);
        long long buyC = max(0LL, needC * mid - nc);
        
        long long cost = buyB*pb + buyS*ps + buyC*pc;
        if(cost <= r){
            ans = mid;
            low = mid+1;
        } else{
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}