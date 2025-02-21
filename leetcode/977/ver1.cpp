#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        bool isNeg = nums[0] < 0 ? 1:0;

        for (int i = 0; i < nums.size(); ++i) {
            nums[i] *= nums[i];
        }

        if (isNeg) sort(nums.begin(), nums.end());

        return nums;
    }
};