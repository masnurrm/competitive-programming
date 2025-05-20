#include <vector>

using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int halfSize = nums.size() / 2;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < halfSize; i++) {
            swap = nums[i * 2];
            nums[i * 2] = nums[i * 2 + 1];
            nums[i * 2 + 1] = swap;
        }

        return nums;
    }
};