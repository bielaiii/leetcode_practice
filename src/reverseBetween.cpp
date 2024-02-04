#include "data_structure.h"
#include <iostream>
using namespace std;
static ListNode* rec(ListNode* head)
{
    if (head->next == nullptr) {
        return head;
    }
    ListNode* temp = rec(head->next);
    temp->next = head;
    return temp;
}
ListNode* reverseBetween(ListNode* head, int left, int right)
{

    ListNode* start = head;
    int i = 0;
    while (head && i < left - 1) {
        head = head->next;
        i++;
    }
    ListNode* tail = head->next;
    while (tail && i < right) {
        i++;
        tail = tail->next;
    }
    ListNode *temp = rec( head);
    head->next = temp;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = tail;
    return start;
}