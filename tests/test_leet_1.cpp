#include <vector>
#include <unordered_map>
#include "gtest/gtest.h"
#include "util.h"

using namespace std;

class Solution {
public:
    vector<int> search(vector<int>& nums, int target) {
        unordered_map<int, int> sum_map;
        int i = 0, end = nums.size();
        while (i < end) {
            int ele = nums[i];
            auto iter = sum_map.find(ele);
            if (iter != sum_map.end()) {
                return vector<int>{iter -> second, i};
            } else {
                sum_map[target - ele] = i;
            }
            i++;
        }
        return vector<int>{0, 1};
    }
};

TEST(test_two_sum, test1) {
    Solution solution;
    vector<int> v1{3,2,4};
    vector<int> res1 = solution.search(v1, 6);
    vector<int> expect_res1{1,2};
    EXPECT_TRUE(is_vector_same(res1, expect_res1));
}