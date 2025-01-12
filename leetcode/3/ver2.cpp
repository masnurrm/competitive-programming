#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>

using namespace std;

int speedUp = []
{ios::sync_with_stdio(0); cin.tie(0); return 0; }();

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int charSet[256] = {0};
        int maxLength = 0, left = 0, right = 0;

        while (right < s.length()) {
            if (charSet[s[right]] == 0) {
                charSet[s[right]] = 1;
                maxLength = max(maxLength, right - left + 1);
                right++;
            }
            else {
                charSet[s[left]] = 0;
                left++;
            }
        }
    return maxLength;
    }
};