#include <algorithm>
#include <iostream>
#include <iterator>
#include <stack>
#include <vector>
using namespace std;

bool rec_exist(const vector<vector<char>>& board, const string word, int r,
               int c, int idx, vector<vector<int>>& visited) {
    if (idx == word.size()) {
        return 1;
    }
    if (board[r][c] != word[idx]) {
        return 0;
    }
    const int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for (int i = 0; i < 4; i++) {
        int temp_c = c + dir[i][1];
        int temp_r = r + dir[i][0];
        if (temp_c < -1 || temp_r < 0 || temp_c >= board[0].size() ||
            temp_r >= board.size())
            continue;

        if (visited[temp_r][temp_c]) {
            continue;
        
        }
        visited[temp_r][temp_c] = 1;
        int ret = rec_exist(board, word, temp_r, temp_c, idx + 1, visited);
        if (ret) {
            return ret;
        }
        visited[temp_r][temp_c] = 0;
    }
    if (idx == word.size() - 1) {
        return 1;
    }
    
    return 0;
}

bool exist(vector<vector<char>>& board, string word) {
    if (word == "")
        return 0;
    int i = 0;
    int r = 0, c = 0;
    string cur = "";
    for (r = 0; r < board.size(); r++) {
        for (c = 0; c < board[0].size(); c++) {
            if (board[r][c] == word[0]) {
                vector<vector<int>> visited(board.size(),
                                            vector<int>(board[0].size(), 0));
                if (word.size() == 1) {
                    return 1;
                
                }
                visited[r][c] = 1;
                if (rec_exist(board, word, r, c, 0, visited))
                    return 1;
                visited[r][c] = 0;
            }
        }
    }
    return 0;
}

int main() {

    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'}, 
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}};
    vector<vector<char>> board2 = {
        {'a', 'b', 'c'},
        {'a', 'e', 'd'},
        {'a', 'f', 'g'},
    };
    vector<vector<char>> board1 = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'},
    };
    vector<vector<char>> board3 = {{'A'}};
    string word = "A"s;
    cout << exist(board3, word) << "\n";
    return 0;
}