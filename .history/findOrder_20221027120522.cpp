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
            if(! indegree[i]) learn.push_back(i);
      }
      queue<int> q;
      
      while(q.size()){
            int tmp = q.front();
            q.pop();
            for(int i = 0; i < mp[i].size(); i++){
                  if(indegree[i] == 0){
                        learn.push_back(i);
                        q.push(i);
                  }else{
                        indegree[i] --;
                  }
            }
      }
      for(auto i : learn) cout << i << endl;
      return learn.size() == numCourses ? learn : vector<int> {};
}