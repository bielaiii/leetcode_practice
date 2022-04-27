#include <iostream>
#include <vector>
#include <cmath>
using namespace std; 
    
    
double findMaxAverage(vector<int>& nums, int k) {
    int left = 0;
    int right = k;
    double sum = 0;
    for(int i = 0; i < k ; i++){
        sum += nums[i];
    }
    double avg = sum / k;
    for(; k < nums.size(); k++){
        sum -= nums[left];
        sum += nums[k];
        avg = max(avg, sum / k);
        left ++;
    }
    return avg;
}