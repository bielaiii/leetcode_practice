#include <algorithm>
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

int minimumTotal(vector<vector<int>> &triangle) {
    auto sz = triangle.size();
    vector<int> dp(triangle.back());
    // dp[0] = triangle[0][0];
    for (int i = sz - 2; i >= 0; i--) {
        auto l = triangle[i].size();
        for (int j = 0; j < l; j++) {
            dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
        }
    }
    // return *min_element(triangle.back().begin(), triangle.back().end());
    return dp[0];
}

int main() {
    vector<vector<int>> mat = {
      {2},
      {3, 4},
      {6, 5, 7},
      {4, 1, 8, 3}
    };
    println("{}", minimumTotal(mat));
    return 0;
}
