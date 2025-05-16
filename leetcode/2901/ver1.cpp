#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int hammingDistance(const string &a, const string &b) {
        int distance = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                distance++;
            }
        }
        return distance;
    }

    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<int> dp(n, 1);
        vector<int> parent(n, -1);
        
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (groups[i] != groups[j] && words[i].size() == words[j].size()) {
                    if (hammingDistance(words[i], words[j]) == 1) {
                        if (dp[j] + 1 > dp[i]) {
                            dp[i] = dp[j] + 1;
                            parent[i] = j;
                        }
                    }
                }
            }
        }
        
        int max_len = *max_element(dp.begin(), dp.end());
        int current_index = -1;
        for (int i = 0; i < n; ++i) {
            if (dp[i] == max_len) {
                current_index = i;
                break;
            }
        }
        
        vector<int> indices;
        while (current_index != -1) {
            indices.push_back(current_index);
            current_index = parent[current_index];
        }
        reverse(indices.begin(), indices.end());
        
        vector<string> result;
        for (int idx : indices) {
            result.push_back(words[idx]);
        }
        
        return result;
    }

    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        return getWordsInLongestSubsequence(words.size(), words, groups);
    }
};