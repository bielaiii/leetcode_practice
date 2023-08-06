#include<iostream>
#include "data_structure.h"
using namespace std;

ListNode* getKthFromEnd(ListNode* head, int k) {
    ListNode *start = head;
    ListNode *end = head;
    for (int i = 0; i < k; i++) {
        end = end->next;
    }
    while (end) {
        start = start->next;
        end = end->next;
    }
    return start;
}