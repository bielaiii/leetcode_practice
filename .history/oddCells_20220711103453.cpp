#include<iostream>
#include<vector>
using namespace std;

 int oddCells(int m, int n, vector<vector<int>>& indices){
    vector<vector<int>> vec(m, vector<int> (n, 0));
    for(vector<int> temp : indices){
        for(int i = 0; i < m; i++) vec[temp[0]][i];
        for(int i = 0; i < n; i++) vec[0][temp[1]];
    }
    
 }