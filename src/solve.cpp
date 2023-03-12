#include<iostream>
#include<vector>
using namespace std;

const int dir[4][2] = {{0,1},{0, -1}, {1, 0}, {-1, 0}};

void bfs_solve(vector<vector<char>>& board, int r, int c){
    if(r < 0 || r >= board.size()) return;
    if(c < 0 || c >= board[0].size()) return;
    if(board[r][c] == 'O'){
        board[r][c] = 'p';
        for(int i = 0; i < 4; i++){
            bfs_solve(board, r + dir[i][0], c + dir[i][1]);
        }
    }
}



void solve(vector<vector<char>>& board) {
    int r = board.size() - 1;
    int c = board[0].size() - 1;
    const int start_r[2] = {0, r};
    const int start_c[2][2] = {0 ,c};
    
    for(int i =0; i <= c; i ++){
        if(board[0][i] == 'O') bfs_solve(board, 0, i);
        if(board[r][i] == 'O') bfs_solve(board, r, i);
    }
    for(int i = 0; i <= r; i++){
        if(board[i][0] == 'O') bfs_solve(board, i, 0);
        if(board[i][c] == 'O') bfs_solve(board, i, c);
    }

    for(int i = 0; i <= r; i++){
        for(int j = 0; j <= c; j++){
            if(board[i][j] == 'p'){
                board[i][j] = 'O';
            }else{
                board[i][j] = 'X';
            }
        }
    }
} 