#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        
        sort(s.begin(), s.end());

        return (s[3] - '0') + (s[2] - '0') + ((s[1] - '0') * 10) + ((s[0] - '0') * 10);
    }
};