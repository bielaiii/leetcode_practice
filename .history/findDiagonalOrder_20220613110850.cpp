#include<iostream>
#include<vector>
using namespace std;

pair<int,int> dir[2] = {{1, 1}, {-1, -1}};
//pair<int,int> dir1 = {1, 1}

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    vector<int> ans;
    int x = 0, y = 0;
    int way_x = -1; // or -1
    int way_y = -1; // or -1
    ans.push_back(mat[0][0]);
    while(x != mat[0].size() - 1 && y != mat.size()){
        if(x + way_x < 0 || y + way_y < 0){
            way_x = 1;
            way_y = 0;
        }else if(x + way_x >= mat[0].size() || y + way_y >= mat.size()){
            way_x = 1;
            way_y = 0;
        }
        x += way_x;
        y += way_y;
        ans.push_back(mat[x][y]);
        if(way_x != way_y){
            way_x = 
        }
        
    }
    return ans;
}