#include<iostream>
#include<vector>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
    if(triangle.size() == 1) return triangle[0][0];
    int arr[triangle[triangle.size()-1].size()];
    for(int r = 0; r < triangle[triangle.size()-1].size(); r++){
        arr[r] = triangle[triangle.size()-1][r];
    }
    int ans[triangle[triangle.size()-1].size()] = arr;
    for(int c = triangle.size() - 1; c >= 0; c--){
        for(int t = 0; t < triangle[c].size(); t++){
            ans[t] = min(arr[c] + triangle[c][t], arr[c+1] + triangle[c][t]);
        }
        
    }
    return arr[0][0];
}