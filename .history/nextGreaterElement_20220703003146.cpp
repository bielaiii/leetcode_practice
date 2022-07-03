#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int nextGreaterElement(int n) {
    string str = to_string(n);
    int  i = str.size() - 1;
    int marker = 0;
    for(; i > 0; i--){
        if(str[i] > str[i-1]){
            marker = i;
            break;
        }
    }
    while(i > 0){
        if(str[i] > str[marker]){
            char temp = str[i];
            str[i] = str[marker];
            str[marker] = temp;
            break;
        }
        i --;
    }
    cout << str[marker] << ' '<< str[i] <<endl;
    if(str.size() == 2){
        int ans = stoi(str);
        return  ans == n ? -1 : ans;
    }
    if(i == 0) return -1;
    sort(str.begin() + marker, str.end(),[](char a, char b){
        return a <= b;
    });
    cout << str <<endl;
    return stoi(str);
}