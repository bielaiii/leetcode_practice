#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//vector<int> vec= {1,2,4,2,1,};

int singleNumber(vector<int>& nums) {
    if(nums.size() == 1) return nums[0];
   // cout << "size: "<< nums.size() << endl;
    sort(nums.begin(), nums.end());
    for(int i =0; i < nums.size()-2; i+=2){
        if(nums[i] != nums[i+1]) return nums[i];
    }
    return nums[nums.size()-1];
}