#include<iostream>
 #include<random>
using namespace std;

/**
 * Definition for singly-linked list.
 * */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 


class Solution {
public:
    ListNode * start;
    
      Solution(ListNode* head) {
            start = head;
            srand(time(nullptr));
      }
    
      int getRandom() { 
            int i = 1;
            ListNode * temp = start;
            int ans = 0;
            while(temp != nullptr){
                  if(rand() % i == 0){
                        ans = temp->val;
                  }
                  temp = temp->next;
                  ++ i;
            }
            return ans;
      }
};