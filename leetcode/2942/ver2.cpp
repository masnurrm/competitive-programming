#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        const int wSize = words.size();
        
        for (int i = 0; i < wSize; ++i) {
            if (words[i].find(x) != string::npos) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
