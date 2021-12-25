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
    vector<int> diffe (nums.size(), 0);
    if(nums.size() < 3) return 0;
    diffe[0] = nums[1] - nums[0];
    diffe[1] = nums[2] - nums[1];
    vector<int> arr (nums.size(), 0);
    arr[1] = diffe[0] == diffe[1] ? 1 : 0; 
    for(int i = 2; i < nums.size(); i++){
        if(nums[i] - nums[i-1] == nums[i - 1] - nums[i-2]){
            arr[i] = 2 *  arr[i + 1] + 1;
            cout << arr[i] << endl;
        }
    }
    return arr[arr.size()-1];
}