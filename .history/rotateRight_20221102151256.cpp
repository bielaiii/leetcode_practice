#include<iostream>
#include<vector>
using namespace std;

/**
 * Definition for singly-linked list.
 */

   
struct ListNode {
      int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* rotateRight(ListNode* head, int k) {
     if(! head || ! head->next || !k) return head;
      ListNode * temp = head;
      ListNode * tail = head;
      int sz = 1;
      while(tail->next ){
            tail = tail->next;
            sz ++;
      }
      k %= sz;
      if(! k) return head;
      tail->next = head;
      for(int i = 0 ; i < sz - k; i ++)
            temp = temp->next;
      tail = temp;
      head = temp->next;
      tail->next = nullptr;
      return head;
}