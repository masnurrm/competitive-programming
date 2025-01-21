#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.length(), nLen = needle.length();

        if (nLen > hLen || nLen == hLen && needle[0] != haystack[0]) return -1;
        else {
            for (int i = 0; i <= hLen - nLen; i++) {
                if (haystack.substr(i, nLen) == needle) return i; 
            }
        }

        return -1;
    }
};