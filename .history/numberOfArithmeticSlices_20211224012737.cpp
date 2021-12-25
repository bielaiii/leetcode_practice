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


int numberOfArithmeticSlices(vector<int>& nums) {
    if(nums.size() < 3) return 0;
    int sum = 0;
    int count = 0;
    for(int i = 2; i < nums.size(); i++){
        if(nums[i] - nums[i-1] == nums[i - 1] - nums[i-2]){
           sum += ++count;
        }else{
            count = 0;
        }
        
    }
    return sum;
}