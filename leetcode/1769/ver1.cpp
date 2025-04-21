#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int bSize = boxes.size();
        vector<int> res(bSize, 0);
        
        for (int i = 0; i < bSize; i++) {
            int operations = 0;
            for (int j = 0; j < bSize; j++) {
                if (boxes[j] == '1') operations += abs(j - i);
            }
            res[i] = operations;
        }
        
        return res;
    }
};