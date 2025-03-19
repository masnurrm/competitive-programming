#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int nSize = nums.size(), res = 0;

        for (int i = 0; i <= nSize - 3; i++) {
            if (nums[i] == 0) {
                nums[i] ^= 1;
                nums[i + 1] ^= 1;
                nums[i + 2] ^= 1;
                res++;
            }
        }

        if (nums[nSize - 1] == 0 || nums[nSize - 2] == 0 || nums[nSize - 3] == 0) return -1;

        return res;
    }
};
