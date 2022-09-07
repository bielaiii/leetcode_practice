#include<iostream>
#include<vector>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    const string arr[3] = {"Gold Medal", "Silver Medal", "Bronze Medal" };
    int score_max = INT16_MIN;
    for(auto i : score){
        if(i > score_max) score_max = i;
    }
    
    vector<int> vec(score.size() * 2, -1);
    for(auto s : score) vec[s] = s;
    vector<string> ans;
    return ans;
}