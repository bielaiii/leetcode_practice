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

void create_Node(Node * node, unordered_set<Node *> & st){
      if(! node) return;
      Node * cur = nullptr;
      for(auto tp : st){
            if(tp->val == node->val){
                  cur = tp;
                  break;
            }
      }

      for(auto it : node->neighbors){
            Node * temp = new Node(it->val);
            cur->neighbors.push_back(temp);
            st.emplace(temp);
            create_Node(it, st);
      }

}


Node* cloneGraph(Node* node) {
      unordered_set<Node *> st;
      create_Node(node, st);
      Node * start = new Node(node->val);
      st.emplace(start);
      create_Node(node, st);
      return start; 
}
