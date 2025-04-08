#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res = 0;

        while (true) {
            unordered_set<int> set;
            bool hasDuplicate = false;

            for (int num : nums) {
                if (set.count(num)) {
                    hasDuplicate = true;
                    break;
                }
                set.insert(num);
            }

            if (!hasDuplicate) break;

            if (nums.size() <= 3) nums.clear();
            else nums.erase(nums.begin(), nums.begin() + 3);

            res++;
        }

        return res;
    }
};