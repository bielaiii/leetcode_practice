#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
      queue< vector<int> > q;
      queue<int> distance;
      vector<bool> visited (n, 0);
      //visited[0] = 1;
      int ct = 0;
      for(int i = 0; i < n; i++){
            if(edges[i][0] == 0){
                  q.push(edges[i]);
                  distance.push(maxMoves);
                  visited[i] = 1;
            }
      }
      
      return ct;
}