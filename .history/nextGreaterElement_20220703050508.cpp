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
    
    //tail --;
    int replace = str.size() -1;
    if(tail == 0) return -1;
    while(replace > 0 && str[replace] <= str[tail -1 ]){
        replace --;
    }
   // cout << str <<endl;
    
    
    // if(replace == tail) return -1;
    //  cout << str[tail] <<" "<< str[replace ]<<endl;
    char temp = str[replace];
    str[replace] = str[tail-1];
    str[tail -1 ] = temp;
    sort(str.begin() + tail, str.end(), [](char a, char b){
        return a <= b;
    });
    //cout << str.size() <<endl;
    long long ans = stoll(str);
    if(ans == n) return -1;
    return ans > INT32_MAX ? -1 : ans;
}