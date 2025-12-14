#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int slow = 0; // position to place next non-zero
        int fast = 0; // scanning pointer

        while (fast < nums.size())
        {
            if (nums[fast] != 0)
            {
                // Swap only if slow != fast
                if (slow != fast)
                {
                    int temp = nums[slow];
                    nums[slow] = nums[fast];
                    nums[fast] = temp;
                }
                slow++;
            }
            fast++;
        }
    }
};