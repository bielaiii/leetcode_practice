#include<iostream>
#include<vector>
#include<stack>
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
      stack<int> st1;
      while(temp->next){
            st1.push(temp->val);
            temp = temp->next;
      }
      stack<int> st2;
      for(int i = 0; i < st1.size() / 2; i++){
            st2.push(st1.top());
            st1.pop();
      }
      if(st1.size() != st2.size()){
            st1.pop();
      }
      while(st1.size() && st2.size()){
            if(st1.top() != st2.top()) return 0;
            st1.pop();
            st2.pop();
      }
      return 1;

}