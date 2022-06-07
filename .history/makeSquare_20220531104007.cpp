#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bfs(int average, vector<int> &matchsticks, int i , int accu){
    
}



bool makesquare(vector<int>& matchsticks) {
    int sum = 0;
    for(auto stick : matchsticks){
        sum += stick;
    }
    int side = sum %  4;
    if(side) return false;

}