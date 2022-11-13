#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;



vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      unordered_map<int, vector<int> > mp;
      vector<int> indegree (numCourses, 0);
      vector<int> learn;
      queue<int> q;

      for(auto pre : prerequisites){
            mp[pre[1]].push_back(pre[0]);
            indegree[pre[0]] ++;
      }
      
      for(int i = 0; i < numCourses; i++){
            if(! indegree[i]) q.push(i);
            
      }
      while(q.size()){
            int tmp = q.front();
            q.pop();
            learn.push_back(tmp);
            for(int i = 0; i < mp[tmp].size(); i++){
                  indegree[mp[tmp][i]] --;
                  if(indegree[mp[tmp][i]] == 0){
                        q.push(mp[tmp][i]);
                  }
            }
      }
      return learn.size() == numCourses ? learn : vector<int> {};
}