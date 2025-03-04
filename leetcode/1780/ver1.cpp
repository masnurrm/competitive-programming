using namespace std;

class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 0) {
            int remain = n % 3;
            if (remain == 2) return false;
            n /= 3;
        }

        return true;
    }
};