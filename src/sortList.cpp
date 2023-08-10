#include <cstddef>
#include <cstdint>
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* merge(ListNode *l, ListNode *r) {
    ListNode * temp = new ListNode(0);
    ListNode * cur = temp;

    while (l->next && r->next) {
        if (l->val < r->val) {
            temp->next = l;
            l = l->next;
        } else {
            temp->next = r;
            r = r->next;
        }
        temp = temp->next;
    }
    if (l ){
        temp->next = l;
    } else if (r ){
        temp->next = r;
    }
    return cur;
}

ListNode* cut(ListNode *head ,int num) {
    ListNode * temp = head;
    while (temp) {
        temp = temp->next;
        num--;
    }
    if (temp->next) return nullptr;

    auto ret = temp->next;
    temp->next = nullptr;
    return ret;

}



ListNode* sortList(ListNode* head) {
    int len = 0;
    ListNode *ct = head;
    while (ct) {
        len++;
        ct = ct->next;
    }
    ListNode *dummy = new ListNode(-32768,head);
    ListNode *temp;
    ListNode *l, *r;
    ListNode *cur = dummy->next;
    for (int i = 1; i < len; i <<= 1) {
        ListNode * cur = dummy->next;
        ListNode * tail = dummy;
        while (cur) {
            l = cur;
            r = cut(l, i);
            cur = cut(r, i);
            tail->next = merge(l, r);
            while (tail) {
                tail = tail->next;
            }
        }
        

        int ct = 0 ;
        for (int j = 0; j < i && cur != nullptr; j++) {

        }

    }
    return dummy->next;;
}