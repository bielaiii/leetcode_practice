#include "data_structure.h"
#include "header.h"
#include <memory>

using namespace std;

ListNode* removeNodes(ListNode* head) {
    if (!head->next) {
        return head;
    }
    head->next = removeNodes(head->next);
    if (head->val < head->next->val) {
        return head->next;
    } else {
        return head;
    }
    return head;
}