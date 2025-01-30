#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        string numStr = to_string(x);
        int strLength = numStr.length();
        
        bool cond = true;
        for (int i = 0; i < strLength; i++) {
            if (numStr[i] != numStr[strLength - i - 1]) cond = false;
        }

        return cond;
    }
};