#include <vector>
#include <string>

class Solution {
public:
    int minimumLength(std::string s) {
        // unordered_map<char, int> charCount;
        int charCount[26] = {0};
        int count = s.length();

        for (char c : s) {
            int i = c - 'a';
            charCount[i]++;
            if (charCount[i] == 3) {
                charCount[i] -= 2;
                count -= 2;
            }
        }
        return count;
    }
};