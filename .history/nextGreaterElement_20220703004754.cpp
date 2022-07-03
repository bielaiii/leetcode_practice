#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int nextGreaterElement(int n) {
    string str = to_string(n);
    if(str.size() == 2){
        reverse(str.begin(), str.end());
        int ans = stoi(str);
        return  ans > n ? ans : -1;
    }
    int  i = str.size() - 1;
    int marker = 0;
    for(; i > 0; i--){
        if(str[i] > str[i-1]){
            marker = i;
            break;
        }
    }
    for(i = str.size()-1; i > 0 && str[i] > str[marker] ; i--){
    }
    // cout << str[marker] << ' '<< str[i] <<endl;
    char temp = str[marker];
    str[marker] = str[i];
    str[i] = temp;
            
    if(i == 0) return -1;
    sort(str.begin() + marker, str.end(),[](char a, char b){
        return a <= b;
    });
    return stoi(str);
}