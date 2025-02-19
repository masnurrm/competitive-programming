#include <vector>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = INT_MIN, gSize = gain.size(), flag = 0;

        for (int i = 0; i < gSize; i++) {
            flag += gain[i];
            if (flag > res) res = flag;
        }

        return res > 0 ? res : 0;
    }
};