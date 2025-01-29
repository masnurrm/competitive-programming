#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            while (strs[i].find(prefix)) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};