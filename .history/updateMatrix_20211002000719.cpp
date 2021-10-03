#include<iostream>
#include<vector>
#include<queue>
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

struct matr
{
    /* data */
    matr(int a, int b, int c){
        x = a;
        y = b;
        dist = c;
    }
    int x,y,dist;
};


vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int max_c = mat.size(), max_r=mat[0].size();
    int c = 0, r = 0;
    queue<matr> q;
    vector<vector<int>> visited(max_c, vector<int>(max_r,0));
    vector<vector<int>> ret(max_c, vector<int>(max_r,0));
    for(int t=0;t < max_c; t++){
        for(int e =0; e< max_r; e++){
            if(!mat[t][e]){
                matr temp_struct(t, e, 0);
                q.push(temp_struct);
            }
        }
    }
    matr taker(0,0,0);
    while(!q.empty()){
        taker = q.front();
        q.pop();
        visited[taker.x][taker.y] = 1;
        matr temp(taker.x, taker.y, 0);
        if(taker.x >= 0){
            q.push(temp.x)
        }

    }
    return answer;
} 