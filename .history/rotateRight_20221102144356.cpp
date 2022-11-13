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
      while(tail->next ){
            tail = tail->next;
      }
      tail->next = head;
      int left = 0, right = k;
      for(int i = 0 ; i < k; i ++){
            temp = temp->next;
            if(temp == nullptr) temp = head;
      }
      head = temp->next;
      while(temp->next != head) temp =temp->next;
      temp->next = nullptr;
      return head;
}