#include<iostream>
#include<vector>
#include<utility>
using namespace std;

//pair<int,int> pair_ {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

pair<int,int> pair_[4] = {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

void dfs(vector<vector<int>> &forest, int x, int y, int step){
    for(int i = 0; i < 4; i++){
        int temp_x = x + pair_[i].first;
        int temp_y = y + pair_[i].second;
        if(temp_x < 0 || temp_x >= forest[0].size()) continue;
        if(temp_y < 0 || temp_y >= forest.size()) continue;
        if(forest[temp_x][temp_y]) continue;
        dfs(forest, temp_x, temp_y, step + 1);
    }
}


int cutOffTree(vector<vector<int>>& forest) {

}