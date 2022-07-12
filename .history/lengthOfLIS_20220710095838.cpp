#include<iostream>
#include<vector>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    vector<int> vec(nums.size()+ 1, 0);
    vec[0] = 0;
    vec[1] = 1;
    int maxm = 1;
    for(int i =1; i < nums.size(); i++){
        if(nums[i] > nums[i-1]){
            vec[i] = vec[i-1] + 1;
            maxm = max(maxm, vec[i]);
        }else{
            vec[i] = maxm;
        }
    }
    for(auto c : vec){
        cout <<c << " -> ";
    }
    cout <<endl;
    return maxm;
}