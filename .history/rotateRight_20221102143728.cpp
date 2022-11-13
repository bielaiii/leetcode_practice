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
            if(temp == nullptr) temp = head;
      }
      ListNode * right = temp->next;
      temp->next = nullptr;
      if(! right ) right = head;
      ListNode * right_c = right;
      while(right->next != nullptr) right = right->next;
      if(! right){
            right->next = head;
            head = right_c;
      }
      return head;
}