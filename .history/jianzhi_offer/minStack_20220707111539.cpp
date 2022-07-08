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
    
    void push(int x) {
        arr[len] = x;
        len ++;
        if(x < stackMin) stackMin = x;
    }
    
    void pop() {
        if(arr[len] > stackMin){
            len --;
        }else{
            
        }
    }
    
    int top() {
        return arr[head + len];
    }
    
    int min() {

    }
};