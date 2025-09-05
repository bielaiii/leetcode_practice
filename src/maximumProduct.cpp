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

long long maximumProduct(vector<int> &nums, int m) {
    int left = 0;
    int right = 0;
    int min_ = INT32_MAX;
    int max_ = INT32_MIN;
    int ret = 0;
    int sz = nums.size();
    int ans = INT32_MIN;
    for (int i = m - 1; i < nums.size(); i++) {
        left = nums[i - m + 1];

        min_ = min(min_, left);
        max_ = max(max_, left);

        right = nums[i];
        ans = max({ans, min_ * right, max_ * right});
    }

    return ans;
}

int main() {
    vector<int> vt1{-1, -9, 2, 3, -2, -3, 1};
    vector<int> vt2{1, 3, -5, 5, 6, -4};
    cout << maximumProduct(vt1, 1) << endl;
    cout << maximumProduct(vt2, 3) << endl;
    return 0;
}
