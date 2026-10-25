#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }

        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            if (freq[nums[i]] > (n / 2))
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};