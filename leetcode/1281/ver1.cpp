using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int multiply = 1, sum = 0;

        while (n > 0) {
            multiply *= n % 10;
            sum += n % 10;
            n /= 10;
        }

        return multiply - sum;
    }
};