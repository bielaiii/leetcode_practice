#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool dfs(vector<int> &matchsticks, int i, vector<int> &used ){
    if(i == matchsticks.size()){
        for(int j = 0; j < 4; j++){
            if(used[j]) return false;
        }
        return true;
    }
    for(int j = 0; j < 4; j++){
        if(i >= j){
            if(used[j] >= matchsticks[i]){
                used[j] -= matchsticks[i];
                if(dfs(matchsticks, i + 1, used)) return true;
                used[j] += matchsticks[i];
            }
        }
    }
    return false;
}



bool makesquare(vector<int>& matchsticks) {
    int sum = 0;
    for(auto stick : matchsticks){
        sum += stick;
    }
    int side = sum %  4;
    if(side) return false;
    vector<int> edge_(4 , side);
    sort(matchsticks.begin(), matchsticks.end());
   // vector<bool> visited (matchsticks.size(), 0);
    return dfs(matchsticks, 0, edge_);

}