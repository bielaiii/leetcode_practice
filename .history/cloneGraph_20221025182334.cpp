#include<iostream>
#include<vector>
#include<queue>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


void cloneGraph_r(Node * node, vector<bool> visited, queue<Node *> &q ){
      if(! q) return ;
      for()
}


Node* cloneGraph(Node* node) {
      queue<Node *> q;
      
}
