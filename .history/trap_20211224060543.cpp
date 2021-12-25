#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height){
    int left = 0;
    while(! height[left] ) left++;
    int right = left + 2;
    int accum = 0;
    while(left + 2 < height.size()){
        if( height[right] >= height[left]){
            int temp_ = left >= right? right : left;
            cout << left << " " << right <<endl;
            cout << height[left] << " " << height[right] <<endl;
            for(int e = left + 1; e < right; e++){
                accum += temp_ - height[e];
            }
            left = right;
            right +=2 ;
            
        }else{
            right ++;
        }
        if(right >= height.size()){
            left ++;
            right += 2;
        }
    }
    return accum;
}