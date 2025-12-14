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
/*

## 📝 Approach (Two-Pointer)
- Use **two pointers**:
  - `slow` → position to place the next non-zero.
  - `fast` → scans through the array.
- Traverse the array with `fast`.
- If `nums[fast] != 0`:
  - Swap `nums[slow]` and `nums[fast]`.
  - Increment `slow`.
- Continue until `fast` reaches the end.
- Result: all non-zero elements are shifted left, zeros moved to the end.

---

## 🔄 Process (Step-by-Step)
Example: `nums = [0,1,0,3,12]`

1. `fast=0` → zero → skip.
2. `fast=1` → non-zero → swap with `slow=0` → `[1,0,0,3,12]`, `slow=1`.
3. `fast=2` → zero → skip.
4. `fast=3` → non-zero → swap with `slow=1` → `[1,3,0,0,12]`, `slow=2`.
5. `fast=4` → non-zero → swap with `slow=2` → `[1,3,12,0,0]`, `slow=3`.

Final Output: `[1,3,12,0,0]`.

---

## ⚡ Complexity
- **Time:** \(O(n)\) (single pass)
- **Space:** \(O(1)\) (in-place)
*/