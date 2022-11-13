#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Node
{
      int course;
      vector<Node *> upper;
      Node(int n):course(n){upper  = {};};
      Node(int n, vector<Node *> vec):course(n), upper(vec){};
      
};



vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      vector<Node *> courses (numCourses, nullptr);
      for(int i = 0; i < numCourses; i++){
            Node * tmp = new Node(i);
            courses[i] = tmp;
      }
      for(int i = 0 ; i < prerequisites.size(); i++){
            courses[prerequisites[i][1]]->upper.push_back(courses[prerequisites[i][0]]);
      }
      vector<int> learn {prerequisites[0][1]};
      vector<bool> visited(numCourses, 0);
      visited[0] = 1;
      queue<int > q;
      q.push(prerequisites[0][1]);
      while(q.size()){
            
            Node * tmp = courses[q.front()];
           // cout << tmp->course <<" visited : " << visited[tmp->course] << endl;
            q.pop();
            for(int i = 0; i < tmp->upper.size(); i++){
                  if(! visited[tmp->upper[i]->course]){
                        q.push(tmp->upper[i]->course);
                        visited[tmp->upper[i]->course] = 1;
                        learn.push_back(tmp->upper[i]->course);
                      //  cout << "size : " << learn.size() << endl;
                  }
            }
      }
      for(int i = 0; i < numCourses; i++){
            if(! visited[i]) learn.push_back(i);
      }
      return learn.size() == numCourses ? learn : vector<int> {};
}