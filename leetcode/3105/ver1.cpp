#include <vector>

using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int nSize = nums.size(), inc = 1, dec = 1, temp = 0;

        if (nSize == 1) return 1;
        for (int i = 1; i < nSize; i++) {
            if (nums[i] > nums[i - 1]) {
                inc++;
                dec = 1;
            }
            if (nums[i] < nums[i - 1]) {
                dec++;
                inc = 1;
            }
            if (nums[i] == nums[i - 1]) {
                dec = 1;
                inc = 1;
            }
            temp = max(temp, max(inc, dec));
        }

        return temp;
    }
};