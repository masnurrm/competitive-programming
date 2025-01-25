#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int min = nums[0], x = 0;

            for (int j = 1; j < nums.size(); j++) {
                if (nums[j] < min) {
                    min = nums[j];
                    x = j;
                }
            }
            nums[x] *= multiplier;
        }

        return nums;
    }
};