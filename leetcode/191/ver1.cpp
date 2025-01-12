#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        // 11 
            // 5
            // 2
            // 1
            // 0

        if (n) {
            return (n & 1) + hammingWeight(n >> 1);
        }
        else {
            return 0;
        }
    }
};