#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> counter;
        vector<int> res;

        for (int num : nums) { 
            counter[num]++;
            if (counter[num] > 1) res.push_back(num);
        }

        return res;
    }
};