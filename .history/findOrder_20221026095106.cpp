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

void traversal_findOrder(Node * root, vector<bool> & visited, vector<int> & vec){
      if(! root) return ;
      for(int i = 0; i < root->upper.size(); i++){
            if(! visited[root->upper[i]->course]){
                  vec.push_back(root->upper[i]->course);
                  visited[root->upper[i]->course] = 1;
                  traversal_findOrder(root->upper[i],  visited, vec);
            }
      }
}


vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      vector<Node *> courses (numCourses, nullptr);

      for(int i = 0; i < numCourses; i++){
            Node * tmp = new Node(i, {});
            courses[i] = tmp;
      }
      for(int i = 0 ; i < prerequisites.size(); i++){
            courses[prerequisites[i][1]]->upper.push_back(courses[prerequisites[i][0]]);
      }
      vector<int> learn;
      vector<bool> visited(numCourses, 0);
      traversal_findOrder(courses[0],  visited, learn);
      return learn.size() == numCourses ? learn : vector<int> {};
}