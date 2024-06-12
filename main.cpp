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

    
    vector<int> vt1{3, 2, 4 ,3};
    int m = 4;
    int n = 2;
    auto ans = missingRolls(vt1, m, n);
    print_1d_array(ans);
    
    vector<int> vt2{1, 5, 6};
    m = 3;
    n = 4;
    ans = missingRolls(vt2, m, n);
    print_1d_array(ans);
    vector<int> vt3{1, 2 , 3, 4};
    m = 6;
    n = 4;
    ans = missingRolls(vt3, m, n);
    
    print_1d_array(ans);

    return 0;
}