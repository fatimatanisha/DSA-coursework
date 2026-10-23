#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int sortPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        bool found = false;
        for(int i = 0; i<n; i++){
            if(nums[i] != i){
                if(!found){
                    ans = nums[i];
                    found = true;
                } else {
                    ans = ans & nums[i];
                }
            }
        }
        return ans;
    }
};