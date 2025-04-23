#include <unordered_map>

using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        int res = 0, sum;
        unordered_map<int, int> counts;

        for (int i = 1; i <= n; i++) {
            if (i < 10) {
                counts[i]++;
            } else {
                int sum = 0, temp = i;
                while (temp > 0) {
                    sum += temp % 10;
                    temp /= 10;
                }
                counts[sum]++;
            }
        }

        int maxCount = 0;
        for (auto& [key, val] : counts) {
            if (val > maxCount) maxCount = val;
        }

        res = 0;
        for (auto& [key, val] : counts) {
            if (val == maxCount) res++;
        }

        return res;
    }
};