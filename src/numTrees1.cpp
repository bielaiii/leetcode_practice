#include <format>
#include <iostream>
#include <map>
#include <memory_resource>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
int numTrees(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i < n + 1; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] += dp[j - 1] * dp[i - j];
        }
    }
    return dp[n];
}

int main() {
    println("{}", numTrees(3));
    println("{}", numTrees(1));
    return 0;
}
