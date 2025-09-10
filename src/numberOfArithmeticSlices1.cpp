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

int numberOfArithmeticSlices(vector<int> &nums) {
    auto sz = nums.size();
    int l = 0;
    int r = 2;
    int sum_ = 0;
    vector<int> dp(sz, 0);
    int ans = 0;
    while (r < sz) {
        if (nums[r - 1] - nums[r - 2] == nums[r] - nums[r - 1]) {
            dp[r] = dp[r - 1] + 1;
        }
        ans += dp[r];
        r++;;
    }
    return ans;
}

int main() {
    vector<int> vt1{1, 2, 3, 4};
    println("{}", numberOfArithmeticSlices(vt1));
    vector<int> vt2{1};
    println("{}", numberOfArithmeticSlices(vt2));
    return 0;
}
