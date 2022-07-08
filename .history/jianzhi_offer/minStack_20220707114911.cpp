#include<vector>
#include<iostream>
using namespace std;

class MinStack {
private:
    int arr[40000];
    int head ;
    int tail = 0;
    int stackMin = 0;
public:
    /** initialize your data structure here. */
    MinStack() {
        head = 0;
        tail = 0;
    }
   void push(const int x) {
        if(head == 0 && tail == 0){
            stackMin = x;
        }
        arr[tail] = stackMin;
        tail ++;
        arr[tail] = x;
        tail ++;
        if(x <= stackMin) stackMin = x;
        
        
    }
    
    void pop() {
        if(arr[tail - 1] > stackMin){
            tail -= 3;
        }else{
            stackMin = arr[tail - 2];
            tail -= 3;
            
        }
       
    }
    int top() {
        
        return arr[tail];
    }
    
    int min() {
        return stackMin;
    }
};
