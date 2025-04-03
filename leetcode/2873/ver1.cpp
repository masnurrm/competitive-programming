#include <vector>

using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int nSize = nums.size();
        long long res = 0;

        for (int i = 0; i < nSize; i++) {
            for (int j = i + 1; j < nSize; j++) {
                for (int k = j + 1; k < nSize; k++) {
                    long long value = (long long)(nums[i] - nums[j]) * nums[k];
                    if (value > res) res = value;
                }
            }
        }

        return res;
    }
};
