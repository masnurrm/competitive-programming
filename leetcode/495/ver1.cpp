#include <vector>

using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = duration;
        for (int i = 1; i < timeSeries.size(); i++) {
            if ((timeSeries[i] - timeSeries[i - 1]) >= duration) res += duration;
            else res += timeSeries[i] - timeSeries[i - 1];
        }
        return res;
    }
};