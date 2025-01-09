#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0, prefLen = pref.length();

        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            for (int j = 0; j < prefLen; j++) {
                if (words[i][j] != pref[j]) {
                    flag = false; break;
                }
            } 
            if (flag) res++;
        }

        return res;
    }
};