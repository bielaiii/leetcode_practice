#include <iostream>
#include <queue>
#include <vector>
using namespace std;

namespace temp {
int kthSmallest(vector<vector<int>>& matrix, int k) {

    int ans = 0;
    priority_queue<int> q;
    vector<int> vt;
    for (const auto& row : matrix) {
        for (const auto num : row) {
            vt.push_back(num);
        }
    }
    sort(vt.begin(), vt.end());
    int l = 0, right = 0;

    return vt[k - 1];
}

} // namespace temp

struct Point {
    int row;
    int col;
    int val;
    Point(int r, int c, int v) :row(r), col(c), val(v) {};
    bool operator>(const Point& p1) { return this->val > p1.val; }
};

int kthSmallest(vector<vector<int>>& matrix, int k) {
    priority_queue<Point, vector<Point>, greater<Point>> q;
    for (int i = 0; i < matrix.size(); i++) {
        q.emplace(i, 0, matrix[i][0]);
    
    }
    for (int i = 0; i < k - 1; i++) {
        Point temp = q.top();
        q.pop();
        if (temp.col != matrix.size() - 1) {
            q.push(Point(temp.row, temp.col + 1, matrix[temp.row][temp.col + 1]));
        }
    
    }
    
    return q.top().val;
}
