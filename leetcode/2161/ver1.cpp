#include <vector>

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int nSize = nums.size(), pCount = 0, j = 0;
        vector<int> low, high;

        for (int i = 0; i < nSize; i++) {
            if (nums[i] < pivot) low.push_back(nums[i]);
            else if (nums[i] > pivot) high.push_back(nums[i]);
            else pCount++;
        }

        for (int i = 0; i < nSize; i++) {
            if (i < low.size()) nums[i] = low[i];
            else if (i >= low.size() && pCount > 0) {
                nums[i] = pivot;
                pCount--;
            }
            else {
                nums[i] = high[j];
                j++;
            }
        }

        return nums;
    }
};