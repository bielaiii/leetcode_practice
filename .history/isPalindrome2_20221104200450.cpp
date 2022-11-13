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
      sz /= 2;

      for(int i = 0; i < sz; i++){
            temp = temp->next;
      }
      ListNode * slow = head;
      while(temp->next && temp->val == slow->val){
            temp = temp->next;
            slow = slow->next;
      }
      return temp->val == slow->val;

}