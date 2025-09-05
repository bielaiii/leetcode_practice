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
    for (auto &row_ : vt) {
        println("{}", row_);
    }
    println("===================");
}

int minDistance(string word1, string word2) {
    if (word2.size() == 0) {
        return word1.size();
    }
    if (word1.size() == 0) {
        return word2.size();
    }
    auto len1 = word1.size();
    auto len2 = word2.size();
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
    for (int i = 0; i <= len1; i++) {
        dp[i][0] = i;
    }

    for (int i = 0; i <= len2; i++) {
        dp[0][i] = i;
    }
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(
                    {dp[i][j - 1] + 1, dp[i - 1][j] + 1, dp[i - 1][j - 1] + 1});
            }
        }
    }
    return dp[len1][len2];
}

int main() {
    string s1 = "horse";
    string s2 = "ros";
    println("{}", minDistance(s1, s2));

    string s3 = "intention";
    string s4 = "execution";
    println("{}", minDistance(s3, s4));

    string s5 = "pneumonoultramicroscopicsilicovolcanoconiosis";
    string s6 = "ultramicroscopically";
    println("{}", minDistance(s5, s6));
    return 0;
}
