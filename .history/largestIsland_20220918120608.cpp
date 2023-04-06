#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


const int dir[4][2] = {{-1,0}, {1, 0}, {0, -1}, {0, 1}};
/* 
void bfs_largestIsland(const vector<vector<int>>& grid, int r, int c, int & area, vector<vector<bool> > & visited, const int id ){
      if( ! grid[r][c] || visited[r][c] ) return;
      area ++;
      grid[r][c] = 
      visited[r][c] = 1;
      for(int i = 0; i < 4; i++){
            int temp_r = r + dir[i][0];
            int temp_c = c + dir[i][1];
            if(temp_r >= 0 && temp_r < grid.size() && temp_c >= 0 && temp_c < grid[0].size())
                  bfs_largestIsland(grid, temp_r, temp_c, area, visited, id);
      }

} */


int largestIsland(vector<vector<int>>& grid) {
      vector<vector<bool> > visited (grid.size(), vector<bool>(grid[0].size(), 0));
      vector<int> allarea;
      unordered_map<int, int> mp;
      int id = 2;
      for(int r = 0; r < grid.size(); r ++){
            for(int c = 0; c < grid[0].size(); c++){
                  if(grid[r][c] && ! visited[r][c] ){
                        int area = 0 ;
                        bfs_largestIsland(grid, r , c , area, visited, id );
                        allarea.push_back(area);
                        id ++;
                        mp[id] = area;
                  }
            }
      }
      int ans = 0 ;
      for(int i = 0; i < grid.size(); i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                  if(! grid[i][j]){
                        grid[i][j] = 1;
                        for(int z = 0; z < 4;z++){
                              
                        }
                  }
            }
      }
      print_1d_array(allarea);
      return 1;
}