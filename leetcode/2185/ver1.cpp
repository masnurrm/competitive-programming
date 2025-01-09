#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0, prefLen = pref.length();

        for (int i = 0; i < words.size(); i++) {
            if (pref.compare(words[i].substr(0, prefLen)) == 0) res++;
        }

        return res;
    }
};