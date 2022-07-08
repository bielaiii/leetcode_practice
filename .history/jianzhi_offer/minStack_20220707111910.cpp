#include<vector>
#include<iostream>
using namespace std;

class MinStack {
private:
    int arr[20000];
    int head ;
    int len ;
    int stackMin = INT16_MAX;
public:
    /** initialize your data structure here. */
    MinStack() {
        head = 0;
        len = 0;
    }
    // minVal - insertVal--
    void push(int x) {
        arr[len] = stackMin;
        len ++;
        arr[len] = x;
        len ++;
        if(x < stackMin) stackMin = x;
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
        return arr[2*(head + len)];
    }
    
    int min() {
        return stackMin;
    }
};