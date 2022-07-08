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
   void push(int x) {
        if(head == 0 && len == 0){
            stackMin = x;
        }
        arr[len] = stackMin;
        len ++;
        arr[len] = x;
        len ++;
        if(x <= stackMin) stackMin = x;
        
        
    }
    
    void pop() {
        cout << len <<endl;
        if(arr[len] > stackMin){
            len -= 2;
        }else{
            stackMin = arr[len - 1];
            len -= 2;
            
        }
        cout << stackMin <<endl;
    }
    int top() {
        cout << len <<endl;
        return arr[ len];
    }
    
    int min() {
        return stackMin;
    }
};
