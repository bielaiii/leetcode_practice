#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 

    bool hasCycle(ListNode *head) {
      
      if(! head )return 0;
      unordered_set<ListNode *> st;
      st.insert(head);
        ListNode * tmp = head;
        while(tmp->next ) {
            tmp = tmp->next;
            if(st.find(tmp) != st.end()){
                  return 0;
            }else{
                  st.insert(tmp);
            }
        }
      return 1;
    }
