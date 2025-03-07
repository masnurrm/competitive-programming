#include <vector>

using namespace std;

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if (right - left < 2 || right < 3) return {-1, -1};
        if (left == 1) return {2, 3}; 
        
        vector<int> primes;
        
        for (int i = left; i <= right; i++) {
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(i);
            }
        }

        if (primes.size() < 2) return {-1, -1};

        int diff = INT_MAX;

        for (int i = primes.size() - 1; i > 0; i--) {
            if (primes[i] - primes[i - 1] <= diff) {
                left = primes[i - 1];
                right = primes[i];
                diff = primes[i] - primes[i - 1];
            }
        }

        return {left, right};
    }
};