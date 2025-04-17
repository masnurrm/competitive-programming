#include <vector>

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int nSize = nums.size(), res = 0;

        for (int i = 0; i < nSize - 1; i++) {
            for (int j = i + 1; j < nSize; j++) {
                if (nums[i] == nums[j]) {
                    if ((i * j) % k == 0) res++;
                }
            }
        }

        return res;
    }
};