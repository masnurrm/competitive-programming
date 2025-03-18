#include <vector>

using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int freq[501] = {0};
        
        for (int num : nums) freq[num] ^= 1;

        for (int i = 1; i <= 500; i++) if (freq[i] == 1) return false;
        
        return true;
    }
};
