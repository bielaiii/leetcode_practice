#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void add(ListNode* l1, ListNode* l2, ListNode * head) {
    if (!l1 && !l2) {
        return ;
    }
    int val1 = l1 ? l1->val : 0;
    int val2 = l2 ? l2->val : 0;
    l1 = l1? l1->next : nullptr;
    l2 = l2? l2->next : nullptr;
    head->val = (val1 + val2 + head->val) % 10;
    if (!l1 && !l2 && head->val / 10 == 0) {
        return;
    }
    head->next = new ListNode((head->val) / 10);
    head = head->next;
    add(l1, l2, head);
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *head = new ListNode(0);
    add(l1, l2, head);
    return head;
}