#include <vector>
#include <unordered_map>
#include <algorithm>

using namespaces std;

class Solution {
  public:
      int numEquivDominoPairs(vector<vector<int>>& dominoes) {
          int res = 0, a, b, key;
          unordered_map<int, int> appear;
  
          for (const auto& domino : dominoes) {
              a = min(domino[0], domino[1]);
              b = max(domino[0], domino[1]);
              key = a * 10 + b;
  
              res += appear[key];
              appear[key]++;
          }
  
          return res;
      }
  };