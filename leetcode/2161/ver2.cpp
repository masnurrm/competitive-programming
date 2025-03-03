#include <vector>

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int nSize = nums.size(), lowIdx = 0, pCount = 0;
        vector<int> res(nSize);
        
        for (int i = 0; i < nSize; i++) {
            if (nums[i] < pivot) {
                res[lowIdx++] = nums[i];
            } else if (nums[i] == pivot) {
                pCount++;
            }
        }
        
        for (int i = 0; i < pCount; i++) {
            res[lowIdx++] = pivot;
        }
        
        for (int i = 0; i < nSize; i++) {
            if (nums[i] > pivot) {
                res[lowIdx++] = nums[i];
            }
        }
        
        return res;
    }
};