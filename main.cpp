#include "header.h"
#include "printer.h"
#include <iostream>
#include <queue>
#include <ranges>
#include <vector>
using namespace std;
#include"LFUCache.h"


static void printNode(ListNode *head)
{
    auto ret = head;
    while (ret) {
        cout << ret->val << (ret->next ? " -> " : "\n");
        ret = ret->next;
    }
    cout << "\n";
}

int main(void)
{

    ListNode node1(8);
    ListNode node2(3, &node1);
    ListNode node3(13, &node2);
    ListNode node4(2, &node3);
    ListNode node5(5, &node4);
    printNode(&node5);
    auto ret = removeNodes(&node5);
    printNode(ret);
    ListNode node6(1);
    ListNode node7(1, &node6);
    ListNode node8(1, &node7);
    ListNode node9(1, &node8);
    auto ret1 = removeNodes(&node9);
    printNode(ret1);
    return 0;
}