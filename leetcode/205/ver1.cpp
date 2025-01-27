#include <string>
#include <map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sLen = s.length(), tLen = t.length();
        map<char, char> left, right;

        if (sLen != tLen) return false;
        else {
            for (int i = 0; i < sLen; i++) {
                if ((left[s[i]] && left[s[i]] != t[i]) || (right[t[i]] && right[t[i]] != s[i])) return false;
                else {
                    left[s[i]] = t[i];
                    right[t[i]] = s[i];
                }
            }

            return true;
        }
    }
};