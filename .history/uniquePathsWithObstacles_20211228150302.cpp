#include<iostream>
#include<vector>
using namespace std;
template<typename T>
void printer2(T toprint){
    for(int e = 0;e < toprint.size(); e++){
        for(int d =0; d < toprint[e].size(); d++){
            cout << toprint[e][d] << " ";
        }
        cout << endl;
    }
    
        cout << endl;
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1] || obstacleGrid[0][0]) return 0;
    vector<vector<int>> paths (int(obstacleGrid.size()),vector<int>(obstacleGrid[0].size(), 0));
    paths[0][0] = 1;
    for(int c = 0; c < obstacleGrid.size(); c++){
        for(int r = 0; r < obstacleGrid[0].size(); r++){
            if(c == 0){
                if(r > 0 && obstacleGrid[c][r-1]) paths[c][r] = 1;
            }else if(r == 0){
                if(c > 0 && obstacleGrid[c-1][r]){
                    paths[c][r] = 1;
                }
            }
            else{
                int m = obstacleGrid[c-1][r]? 0 : paths[c-1][r];
                int n = obstacleGrid[c][r-1]? 0 : paths[c][r-1];
                if(!obstacleGrid[c][r]){
                    paths[c][r] = m + n;
                }
            } 
        }
    }
    printer2(paths);
    return paths[obstacleGrid.size() -1][obstacleGrid[0].size() - 1];
}