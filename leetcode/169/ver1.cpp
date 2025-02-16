#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> found;
        
        for (int i = 0; i < nums.size(); i++) {
            found[nums[i]]++;
            if (i >= nums.size() / 2) {
                if (found[nums[i]] > (nums.size() / 2)) return nums[i];
            }
        }
        return -1;
    }
};