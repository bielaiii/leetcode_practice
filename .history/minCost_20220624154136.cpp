#include<iostream>
#include<vector>
using namespace std;


int minCost(vector<vector<int>>& costs) {
      int arr[3];
     // cout << start <<endl;
      for(int i = 0; i < 3; i++){
            arr[i] = costs[0][i];
      }
      for(int i = 1; i < costs.size(); i ++){
           for(int j = 0; j < 3; j++){
                  arr[j].push_back(arr[i-1][j] + min(costs[i][(j+1)%3], costs[i][(j+2)%3] ));
           }
      }      
      return min(arr[0], min(arr[1], arr[2]));  
}