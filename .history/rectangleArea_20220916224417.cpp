#include<iostream>
#include<vector>
using namespace std;

bool checkCovered(const vector<vector<int> > & rectangles, int x, int y){
      for(auto rec : rectangles){
            if(rec[0] <= x && x < rec[2] && rec[1] <= y && y < rec[3]){
                  return true;
            }
      }
      return false;
}


int getMaxHeight(const vector<vector<int>>& rectangles, int x){
      int h = 0;
      for(auto vec : rectangles){
            if(vec[0] <= x && x < vec[2] ){
                  h = max(h, vec[3]);
            }
      }
      return h;
}

int rectangleArea(vector<vector<int>>& rectangles){
      const int mod = 1e9 + 7;
      vector<int> vec ;
      int ans = 0;
      for(auto rec : rectangles){
            vec.push_back(rec[0]);
            vec.push_back(rec[2]);
      }
      sort(vec.begin(), vec.end());
      for(int i = 1 ; i < vec.size(); i++){
            int l = vec[i -1], r = vec[i ];
            if(l == r) continue;
            vector< pair<int , int> > pr;
            int res = 0 ;
            for(auto rec : rectangles){
                  if(rec[0] <= l && vec[2] > r) pr.push_back({rec[0], rec[2]});
            }
      }
      return ans % mod;
}



/* int rectangleArea(vector<vector<int>>& rectangles) {
      const int mod = (int) 1e9 + 7;
      if(rectangles.size() == 1){
            return ((rectangles[0][2] - rectangles[0][0]) % mod ) * ((rectangles[0][3] - rectangles[0][1]) % mod);
      }
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
                  //cout << "ans "<< ans << " x : "<< x << " y : "<< y << endl;
            }
      }
      
      return ans % mod;
} */