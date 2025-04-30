#include <string>

using namespace std;

class Solution {
  public:
      string reversePrefix(string word, char ch) {
          int wLen = word.length(), flag = -1;
          string reverse = word;
  
          for (int i = 0; i < wLen; i++) {
              if (word[i] == ch) {
                  flag = i;
                  break;
              }
          }
  
          if (flag > -1) {
              for (int i = 0; i <= flag; i++) {
                  reverse[i] = word[flag - i];
              }
          }
  
          return reverse;
      }
  };