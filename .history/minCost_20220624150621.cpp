#include<iostream>
#include<vector>
using namespace std;


int minCost(vector<vector<int>>& costs) {
      int ans = 0;
      int paint = 0;
      int start = costs[0][0];
      for(int i = 0; i < 3; i++){
            if(costs[0][i] < start){
                  start = costs[0][i];
                  paint = i ;
            }
      }
     // cout << start <<endl;
      for(int i = 1; i < costs.size(); i ++){
            int temp = 0;
            if(costs[i][(paint + 1) % 3] < costs[i][(paint + 2) % 3]){
                  paint = (paint + 1) % 3;
            }else{
                  paint = (paint + 2) % 3;
            }
            start += costs[i][paint];
      }      
      return start;  
}