#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int nextGreaterElement(int n) {
    string str = to_string(n);
    int tail = str.size() - 1;
    while(tail > 0 && str[tail] <= str[tail-1]){
        tail --;
    }
    int replace = str.size() -1;
    while(replace > 0 && str[replace] <= str[tail]){
        replace --;
    }
    cout << str[tail] <<" "<< str[replace ]<<endl;
    char temp = str[replace];
    str[replace] = str[tail];
    str[tail ] = temp;
    sort(str.begin() + tail, str.end(), [](char a, char b){
        return a >= b;
    });
    long long ans = stoll(str);
    return ans > INT32_MAX ? -1 : ans;
}