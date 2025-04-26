#include <vector>

using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int nSize = nums.size(), leftSum = 0, rightSum = 0;
        vector<int> leftNums(nSize, 0), rightNums(nSize, 0);

        if (nSize <= 1) return vector<int>(1, 0);

        for (int i = 0; i < nSize; i++) {
            leftNums[i] = leftSum;
            rightNums[nSize - i - 1] = rightSum;

            leftSum += nums[i];
            rightSum += nums[nSize - i - 1];
        }

        for (int i = 0; i < nSize; i++) {
            leftNums[i] = abs(leftNums[i] - rightNums[i]);
        }

        return leftNums;
    }
};