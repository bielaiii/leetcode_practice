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

      for(int i = 0; i < prerequisites.size(); i++){
            mp[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]] ++;
      }
      
      for(int i = 0; i < numCourses; i++){
            if(! indegree[i]) q.push(i);
            
      }
      
      //q.push(mp.begin()->first);
      while(q.size()){
            int tmp = q.front();
            q.pop();
            learn.push_back(tmp);
            for(int i = 0; i < mp[tmp].size(); i++){
                  indegree[mp[tmp][i]] --;
                  if(indegree[mp[tmp][i]] == 0){
                        q.push(indegree[mp[tmp][i]]);
                  }
            }
      }
      for(auto i : learn) cout << i << endl;
      return learn.size() == numCourses ? learn : vector<int> {};
}