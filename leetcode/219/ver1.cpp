#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int nSize = nums.size();
        unordered_map<int, int> freqMap;

        if (k >= nSize) k = nSize - 1;

        for (int i = 0; i < nSize; i++) {
            if (freqMap.count(nums[i]) && i - freqMap[nums[i]] <= k) {
                return true;
            }

            freqMap[nums[i]] = i;
        }

        return false;
    }
};
