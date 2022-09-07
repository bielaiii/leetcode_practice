#include<iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums){
    //sort(nums.begin(), nums.end());

    //return (*nums.rbegin() -  1) * ( *(nums.rbegin() + 1) - 1);
    int num1 = 0;
    int num2 = 0;
    for(auto num : nums){
        if(num > num2){
            num1 = num2;
            num2 = num;
        }else if(num > num1){
            num1 = num;
        }
    }
    return (num1 - 1) * (num2 - 1);
}