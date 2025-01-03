#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int n = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            n = n ^ nums[i];
        }

        return n;
    }
};