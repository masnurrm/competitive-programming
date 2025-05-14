#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int previous = 0;
        int res = 0;
        for (auto& row : bank) {
            int current = count(row.begin(), row.end(), '1');
            if (current == 0) continue;
            res += previous * current;
            previous = current;
        }
        return res;
    }
};