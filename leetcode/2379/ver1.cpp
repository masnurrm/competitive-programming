#include <string>

using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int bLen = blocks.length(), minChange = INT_MAX, blackBlocks = 0;

        for (int i = 0; i < k; i++) if (blocks[i] == 'B') blackBlocks++;

        if (blackBlocks == k) return 0;
        minChange = min(minChange, k - blackBlocks);

        for (int i = k; i < bLen; i++) {
            if (blocks[i] == 'B') {
                blackBlocks++;
                if (blocks[i - k] == 'B') blackBlocks--;
            }
            else {
                if (blocks[i - k] == 'B') blackBlocks--;
            }
            if (blackBlocks == k) return 0;
            minChange = min(minChange, k - blackBlocks);
        }

        return minChange;
    }
};