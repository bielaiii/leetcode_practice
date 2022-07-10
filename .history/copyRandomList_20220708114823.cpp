#include<vector>
#include<iostream>
using namespace std;


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/


Node* copyRandomList(Node* head) {
   // Node * ret = head;
    vector<Node *> vec;
    Node * start = head;
    while(head != nullptr){
        vec.push_back(head);
        head = head->next;
    }
    Node * retNode = new Node(start->val);
    Node * ret = retNode;
    for(int i = 0; i < vec.size() - 1; i++){
        retNode * temp  = new Node(c->val);
        int rand = (rand() % (vec.size() + 1));
        if(rand == vec.size() ){
            temp->random = nullptr;
        }else{
            temp->random = vec[rand];
        }
        retNode = retNode->next;

    }
    return ret;
}