#include<vector>
#include<iostream>
using namespace std;

class MinStack {
private:
    int arr[40000];
    int head ;
    int len ;
    int stackMin = 0;
public:
    /** initialize your data structure here. */
    MinStack() {
        head = 0;
        len = 0;
    }
    // minVal - insertVal--
    void push(int x) {
        if(head == 0 && len == 0){
            stackMin = x;
            arr[len] = x;
            len ++;
            arr[len] = x;
        }else{
            arr[len] = stackMin;
            len ++;
            arr[len] = x;
            len ++;
            if(x < stackMin) stackMin = x;
        }
        
    }
    
    void pop() {
        if(arr[len] > stackMin){
            len -= 2;
        }else{
            len --;
            stackMin = arr[len];
            len --;
        }
    }
    
    int top() {
        return arr[head + 2* len + 1];
    }
    
    int min() {
        return stackMin;
    }
};