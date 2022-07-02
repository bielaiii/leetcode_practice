#include<iostream>
#include<vector>
using namespace std;



vector<int> diffWaysToCompute(string expression) {
    if(expression == "") return {};
    vector<int> ans;
    vector<vector<int>> vec;
    if(expression.find_first_of("+-*") == string::npos){
        ans.push_back(stoi(expression));
        return ans;
    }
    for(int i = 0; i < expression.size(); i++){
        if(expression[i] == '+' || expression[i] == '*' ||expression[i] == '-'){
            
        }
    }

}