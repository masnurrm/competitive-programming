#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int wSize = words.size();
        vector<int> count;

        for (int i = 0; i < wSize; i++) {
            for (auto& ch : words[i]) {
                if (ch == x) {
                    count.push_back(i);
                    break;
                }
            } 
        }

        return count;
    }
};
