#include <cstddef>
#include<iostream>
#include<vector>
#include"data_structure.h"
using namespace std;

/* struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 */
ListNode* partition(ListNode* head, int x) {
    ListNode *tail = new ListNode(0);
    ListNode * end = tail;
    ListNode * header = new ListNode(0);
    ListNode * start = header;
    while (head) {
        if (head->val >= x) {
            start->next = head;
            start = start->next;
        } else {
            tail->next = head;
            tail = tail->next;
        }
        head = head->next;
    }
    tail->next = header->next;
    start->next = nullptr;
    return end->next;
}