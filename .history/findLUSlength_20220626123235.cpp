#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int findLUSlength(vector<string>& strs) {
    vector<vector<int>> vec;
    sort(strs.begin(), strs.end(), [](string a, string b){
        return a.size() > b.size();
    });
    for(int i = 0; i < strs.size() - 1; i++){
        
    }
}