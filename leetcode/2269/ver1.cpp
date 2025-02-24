#include <string>

using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int res = 0, sSize = s.length();

        if (k > sSize) return 0;
        
        for (int i = 0; i <= sSize - k; i++) {
            int x = stoi(s.substr(i, k));
            if (x == 0) continue;
            else if (num % x == 0) res++;
        }

        return res;
    }
};