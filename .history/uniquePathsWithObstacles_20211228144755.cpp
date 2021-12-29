#include<iostream>
#include<vector>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    vector<vector<int>> paths (int(obstacleGrid.size()),vector<int>(obstacleGrid[0].size(), 0));
    for(int c = 0; c < obstacleGrid.size(); c++){
        for(int r = 0; r < obstacleGrid[0].size(); r++){
            if(c == 0 || r == 0){
                if(!obstacleGrid[c][r]) paths[c][r] = 1;
            }else{
                paths[c][r] = paths[c + 1][r] + paths[c][r+1];
            }
        }
    }
    return paths[obstacleGrid.size() -1][obstacleGrid[0].size() - 1];
}