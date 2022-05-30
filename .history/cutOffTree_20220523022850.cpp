#include<iostream>
#include<vector>
#include<set>
#include<utility>
#include<queue>
#include<algorithm>
#include<unordered_map>
using namespace std;

//pair<int,int> pair_ {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

pair<int,int> dir_[4] = {{1,1}, {-1,1}, {-1,-1}, {-1,1}};

int bfs(vector<vector<int>> &forest, pair<int, int> const node, pair<int,int> const target){
    queue<pair<int,int>> queue_;
    int step = 0;
    cout << node.first << " " << node.second <<endl;
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

/* //in ascending order
bool comp(const pair<int,int> & a, const pair<int,int> & b){
    return forest[] < b;
} */



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
    
}