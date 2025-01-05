#include <iostream>

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int binSer(int start, int finish) {
        if (start <= finish) {
            int mid = start + (finish - start) / 2;
            if (!isBadVersion(mid)) return binSer(mid + 1, finish);
            else return binSer(start, mid - 1);
        }

        return start;
    }

    int firstBadVersion(int n) {
        int start = 1, finish = n;

        return binSer(start, finish);
    }
};