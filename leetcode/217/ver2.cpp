#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> found;
        
        for (int num : nums) {
            if (found.count(num)) {
                return true;
            }
            found.insert(num);
        }

        return false; 
    }
};