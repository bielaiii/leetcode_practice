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
    Node * ret = head;
    vector<Node *> vec;
    Node * start = head;
    while(head != nullptr){
        vec.push_back(head);
        head = head->next;
    }
    for(auto c : vec){
        int rand = rand() % (vec.size() + 1);
        if(rand == vec.size() ){
            c->random = nullptr;
        }else{
            c->random = vec[rand];
        }
    }
    return ret;
}