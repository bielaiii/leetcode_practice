#include <algorithm>
#include <iostream>
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

int maxEnvelopes(vector<vector<int>> &envelopes) {
    int sz = envelopes.size();
    sort(envelopes.begin(), envelopes.end(), [](vector<int> &a, vector<int>&b) {
        if (a[0] == b[0]) return a[1] > b[1];
        return a[0] < b[0];
    });
    vector<int> dp{envelopes[0][1]};
    int ans = 0;
    for (int i = 1; i < sz; i++) {
        if (envelopes[i][1] > dp.back()) {
            dp.push_back(envelopes[i][1]);
        } else {
            auto it = lower_bound(dp.begin(), dp.end(), envelopes[i][1]);
            *it = envelopes[i][1];
        }
    }
    return dp.size();

}

int main() {
    vector<vector<int>>  ev1{{5,4},{6,4},{6,7},{2,3}};
    println("{}", maxEnvelopes(ev1));
    return 0;
}
