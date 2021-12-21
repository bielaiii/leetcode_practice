#include<iostream>
#include <vector>
using namespace std;

int maxScoreSightSeeingPair(vector<int> &nums){
    int sum = nums[0] + nums[1] - 1;
    for(int i = 2; i < nums.size() - 1 ; i++){
        sum = max(sum, nums[i] + nums[i+ 1] - 1 );
        cout << sum <<endl;
    }
    return sum;
}