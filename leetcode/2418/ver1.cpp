#include <vector>
#include <string>
#include <pair>

using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        vector<string> result;

        for (int i = 0; i < names.size(); ++i) {
            people.push_back({heights[i], names[i]});
        }

        sort(people.begin(), people.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first > b.first;
        });


        for (const auto& p : people) {
            result.push_back(p.second);
        }

        return result;
    }
};