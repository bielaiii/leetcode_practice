#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {
    sort(points.begin(), points.end(), [](vector<int>& t1, vector<int>& t2) {
        if (t1[0] == t2[0]) {
            return t1[1] < t2[1];
        }
        return t1[0] < t2[0];
    });
    vector<vector<int>> temp{points[0]};
    int ans = 0;
    for (int i = 1; i < points.size(); i++) {
        if (points[i][0] <= temp.back()[1]) {
            if (points[i][1] < temp.back()[1]) {
                temp.pop_back();
                temp.push_back(points[i]);
            }
        } else {
            temp.push_back(points[i]);
            ans++;
        }
    }
    
    return temp.size();
}

int main() {

    vector<vector<int>> vec{{10, 16}, {2, 8}, {1, 6}, {7, 12}};
#if 1
    cout << findMinArrowShots(vec) << "\n";
    vec = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << findMinArrowShots(vec) << "\n";
    vec = {{{1, 2}, {2, 3}, {3, 4}, {4, 5}}};
    cout << findMinArrowShots(vec) << "\n";
    #endif
    vec = {{9,12},{1,10},{4,11},{8,12},{3,9},{6,9},{6,7}};
    cout << findMinArrowShots(vec) << "\n";
    return 0;
}