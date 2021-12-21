#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    int start = 0;
    int end = 0;
    int longest = 0;
    int step = 0;
    while(start < nums.size()){
        for(int i = start; i < nums[i]; i++){
            longest = max(longest, nums[i] + i);
        }
        start = longest; 

        step ++;
    }
    return step;
}