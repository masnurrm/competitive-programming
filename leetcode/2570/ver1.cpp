#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> res;
        int i = 0, j = 0, n1 = nums1.size(), n2 = nums2.size();

        while (i < n1 && j < n2) {
            if (nums1[i][0] == nums2[j][0]) {
                res.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++; j++;
            }
            else if (nums1[i][0] < nums2[j][0]) {
                res.push_back(nums1[i]);
                i++;
            } 
            else {
                res.push_back(nums2[j]);
                j++;
            }
        }

        while (i < n1) res.push_back(nums1[i++]);
        while (j < n2) res.push_back(nums2[j++]);

        return res;
    }
};