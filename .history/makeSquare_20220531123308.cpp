#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool bfs(int average, vector<int> &matchsticks, int i ){
    if(i == matchsticks.size()) return true;
    for(int i = 0; i < matchsticks.size(); i++){
        
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

}