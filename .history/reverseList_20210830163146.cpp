#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * recur_reverse(ListNode * temp, ListNode* myhead){
    if(myhead->next != nullptr){
        temp->next = recur_reverse(temp->next, myhead->next);
    }
    else{
        return myhead;
    }
    return temp;
}

ListNode* reverseList(ListNode* head) {
    ListNode * ret = new ListNode();
    ret = recur_reverse(ret, head);
    return ret;
}