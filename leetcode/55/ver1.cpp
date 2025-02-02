#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int nSize = nums.size(), token = 0;

        if (nums[0] == 0) {
            if (nSize > 1) return false;
            else return true;
        }

        for (int i = 0; i < nSize; i++) {
            if (i == nSize - 1) return true;
            if (nums[i] == 0) {
                token--;
                if (token < 0) return false;
            }
            else {
                token--;
                if ((nums[i]) > (token)) token = nums[i] - 1;
            };
        }

        return true;
    }
};