#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;



vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      unordered_map<int, vector<int> > mp;
      vector<int> indegree (numCourses, 0);
      vector<int> learn;
      for(int i = 0; i < prerequisites.size(); i++){
            mp[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]] ++;
      }
      for(int i = 0; i < numCourses; i++){
            if(! indegree[prerequisites[i]][1]]) learn.push_back(i);
      }
      for(int i = 0; i < numCourses; i++){
            if(! visited[i]) learn.push_back(i);
      }
      return learn.size() == numCourses ? learn : vector<int> {};
}