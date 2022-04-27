#include <iostream>
#include <vector>
using namespace std;
vector<string > vec;
string s ;
string str []= {"", "", "abc", "def", "ghi", "jkl", "mno"
                    "pqrs", "tuv", "wxyz"};
    
void dfs(string dig, int index){
    if(index == dig.size()){
        vec.push_back(s);
        return;
    }
    int digi = dig[index] - '0';
    string letters = str[digi];
    for(int i = 0; i < letters.size(); i++){
        s.push_back(letters[i]);
        dfs(dig, index + 1);
        s.pop_back();
    }
}


vector<string> letterCombinations(string digits) {
    
    s = "";
    vec.clear();
    if(digits.size() == 0) return vec;
    dfs(digits, 0);
    return vec;

}