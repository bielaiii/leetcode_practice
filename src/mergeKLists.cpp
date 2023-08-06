#include<iostream>
#include"data_structure.h"
#include<vector>
using namespace std;

ListNode *mergerTwo(ListNode *a, ListNode *b) {
    if (!a) {
        return b;
    } else if (!b) {
        return a;
    }
    ListNode temp(0);
    ListNode *head = &temp;
    ListNode *tempa = a;
    ListNode *tempb = b;
    while (tempa && tempb) {
        if (tempa->val >= tempb->val) {
            head->next = tempa;
            tempa = tempa->next;
        } else {
            head->next = tempb;
            tempb = tempb->next;
        }
        head = head->next;
    }
    if (tempa) {
        head->next = tempa;
    } else if (tempb) {
        head->next = tempb;
    }
    return temp.next;
}

ListNode *merge(int l, int r, vector<ListNode*> &temp) {
    if (l == r) return temp[l];
    if (l > r) return nullptr;
    int mid = (r - l) / 2 + l;
    return mergerTwo(merge(l, mid, temp), merge(mid, r, temp));
}


ListNode* mergeKLists(vector<ListNode*>& lists) {
    return merge(0, lists.size() - 1, lists);
}