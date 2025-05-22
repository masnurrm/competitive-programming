#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); ++i) {
            people.emplace_back(heights[i], names[i]);
        }
        sort(people.begin(), people.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });
        vector<string> result;
        for (const auto& p : people) {
            result.push_back(p.second);
        }stil
        return result;
    }
};