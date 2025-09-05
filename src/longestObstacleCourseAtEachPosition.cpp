#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <print>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
using vt = vector<int>;

vector<int> longestObstacleCourseAtEachPosition(vector<int> &obstacles) {
    auto sz = obstacles.size();
    vector<int> lis{obstacles[0]};
    vector<int> ans(sz, 0);
    ans[0] = 1;
    
    for (int i = 1; i < sz; i++) {
        int value = obstacles[i];
        auto it = upper_bound(lis.begin(), lis.end(), value);
        auto dist = distance( lis.begin(), it);
        if (it == lis.end()) {
            lis.push_back(value);
        } else {
            lis[dist] = value;
        }
        ans[i] = dist + 1;
    }
    return ans;
}
int main() {
    vector<int> obstacles{1, 2, 3, 2};
    println("{}", longestObstacleCourseAtEachPosition(obstacles));

    return 0;
}
