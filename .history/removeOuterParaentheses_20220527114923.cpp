#include<iostream>
#include<vector>
#include<stack>
using namespace std;

string removeOuterParaentheses(string s){
    int id = 0;
    string ans = "";
    vector<int> stack_front;
    vector<int> stack_back;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            stack_front.push_back(i);
        }else if(s[i] == ')'){
            stack_back.push_back(i);
        }
        if(stack_back.size() == stack_front.size() && stack_back.size() > 1 && stack_front.size() > 1){
            cout << s.substr(stack_front[1], stack_back[stack_back.size() - 1] - stack_front[1]) << endl;
            ans += s.substr(stack_front[1], stack_back[stack_back.size() - 1] - stack_front[1]);
            stack_front.clear();
            stack_back.clear();
        }
    }
    return ans;
}