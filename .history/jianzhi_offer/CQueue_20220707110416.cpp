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
        while(!st1.empty()){
            if(st1.size() == 1){

            }else{
                st2.push(st1.top());
                st1.pop();
            }
        }
        st1 = st2;
        while(!st2.empty()) st2.pop();
    }
};
