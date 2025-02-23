#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int nSize = nums.size(); 
        double maxSum = DBL_MIN, windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        maxSum = windowSum;

        for (int i = k; i < nSize; i++) {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return maxSum / k;
    }
};