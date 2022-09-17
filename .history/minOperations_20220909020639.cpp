#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int minOperations(vector<string>& logs) {
    const string oper[3] = {"../", "./", ""};
    stack<string> st;
    int ct = 0;
    for(string log : logs){
        if(!st.empty() && log == "../"){
            ;
        }else if(log == "../"){
            st.pop();
        }else if(log == "./"){
            ;
            //st.push(log);
        }else{
            st.push(log);
        }
    }
    return st.size();
}