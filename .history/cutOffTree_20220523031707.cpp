#include<iostream>
#include<vector>
#include<set>
#include<utility>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include "header.h"
using namespace std;

//pair<int,int> pair_ {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

pair<int,int> dir_[4] = {{0,1}, {0,-1}, {-1,0}, {1,0}};

int bfs(vector<vector<int>> const forest, int const cur_x, int const cur_y, int const nex_x, int const nex_y){
    if(cur_x == nex_x && cur_y == nex_y) return 0;
    queue<pair<int,int>> queue_;
    int step = 0;
    queue_.push({cur_x, cur_y});
    vector<vector<bool>> visited (forest.size(), vector<bool>(forest[0].size(), 0));
    visited[0][0] = 1;
    while(! queue_.empty()){
        pair<int,int> head = queue_.front();
        queue_.pop();
        step ++;
        for(int i = 0; i < 4; i ++){
            int temp_x = head.first + dir_[i].first;
            int temp_y = head.second + dir_[i].second;
            if(temp_x < 0 || temp_x >= forest[0].size()) continue;
            if(temp_y < 0 || temp_y >= forest.size()) continue;
            if(! forest[temp_x][temp_y]) continue;
            if(visited[temp_x][temp_y]) continue;
            if(temp_x == nex_x && temp_y == nex_y) return step;
            queue_.push({temp_x, temp_y});
            visited[temp_x][temp_y ] = 1;
            //path_[head.first * forest[0].size() +  head.second ].push_back({temp_x, temp_y});
            
        }
    }
    return -1;

}

/* //in ascending order
bool comp(const pair<int,int> & a, const pair<int,int> & b){
    return forest[] < b;
} */

void printer(vector<pair<int,int>> const pair_){
    cout <<"---------" <<endl;
    for(auto it : pair_){
        cout << it.first << "  " << it.second <<endl;
    }
    cout << "---------"<<endl;
}



int cutOffTree(vector<vector<int>>& forest) {
    vector<pair<int,int>> node;
    for(int i = 0; i < forest.size(); i++){
        for(int j= 0; j < forest[0].size(); j++){
            if(forest[i][j] > 1) node.push_back({i,j});
        }
    }
    sort(node.begin(), node.end(), [&](pair<int,int> a, pair<int,int> b)->bool{
        return forest[a.first][a.second] < forest[b.first][b.second];
    });

   // printer(node);

    pair<int,int> head;
    int step = 0;
    int ret =  0;
    int cur_x = 0;
    int cur_y = 0;
   // cout <<"start" <<endl;
    for(auto & it : node){
       // cout << cur_x << " " << cur_y << " " << it.first <<" " << it.second <<endl;
        ret = bfs(forest, cur_x , cur_y, it.first, it.second);
       // cout << "step : " << step <<endl;
        if(ret == -1) return -1;
        cout << step << endl;
        step += ret;
        cur_x = it.first;
        cur_y = it.second;
    }
    return step;
}