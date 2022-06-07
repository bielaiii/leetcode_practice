#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool bfs(int average, vector<int> &matchsticks, int i, vector<bool> &visited ){
    if(i == matchsticks.size()) return true;
    for(int j = 0; j < matchsticks.size(); j++){
        if(visited[j]) continue;
        
    }
}



bool makesquare(vector<int>& matchsticks) {
    int sum = 0;
    for(auto stick : matchsticks){
        sum += stick;
    }
    int side = sum %  4;
    if(side) return false;
    sort(matchsticks.begin(), matchsticks.end());
    vector<bool> visited (matchsticks.size(), 0);


}