#include<iostream>
#include<vector>
#include<set>
#include<utility>
#include<queue>
#include<unordered_map>
using namespace std;

//pair<int,int> pair_ {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

pair<int,int> dir_[4] = {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

int bfs(vector<vector<int>> &forest, pair<int, int> const node, pair<int,int> const target){
    queue<pair<int,int>> queue_;
    int step = 0;
    queue_.push({node.first, node.second});
    while(! queue_.empty()){
        pair<int,int> head = queue_.front();
        queue_.pop();
        for(int i = 0; i < 4; i ++){
            int temp_x = head.first + dir_[i].first;
            int temp_y = head.second + dir_[i].second;
            if(temp_x < 0 || temp_x >= forest[0].size()) continue;
            if(temp_y < 0 || temp_y >= forest.size()) continue;
            if(! forest[temp_x][temp_y]) continue;
            if(temp_x == target.first && temp_y == target.second) return step;
            queue_.push({temp_x, temp_y});
            //path_[head.first * forest[0].size() +  head.second ].push_back({temp_x, temp_y});
            step ++;
        }
    }
    return step;

}



int cutOffTree(vector<vector<int>>& forest) {
    vector<vector<pair<int,int>>> path_(forest.size() * forest[0].size());
    int tree = 0;
    set<int> set_;
    for(int i = 0; i < forest.size(); i++){
        for(int j = 0; j < forest[0].size(); j++){
            path_[i * forest[0].size() + j].push_back({i,j});
            if(forest[i][j] > 1){
                tree ++;;
                
            } 
        }
    }
    int step = 0;
    int x = 0, y = 0;
    int next_x = 0, next_y = 0 ;
    for(auto  it : set_){
       int next_x = it % forest[0].size();
       int next_y = it / forest[0].size();
        int ret =  bfs(forest, pair<int,int>{x,y}, pair<int,int>{next_x, next_y});
        tree -= ret;
        step += ret;
    }
    if(tree) return -1;

    return step;; 
}