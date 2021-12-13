#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int left = 0 ;
    int right = nums.size()  -1;
    int temp;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            temp = nums[i];
            nums[i] = nums[left];
            nums[left] = temp;
            left ++;
        }else if(nums[i] == 2){
            temp = nums[i];
            nums[i] = nums[right];
            nums[right] = temp;
            right --;
        }
    }
}