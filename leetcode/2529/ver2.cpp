#include <vector>

using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negCount = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int posCount = nums.end() - upper_bound(nums.begin(), nums.end(), 0);
        
        return max(negCount, posCount);
    }
};
