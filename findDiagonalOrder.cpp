#include<iostream>
#include<vector>
using namespace std;

/* pair<int,int> dir[2] = {{1, 1}, {-1, -1}};
//pair<int,int> dir1 = {1, 1}

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    vector<int> ans;
    int x = 0, y = 0;
    int way_x = -1; // or -1
    int way_y = -1; // or -1
    //ans.push_back(mat[0][0]);
    while(ans.size() < mat[0].size() * mat.size()){
        ans.push_back(mat[x][y]);
        if((x + y) % 2){
            if(x == mat.size() - 1){
                y ++;
            }else if(y == 0){
                x ++;
            }else{
                y --;
                x ++;
            }
        }else{
            if(y == mat[0].size() - 1){
                x ++;
            }else if(x == 0){
                y ++;
            }else{
                x --;
                y ++;
            }
        } 
        
    }
    return ans;
} */