#include<iostream>
#include<vector>
using namespace std;

void dfs(string s, int &count){

}


int findSubstringInWraproundString(string p) {
    string s = "abcdefghijklmnopqrstuvwxyz";
    vector<int> vec(s.length(), 0);
    vec[0] = p[0] == s[0] ? 1 : 0;
    int length = 0;
    for(int i = 1; i < s.length(); i++){
        if(length > 1){
            if(vec[i] == p[length - 1]){
                length ++;
            }else{
                length ++;
            }
        }else{
            vec[i] = 1;
            length = 1;
        }
    }
    int sum = 0;
    for(auto i : vec){
        sum += i;
    }
    return sum;
}