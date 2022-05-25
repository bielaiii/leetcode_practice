#include<iostream>
#include<vector>
#include<set>
#include<utility>
#include<queue>
#include<unordered_map>
using namespace std;

//pair<int,int> pair_ {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

pair<int,int> pair_[4] = {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

int bfs(vector<vector<int>> &forest, int x, int y, queue<pair<int,int>>& queue_, unordered_map<int,int> &map_){
    int avail = 0;
    for(int i = 0; i < 4; i++){
        int temp_x = x + pair_[i].first;
        int temp_y = y + pair_[i].second;
        if(temp_x < 0 || temp_x >= forest[0].size()) continue;
        if(temp_y < 0 || temp_y >= forest.size()) continue;
        if(forest[temp_x][temp_y]) continue;
        queue_.push({temp_x, temp_y});
        avail ++;
        map_[temp_y * forest[0].size() + temp_x] = x * forest[0].size() + y;
        //bfs(forest, temp_x, temp_y, step + 1);
    }
    return avail;
}



int cutOffTree(vector<vector<int>>& forest) {
    set<int> set_;
    vector<vector<int>> path_(forest.size() * forest[0].size());
    int tree = 0;
    for(int i = 0; i < forest.size(); i++){
        for(int j = 0; j < forest[0].size(); j++){
            if(! forest[i][j]) continue;
            set_.insert(forest[i][j]);
            tree ++;
            path_[i * forest[0].size() + j].push_back(i * forest[0].size() + j );
        }
    }
    unordered_map<int,int> map_;
    queue<pair<int,int>> queue_;
    map_[0] = 0;
    queue_.push({0,0});
    while(tree && ! queue_.empty()){
        pair<int,int> node = queue_.front();
        queue_.pop();
        tree -= bfs(forest, node.first, node.second, queue_, map_);
    }
    int step = 0;
    
    return 1; 
}