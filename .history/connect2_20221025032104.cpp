#include<iostream>
#include<vector>
#include<queue>
#include<vector>
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
      if(!root) return root;
      q.push(root);
      root->next = nullptr;
      Node * prev = nullptr;
      while(q.size()){
            int sz = q.size();
            Node * temp = nullptr;
            for(int i = 0; i < sz; i++){
                  temp = q.front();
                  q.pop();
                  temp->next = q.front();
                  if(temp->left) q.push(temp->left);
                  if(temp->right) q.push(temp->right);
            }
            temp->next = nullptr;
      }
      return root;
}