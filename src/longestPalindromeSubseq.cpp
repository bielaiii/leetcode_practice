

#include <algorithm>
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

void printer(vector<vector<int>> &vt) {
    for (auto &cel_ : vt) {

        println("{}", cel_);
    }
    println("==========");
}

int longestPalindromeSubseq(string s) {
    int len = s.length();
    if (len == 0) {
        return 0;
    }
    vector<vector<int>> dp(len, vector<int>(len, 0));
    for (int i = 0; i < len; i++) {
        dp[i][i] = 1;
    }
    int ans = 0;
    
    for (int l = 2; l <= len; l++) {
        for (int i = 0; i + l - 1  < len; i++) {
            int j = i + l - 1;
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
                ans = max(ans, dp[i][j]);
            } else {
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
    }
    return dp[0].back();
}

int main() {

    string s1 = "bbbab";
    println("{}", longestPalindromeSubseq(s1));
    string s2 = "cbbd";
    println("{}", longestPalindromeSubseq(s2));

    return 0;
}
