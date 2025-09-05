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

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> dp;
    dp.push_back({1});
    for (int i = 1; i < numRows; i++) {
        vector<int> cur(i + 1, 1);
        for (int j = 1; j <= i - 1; j++) {
            cur[j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
        dp.push_back(cur);
    }
    return dp;
}

vector<int> getRow(int numRows) {
    vector<vector<int>> dp;
    dp.push_back({1});
    for (int i = 1; i < numRows; i++) {
        vector<int> cur(i + 1, 1);
        for (int j = 1; j <= i - 1; j++) {
            cur[j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }

        dp.push_back(cur);
    }
    return dp.back();
}

int main() {
    auto t = generate(5);
    println("{}", t);
    return 0;
}
