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
    Node * retNode = new Node(start->val);
    Node * ret = retNode;
    while(head != nullptr){
        Node * temp = new Node(head->val);
        vec.push_back(temp);
        head = head->next;
    }
    
    for(int i = 0; i < vec.size() ; i++){
      //  retNode * temp  = new Node(c->val);
      //  retNode->next = temp;
        int randint = (rand() % (vec.size() + 1));
        if(randint == vec.size() ){
            vec[i]->random = nullptr;
        }else{
            vec[i]->random = vec[randint];
        }
        if(i < vec.size() - 1){
            vec[i]->next = vec[i+1];
        }
    }
    return retNode;
}