#include <vector>

using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int nSize = nums.size(), temp = nums[0], maks = 0;

        for (int i = 1; i < nSize; i++) {
            if (nums[i] > nums[i - 1]) temp += nums[i];
            else {
                maks = max(maks, temp);
                temp = nums[i];
            }
        }

        return max(maks, temp);
    }
};