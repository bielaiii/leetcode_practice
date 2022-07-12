#include<iostream>
#include<vector>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    vector<int> vec(nums.size()+ 1, 0);
    vec[0] = 0;
    vec[1] = 1;
    int maxm = 1;
    for(int i =1; i < nums.size(); i++){
        
    }
    for(auto c : vec){
        cout <<c << " -> ";
    }
    cout <<endl;
    return maxm;
}