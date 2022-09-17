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
      int min_x = INT16_MAX, max_x = INT16_MIN, min_y = INT16_MAX, max_y = INT16_MIN;
      for(auto rec : rectangles){
            if(rec[0] < min_x) min_x = rec[0];
            if(rec[2] > max_x) max_x = rec[2];
            if(rec[1] < min_y) min_y = rec[1];
            if(rec[3] > max_y) max_y = rec[3];
      }
      int ans = 0 ; 
      for(int x = min_x; x < max_x; x ++){
            for(int y = min_y ; y < max_y; y ++){
                  ans += checkCovered(rectangles, x, y);
                  cout << "ans "<< ans << " x : "<< x << " y : "<< y << endl;
            }
      }
      return ans;
}