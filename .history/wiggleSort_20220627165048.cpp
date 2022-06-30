#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void wiggleSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int mid = nums.size() / 2;
    vector<int> vec1;
    for(int i = 0; i < nums.size(); i+= 2){
        vec1.push_back(nums[i]);
    }
    vector<int> vec2;
    for(int i = 0; i < nums.size(); i++){
        vec2.push_back(nums[i]);
    }
    int left = 0, right = 1;
    for(int i = 0; i < nums.size(); i++){
        if(i % 2){
            
        }else{
            
        }
    }
}
