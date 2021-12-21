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
            longest = max(longest, nums[start + 1 + i]);
        }
        start = longest; 

        step ++;
    }
    return step;
}