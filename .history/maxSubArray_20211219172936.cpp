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

    for (int i = 1; i < nums.size(); i++)
    {
        sum = max(sum + nums[i], sum);
        if(sum < 0){
            sum = 0;
        }
        cout << sum << endl;
    }
    printer(nums);

    return sum;
}