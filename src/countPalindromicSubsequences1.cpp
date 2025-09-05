#include <concepts>
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

int countPalindromicSubsequences(string s) {
    int sz = s.size();
    if (sz == 0) {
        return 0;
    }
    vector<vector<unsigned long long>> dp(sz,
                                          vector<unsigned long long>(sz, 0));

                                          unordered_set<string> st;
    for (int i = 0; i < sz; i++) {
        dp[i][i] = 1;
        st.insert(string{s[i]});
    }
    for (int l = 2; l <= sz; l++) {
        for (int i = 0; i + l <= sz; i++) {
            int j = i + l - 1;
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
                st.insert(s.substr(i, j - i + 1));
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }
    println("{}", st);
    return st.size();

}

int main() {
    println("{}", countPalindromicSubsequences("bccb"));
    return 0;
}
