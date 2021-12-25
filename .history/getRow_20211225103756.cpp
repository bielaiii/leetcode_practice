#include<iostream>
#include<vector>
using namespace std;

vector<int> getRow(int numRows){
    vector<vector<int>> ans = {{1}, {1,1}};
   // vector<int> one = {1};
  //  ans.push_back(one);
    for(int r = 2; r < numRows; r++){
        vector<int> temp {1};
        for(int j = 0; j < r - 1; j++){
            temp.push_back(ans.back()[j] + ans.back()[j+1]);
        }
        temp.push_back(1);
        ans.push_back(temp);
    }
    
    return ans[numRows - 1];
}