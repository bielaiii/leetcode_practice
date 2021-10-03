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
    queue<pair<int,int>> q;

    for(int c =0; c< mat.size(); c++){
        for(int r =0; r< mat[0].size(); r++){
            if(!mat[c][r]) q.push(make_pair(c,r));
        }
    }
    int visited[mat.size()][mat[0].size()] = {0};
    vector<vector<int>> ans (mat.size(), vector<int>(mat[0].size(),0));
    while (!q.empty())
    {
        pair<int,int> temp_node = q.front();
        q.pop();
        int temp_c = temp_node.first;
        int temp_r = temp_node.second;
        if(mat[temp_c][temp_r] == 0){
            visited[temp_c][temp_r] = 1;
            continue;
        }
        if(temp_c >= 0 ){
            if(mat[temp_c+1][temp_r]) ans[temp_c+1][temp_r] += ans[temp_c][temp_r];
            if(visited[temp_c+1][temp_r]) continue;
            q.push(make_pair(temp_c+1, temp_r));
            visited[temp_c+1][temp_r] = 2;
        } 
        if(temp_c < mat.size()){
            if(mat[temp_c+1][temp_r]) ans[temp_c-1][temp_r] += ans[temp_c][temp_r];
            if(visited[temp_c-1][temp_r]) continue;
            q.push(make_pair(temp_c-1, temp_r));
            visited[temp_c-1][temp_r] = 2;
        } 
        if(temp_r >= 0){
            if(mat[temp_c+1][temp_r]) ans[temp_c][temp_r+1] += ans[temp_c][temp_r];
            if(visited[temp_c][temp_r+1]) continue;
            q.push(make_pair(temp_c, temp_r+1));
            visited[temp_c][temp_r+1] = 2;
        } 
        if(temp_r <= mat[0].size()){
            if(mat[temp_c+1][temp_r]) ans[temp_c+1][temp_r-1] += ans[temp_c][temp_r];
            if(visited[temp_c][temp_r-1]) continue;
            q.push(make_pair(temp_c, temp_r-1));
            visited[temp_c][temp_r-1] = 2;
        }
        /* code */
    }
    return ans;
} 
