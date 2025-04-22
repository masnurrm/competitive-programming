#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res, temp = 0;

        for (int i = 0; i < accounts.size(); i++) {
            res = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                res += accounts[i][j];
            }
            if (res > temp) temp = res;
        }

        return temp;
    }
};