#include <vector>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res = 0;

        for (auto num : nums) {
            if (num % 3 == 2) {
                res++;
            }
            else res += num % 3;
        }

        return res;
    }
}; 