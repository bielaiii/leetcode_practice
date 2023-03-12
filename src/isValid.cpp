#include<stack>
#include<iostream>
using namespace std;


bool isValid(string s){
    stack<char> stack_;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            stack_.push(s[i]);
        }else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(stack_.top() == '(' && s[i] == ')'){
                 stack_.pop();
                 continue;
            }else if(stack_.top() == '[' && s[i] == ']'){
                 stack_.pop();
                 continue;
            }else if(stack_.top() == '{' && s[i] == '}'){
                 stack_.pop();
                 continue;
            }else{
                return 0;
            }
                
        }
    }
    return stack_.empty()? 1: 0;
}