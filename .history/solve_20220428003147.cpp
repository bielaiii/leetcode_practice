#include<iostream>
#include<vector>
using namespace std;

var rec(vector<vector<char>> &board, int r, int c, char last){
    if(r == 0 || c == 0 || r < board.size()  || c < board[0].size()){
        if(board[r][c] == 'O' ){
            board[r][c] = 'u';
            return 'u';
        }
        return 'X';
    }
    board[r][c] = rec(board, r+ 1, c, board[r][c]);
    board[r][c] = rec(board, r- 1, c, board[r][c]);
    board[r][c] = rec(board, r, c+1, board[r][c]);
    board[r][c] = rec(board, r, c-1, board[r][c]);

    return board[r][c];
}



void solve(vector<vector<char>>& board) {

}