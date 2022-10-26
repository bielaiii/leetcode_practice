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

Node * find_Node(Node * node, unordered_set<Node *> & st){
      auto it = st.begin();
      while(it != st.end() && (*it)->val != node->val){
            it++;
      }
      if(it == st.end()){
            Node * tp = new Node(node->val);
            st.emplace(tp);
            return tp;
      }else{
            return *it;
      }
}

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
            Node * temp = find_Node(it, st);
            cur->neighbors.push_back(temp);
            st.emplace(temp);
            create_Node(it, st);
      }
}


vector<Node *> vec = vector<Node *> (101, nullptr);
Node* cloneGraph(Node* node) {
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
