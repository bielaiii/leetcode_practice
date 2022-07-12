#include<iostream>
#include<vector>
using namespace std;

 int oddCells(int m, int n, vector<vector<int>>& indices){
    vector<int> hori (n, 0);
    vector<int> ver (m , 0);
    for(vector<int> temp : indices){
        ver[temp[0]] ++;
        hori[temp[1]] ++;
    }
    int sum = 0;
    for(int r = 0; r < m; r++){
        for(int c = 0; c < n; c++){
            if((ver[c] + hori[r]) & 1 == 0 ) sum ++;
        }
    }
    return sum;
 }