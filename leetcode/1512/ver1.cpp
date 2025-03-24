#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> counter;
    
        for (int num : nums) {
            counter[num]++;
        }

        int res = 0;

        for (const auto& num : counter) {
            if (num.second > 1) {
                res += num.second * (num.second - 1) / 2;
            }
        }
        
        return res;
    }
};
