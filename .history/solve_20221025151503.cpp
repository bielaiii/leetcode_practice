#include<iostream>
#include<vector>
using namespace std;

const int dir[4][2] = {{0,1},{0, -1}, {1, 0}, {-1, 0}};




void solve(vector<vector<char>>& board) {
    int r = board.size() - 1;
    int c = board[0].size() - 1;
    const int start_r[2][2] = {{0,0},{r,0}};
    const int start_c[2][2] = {{0,0},{0,c}};
    for(int i = 0; i < 2; i++){
        for(int j = start_r[i]; i)
    }
} 