#include<iostream>
#include<vector>
using namespace std;

void wiggleSort(vector<int>& nums) {
    int end = nums.size() - 1;
    for(int i =1 ; i < nums.size() - 1; i++){
        if(i % 2){
            if(!(nums[i-1] < nums[i] && nums[i] > nums[i+1])){
                int temp = nums[i + 1];
                nums[i+1] = nums[i];
                nums[i] = temp;
            }
        }else{
            if(!(nums[i-1] > nums[i] && nums[i] < nums[i+1])){
                int temp = nums[i +1];
                nums[i+1] = nums[i];
                nums[i] = temp;
            }
        }
    }
}