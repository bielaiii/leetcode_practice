#include<iostream>
#include<vector>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    const string arr[3] = {"Gold Medal", "Silver Medal", "Bronze Medal" };
    int score_max = INT16_MIN;
    for(auto i : score){
        if(i > score_max) score_max = i;
    }
   // vector<int> 
    vector<int> vec(score_max + 1, -1);
    for(int i = 0; i < score.size(); i++){
        vec[score[i]] = i;
    }
    while(score_max > 0){
        if(score_max > -1){
            if(score)
        }
    }
    vector<string> ans;
    return ans;
}