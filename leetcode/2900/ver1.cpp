#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int wSize = words.size(), temp;
        vector<string> ans;

        temp = groups[0];
        ans.push_back(words[0]);

        for (int i = 1; i < wSize; i++) {
            if (groups[i] != groups[i - 1]) ans.push_back(words[i]);
        }


        return ans;
    }
};