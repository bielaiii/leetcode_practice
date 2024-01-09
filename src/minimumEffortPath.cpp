#include <iostream>
#include<cstdlib>
#include <queue>
#include<climits>
#include <cmath>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;
inline int dir[4][2] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

static void dfs(const vector<vector<int>> heights, int r, int c, int& curDiff, int count, set<pair<int, int>> st)
{

    int row = heights.size();
    int col = heights[0].size();
    if (r == row - 1 && c == col - 1) {
        if (count < curDiff) {
            curDiff = count;
        }
        return;
    }
    for (int i = 0; i < 4; i++) {
        int temp_x = c + dir[i][0];
        int temp_y = r + dir[i][1];
        // cout << temp_x << " " << temp_y << endl;
        if (temp_x >= 0 && temp_x < col && temp_y >= 0 && temp_y < row && st.find(make_pair(temp_y, temp_x)) == st.end()) {
            st.insert(make_pair(temp_y, temp_x));
            dfs(heights, temp_y, temp_x, curDiff, max(count, heights[temp_y][temp_x] - heights[r][c]), st);
            st.erase(st.find(make_pair(temp_y, temp_x)));
        }
    }
}

struct Dist {
    int x, y, z;
    Dist(int xx, int yy, int zz)
        : x(xx)
        , y(yy)
        , z(zz)
    {
    }
    bool operator<(const Dist& that) const
    {
        return this->z > that.z;
    }
};

int minimumEffortPath(vector<vector<int>>& heights)
{
    int row = heights.size();
    int col = heights[0].size();
    priority_queue<Dist> pq;
    vector<vector<int>> visited(row, vector<int>(col, 0));
    vector<int> disted(row * col, INT32_MAX);
    pq.emplace(0, 0, 0);
    disted[0] = 0;
    while (!pq.empty()) {
        auto [x, y, z] = pq.top();
        pq.pop();
        if (visited[x][y]) {
            continue;
        }
        visited[x][y] = 1;
        disted[x * col + y] = z;
        for (int i = 0; i < 4; i++) {
            int temp_x = x + dir[i][0];
            int temp_y = y + dir[i][1];

            if (temp_x >= 0 && temp_x < row && temp_y >= 0 && temp_y < col && !visited[temp_x][temp_y]) {
                pq.emplace(temp_x, temp_y, max(z, abs(heights[x][y] - heights[temp_x][temp_y])));
            }
        }
    }
    return disted[row * col - 1];
}