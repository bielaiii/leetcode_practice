#include <iostream>
#include <vector>
using namespace std;

void dfs(int n, const int limit, vector<int> cur, int cur_sum,
         vector<vector<int>>& all) {
    if (cur.size() == 3) {

        if (cur_sum == n) {
            all.push_back(cur);
        }
        return;
    }
    for (int i = limit; i >= 0; i--) {
        if (cur_sum + i > n) {
            continue;
        
        }
        cur.push_back(i);
        cur_sum += i;
        dfs(n, limit, cur, cur_sum, all);
        cur_sum -= i;
        cur.pop_back();
    }
}

int distributeCandies(int n, int limit) {

    int ans = 0;
    vector<vector<int>> all;
    vector<int> temp;
    dfs(n, limit, temp, 0, all);
    return all.size();
}
