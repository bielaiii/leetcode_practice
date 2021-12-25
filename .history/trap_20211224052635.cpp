#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height){
    int left = 0;
    while(! height[left] ) left++;
    int right = left + 2;
    int accum = 0;
    while(right < height.size()){
        if( height[right] >= height[left + 1]){
            int temp_ = min(left, right);
            cout << left << " " << right <<endl;
            for(int e = left + 1; e < right; e++){
                accum += temp_ - height[e];
            }
            left = right;
            right +=2 ;
        }else{
            right ++;
        }
    }
    return accum;
}