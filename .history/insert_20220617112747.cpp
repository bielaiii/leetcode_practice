#include<iostream>
#include<vector>
using namespace std;
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
       Node *temp_node = new Node(insertVal);
        Node * start = head;
        start = start->next;
       while(start != head){
            if(start->val < insertVal && insertVal <  start->next->val){
                
            }
            start = start->next;
       }
    }
};