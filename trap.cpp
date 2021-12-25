#include<iostream>
#include<vector>
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