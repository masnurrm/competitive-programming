#include <vector>

using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low = 0, high = 0, nSize = nums.size();

        for (int i = 0; i < nSize; i++) {
            if (nums[i] < 0 || nums[nSize - i - 1] > 0) {
                low++;
                high++;
            }
            else break;
        }

        return max(low, high);
    }
};
