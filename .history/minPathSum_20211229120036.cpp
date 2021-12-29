#include<iostream>
#include<vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int c = grid.size() -1 ;
    int r = grid[0].size() - 1;
    int sum = grid[c][r];
    while(c > 0 && r > 0){
        int a = c > 0 ? grid[c-1][r] : 0;
        int b = r > 0 ? grid[c][r-1] : 0;
        if(a > b){
            c--;
        }else{
            r --;
        }
        sum += min(a,b);
    }
    return sum;
}