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
      vector<int> vec;
      while(temp->next){
            vec.push_back(temp->val);
            temp = temp->next;
      }
      int left = 0, right = vec.size();
      while(left <= right){
            if(vec[left] != vec[right]) return 0;
            left ++;
            right --;
      }
      return 1;

}