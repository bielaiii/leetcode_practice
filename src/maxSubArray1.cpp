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

void printer(vector<vector<int>> &mat) {
    for (auto &mt : mat) {
        println("{}", mt);
    }
    println("==================");
}

int maxSubArray(vector<int> &nums) {
    int sz = nums.size();
    int ans = nums[0];
    vector<vector<int>> dp(sz, vector<int>(sz, 0));
    for (int i = 0; i < sz; i++) {
        dp[i][0] = nums[0];
    }
    dp[0][0] = nums[0];
    for (int i = 0; i < sz; i++) {
        for (int j = 0; j <= i; j++) {
            if (j > 0) {
                dp[i][j] = max(dp[i - 1][j - 1] + nums[j], nums[j]);

            } else {
                dp[i][j] = nums[0];
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}

namespace AAA {

int maxSubArray(vector<int> &nums) {
    int sz = nums.size();
    int ans = nums[0];
    vector<int> dp(nums.begin(), nums.end());
    dp[0] = nums[0];
    for (int i = 0; i < sz; i++) {
        for (int j = 0; j <= i; j++) {
            if (j > 0) {
                dp[j] = max(dp[j - 1] + nums[j], dp[j]);
            } else {
                dp[j] = nums[0];
            }
            ans = max(ans, dp[j]);
        }
    }
    return ans;
}

} // namespace AAA

namespace BBB {

int maxSubArray(vector<int> &nums) {
    int sz = nums.size();
    int ans = nums[0];
    vector<int> dp(nums.begin(), nums.end());
    dp[0] = nums[0];
    for (int i = 0; i < sz; i++) {
        int j = i;
        if (j > 0) {
            dp[j] = max(dp[j - 1] + nums[j], dp[j]);
        } else {
            dp[j] = nums[0];
        }
        ans = max(ans, dp[j]);
    }
    return ans;
}

} // namespace BBB

int main() {
    vector<int> dp{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    println("{}", BBB::maxSubArray(dp));
    vector<int> dp1{5, 4, -1, 7, 8};
    println("{}", BBB::maxSubArray(dp1));
    vector<int> dp2{-2, -3, -1};
    println("{}", BBB::maxSubArray(dp2));
    return 0;
}
