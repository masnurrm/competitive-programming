#include <vector>

using namespace std;

class Solution {
  public:
      int maxAbsoluteSum(vector<int>& nums) {
          int maxSum = 0, minSum = 0, currMax = 0, currMin = 0;
          
          for (int num : nums) {
              currMax = max(0, currMax + num);
              currMin = min(0, currMin + num);
              
              maxSum = max(maxSum, currMax);
              minSum = min(minSum, currMin);
          }
          
          return max(maxSum, abs(minSum));
      }
  };