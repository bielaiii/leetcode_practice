#include <format>
#include <iostream>
#include <map>
#include <numeric>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

void printer(vector<vector<int>> &vt)
 {
    for (auto & rows : vt) {
        println("{}", rows);
    
    }
    println("===================");
 }

int longestCommonSubsequence(string text1, string text2) {
    auto len1 = text1.length();
    auto len2 = text2.length();
    int ans = 0;
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= i && j <= len2; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;

            } else {
                dp[i][j] = max({dp[i - 1][j], dp[i][j - 1]});
            }
        }
    }
    // printer(dp);
    return dp.back().back();
}

int main() {
    string text1 = "abcde";
    string text2 = "ace";
    println("{}", longestCommonSubsequence(text1, text2));

    return 0;
}
