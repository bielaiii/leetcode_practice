#include<vector>
#include"header.h"
using namespace std;
void dfs(int k, int n, vector<vector<int>> &store, vector<int> tmp, int start, int sum) {
    if (tmp.size() == k && sum == n) {
        store.emplace_back(tmp);
        return;
    } else if (tmp.size() > k) {
        return;
    }
    for (int i = start; i < 10; i++) {
        sum += i;
        tmp.push_back(i);
        dfs(k, n, store, tmp, i + 1, sum);
        sum -= i;
        tmp.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> store;
    vector<int> temp;
    dfs(k , n, store, temp, 1, 0);
    return store;
}