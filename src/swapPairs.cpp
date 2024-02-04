#include "data_structure.h"
#include <iostream>

static ListNode* rec(ListNode **node){
    if (*node == nullptr || (*node)->next ==nullptr) {
        return *node;
    }
    ListNode *nextOne = (*node)->next;
    if (nextOne == nullptr) return nextOne;
    ListNode *para = (*node)->next->next;
    nextOne->next = *node;
    (*node)->next = rec(&para);
    return nextOne;
    
}

ListNode* swapPairs(ListNode* head)
{
    return rec(&head);
}