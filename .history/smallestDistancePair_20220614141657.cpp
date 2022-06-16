#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int countNum(vector<int> &nums, int key){

}


int smallestDistancePair(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.back() - nums.front();
    
    while(left <= right){
        int mid =  (right + left) / 2;
        int count = 0;
        for(int i = 0; i < k; i++){
            int j = lower_bound(nums.begin(), nums.begin() + i, nums[i] - mid) - nums.begin();
            count += i - j;
        }
        if(count >= k){
            right = mid - 1;
        }else{
            left  = mid + 1;
        }
        //cout << left <<" "<< right <<endl;
    }
    
    //cout << left <<" "<< right <<endl;
    return left;
}