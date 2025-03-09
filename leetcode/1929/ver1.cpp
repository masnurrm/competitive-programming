#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int nSize = nums.size();

        for (int i = 0; i < nSize; i++) nums.push_back(nums[i]);

        return nums;
    }
};