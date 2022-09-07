#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    const string arr[3] = {"Gold Medal", "Silver Medal", "Bronze Medal" };
    int score_max = INT16_MIN;
    for(auto i : score){
        if(i > score_max) score_max = i;
    }
    vector<int> vec(score_max + 1, -1);
    for(int i = 0; i < score.size(); i++){
        vec[score[i]] = i;
    }
    vector<string> ans (score.size(), " ");
    int ct = 1;
    while(score_max >= 0 ){
        if(vec[score_max] > -1){
            if(ct == 1){
                ans[vec[score_max]] = "Gold Medal";
            }else if(ct == 2){
                ans[vec[score_max]] = "Silver Medal";
            }else if(ct == 3){
                ans[vec[score_max]] = "Bronze Medal";
            }else{
                //ans.push_back(to_string(ct));
                ans[vec[score_max]] = to_string(ct);
            }
            ct++;
        }
        score_max --;
    }
    
    return ans;
}