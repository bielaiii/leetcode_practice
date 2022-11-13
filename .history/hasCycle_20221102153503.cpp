#include<iostream>
#include<vector>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 

    bool hasCycle(ListNode *head) {
      if(! head )return 0;
        ListNode * tmp = head;
        while(tmp )
    }
