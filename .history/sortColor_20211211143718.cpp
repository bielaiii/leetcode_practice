#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int left = 0 ;
    int right = nums.size()  -1;
    int temp;
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
        if(flag = nums.size()){
            break;
        }
    }
    
}