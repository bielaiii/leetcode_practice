#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class MyStack {
public:
      queue<int> myq;
      queue<int> qqq;
    MyStack() {
            ;
    }
    
     void push(int x) {
            myq.push(x);
    }
    
    int pop() {
      while(myq.size() > 1){
            qqq.push(myq.front());
            myq.pop();
      }
      int ret = myq.front();
      myq = qqq;
      while(qqq.size()) qqq.pop();
      return ret;
    }
    
    int top() {
      return myq.back();
    }
    
    bool empty() {
      return myq.empty() ;
    }
};