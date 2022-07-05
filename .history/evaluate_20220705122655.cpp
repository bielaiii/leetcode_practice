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

void parseVar(string str, int start){
    
}

int parseInt(string str, int start){
    int head = start;
    while( start < str.size() && str[start] != ' '){
        start ++;
    }
    return stoi(str.substr(head, start - head));
}

int evaluate(string expression){
    map<string, int> mymap;
    stack<string> st;
    int j = 0 ;
    int ans = 0;
    int i = expression.size() - 1;
    while( i > 0){
        while( i > 0 && expression[i] != '('){
            i--
        }
        if(i > 0 && expression[i] == '('){
            string temp = expression.substr(i, expression.size() - i);
        }
        i --;
    }
}