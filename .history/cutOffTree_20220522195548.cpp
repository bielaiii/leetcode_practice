#include<iostream>
#include<vector>
#include<set>
#include<utility>
#include<queue>
#include<unordered_map>
using namespace std;

//pair<int,int> pair_ {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

pair<int,int> pair_[4] = {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

void bfs(vector<vector<int>> &forest, int x, int y, int step){
    for(int i = 0; i < 4; i++){
        int temp_x = x + pair_[i].first;
        int temp_y = y + pair_[i].second;
        if(temp_x < 0 || temp_x >= forest[0].size()) continue;
        if(temp_y < 0 || temp_y >= forest.size()) continue;
        if(forest[temp_x][temp_y]) continue;
        bfs(forest, temp_x, temp_y, step + 1);
    }
}


int cutOffTree(vector<vector<int>>& forest) {
    set<int> set_;
    int tree = 0;
    for(int i = 0; i < forest.size(); i++){
        for(int j = 0; j < forest[0].size(); j++){
            if(! forest[i][j]) continue;
            set_.insert(forest[i][j]);
            tree ++;
        }
    }
    queue<pair<int,int>> queue_;
    queue_.push({0,0});
    while(tree && ! queue_.empty()){
        pair<int,int> node = queue_.pop();
    }
    while
    return 1; 
}