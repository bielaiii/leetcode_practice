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
       if(!head){
            Node * temp = new Node(insertVal);
            temp->next = temp;
            return temp;
        }else if(!head->next){
            Node *temp = new Node(insertVal, head);
            head->next = temp;
            return head;
        }
        Node *temp = head;
        temp = temp->next;
        while(temp->val >= insertVal && temp != head){
            temp = temp->next;
        }
        if(temp != head){
            Node *temp_node = new Node (insertVal, temp->next);
            temp->next = temp_node;
        }else{
            Node *temp_node = new Node(insertVal);
            temp_node->next = head;
            temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = temp_node;
        }
        
        return head;
    }
};