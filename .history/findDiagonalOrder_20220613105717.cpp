#include<iostream>
#include<vector>
using namespace std;

pair<int,int> dir[2] = {{1, 1}, {-1, -1}};
//pair<int,int> dir1 = {1, 1}

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    vector<int> ans;
    int x = 0, y = 0;
    int way = 1; // or -1
    ans.push_back(mat[0][0]);
    while(x != mat.size() - 1 && y != mat[0].size()){
        if(x + way >= 0 && x + way <= mat.size() - 1 &&)
        y + way >= 0 && y + way <= mat.size() - 1 )
    return ans;
}