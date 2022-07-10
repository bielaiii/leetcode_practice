#include<vector>
#include<iostream>
#include<unordered_map>
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
    Node * start = head;
    while(head != nullptr){
        Node * temp = new Node(head->val);
        temp->next = head->next;
        head->next = temp;
        head = head->next->next;
    }
    head = start;
    while(head != nullptr){
    //   Node  *ran = head->random;
        if(head->random != nullptr){
            head->next->random = ran->random->next;
        }
        head = head->next->next; 
    }
    head = start;
    Node * ret     = head->next;
    Node * retNode = head->next;
    //head = head->next;

    while(head->next != nullptr){
        ret->next = head->next->next;
        head->next = head->next->next;
        ret = ret->next;
        head = head->next;
        
    }
    return retNode;
}