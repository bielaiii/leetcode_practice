#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool dfs(vector<int> &matchsticks, int i, vector<int> &visited ){
    if(i == matchsticks.size()){
        for(int j = 0; j < 4; j++){
            if(visited[j]) return false;
        }
    }
    for(int j = 0; j < 4; j++){
        if(i >= j){
            if(visited[j] >= matchsticks[i]){
                visited[j] -= matchsticks[i];
                if(dfs(matchsticks, i + 1, visited)) return true;
                visited[j] += matchsticks[i];
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
    vector<bool> visited (matchsticks.size(), 0);


}