#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
#include<utility>
using namespace std;


 void recur(vector<vector<int>>& mat, int c, int r, int before_c, int before_r, int max_c, int max_r, vector<vector<int>>& vec){
    //cout << c << " " << r << endl;
    
    
    if(c < 0 || c >= max_c) return;
    if(r < 0 || r >= max_r) return;
    
    if(!mat[c][r] && !mat[before_c][before_r]){
        vec[c][r] = 0;
    }else{
        vec[c][r] = vec[before_c][before_r] + 1;
    }
    recur(mat, c+1, r, c, r, max_c, max_r, vec);
    recur(mat, c, r+1, c, r, max_c, max_r, vec);
    recur(mat, c-1, r, c, r, max_c, max_r, vec);
    recur(mat, c, r-1, c, r, max_c, max_r, vec);
    
    cout << c << " " << r << endl;
    return ;
} 

