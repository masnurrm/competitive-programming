#include <vector>

using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int nSize = nums.size();
        
        for (int i = 1; i < nSize; i++) {
            if (nums[i] == nums[i - 1]) {
                nums[i - 1] *= 2;
                nums[i] = 0;
            }
        }

        for (int i = 0; i < nSize; i++) {
            if (nums[i] == 0) {
                for (int j = i; j < nSize; j++) {
                    if (nums[j] != 0) {
                        nums[i] = nums[i] ^ nums[j];
                        nums[j] = nums[i] ^ nums[j];
                        nums[i] = nums[i] ^ nums[j];
                        break;
                    }
                }
            }
        }

        return nums;
    }
};