#include<vector>
#include<iostream>
using namespace std;

class MinStack {
private:
    int arr[40000];
    int tail = 0;
    int stackMin = 0;
public:
    /** initialize your data structure here. */
    MinStack() {
        tail = 0;
    }
   void push(const int x) {
        if( tail == 0){
            stackMin = x;
        }
        arr[tail] = stackMin;
        tail ++;
        arr[tail] = x;
        tail ++;
        if(x <= stackMin) stackMin = x;
       // cout << "push " << tail  <<endl;
        
    }
    
    void pop() {
        if(arr[tail - 1] > stackMin){
            tail -= 2;
        }else{
            stackMin = arr[tail - 2];
            tail -= 2;
        }
      // cout << "tail "<< tail <<endl;
    }
    int top() {
        
        return arr[tail];
    }
    
    int min() {
        return stackMin;
    }
};
