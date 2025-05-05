#include <string>

using namespace std;

class Solution {
  public:
      int scoreOfString(string s) {
          int sLen = s.length(), res = 0;
  
          for (int i = 0; i < sLen - 1; i++) {
              res += abs(int(s[i]) - int(s[i + 1]));
          }
          
          return res;
      }
  };