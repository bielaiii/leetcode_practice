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
    int sum = nums[0];
    int ret = 0;
    ret = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        cout << nums[i-1] + nums[i] << " " << nums[i] <<endl; 
        
       nums[i] = max(nums[i-1] + nums[i], nums[i]);
       ret = max(ret , nums[i]);
       //cout << "nums[i] "<< nums[i] << endl;
    }
    printer(nums);

    return ret;
}