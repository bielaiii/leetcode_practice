#include<iostream>
#include<vector>
using namespace std;


template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}

int maxSubArray(vector<int>& nums) {
    int sum = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        /* if(nums[i] + nums[i-1] > nums[i]){
            nums[i] += nums[i-1];
        } */
        nums[i] = max(nums[i] + nums[i-1], nums[i]);
        sum += (sum, sum + nums[i]);
        cout << sum <<endl;
    }
    printer(nums);
    //return nums[nums.size()-1];
    return sum;
}