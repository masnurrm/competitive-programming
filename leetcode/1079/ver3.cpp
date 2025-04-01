#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    void backtrack(unordered_map<char, int>& freq, int& count) {
        for (auto& [ch, val] : freq) {
            if (val > 0) {
                count++;
                freq[ch]--;
                backtrack(freq, count);
                freq[ch]++;
            }
        }
    }

    int numTilePossibilities(string tiles) {
        unordered_map<char, int> freq;
        for (char ch : tiles) freq[ch]++;
        
        int count = 0;
        backtrack(freq, count);
        return count;
    }
};
