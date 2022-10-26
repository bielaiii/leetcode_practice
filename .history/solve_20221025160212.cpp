#include<iostream>
#include<vector>
using namespace std;

const int dir[4][2] = {{0,1},{0, -1}, {1, 0}, {-1, 0}};

void bfs_solve(const vector<vector<char>>& board, int r, int c){
    if(r < 0 || r >= board.size()) return;
    if(c < 0 || c >= board[0].size()) return;
    if(board[r][c] == 'O'){
        return 
    }
}



void solve(vector<vector<char>>& board) {
    int r = board.size() - 1;
    int c = board[0].size() - 1;
    const int start_r[2] = {0, r};
    const int start_c[2][2] = {0 ,c};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < r + 1; j ++){
            if(board[start_r[i]][j] == 'O'){

            }
        }
    }
} 