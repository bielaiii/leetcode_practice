#include<iostream>
#include<vector>
#include<queue>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


Node * rec_connect2(Node * root){
      if(! root) return nullptr;

}

Node* connect(Node* root) {
      queue<Node * > q;
      q.push(root);
      root->next = nullptr;
      Node * prev = nullptr;
      while(q.size()){
            prev = 
            while(q.size()){
                  queue<Node *> tempq;
                  Node * start = q.front();
                  q.pop();
                  start->next = 
                  if(start->left) tempq.push(start->left);
                  if(start->right) tempq.push(start->right);
            }
            q = tempq;
      }
}