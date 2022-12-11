#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
      unordered_map<int, int> indegree;
      unordered_map<int, int> outdegree;
      for(auto edge : edges){
            outdegree[edge[0]] ++;
            indegree[edge[1]] ++;
      }
      
}