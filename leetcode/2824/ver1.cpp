#include <vector>

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int nSize = nums.size(), res = 0;

        for (int i = 0; i < nSize; i++) {
            for (int j = i + 1; j < nSize; j++) {
                if (nums[i] + nums[j] < target) res++;
            }
        }

        return res;
    }
};