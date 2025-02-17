#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
      vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
          int cSize = candies.size();
          vector<bool> flag;
  
          auto maxCandies = max_element(candies.begin(), candies.end());
  
          for (int i = 0; i < cSize; i++) {
              if ((candies[i] + extraCandies) >= *maxCandies) flag.push_back(true);
              else flag.push_back(false);
          }
  
          return flag;
      }
  };