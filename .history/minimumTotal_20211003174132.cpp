#include<iostream>
#include<vector>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
    if(triangle.size() == 1) return triangle[0][0];
    int arr[triangle[triangle.size()-1].size()];
    for(int r = 0; r < triangle[triangle.size()-1].size()){
        arr[r] = triangle[r];
    }
    for(int c = triangle.size() - 1; c >= 0; c--){

    }
}