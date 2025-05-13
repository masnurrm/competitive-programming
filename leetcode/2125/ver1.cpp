#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int temp, a = 0, b = 0, res = 0;

        for (int j = 0; j < bank[0].length(); j++) {
            if (bank[0][j] == '1') a++;
        }

        for (int i = 1; i < bank.size(); i++) {
            for (int j = 0; j < bank[i].length(); j++) {
                if (bank[i][j] == '1') b++;
            }

            if (b == 0) continue;

            res += a * b;
            a = b;
            b = 0;
        }

        return res;
    }
};