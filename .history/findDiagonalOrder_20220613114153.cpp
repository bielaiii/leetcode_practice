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
    while(ans.size() < mat[0].size() * mat.size()){
        while(x - 1 >= 0 && y -1 >= 0){
            x ++;
            y --;
            ans.push_back(mat[x][y]);
        }
        x ++;
        if(x == mat[0].size()){
            y --;
            x = mat[0].size() - 1;
        }
        while(x + 1 < mat[0].size() && y + 1 < mat.size()){
            x --;
            y ++;
            ans.push_back(mat[x][y]);
        }
        y ++;
        if(y == mat.size()){
            x ++;
            y = mat.size() - 1;
        }
        
    }
    return ans;
}