#include<iostream>
#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/* vector<int> reversePrint(ListNode* head) {
    stack<int> st;
    while(head != NULL){
        st.push(head->val);
        head = head->next;
    }
    vector<int> vec;
    while(! st.empty()){
        vec.push_back(st.top());
        st.pop();
    }
    return vec;
}

 */
/* 
int dfs_reversePrint(ListNode* head, vector<int> &vec){
    if(head->next == nullptr){
        //vec.push_back(head->val);
        return head->val;
    };
    vec.push_back(dfs_reversePrint(head->next, vec));
    return head->val;
}

vector<int> reversePrint(ListNode* head) {
    if(head == nullptr) return {};
    vector<int> vec;
    dfs_reversePrint(head, vec);
    vec.push_back(head->val);
    return vec;
}

 */