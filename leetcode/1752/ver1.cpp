#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int nSize = nums.size(), dec = 0;
        
        if (nSize == 1) return true;
        if (nums[0] < nums[nSize - 1]) dec++;
        for (int i = 1; i < nSize; i++) {
            if (nums[i] < nums[i - 1]) dec++;
        }

        return dec <= 1;
    }
};