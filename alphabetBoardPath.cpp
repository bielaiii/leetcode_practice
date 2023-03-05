#include<iostream>
#include<vector>
using namespace std;




string alphabetBoardPath(string target) {
      const string board[] = {"abcde", 
                              "fghij", 
                              "klmno", 
                              "pqrst", 
                              "uvwxy", 
                              "z"};
      int start_x = 0;
      int start_y = 0;
      int steps = 0;
      string ans = "";
      for (char c : target) {
            int next_x = (c - 'a') / 5;
            int next_y = (c - 'a') % 5;
            if (c == 'z') {
                  for (int i = 0; i < abs(next_y - start_y); i++) {
                        if (next_y > start_y) {
                              ans += 'R';
                        } else {
                              ans += 'L';
                        }
                  }
                  for (int i = 0; i < abs(next_x - start_x); i++) {
                        if (next_x > start_x) {
                              ans += 'D';
                        } else {
                              ans += 'U';
                        }
                  }
            } else {
                  for (int i = 0; i < abs(next_x - start_x); i++) {
                        if (next_x > start_x) {
                              ans += 'D';
                        } else {
                              ans += 'U';
                        }
                  }
                  for (int i = 0; i < abs(next_y - start_y); i++) {
                        if (next_y > start_y) {
                              ans += 'R';
                        } else {
                              ans += 'L';
                        }
                  }
                  
            }
            
            ans += '!';
            start_y = next_y;
            start_x = next_x;
            //cout << ans << endl;
      }
      return ans;
}