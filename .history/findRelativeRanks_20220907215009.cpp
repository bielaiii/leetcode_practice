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
    vector<string> ans;
    int ct = 0;
    while(score_max > 0){
        if(vec[score_max] > -1){
            if(ct == 0){
                ans.push_back("Gold Medal");
            }else if(ct == 1){
                ans.push_back("Silver Medal");
            }else if(ct == 2){
                ans.push_back("Bronze Medal");
            }else{
                ans.push_back(stoi(vec[score_max]));
            }
            ct++;
        }
        score_max --;
    }
    //vector<string> ans;
    return ans;
}