#include <cstddef>
#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/* 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
1 -> 2 -> 3 -> 4 -> 5 <- */


ListNode *reverseList(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode *t = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return t;
}

int main() {
    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);
    ListNode node5(5);
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;

    auto t = reverseList(&node1);
    while (t) {
        cout << t->val <<" ";
        t = t->next;
    
    }

    return 0;
}
