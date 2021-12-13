#include <iostream>
#include <vector>
using namespace std;
/*
void sortColors(vector<int>& nums) {
    int flag = 0;
    while(true){
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
                break;
            }else{
                flag ++;
            }
        }
        if(flag == (nums.size() - 1)) break;
        flag = 0;
    }
    
}
*/

void sortColors(vector<int>& nums) {
    int flag = 0;
    int left = 0;
    int right = nums.size() - 1;
    for(int i = 0; i < nums.size() ; i++){
        if(nums[i] == 0){
            int temp = nums[i];
            nums[i] = nums[left];
            nums[left] = temp;
            left ++;
        }else if(nums[i] == 2){
            int temp = nums[i];
            nums[i] = nums[right];
            nums[right] = temp;
            right --;
        }
    }
    
    
}