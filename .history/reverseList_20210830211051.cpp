#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * recur_list(ListNode* ret, ListNode* temp){
    if(temp == nullptr) return ret;
    ListNode * node = temp;
    temp->next = ret->next;
    ret->next = temp;
    return recur_list(ret, temp->next);
}

ListNode* reverseList(ListNode* head) {
    return recur_list(nullptr, head);
}