#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1) return 0;
        int curMax = prices[0], curMin = prices[0], res = 0, pSize = prices.size();

        for (int i = 1; i < pSize; i++) {
            if (prices[i] < curMin) {
                curMin = prices[i]; 
                curMax = curMin;
            }
            if (prices[i] > curMax) {
                curMax = prices[i];
                res += (curMax - curMin);
                curMin = curMax;
            }
        }

        return res;
    }
};