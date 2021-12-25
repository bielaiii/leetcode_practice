#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height){
    int left = 0;
    int right = left + 2;
    int accum = 0;
    while(right < height.size()){
        if(height[left + 1] < height[left] && height[right] > height[left + 1]){
            int temp_ = min(left, right);
            for(int e = left + 1; e < right; e++){
                accum += temp_ - height[e];
            }
        }else if(height[right] < height[left + 1]){
            right ++;
        }
    }
    return accum;
}