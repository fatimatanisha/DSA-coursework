#include <iostream>
#include <algorithm>
#include <vector>
class Solution
{
public:
    bool isPerfectSquare(int num)
    {

        for (long long i = 0; i <= num; i++)
        {
            if (i * i == num)
            {
                return true;
            }
        }
        return false;
    }
};