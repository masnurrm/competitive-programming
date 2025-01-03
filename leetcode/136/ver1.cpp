#include <vector>
#include <algorithm>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int n = nums[0];
        bool flag = false;

        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                n = nums[i];
                flag = true;
                break;
            }
        }

        if (!flag) n = nums.back();

        return n;
    }
};