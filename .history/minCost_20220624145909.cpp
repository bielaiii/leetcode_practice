#include<iostream>
#include<vector>
using namespace std;


int minCost(vector<vector<int>>& costs) {
      int ans = 0;
      int paint = 0;
      int start = INT16_MAX;
      for(; paint < 3; paint++){
            if(costs[0][paint] < start){
                  start = costs[0][paint];
                  paint ++;
            }
      }
      cout << start <<endl;
      for(int i = 1; i < costs.size(); i ++){
            int temp = 0;
          //  start += min(costs[i][(paint + 1) % 3],costs[i][(paint + 2) % 3] );
            if(costs[i][(paint + 1) % 3] < costs[i][(paint + 2) % 3]){
                  paint = (paint + 1) % 3;
            }else{
                  paint = (paint + 2) % 3;
            }
            start += costs[i][paint];
      }      
      return start;  
}