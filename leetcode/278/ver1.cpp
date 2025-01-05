#include <iostream>

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int flag = n;
        for (int i = n; i >= 1; i--) {
            if (isBadVersion(i)) {
                if (i <= n) flag = i;
            }
        }
        return flag;
    }
};