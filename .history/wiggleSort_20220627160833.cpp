#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wiggleSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int mid = nums.size() / 2;
    vector<int> vec;
    for(int i = 0; i < mid && mid < nums.size() ; i++, mid ++){
        vec.push_back(nums[i]);
        vec.push_back(nums[mid]);
    }
    nums = vec;
   /*  int end = nums.size() - 1;
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
                while()
                int temp = nums[i +1];
                nums[i+1] = nums[i];
                nums[i] = temp;
            }
        }
    } */
}