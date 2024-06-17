#include "header.h"
#include "printer.h"
#include <iostream>
#include <queue>
#include <ranges>
#include <vector>
using namespace std;
#include "LFUCache.h"

static void printNode(ListNode* head) {
    auto ret = head;
    while (ret) {
        cout << ret->val << (ret->next ? " -> " : "\n");
        ret = ret->next;
    }
    cout << "\n";
}

int main(void) {
    vector<vector<int>> matrix{{1,5,9,},
                               {10, 11, 13},
                               {12, 13, 15}};
    cout << kthSmallest(matrix, 8) << "\n";

    return 0;
}