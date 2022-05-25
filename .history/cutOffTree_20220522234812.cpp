#include<iostream>
#include<vector>
#include<set>
#include<utility>
#include<queue>
#include<unordered_map>
using namespace std;

//pair<int,int> pair_ {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

pair<int,int> pair_[4] = {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

int bfs(vector<vector<int>> &forest, pair<int, int> const node, queue<pair<int,int>>& queue_, vector<vector<int>> &map_){
    int avail = 0;
    for(int i = 0; i < 4; i++){
        int temp_x = node.first + pair_[i].first;
        int temp_y = node.second + pair_[i].second;
        if(temp_x < 0 || temp_x >= forest[0].size()) continue;
        if(temp_y < 0 || temp_y >= forest.size()) continue;
        if(forest[temp_x][temp_y]) continue;
        queue_.push({temp_x, temp_y});
        avail ++;
        map_[x * forest[0].size() + y].push_back(temp_x * forest.size()[0] +  temp_y);
    }
    return avail;
}



int cutOffTree(vector<vector<int>>& forest) {
    vector<pair<int,int>> path_;
    int tree = 0;
    for(int i = 0; i < forest.size(); i++){
        for(int j = 0; j < forest[0].size(); j++){
            if(forest[i][j] > 1){
                path_.push_back({i,j});
                tree ++;
            }
        }
    }
    queue<pair<int,int>> queue_;
    while(tree && !queue_.empty()){
        pair<int,int> head = queue_.front();
        queue_.pop();

    }
    return 1; 
}