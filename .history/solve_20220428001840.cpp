#include<iostream>
#include<vector>
using namespace std;

char rec(vector<vector<char>> &board, int r, int c, char last){
    if(r == 0 || c == 0 || r < board.size()  || c < board[0].size()){
        if(board[r][c] == 'O' && last == 'O'){
            return 'O';
        }else{
            return 'X';
        }
        
    }
    
    board[r][c] = rec(board, r+ 1, c, board[r][c]);
    board[r][c] = rec(board, r- 1, c, board[r][c]);
    board[r][c] = rec(board, r, c+1, board[r][c]);
    board[r][c] = rec(board, r, c-1, board[r][c]);
    return 'X';
}



  void solve(vector<vector<char>>& board) {

}