#include<iostream>
#include<vector>
#include<algorithm>
#include"header.h"
using namespace std;

/* int minArray(vector<int> &nums){
    int id = 0;
    while(id < nums.size() - 1 && nums[id] <= nums[id + 1]) id ++;
    id ++ ;
    reverse(nums.begin(), nums.begin() + id );
    reverse(nums.begin() + id  , nums.end());
    reverse(nums.begin(), nums.end());
    
    return nums[0];
} */

int minArray(vector<int> &nums){
    int left = 0, right = nums.size() - 1;
    int id = 0;
    while(left <= right){
        id = (right - left) / 2;
        if(nums[id]  == nums[right]){
            //left = id  + 1;
            right --;
        }else if(nums[id] < nums[right]){
            right = id ;
        }else{
            left = id + 1;
        }
            
           
    }
    cout << nums[id] <<endl;
    return nums[left];
}