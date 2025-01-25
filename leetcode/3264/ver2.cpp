#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }

        while (k--) {
            int min = pq.top().first;
            int x = pq.top().second;
            pq.pop();

            nums[x] *= multiplier;
            pq.push({nums[x], x});
        }

        return nums;
    }
};