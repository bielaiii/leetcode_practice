#include <cstdint>
#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums) {
    int l = 0;
    int r = 0;
    int sum_ = 0;
    int ans = INT32_MAX;
    auto sz = nums.size();
    for (; r < sz; r++) {
        sum_ += nums[r];

        while (sum_ >= target) {
            ans = min(ans, r - l + 1);
            sum_ -= nums[l];
            l++;
        }
    }
    while (l < r) {
        sum_ -= nums[l];
        l++;

        if (sum_ >= target) {
            ans = min(ans, r - l);
        }
    }
    return ans == INT32_MAX ? 0 : ans;;
}

int main() {
    int target1 = 7;
    vector<int> nums1{2, 3, 1, 2, 4, 3};
    println("{}", minSubArrayLen(target1, nums1));

    int target2 = 4;
    vector<int> nums2{1, 4, 4};
    println("{}", minSubArrayLen(target2, nums2));

    int target3 = 11;
    vector<int> nums3{1, 1, 1, 1, 1, 1, 1, 1};
    println("{}", minSubArrayLen(target3, nums3));
    return 0;
}
