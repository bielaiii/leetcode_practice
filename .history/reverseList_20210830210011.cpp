#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode * ret;
    ListNode * temp = head;
    ListNode * ptr = nullptr;
    while(temp != nullptr){
        ret->next = head->next;
        head->next = ret;
        temp = temp->next;
    }
    
    return ret->next;
}