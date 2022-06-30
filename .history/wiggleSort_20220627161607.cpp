#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wiggleSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int end = nums.size() - 1;
    int start = 1;
    while(start < end){
        if(start % 2){
            if(!(nums[start-1] < nums[start] && nums[start] > nums[start+1])){
                int temp = nums[end];
                nums[end] = nums[start];
                nums[start] = nums[end];
                end --;
            }
        }else{
            if(!(nums[start-1] > nums[start] && nums[start] < nums[start+1])){
                int temp = nums[end];
                nums[end] = nums[start];
                nums[start] = nums[end];
                end --;
            }
        }
       
    }
    /* int end = nums.size() - 1;
    for(int i =1 ; i < nums.size() - 1; i++){
        if(i % 2){
            if(!(nums[i-1] < nums[i] && nums[i] > nums[i+1])){
                int temp = nums[i + 1];
                nums[i+1] = nums[i];
                nums[i] = temp;
            }
        }else{
            int right = i + 1;
            if(!(nums[i-1] > nums[i] && nums[i] < nums[i+1])){
                
                int temp = nums[i +1];
                nums[i+1] = nums[i];
                nums[i] = temp;
            }
        }
    }  */
}