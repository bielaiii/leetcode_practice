#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minTaps(int n, vector<int>& ranges) {
    vector<pair<int, int>> intervals;
    for (int i = 0; i < ranges.size(); i++) {
        int start = max(0, i - ranges[i]);
        int end = min(n, i + ranges[i]);
        intervals.emplace_back(start, end);
    }
    sort(intervals.begin(), intervals.end());
    vector<int> dp(n + 1, INT32_MAX);
    dp[0] = 0;
    for (auto [start, end] : intervals) {
        if (dp[start] == INT32_MAX) {
            return -1;
        }
        for (int j = start; j <= end; j++) {
            dp[j] = min(dp[j], dp[start] + 1);
        }
    }
    return dp[n];
}