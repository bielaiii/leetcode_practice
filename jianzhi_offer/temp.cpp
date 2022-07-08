#include<iostream>
#include<vector>
#include"minStack.cpp"

using namespace std;

int main(){
    MinStack st1 = MinStack();
    st1.push(-2);
    st1.push(0);
    st1.push(-3);
    cout << st1.top() << endl; st1.pop();
    cout << st1.top() << endl; st1.pop();
    cout << st1.top() << endl; st1.pop();
    return 0;
}