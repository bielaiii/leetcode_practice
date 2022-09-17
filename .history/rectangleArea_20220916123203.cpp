#include<iostream>
#include<vector>
using namespace std;

bool checkCovered(const vector<vector<int> > & rectangles, int x, int y){
      for(auto rec : rectangles){
            if(rec[0] <= x && x <= rec[2] && rec[1] <= y && y <= rec[3]){
                  return true;
            }
      }
      return false;
}


int rectangleArea(vector<vector<int>>& rectangles) {
      int min_r = INT16_MAX, max_r = INT16_MIN, min_c = INT16_MAX, max_c = INT16_MIN;
      for(auto rec : rectangles){
            if(rec[0] < min_r) min_r = rec[0];
            if(rec[2] > max_r) max_r = rec[2];
            if(rec[1] < min_c) min_c = rec[1];
            if(rec[3] > max_c) max_c = rec[3];
      }
      cout << min_r <<endl;
      cout << max_r <<endl;
      cout << min_c <<endl;
      cout << max_c <<endl;
      int ans = 0 ; 
      for(int r = min_r; r <= max_r; r++){
            for(int c = min_c ; c <= max_c; c++){
                  ans += checkCovered(rectangles, r, c);
                  cout << "ans "<< ans << " r : "<< r << " c : "<< c << endl;
            }
      }
      return ans;
}