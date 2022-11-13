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
      ListNode * temp = head;
      for(int i = 0 ; i < k; i ++){
            temp = temp->next;
      }
      ListNode * right = temp->next;
      temp->next = nullptr;
      while(temp->next != nullptr) temp = temp->next;
      temp->next = head;
      head = temp;
      return head;
}