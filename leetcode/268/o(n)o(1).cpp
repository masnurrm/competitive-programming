class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expect = n * (n + 1) / 2;

        return expect - std::accumulate(nums.begin(), nums.end(), 0);
    }
};