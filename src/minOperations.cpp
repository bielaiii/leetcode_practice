#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int minOperations(vector<string>& logs) {
    stack<string> st;
    for(string log : logs){
        if(st.empty() && (log == "../" || log == "./" )) continue;
        if( log == "../"){
            if (st.empty()) {
                continue;
            }
            st.pop();
        }else if(log != "./"){
            st.push(log);
        }
    }
    return st.size();
}