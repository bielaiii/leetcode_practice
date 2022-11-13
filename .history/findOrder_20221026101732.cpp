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

      vector<int> learn;
      vector<bool> visited(numCourses, 0);
      visited[0] = 1;
      queue<int > q;
      q.push(0);
      while(q.size()){
            
      }

      return learn.size() == numCourses ? learn : vector<int> {};
}