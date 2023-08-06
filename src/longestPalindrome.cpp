#include <iostream>
#include <vector>
using namespace std;

string longestPalindrome(string s)
{
    int max_len = 0;
    int l = 0;
    int r = 0;
    vector<vector<int>> dp(s.length(), vector<int>(s.length(), 0));
    for (int i = s.length() - 1; i >= 0; i--) {
        for (int j = i; j < s.length() + 1; j++) {
            if (s[i] == s[j]) {
                if (j - i <= 1) {
                    dp[i][j] = 1;
                } else if (dp[i + 1][j - 1]) {
                    dp[i][j] = 1;
                }
            }
            if (dp[i][j] && j - i + 1 > max_len) {
                max_len = j - i + 1;
                l = i;
                r = j;
            }
        }
    }

    return s.substr(l, max_len);
}