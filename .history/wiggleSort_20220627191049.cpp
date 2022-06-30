#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void wiggleSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> arr(nums.size()+1, 0);
    for(int num : nums){
        arr[num ]++;
    }
    cout << arr[5] <<endl;
    int end = nums.size() ;
    for(int i = 1; i < nums.size(); i+= 2){
        while (arr[end] == 0){
            end --;
        }
        nums[i] = end;
        arr[end] --;
    }
    for(int i = 0; i < nums.size(); i+= 2){
        while(arr[end] == 0){
            end --;
        }
        nums[i] = end;
        arr[end] --;
    }
}
