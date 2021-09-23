#include <iostream>
using namespace std;

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

void recurConnect(Node* temp){
    if(temp == nullptr || temp->left == nullptr){
        return ;
    }
    temp->left->next = temp->right;
    if(temp->next)
        temp->right->next = temp->next->left;
    recurConnect(temp->left);
    recurConnect(temp->right);//asjdkhkjsafhkjsah
}


Node* connect(Node* root) {
    recurConnect(root);
    return root;
}
