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
        if(!head){
            //Node *temp_node = new Node(insertVal);
            temp_node->next = temp_node;
            return temp_node;
        }else if(head->next == head){
            head->next = temp_node;
            temp_node->next = head;
            return head;
        }
       
        Node * start = head;
        start = start->next;
        int min_= INT16_MAX;
        int max_= INT16_MIN;
        Node* min_node;
        Node* max_node;
       while(start != head){
            if(start->val < insertVal && insertVal <  start->next->val){
                break;
            }
            if(min_ > start->val){
                min_ = start->val;
                min_node = start;
            }else if(max_ < start->val){
                max_ = start->val;
                max_node = start;
            }
           // min_ = min(min_, start->val);
           // max_ = max(max_, start->val);
            start = start->next;
       }
       if(start->val < insertVal && insertVal <  start->next->val){
            temp_node->next = start->next;
            start->next = temp_node->next;
        }else{
            max_node->next = temp_node;
            temp_node->next = min_node;
        }
        return head;
    }
};