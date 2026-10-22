#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int n = nums.size();
        int pos = 0;
        for(int i = 0; i < n;i++){
            if(nums[i] == 0){
                pos = i;
                break;
            }
        }

        int k1 = pos;
        bool sorted = true;
        for(int i=0; i<n; i++){
            if(nums[(i+k1) % n] != i){
                sorted = false;
                break;
            }
        }

        int k2 = (pos + 1) % n;
        bool reverseSorted = true;
        for (int i = 0; i < n; i++)
        {
            if (nums[(i + k2) % n] != n-1-i)
            {
                reverseSorted = false;
                break;
            }
        }

        int k3 = n-1-pos;
        bool reverseFirstSorted = true;
        for (int i = 0; i < n; i++)
        {
            int idx = (i+k3) % n;
            if (nums[n-1-idx] != i)
            {
                reverseFirstSorted = false;
                break;
            }
        }

        int ans = INT_MAX;
        if(sorted){
           ans = min(k1, n - k1 + 2);
        }
        if(reverseSorted){
            ans = min(ans, k2 + 1);
        }
        if(reverseFirstSorted){
            ans = min(ans, k3+1);
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;

    }
};