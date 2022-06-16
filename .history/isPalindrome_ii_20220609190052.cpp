#include<iostream>
#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


bool isPalindrome(ListNode *head){
    int len  = 0;
    ListNode * temp = head;
    while(temp != nullptr){
        len ++;
        temp = temp->next;
    }
    ListNode *temp1 = head;
    temp = head;
    cout <<
    for(int i = 0; i < len / 2 ; i++){
        temp = temp->next;  
    }
    if(len % 2 ) temp = temp->next;
    while(temp != nullptr){
        if(temp->val != temp1->val) return false;
        temp = temp->next;
        temp1 = temp1->next;
    }
    return 1;
}