#include <iostream>
#include <vector>
#include<iterator>
using namespace std;

template<typename T>
void displayBoard(vector<vector<T>> board)
{
    for (auto row : board) {
        copy(row.begin(), row.end(), ostream_iterator<char>(cout, " "));
        cout << "\n";
    
    }
    cout << "========================\n";
}



static void goAhead(vector<vector<char>> &board, int x, int y)
{
    const int dirs[2][2] {{1, 0}, {0, 1} };
    for (int i = 0; i < 2; i++) {
        int temp_x = x + dirs[i][0];
        int temp_y = y + dirs[i][1];
        if (temp_x >= board.size() || temp_y >= board[0].size()) {
            continue;
        }
        if (board[temp_x][temp_y] == '.') {
            continue;
        
        }
        while (temp_x < board.size() && temp_y < board[0].size() && board[temp_x][temp_y] == 'X') {
            board[temp_x][temp_y] = '.';
            temp_x +=dirs[i][0];
            temp_y +=dirs[i][1];
            
        }
    }
    board[x][y] = '.';

}


int countBattleships(vector<vector<char>>& board) {
    int m = board.size();
    int n = board[0].size();
    int ct = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 'X') {
                goAhead(board, i, j);
                ct++;
            }
        }
    }
    return ct;
}