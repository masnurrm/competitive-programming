#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> countNum;
        int count;

        for (auto& num : nums) countNum[num]++;

        vector<pair<int, int>> keySort(countNum.begin(), countNum.end());

        sort(keySort.begin(), keySort.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });

        for (int i = 0; i < nums.size(); i++) {
            count = 0;

            for (int j = 0; j < keySort.size(); j++) {
                if (keySort[j].first < nums[i]) {
                    count += keySort[j].second;
                }
            }
            nums[i] = count;
        }

        return nums;
    }
};