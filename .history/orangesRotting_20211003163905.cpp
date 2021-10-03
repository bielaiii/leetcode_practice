#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;

const int dir[4][2]{{1,0},{-1,0},{0,1},{0,-1}};

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

int orangesRotting(vector<vector<int>>& grid) {
    int max_c = grid.size(), max_r=grid[0].size();
    int c = 0, r = 0;
    //vector<vector<int>> answer;
    //priority_queue<pair<int,int>> pq;
     queue<pair<int,int>> q;
    //pq.push(make_pair(1,1));
    for(int t=0;t < max_c; t++){
        for(int e =0; e< max_r; e++){
            if(grid[t][e] == 2){
                q.push(make_pair(t,e));
            }
        }
    }
    while(!q.empty()){
        pair<int,int> taker = q.top();
        q.pop();
        
    }
    return mat;
}