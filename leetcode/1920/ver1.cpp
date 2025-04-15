#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int nSize = nums.size();
        vector<int> ans(nSize);
        
        for (int i = 0; i < nSize; i++) {
            ans[i] = nums[nums[i]]; 
        }

        return ans;
    }
};