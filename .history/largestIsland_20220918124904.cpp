#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include"print_1d_array.cpp"
#include"print_2d_array.cpp"
using namespace std;


const int dir[4][2] = {{-1,0}, {1, 0}, {0, -1}, {0, 1}};

void bfs_largestIsland(vector<vector<int>>& grid, int r, int c, int & area, vector<vector<bool> > & visited, const int id ){
      if( grid[r][c] == 0 || visited[r][c] ) return;
      area ++;
      grid[r][c] = id;
      visited[r][c] = 1;
      for(int i = 0; i < 4; i++){
            int temp_r = r + dir[i][0];
            int temp_c = c + dir[i][1];
            if(temp_r >= 0 && temp_r < grid.size() && temp_c >= 0 && temp_c < grid[0].size())
                  bfs_largestIsland(grid, temp_r, temp_c, area, visited, id);
      }

}


int largestIsland(vector<vector<int>>& grid) {
      vector<vector<bool> > visited (grid.size(), vector<bool>(grid[0].size(), 0));
      vector<int> allarea;
      unordered_map<int, int> mp;
      int id = 2;
      for(int r = 0; r < grid.size(); r ++){
            for(int c = 0; c < grid[0].size(); c++){
                  if(grid[r][c] && ! visited[r][c] ){
                        int area = 0 ;
                        grid[r][c] = id;
                        bfs_largestIsland(grid, r , c , area, visited, id );
                        allarea.push_back(area);
                        mp[id] = area;
                        id ++;
                        
                  }
            }
      }
      if(id == 2) return grid.size() * grid[0].size();
      //print_2d_array(grid);
      unordered_set<int> st;
      int ans = 0 ;
      for(int i = 0; i < grid.size(); i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                  int area = 1 ;
                  if( grid[i][j] == 0){
                        grid[i][j] = 1;
                        for(int z = 0; z < 4;z++){
                              int temp_r = i + dir[z][0];
                              int temp_c = j + dir[z][1];
                              if(temp_r >= 0 && temp_r < grid.size() && temp_c >= 0 && temp_c < grid[0].size() && mp.count(grid[temp_r][temp_c])){
                                    st.insert(grid[temp_r][temp_c]);
                              }
                        }
                        for(int s : st){
                              area += mp[s];
                        }
                        ans = max(ans , area  );
                  }
            }
      }
      //print_1d_array(allarea);
      return ans;
}