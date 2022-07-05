#include<iostream>
#include<vector>
#include<stack>
#include<map>
using namespace std;

int operation(string str, map<string ,int>& secmap){
    int method = 1;
    if(str.find("add") != string::npos){
        method = 1;
    }else if(str.find("mult") != string::npos){
        method = 0;
    }
}

void spliter(string str, vector<string>& vec){
    int j = 0;
    int i = 0;
    for(i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            vec.push_back(str.substr(j, i - j));
            j = i +1;
        }
    }
    vec.push_back(str.substr(j, i - j));
}

int evaluate(string expression){
    map<string, int> mymap;
    stack<string> st;
    int j = 0 ;
    int ans = 0;
    for(int i = expression.size() - 1; i > 0; i--){
        if(expression[i] == ')'){
            st.push(expression.substr(j, i - j));
            j = i + 1;
        }else if(expression[i] == '('){
            string temp = st.top();

            st.pop();
        }
    }
}