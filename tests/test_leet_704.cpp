#include <vector>
#include "gtest/gtest.h"

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            int ele = nums[mid];
            if (ele == target) {
                return mid;
            } else if (ele > target) {
                end = mid - 1;
            } else if (ele < target) {
                start = mid + 1;
            }
        }
        return -1;
    }
};

TEST(test_binary_search, test1) {
    vector<int> v1{1,2,3,4,6};
    Solution solution;
    EXPECT_EQ(solution.search(v1, 1), 0);
    EXPECT_EQ(solution.search(v1, 3), 2);
    EXPECT_EQ(solution.search(v1, 5), -1);
    vector<int> v2{-1,0,3,5,9,12};
    EXPECT_EQ(solution.search(v2, 9), 4);
    EXPECT_EQ(solution.search(v2, 12), 5);
    EXPECT_EQ(solution.search(v2, 10), -1);
}