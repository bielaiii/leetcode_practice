#include<iostream>
#include<vector>
using namespace std;

void dfs(string s, int &count){

}


int findSubstringInWraproundString(string p) {
    string s = "abcdefghijklmnopqrstuvwxyz";
    int count = 1;
    vector<int> vec(26, 0);
    for(int i = 0 ; i < p.length(); i++){
        if(i && (p[i-1] - 'a' + 1) % 26  == (p[i] - 'a') % 26 ){
            count ++;
        }else{
            count = 1;
        }
        int idx = p[i] - 'a';
        vec[idx] = max(vec[idx], count);

    }
    int sum = 0;
    for(auto i : vec){
        sum += i;
    }
    return sum;
}