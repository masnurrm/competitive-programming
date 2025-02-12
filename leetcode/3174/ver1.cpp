#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        int sSize = s.size(), cnt = 0;
        string res = "";
        stack<int> stack;

        for (int i = 0; i < sSize; i++) {
            stack.push(s[i]);
            if (!isdigit(s[i])) cnt++;
            if (isdigit(s[i]) && cnt > 0) {
                stack.pop();
                stack.pop();
            }
        }

        res.resize(stack.size());
        auto it = res.rbegin();
        while (!stack.empty()) {
            *it = stack.top();
            stack.pop();
            ++it;
        }

        return res;
    }
};