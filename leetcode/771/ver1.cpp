#include <string>

using namespace std;

class Solution {
  public:
      int numJewelsInStones(string jewels, string stones) {
          int jLen = jewels.length(), sLen = stones.length(), res = 0;
  
          for (int i = 0; i < jLen; i++) {
              for (int j = 0; j < sLen; j++) {
                  if (jewels[i] == stones[j]) res++;
              }
          }
  
          return res;
      }
  };