#include<iostream>
#include<vector>
#include<set>
using namespace std;

int nextGreaterElement(int n) {
    int i = 0;
    int bigger = INT16_MIN;
    bool flag = 0;
    set<int> set_;
    while(n > 0){
        int temp = n % 10;
        set_.insert(temp);
        if(bigger >= temp){
            return -1;
        }
        n %= 10;
    }
    int ans = 0;
    for(auto c : set_){
        ans = ans * 10 + c;
    }
    return ans;
    
}