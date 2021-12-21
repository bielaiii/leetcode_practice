#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    int start = 0;
    int end = 0;
    int longest = 0;
    int step = 0;
    while(start < nums.size()){
        for(int i = 0; i < nums[start]; i++){
            if(longest < nums[start + 1 + i]){
                longest = nums[start + 1 + i];
                end = start + i + 1;
            }
            //longest = max(longest, nums[start + 1 + i]);
        }
        longest = 0;
        start = end; 
        step ++;
    }
    return step;
}