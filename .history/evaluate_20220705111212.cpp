#include<iostream>
#include<vector>
#include<stack>
#include<map>
using namespace std;

int operation(string){
    int method 
}


int evaluate(string expression){
    map<string, int> mymap;
    stack<string> st;
    int j = 0 ;
    int ans = 0;
    for(int i = 0; i < expression.size(); i++){
        if(expression[i] == '('){
            st.push(expression.substr(j, i - j));
            j = i + 1;
        }else if(expression[i] == ')'){
            string temp = st.top();

            st.pop();
        }
    }
}