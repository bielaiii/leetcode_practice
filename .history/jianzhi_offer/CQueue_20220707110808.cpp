#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class CQueue {
    private:
    stack<int> st1; //main
    stack<int> st2;
public:
    CQueue() {
        ;
    }
    
    void appendTail(int value) {
        st1.push(value);
    }
    
    int deleteHead() {
        //st2.clear();
        int ans = 0;
        if(st1.empty()) return -1;
        while(!st1.empty()){
            if(st1.size() == 1){
                ans = st1.top();
                st1.pop();
            }else{
                st2.push(st1.top());
                st1.pop();
            }
        }
        st1 = st2;
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return ans;
    }
};
