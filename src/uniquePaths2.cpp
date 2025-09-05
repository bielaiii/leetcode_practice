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

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    auto rows = obstacleGrid.size();
    auto cols = obstacleGrid[0].size();
    vector<vector<int>> dp(rows, vector<int>(cols));
    for (int i = 0; i < rows && obstacleGrid[i][0] == 0; i++) {
        
        dp[i][0] = 1;
    }
    for (int i = 0; i < cols && obstacleGrid[0][i] == 0; i++) {
        dp[0][i] = 1;
    }

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (obstacleGrid[i][j] == 0) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }
    return dp[rows - 1][cols - 1];
}

int main() {
    return 0;
}
