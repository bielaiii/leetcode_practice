#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int dir_dig[4][2] = {{0,-1},{0,1},{1,0},{-1,0}};

bool rec_exist(const vector<vector<char>>& board, const string word, int r, int c, int i, string cur, vector<vector<bool>>  visited){
      if(i == word.size() ) return 1;
    //  if(i >= word.size()) return 0;
      if(c < 0 || r < 0 || c >= board[0].size() || r >= board.size() ) return 0;
      if(visited[r][c]) return 0;
      if(board[r][c] != word[i]) return 0;
      cur += word[i];
      i ++;
       visited[r][c] = 1;
      int ret = rec_exist(board, word, r+ dir_dig[0][0], c+dir_dig[0][1], i  , cur  , visited ) ||
             rec_exist(board, word, r+ dir_dig[1][0], c+dir_dig[1][1], i  , cur  , visited ) ||
             rec_exist(board, word, r+ dir_dig[2][0], c+dir_dig[2][1], i  , cur  , visited ) ||
             rec_exist(board, word, r+ dir_dig[3][0], c+dir_dig[3][1], i  , cur  , visited ) ;
      visited[r][c] = 0;
      return ret;
}



bool exist(vector<vector<char>>& board, string word) {
      if(word == "") return 0;
      vector<vector<bool>> visited( board.size(), vector<bool> (board[0].size(),0));
      ///stack<char> st;
      int i = 0;
      int r = 0, c = 0;
      string cur ="";
      for(r = 0; r < board.size(); r++){
            for(c = 0; c < board[0].size(); c++){
                  if(board[r][c] == word[0]){
                        if(rec_exist(board, word, r, c, i, cur, visited)) return 1;
                  }
            }
      }
      return 0 ;
   //   return false;
}