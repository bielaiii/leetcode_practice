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

string parseVar(string str, int start){
    string ans = "";
    while(start < str.size() && str[start] != ')' && str[start] != ' '){
        ans += str[start];
        start ++;
    }
    return ans;
}

int parseInt(string str, int start){
    int head = start;
    while( start < str.size() && str[start] != ' '){
        start ++;
    }
    return stoi(str.substr(head, start - head));
}

int recursive_evaluate(string &expression, int &start){
    
}

int evaluate(string expression){
    int start = 0;
    return recursive_evaluate(expression, start);
}