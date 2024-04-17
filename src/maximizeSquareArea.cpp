#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
#include<algorithm>
using namespace std;

namespace {
void printerSet(set<int, greater<int>> st)
{
    for (auto s : st) {
        cout << s << " ";
    }
    cout << "\n";
}

unordered_set<int> helper(vector<int>& vt, int last_)
{
    vt.insert(vt.begin(), 1);
    vt.push_back(last_);
    sort(vt.begin(), vt.end());
    //set<int, greater<int>> st;
    unordered_set<int> st;
    for (int i = 0; i < vt.size(); i++) {
        for (int j = 1 + i; j < vt.size(); j++) {
            st.insert(vt[j] - vt[i]);
        }
    }
    // printerSet(st);
    return st;
}
}

int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences)
{
    auto vst = helper(hFences, m);
    auto hst = helper(vFences, n);
    //long long ans = 0;
    // auto bigger = vst.size() >
    auto bigger = vst;
    auto smaller = hst;
    if (hst.size() > vst.size()) {
        bigger = hst;
        smaller = vst;
    }
    int ans = 0;
    vector<int> temp(smaller.begin(), smaller.end());
    sort(temp.begin(), temp.end(), greater<int>());
    for (auto x : temp) {
        if (bigger.find(x) != bigger.end()) {
            ans = max(x, ans);
        }
    }
    return ans ? (long long)ans * ans % static_cast<long long>(1e9 + 7): -1;

}