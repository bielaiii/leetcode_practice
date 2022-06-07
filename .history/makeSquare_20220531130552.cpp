#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool dfs(vector<int> &matchsticks, int i, vector<int>&used,int average ){
    if(i == matchsticks.size()){
        return true;
    }
    for(int j = 0; j < 4; j++){
        used[j] += matchsticks[i];
        if(used[j] < average && dfs(matchsticks, i + 1, used, average)){
            return true;
        }
        used[j] -= matchsticks[i]; 
    }
    return false;
}



bool makesquare(vector<int>& matchsticks) {
    int sum = 0;
    for(auto stick : matchsticks){
        sum += stick;
    }
    int side = sum %  4;
    if(sum % 4) return false;
    vector<int> edge_(4 );
    sort(matchsticks.begin(), matchsticks.end());
   // vector<bool> visited (matchsticks.size(), 0);
    return dfs(matchsticks, 0, edge_, sum / 4);

}