#include<iostream>
#include<vector>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    const string arr[3] = {"Gold Medal", "Silver Medal", "Bronze Medal" };
    vector<int> vec(score.size(), -1);
    for(auto s : score) vec[s] = s;
    vector<string> ans;
    return ans;
}