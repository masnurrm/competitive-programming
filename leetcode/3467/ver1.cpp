#include <vector>

using namespace std;

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int nSize = nums.size(), even = 0;
        vector<int> ans(nSize);

        for (auto num : nums) if (num % 2 == 0) even++;

        for (int i = 0; i < nSize; i++) {
            if (i < even) ans[i] = 0;
            else ans[i] = 1;
        }

        return ans;
    }
};