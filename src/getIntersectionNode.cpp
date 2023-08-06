#include <cstddef>
#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (headA == nullptr || headB == nullptr) return nullptr;
    ListNode *head1 = headA;
    ListNode *head2 = headB;
    while (head1 != head2) {
        if (head1 == nullptr) {
            head1 = headB;
        }
        if (head2 == nullptr) {
            head2 = headA;
        }
    }
    return head1;
}