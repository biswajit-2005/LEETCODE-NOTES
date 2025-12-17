#include <iostream>
#include <vector>
class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int sum = 0;
        for (auto val : nums)
        {
            sum += val;
        }
        int tsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int s = (sum - nums[i]) / 2;
            if (s == tsum)
            {
                if ((sum - nums[i]) % 2 == 0)
                {
                    return i;
                }
            }
            tsum = tsum + nums[i];
        }
        return -1;
    }
};