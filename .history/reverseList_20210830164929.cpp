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
    if(myhead->next == nullptr){
        return myhead;
    }
    ListNode * node = new ListNode(0,recur_reverse(temp, myhead->next));
    ListNode* print = node;
    while(print != nullptr){
        cout << print->val << " ";
    }
    cout <<endl;
    return node;
}

ListNode* reverseList(ListNode* head) {
   
    ListNode * ret = new ListNode(0);
    recur_reverse(ret, head);
    return ret->next;
}