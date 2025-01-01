class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::unordered_set<int> hashtable;

        for (int num:nums) {
            hashtable.insert(num);
        }

        for (int i = 0; i <= hashtable.size(); i++) {
            if (hashtable.find(i) == hashtable.end()) {
                return i;
            }
        }
        
        return 0;
    }
};