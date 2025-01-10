#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0, i = s.length() - 1;
        bool flag = false;

        while (i >= 0) {
            if (s[i] != ' ') {
                res++;
                flag = true;
            }
            if (s[i] == ' ' && flag) break;

            i--;
        }

        return res;
    }
};