#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    vector<int> step (nums.size(), 0);
    int count = 1;
    for(int i = 0; i < nums.size() ;i++){
        for(int t = 1; t < nums[i]; t++){
            step[i + t] = count;
        }
        
    }
    return step[step.size()-1];
}