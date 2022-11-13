#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome2(ListNode* head) {
      int sz = 0;
      ListNode * temp = head;
      while(temp->next){
            temp = temp->next;
            sz ++;
      }
      temp = head;
      ListNode * slow =head;
      ListNode * nex = head;
      sz /= 2;
      while(temp && temp->next){
            temp = temp->next->next;
            head = slow;
            head->next = slow
            slow = slow->next;
      }
      temp = slow->next;
      while
      return temp->val == slow->val;

}