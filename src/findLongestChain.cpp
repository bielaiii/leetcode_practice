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

void printer(vector<vector<int>> &vt) {
    for (auto &rows_ : vt) {
        println("{}", rows_);
    }
    println("======");
}

int findLongestChain(vector<vector<int>> &pairs) {
    int sz = pairs.size();
    if (sz <= 1) {
        return 1;
    }
    sort(pairs.begin(), pairs.end(),
         [](vector<int> &l, vector<int> &r) { return l[1] < r[1]; });

    int be = pairs[0][1];
    int ans = 1;
    for (int i = 1; i < sz; i++) {
        if (pairs[i][0] <= be) {
        } else {
            be = pairs[i][1];
            ans++;
        }
    }
    return ans;
}

namespace using_dp {
    int findLongestChain(vector<vector<int>> &pairs) {
        int sz = pairs.size();
        if (sz <= 1) {
            return 1;
        }
        sort(pairs.begin(), pairs.end(),
            [](vector<int> &l, vector<int> &r) { return l[0] < r[0]; });
        int ans = 0;
        vector<int> dp(sz, 1);
        for (int i = 1; i < sz; i++) {
            for (int j = 0; j < i; j++) {
                if (pairs[j][1] < pairs[i][1]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        return ans;
    }
} // namespace using_dp

int main() {
    vector<vector<int>> v1{
      {1, 2},
      {2, 3},
      {3, 4}
    };
    println("{}", findLongestChain(v1));
    vector<vector<int>> v2{
      {1, 2},
      {7, 8},
      {4, 5}
    };
    println("{}", findLongestChain(v2));
    return 0;
}
