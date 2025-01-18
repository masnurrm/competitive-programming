#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int fSize = flowerbed.size();
        if (fSize == 1 && flowerbed[0] == 0) n--; 
        else if (fSize > 1) {
            for (int i = 0; i < fSize - 1; i++) {
                if (i == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                    n--;
                    flowerbed[i] = 1;
                }
                else if (i > 0 && flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                    n--;
                    flowerbed[i] = 1;
                }
            }
            if (flowerbed[fSize - 1] == 0 && flowerbed[fSize - 2] == 0) n--;
        }
        
        if (n < 1) return true;
        else return false;
    }
};