#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;

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

const int dir[4][2]{{1,0},{-1,0},{0,1},{0,-1}};

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
    int sum = 0;
    while(!q.empty()){
        pair<int,int> taker = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            if(taker.first < 0 || taker.first >= grid.size() || taker.second < 0 || taker.second >= grid[0].size()){
                ;
            }else{
                
                /* if(grid[taker.first + dir[i][0]][taker.second + dir[i][1]] == 1){
                    grid[taker.first + dir[i][0]][taker.second + dir[i][1]] = 2;
                    q.push(make_pair(taker.first + dir[i][0], taker.second + dir[i][1]));
                } */
            }
        }
        sum ++;
    }
    for(int c= 0; c< grid.size(); c++){
        for(int r = 0; r< grid[0].size(); r++){
            if(grid[c][r] == 1) return -1;

        }
    }
    return sum;
}