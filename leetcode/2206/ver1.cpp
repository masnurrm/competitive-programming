#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if (nums.size() % 2 == 0) {
            map<int,int> pairs;
            for (int num : nums) {
                pairs[num]++;
            }
            for (auto& pair : pairs) {
                if (pair.second % 2 != 0) return false;
            }
            return true;
        }

        return false;   
    }
};
