#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;

void recur(vector<vector<int>>& vec,int c, int r, int &n, int former, vector<vector<int>> &visited){
    if(c < 0 || c >= vec.size()) return;
    if(r < 0 || r >= vec[0].size()) return;
    if(visited[c][r]) return;
    //visited[c][r] = 1;
    if(!vec[c][r]) return;
    visited[c][r] = 1;
    if(vec[c][r] ==1 && former == 2) {
        vec[c][r] =2;
        n ++;
        recur(vec, c - 1, r, n,  vec[c][r], visited);
        recur(vec, c + 1, r, n,  vec[c][r], visited);
        recur(vec, c , r + 1, n, vec[c][r],  visited);
        recur(vec, c , r - 1, n, vec[c][r],  visited);
    }

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

/* int orangesRotting(vector<vector<int>>& grid) {
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
    while(!q.empty()){
        coor taker = q.front();
        q.pop();
        int temp_c = taker.c;
        int temp_r = taker.r;
        if(!mat[taker.c][taker.r]) continue;
        if(temp_c >= 0 ){
            coor coor_temp(temp_c+1, temp_r);
            q.push(coor_temp);
            mat[temp_c+1][temp_r] = 2;
        } 
        if(temp_c < mat.size()){
            coor coor_temp(temp_c-1, temp_r);
            q.push(coor_temp);
            mat[temp_c-1][temp_r] = 2;
        } 
        if(temp_r >= 0){
            coor coor_temp(temp_c, temp_r+1);
            q.push(coor_temp);
            mat[temp_c][temp_r+1] = 2;
        } 
        if(temp_r <= mat[0].size()){
            coor coor_temp(temp_c, temp_r-1);
            q.push(coor_temp);
            mat[temp_c][temp_r-1] = 2;
        } 
        printer(mat);
    }
   
    return mat;
}  */