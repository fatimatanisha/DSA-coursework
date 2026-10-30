#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = -1, last = -1;
        int n = nums.size();
        int left=0, right = n-1;

        //find first occurrence
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                first = mid;
                right = mid-1;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        //find last occurrence

        int left = 0, right = n-1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                last = mid;
                left = mid+1;
            } else if(nums[mid] < target){
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        return {first, last};
    }
};