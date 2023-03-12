#include<iostream>
#include<vector>
using namespace std;

const int dir[8][2] = {{0,1},{0,-1},{1,0},{-1,0},{1,-1},{1,1},{-1,1},{-1,-1}};

void gameOfLife(vector<vector<int>>& board)
{
      const vector<vector<int>> old_board = board;
      for (int r = 0; r < board.size(); r++) {
            for (int c = 0; c < board[0].size(); c++) {
                  int count_live = 0;
                  for (int i = 0; i < 8; i++) {
                        int temp_r = r + dir[i][0];
                        int temp_c = c + dir[i][1];
                        if (temp_r >= 0 && temp_r < board.size() && temp_c >= 0 && temp_c < board[0].size()) {
                              if (old_board[temp_r][temp_c]) {
                                    count_live++;
                              }
                        }
                  }
                  if (old_board[r][c]) {
                        if(count_live < 2 || count_live > 3) {
                              board[r][c] = 0;
                        }
                  } else {
                        if (count_live == 3) {
                              board[r][c] = 1;
                        }
                  }
            }
      }
}