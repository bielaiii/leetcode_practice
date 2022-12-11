#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;

const int dir[4][2] = {{0,-1},{0,1},{1,0},{-1,0}};

bool check_availe(const int & x, const int & y, const vector<vector<int>> & vt ){
      if(x < 0 || x >= vt.size() || y < 0 || y >= vt[0].size()) return 0;
      return 1;
}

struct pair_hash {
    inline std::size_t operator()(const std::pair<int,int> & v) const {
        return v.first * 10000 + v.second;
    }
};


void bfs_findIsland(const vector<vector<int>> & grid, unordered_set<pair<int,int>, pair_hash> & st, int r, int c){
      queue<pair<int,int>> q;
      vector<vector<bool>> visited (grid.size(), vector<bool>(grid[0].size(), 0));
      visited[r][c] = 1;
      st.insert({r,c});
      q.push({r,c});
      while(q.size()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int e = 0; e < 4; e++){
                  int temp_x = x + dir[e][0];
                  int temp_y = y + dir[e][1];
                  if(check_availe(temp_x, temp_y, grid) == 0)
                        continue;
                  if(visited[temp_x][temp_y] == 0 && grid[temp_x][temp_y] == 1){
                        q.push({temp_x, temp_y});
                        st.insert({temp_x,temp_y});
                        visited[temp_x][temp_y] = 1;
                  }
            }
      }
}

bool is_source_island(const unordered_set<pair<int,int>, pair_hash> st, int x, int y){
      for(auto it : st){
            if(it.first == x && it.second == y) return 1;
      }
      return 0;
}


int shortestBridge(vector<vector<int>>& grid) {
      unordered_set<pair<int,int>, pair_hash> island1;
    //  unordered_set<pair<int,int>, pair_hash> island2;
      vector<vector<bool>> source (grid.size(), vector<bool>(grid[0].size(), 0));
      ///vector<vector<bool>> source (grid.size(), vector<bool>(grid[0].size(), 0));
      for(int r = 0 ; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){
                  if(grid[r][c] == 1){
                        if(island1.size() == 0){
                              bfs_findIsland(grid, island1, r ,c);
                        }
                  }
            }
      }
      int minbridge = INT32_MAX;
      vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), 0));
      
      queue<pair<int,int>> q ;
      queue<pair<int,int>> qq;
      for(auto it : island1){
            q.push({it.first, it.second});
            //cout << it.first <<" "<< it.second <<endl;
            visited[it.first][it.second] = 1;
      };
      int len = 0;
      while(q.size()){
            int head_x = q.front().first;
            int head_y = q.front().second;
            q.pop();
            for(int e = 0; e < 4; e ++){
                  int temp_x = head_x + dir[e][0];
                  int temp_y = head_y + dir[e][1];
                  
                  if(check_availe(temp_x, temp_y, grid) && visited[temp_x][temp_y] == 0){
                        //cout << temp_x <<" "<< temp_y <<endl;
                        if(grid[temp_x][temp_y]  == 0){
                              qq.push({temp_x,temp_y});
                        }else if(is_source_island(island1, temp_x, temp_y) == 0){
                              return len;
                        }
                        visited[temp_x][temp_y] = 1;
                  }
            }
            if(q.empty()){
                  while(qq.size()){
                        q.push(qq.front());
                        qq.pop();
                  }
                  len ++;
            }
      }
      return -1;
}