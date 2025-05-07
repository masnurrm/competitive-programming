#include <string>
#include <algorithm>

using namespace std;

class Solution {
  public:
      int findPermutationDifference(string s, string t) {
          int t_indices[26] = {0};
          for (int i = 0; i < t.size(); ++i) {
              t_indices[t[i] - 'a'] = i;
          }
          int total = 0;
          for (int i = 0; i < s.size(); ++i) {
              char c = s[i];
              total += abs(i - t_indices[c - 'a']);
          }
          return total;
      }
  };