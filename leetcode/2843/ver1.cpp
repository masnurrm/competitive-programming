using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res = 0;

        for (int i = low; i <= high; i++) {
            if (i < 100 && (i % 11 == 0)) res++;
            if (i > 1000 && ((i / 1000) + (i / 100 % 10) - (i % 100 / 10) - (i % 10) == 0)) res++;
        }

        return res;
    }
};
