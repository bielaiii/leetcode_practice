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
        head = head->next;
        head = head->next;
   }
   head = start;
   while(head != nullptr){
       Node  *ran = head->random;
       if(ran!= nullptr){
           head->next->random = ran->next;
       }else{
           head->next->random = nullptr;
       }
        head = head->next; 
        head = head->next; 
   }
   head = start;
   Node * ret = head->next;
   head = start->next;
   while(head != start){
        head = head->next;
        head = head->next;
        ret->next = head;
   }
   return ret;
}