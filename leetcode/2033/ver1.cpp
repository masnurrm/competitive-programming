#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        // if (grid.size() <= 1) return 0;

        vector<int> merged;

        for (const auto& subarr : grid) {
            merged.insert(merged.end(), subarr.begin(), subarr.end());
        }

        sort(merged.begin(), merged.end());

        int mid = merged[merged.size() / 2];
        int res = 0;

        for (auto num : merged) {
            if (num == mid) continue;
            if (num < mid) {
                if ((mid - num) % x != 0) return -1;
                else res += ((mid - num) / x);
            }
            if (num > mid) {
                if ((num - mid) % x != 0) return -1;
                else res += ((num - mid) / x);
            }
        }

        return res;
    }
};