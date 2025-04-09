class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int, int> countNum;
        int nSize = nums.size(), res = 0, dist = 101;

        for (int i = 0; i < nSize; i++) {
            if (nums[i] < k) return -1;
            
            countNum[nums[i]]++;
            
            if (nums[i] > k) {
                res++;
                if (countNum[nums[i]] > 1) res--;
            }
        }

        return res;
    }
};