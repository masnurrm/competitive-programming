#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2, 0);
        int gSize = grid.size();
        unordered_map<int, int> counter;

        for (int i = 0; i < gSize; i++) {
            for (int j = 0; j < gSize; j++) {
                counter[grid[i][j]]++;
                if (counter[grid[i][j]] > 1) ans[0] = grid[i][j];
            }
        }

        for (int i = 1; i <= gSize * gSize; i++) if (counter[i] == 0) ans[1] = i; 

        return ans;        
    }
};