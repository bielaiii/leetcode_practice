#include<iostream>
#include<vector>
using namespace std;
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
       if(!head){
            Node * temp = new Node(insertVal);
            temp->next = temp;
            return temp;
        }else{
            Node *temp = head;
            vector<Node *> vec;
            while(temp->next != head ){
                vec.emplace(temp);
                temp = temp->next;
            }
            int i = 0;
            for(int i = 0;i < vec.size(); i++){
                if(vec[i]->val < insertVal && insertVal <= vec[(i+1) % vec.size()]->val){
                    break;
                }
            }
            Node *temp_node = new Node(insertVal);
            temp->next = vec[(i+1)%vec.size()];
            vec[i]->next = temp;
        }
        
        return head;
    }
};