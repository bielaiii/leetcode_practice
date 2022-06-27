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
            int temp[3] = { 0,0,0};
           for(int j = 0; j < 3; j++){
                 temp[j] = min(costs[i][(j+1)%3], costs[i][(j+2)%3] ) + arr[j];
           }
           arr = temp;
      }      
      return min(arr[0], min(arr[1], arr[2]));  
}