#include <cstddef>
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};




void reorderList(ListNode* head) {
    if (!head || !head->next || !head->next->next) {
        return;
    }

    ListNode * temp = head;
    ListNode * pre;
    while (temp->next) {
        pre = temp;
        temp = temp->next;
    }
    
    pre->next = head->next;
    head->next = pre;
    temp->next = nullptr;
    reorderList(head->next->next);
}