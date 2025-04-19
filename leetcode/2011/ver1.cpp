#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;

        for (auto op : operations) {
            if (op == "++X" || op == "X++") res++;
            else res--;
        }

        return res;
    }
};