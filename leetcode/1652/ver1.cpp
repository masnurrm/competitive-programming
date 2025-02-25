#include <vector>

using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int cSize = code.size();
        vector<int> res(cSize, 0);

        if (k == 0) return res;

        int sum = 0;
        int start = (k > 0) ? 1 : cSize + k;

        for (int i = 0; i < abs(k); i++) {
            sum += code[(start + i) % cSize];
        }

        for (int i = 0; i < cSize; i++) {
            res[i] = sum;
            sum -= code[(start + i) % cSize]; 
            sum += code[(start + i + abs(k)) % cSize];
        }

        return res;
    }
};