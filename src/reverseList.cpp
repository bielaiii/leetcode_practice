#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * recur_reverse(ListNode * head, ListNode * temp){
    if(!head) return temp;
    ListNode * node = new ListNode(head->val);
    node->next = temp->next;
    temp->next = node;
    return recur_reverse(head->next, temp);
}

ListNode* reverseList(ListNode* head) {
    ListNode * temp = new ListNode();
    return recur_reverse(head, temp)->next;;
}