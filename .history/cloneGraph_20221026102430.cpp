#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
#include<algorithm>
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




vector<Node *> vec = vector<Node *> (101, nullptr);
Node* cloneGraph(Node* node) {
      if(! node) return node;
      Node * root = new Node(node->val);
      int sz = node->neighbors.size();
      vec[root->val] = root;
      for(int i = 0; i < sz; i++){
            if(vec[node->neighbors[i]->val]){
                  root->neighbors.push_back(vec[node->neighbors[i]->val]);
            }else{
                 //Node * tmp = new Node(root->neighbors[i]->val);
                 // cloneGraph(tmp);
                  root->neighbors.push_back(cloneGraph(node->neighbors[i]));
            }
      }
      return root; 
}
