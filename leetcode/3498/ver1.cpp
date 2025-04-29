#include <string>

using namespace std;

class Solution {
  public:
      int reverseDegree(string s) {
          int sum = 0;
          
          for (int i = 0; i < s.length(); i++) {
              sum += (123 - int(s[i])) * (i + 1); 
          }
  
          return sum;
      }
  };