#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int trap(vector<int>& height){
    int l = 0;
    int r = height.size() - 1;
    int lmax = 0;
    int rmax = 0;
    int accum = 0;
    while( l < r){
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);
        if(height[l] < height[r]){
            accum += lmax - height[l];
            l ++; 
        }else{
            accum += rmax - height[r];
            r --;
        }
    }
    return accum;
}

int trap(vector<int> &height){
    int l = 0;
    int right = 3;
    stack<int> stack_;
    stack_.push(height[0]);
    int sum = 0;
    for(int i = 0; i < height.size(); i++){
        while(!stack_.empty() && height[stack_.top()] < height[i]){
            int cur = stack_.top();
            stack_.pop();
            if(stack_.empty()) break;
            int l = st.top();
            
        }
        stack_.push(i);
    }
}