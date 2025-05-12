#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> original_counts(10, 0);
        for (int d : digits) {
            original_counts[d]++;
        }
        set<int> result;
        
        for (int a = 1; a <= 9; ++a) {
            for (int c : {0, 2, 4, 6, 8}) {
                for (int b = 0; b <= 9; ++b) {
                    vector<int> triplet_counts(10, 0);
                    triplet_counts[a]++;
                    triplet_counts[b]++;
                    triplet_counts[c]++;
                    
                    bool valid = true;
                    for (int d = 0; d <= 9; ++d) {
                        if (triplet_counts[d] > original_counts[d]) {
                            valid = false;
                            break;
                        }
                    }
                    
                    if (valid) {
                        int num = a * 100 + b * 10 + c;
                        result.insert(num);
                    }
                }
            }
        }
        
        return vector<int>(result.begin(), result.end());
    }
};