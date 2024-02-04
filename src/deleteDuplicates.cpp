#include "data_structure.h"
#include <iostream>
using namespace std;

namespace A {

ListNode* deleteDuplicates(ListNode* head)
{
    if (!head || !head->next) {
        return head;
    }
    if (head->val != head->next->val) {
        head->next = deleteDuplicates(head->next);
    } else {
        ListNode* nextOne = head->next;
        while (nextOne && head->val == nextOne->val) {
            nextOne = nextOne->next;
        }
        return deleteDuplicates(nextOne);
    }
    return head;
}
};

namespace B {
ListNode* deleteDuplicates(ListNode* head)
{
    if (!head || !head->next) {
        return head;
    }
    if (head->val != head->next->val) {
        head->next = deleteDuplicates(head->next);
    } else {
        ListNode *nextOne = head->next;
        while (nextOne && nextOne->val == head->val) {
            nextOne = nextOne->next;
        }
        head->next = deleteDuplicates(nextOne);
        return head;
    }
    return head;
}
}