#include <vector>

class Solution {
public:
    int binarySearch(std::vector<int>& nums, int target, int start, int finish) {
        if (start <= finish) {
            int mid = (start + finish) >> 1;
            if (nums[mid] == target) return mid;
            if (nums[mid] > target) return binarySearch(nums, target, start, mid - 1);
            return binarySearch(nums, target, mid + 1, finish);
        }
        return -1;
    }

    int search(std::vector<int>& nums, int target) {
        int start = 0;
        int finish = nums.size() - 1;
        return binarySearch(nums, target, start, finish);
    }
};