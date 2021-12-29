#include<iostream>
#include<vector>
using namespace std;


int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1] || obstacleGrid[0][0]) return 0;
    vector<vector<int>> paths (int(obstacleGrid.size()),vector<int>(obstacleGrid[0].size(), 0));
    for(int c = 0; c < obstacleGrid.size(); c++){
        for(int r = 0; r < obstacleGrid[0].size(); r++){
            if(c == 0 || r == 0){
                if(!obstacleGrid[c][r]) paths[c][r] = 1;
            }else{
                int m = obstacleGrid[c-1][r]? 0 : paths[c-1][r];
                int n = obstacleGrid[c][r-1]? 0 : paths[c][r-1];
                if(!obstacleGrid[c][r]){
                    paths[c][r] = m + n;
                }
            } 
        }
    }
    printer
    return paths[obstacleGrid.size() -1][obstacleGrid[0].size() - 1];
}