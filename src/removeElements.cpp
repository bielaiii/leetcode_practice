#include <iostream>
using namespace std;


// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode * recur(ListNode * node, int value){
    if(node == nullptr) return nullptr;
    if(node->next != nullptr){
        node->next = (recur(node->next, value));
    }
    if(node->val != value){
        return node;
    }else{
        return recur(node->next, value);
    }
}

ListNode* removeElements(ListNode* head, int val) {
    ListNode * ret = recur(head, val);
    return ret;
}
