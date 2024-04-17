#include<iostream>
#include <string>
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
            vector<int> vec1 = diffWaysToCompute(expression.substr(0, i));
            vector<int> vec2 = diffWaysToCompute(expression.substr(i+1));
            for(int j : vec1){
                for(int z : vec2){
                    if(expression[i] == '+'){
                        ans.push_back(j + z);
                    }else if(expression[i] == '-'){
                        ans.push_back(j - z);
                    }else{
                        ans.push_back(j * z);
                    }
                }
            }
        }
    }
    return ans;
}