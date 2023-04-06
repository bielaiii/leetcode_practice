#include<vector>
#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;



void recdfs(vector<vector<int>> &st, int &target, const vector<int> &candidate, vector<int> cur, int idx, int &sum) {
    if (sum == target) {
        st.push_back(cur);
        return;
    }
    for (int i = idx; i < candidate.size(); i++) {
        if (sum + candidate[i] > target) {
            return;
        }
        cur.push_back(candidate[i]);
        sum += candidate[i];
        recdfs(st, target, candidate, cur, i, sum);
        sum -= candidate[i];
        cur.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> st;
    sort(candidates.begin(), candidates.end());
    vector<int> temp;
    int sum = 0;
    recdfs(st, target, candidates, temp, 0, sum);
    return st;
}