#include <string>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> matching_bracket = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (matching_bracket.find(c) != matching_bracket.end()) {
                if (stack.empty() || stack.top() != matching_bracket[c]) return false;
                stack.pop();
            } else stack.push(c);
        }

        return stack.empty();
    }
};