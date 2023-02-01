#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
     int val;
     struct ListNode *next;
 };


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2)
{
      ListNode * temp = list1;
      ListNode * tail = list2;
      while(tail->next != nullptr){
            tail = tail->next;
      }
      int ct = 0;
      while(temp->next != nullptr){
            if(ct == a-1){
                  tail->next = temp->next;
                  temp->next = list2;
                  temp = tail;
            }else if(ct == b){
                  tail->next = temp->next;
                  break;
            }
            ct++;
            temp = temp->next;
      }
      return list1;
}