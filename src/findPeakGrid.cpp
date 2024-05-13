#include <iostream>
#include <ranges>
#include <vector>
using namespace std;

static void dfs(const vector<vector<int>>& mat, vector<vector<int>>& visited,
                vector<int> &ans, int m, int n) {
    if (!ans.empty()) {
        return;
    }
    const vector<pair<int, int>> dir{{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
    int row_len = mat.size();
    int col_len = mat[0].size();
    if (visited[m][n]) {
        return;
    }
    vector<int> vt;
    int top = 0;
    visited[m][n] = 1;
    for (const auto& [k, c] : dir) {
        int temp_m = m + k;
        int temp_n = n + c;
        if (temp_m < 0 || temp_m >= row_len || temp_n < 0 ||
            temp_n >= col_len) {
            vt.push_back(-1);
            continue;
        } else {
            if (mat[m][n] > mat[temp_m][temp_n]) {
                visited[temp_m][temp_n] = 1;
            }
            vt.push_back(mat[temp_m][temp_n]);
            dfs(mat, visited, ans, temp_m, temp_n);
        }
    }
    if (top == -1) {
        return;
    }
    if (ans.empty()) {
        ans.insert(ans.begin(), {m, n});
    }
    return;
}

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    vector<vector<int>> visited (mat.size(), vector<int>(mat[0].size(), 0));
    vector<int> vt;
    dfs(mat, visited, vt, 0, 0);
    return vt;

}