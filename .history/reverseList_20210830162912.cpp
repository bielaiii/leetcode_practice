#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * recur_reverse(ListNode * temp){
    if(temp->next != nullptr){
        return temp;
    }
    temp->next = recur_reverse(temp->next);
    return temp;
}

ListNode* reverseList(ListNode* head) {
    ListNode * ret = new ListNode();
    recur_reverse(ret);
    return ret;
}