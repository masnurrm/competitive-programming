#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool repair(long long mid, vector<int>& ranks, int cars) {
        long long repaired = 0;

        for (auto rank : ranks) {
            repaired += (long long)sqrt(std::max(0LL, mid / rank));
        }

        return repaired >= cars;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        long long low = 1, mid, high = *max_element(ranks.begin(), ranks.end()) * (long long)cars * (long long)cars;

        while (low < high) {
            mid = (low + high) / 2;
            if (repair(mid, ranks, cars)) high = mid;
            else low = mid + 1;
        }

        return low;
    }
};