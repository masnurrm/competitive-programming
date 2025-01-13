#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sStack, tStack;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '#' && !sStack.empty()) sStack.pop();
            else if (s[i] == '#' && sStack.empty()) continue;
            else sStack.push(s[i]);
        }

        for (int i = 0; i < t.length(); i++) {
            if (t[i] == '#' && !tStack.empty()) tStack.pop();
            else if (t[i] == '#' && tStack.empty()) continue;
            else tStack.push(t[i]);
        }

        if (sStack.size() == tStack.size()) {
            while (!sStack.empty()) {
                if (sStack.top() != tStack.top()) return false;
                sStack.pop();
                tStack.pop();
            }
            return true;
        }
        else return false;
    }
};