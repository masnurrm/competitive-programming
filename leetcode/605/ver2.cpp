#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int fSize = flowerbed.size();
        
        for (int i = 0; i < fSize; ++i) {
            if (flowerbed[i] == 0) {
                bool left = (i == 0) || (flowerbed[i - 1] == 0);
                bool right = (i == fSize - 1) || (flowerbed[i + 1] == 0);
                
                if (left && right) {
                    flowerbed[i] = 1;
                    n--;
                    i++;
                }
            }
        }
        
        return n <= 0;
    }
};