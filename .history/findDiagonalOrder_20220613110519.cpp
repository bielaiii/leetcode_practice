#include<iostream>
#include<vector>
using namespace std;

pair<int,int> dir[2] = {{1, 1}, {-1, -1}};
//pair<int,int> dir1 = {1, 1}

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    vector<int> ans;
    int x = 0, y = 0;
    int way = -1; // or -1
    ans.push_back(mat[0][0]);
    while(x != mat[0].size() - 1 && y != mat.size()){
        if(x + way < 0 || y + way < 0){
            way = 1;
        }else if(x + way >= mat[0].size() || y + way >= mat.size()){
            way = -1;
        }
        x += way;
        y += way;
        ans.push_back(mat[x][y]);
        
    }
    return ans;
}