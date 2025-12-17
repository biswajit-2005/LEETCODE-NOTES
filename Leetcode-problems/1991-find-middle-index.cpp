#include <iostream>
#include <vector>
using namespace std;
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
/*
Given a 0-indexed integer array nums, find the leftmost middleIndex (i.e., the smallest amongst all the possible ones).

A middleIndex is an index where nums[0] + nums[1] + ... + nums[middleIndex-1] == nums[middleIndex+1] + nums[middleIndex+2] + ... + nums[nums.length-1].

If middleIndex == 0, the left side sum is considered to be 0. Similarly, if middleIndex == nums.length - 1, the right side sum is considered to be 0.

Return the leftmost middleIndex that satisfies the condition, or -1 if there is no such index.*/