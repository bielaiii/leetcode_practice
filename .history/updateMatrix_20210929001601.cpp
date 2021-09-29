#include<iostream>
#include<vector>
using namespace std;


 void recur(vector<vector<int>>& mat, int c, int r, int before_c, int before_r, int max_c, int max_r, vector<vector<int>>& vec){
    if(c < 0 || c >= max_c) return;
    if(r < 0 || r >= max_r) return;
    if(!mat[c][r] && !mat[before_c][before_r]){
        vec[c][r] = 0;
    }else{
        vec[c][r] = vec[before_c][before_r] + 1;
    }
    
    recur(mat, c+1, r, c, r, max_c, max_r, vec);
    recur(mat, c-1, r, c, r, max_c, max_r, vec);
    recur(mat, c, r+1, c, r, max_c, max_r, vec);
    recur(mat, c, r-1, c, r, max_c, max_r, vec);
} 

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int max_c = mat.size(), max_r=mat[0].size();
    int c = 0, r = 0;
    while(mat[c][r]){
        r ++;
        if(r == max_r){
            r = 0;
            c ++;
        }
        if(c == max_c){
            break;
        }
    }
    
    vector<vector<int>> answer;
    recur(mat, c,  r,c, r, max_c, max_r, answer);
    cout << "hello" <<endl;
    return answer;
}