#include<iostream>
#include<vector>
#include"print_1d_array.cpp"
using namespace std;


const int dir[4][2] = {{-1,0}, {1, 0}, {0, -1}, {0, 1}};

void bfs_largestIsland(const vector<vector<int>>& grid, int r, int c, int & area, vector<vector<bool> > visited){
      if( ! grid[r][c] || visited[r][c] ) return;
      area ++;
      visited[r][c] = 1;
      for(int i = 0; i < 4; i++){
            bfs_largestIsland(grid, r + dir[i][0], c + dir[i][1], area, visited);
      }

}


int largestIsland(vector<vector<int>>& grid) {
      vector<vector<bool> > visited (grid.size(), vector<bool>(grid[0].size(), 0));
      vector<int> allarea;
      for(int r = 0; r < grid.size(); r ++){
            for(int c = 0; c < grid[0].size(); c++){
                  if(grid[r][c] && ! visited[r][c] ){
                        int area = 0 ;
                        bfs_largestIsland(grid, r , c , area, visited );
                        allarea.push_back(area);
                  }
            }
      }
      print_1d_array(allarea);
      return 1;
}