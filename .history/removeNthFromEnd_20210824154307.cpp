#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode * temp = head;
      //cout << head->val <<endl;
      int len = 0;
      int lastN ;
      ListNode * temp_remove = head;
      //(ListNode*)malloc(sizeof(ListNode));
     // temp_remove->val = 999;
      //temp_remove->next  = head;
      if(temp_remove->next == nullptr){
          return nullptr;
      }
      while(temp != nullptr){
            if(len > n  ){
                  temp_remove = temp_remove->next;
                  //cout << temp_remove << endl;
            }
            len ++;
            temp = temp->next;
      }
      /*
      if(temp_remove == head){
          return temp_remove->next;
      }
      */
      temp_remove->next = temp_remove->next->next;
      return head;
}