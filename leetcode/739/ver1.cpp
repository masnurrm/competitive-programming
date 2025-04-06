#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                result[st.top()] = i;

                st.pop();
            }
            st.push(i);
        }

        for (int i = 0; i < n; i++) {
            if (result[i] != 0) result[i] -= i;
        }

        return result;
    }
};