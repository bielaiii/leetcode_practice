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
vector<int> reversePrint(ListNode* head) {
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



void dfs_reversePrint(ListNode* head, vector<int> &vec){
    if(head->next == nullptr){
        vec.push_back(head->val);
        return ;
    };
    dfs_reversePrint(head->next, vec);
}

vector<int> reversePrint(ListNode* head) {
    vector<int> vec;
    dfs_reversePrint(head, vec);
    return vec;
}

