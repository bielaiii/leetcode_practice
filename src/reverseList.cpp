#include <iostream>
#include "data_structure.h"
using namespace std;



ListNode* reverseList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode *temp = reverseList(head->next);
    head->next->next = temp;
    head->next = nullptr;

    return temp;
}