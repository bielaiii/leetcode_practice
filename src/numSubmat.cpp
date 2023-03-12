#include<iostream>
#include<vector>
#include"print_2d_array.cpp"
using namespace std;

int numSubmat(vector<vector<int>>& mat) {
      vector< vector< int> > dp(mat.size(), vector<int> (mat[0].size(), 0));
      for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                  if(j == 0){
                        dp[i][j] = mat[i][j];
                        continue;
                  }
                  if(mat[i][j]){
                        dp[i][j] = dp[i][j-1] + 1;
                  }
            }
      } 
      int ans = 0;
      int mind = INT16_MAX;
      for(int i = 0; i < dp.size(); i++){
            for(int j = 0; j < dp[0].size(); j++){
                  mind = INT16_MAX;
                  for(int k = i; k>= 0; k --){
                        mind = min(mind, dp[k][j]);
                        ans += mind;
                  }
                  
            }
      }
      return ans;
}