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

struct coor
{
    /* data */
    coor(int a, int b): c(a), r(b){}
    int c,r;
};
template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
        for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d][f] << " ";
        }
        cout << endl;
    }
    cout << "------------------"<<endl;
}

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int max_c = mat.size(), max_r=mat[0].size();
    int c = 0, r = 0;
    vector<vector<int>> answer;
    priority_queue<pair<int,int>> pq;
    queue<coor> q;
    //pq.push(make_pair(1,1));
    for(int t=0;t < max_c; t++){
        for(int e =0; e< max_r; e++){
            if(!mat[t][e]){
                coor coor_1(t,e);
                q.push(coor_1);
            }
        }
    }
    cout <<"hello"<<endl;
    while(!pq.empty()){
        coor taker = q.pop();
        
        if(taker.c >= 0 ){
            coor coor_temp(taker.first+1, taker.second);
            q.push(coor_temp);
            mat[taker.first+1][taker.second] = 2;
        } 
        if(taker.c < mat.size()){
            coor coor_temp(taker.first-1, taker.second);
            q.push(coor_temp);
            mat[taker.first-1][taker.second] = 2;
        } 
        if(taker.r >= 0){
            coor coor_temp(taker.first, taker.second+1);
            q.push(coor_temp);
            mat[taker.first][taker.second+1] = 2;
        } 
        if(taker.r <= mat[0].size()){
            coor coor_temp(taker.first, taker.second-1);
            q.push(coor_temp);
            mat[taker.first][taker.second-1] = 2;
        } 
        printer(mat);
    }
   
    return mat;
} 