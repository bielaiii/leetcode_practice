#include<vector>
#include<iostream>
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


int jump_ii(vector<int>& nums) {
    if(nums.size() == 1) return 0;
    int step = 0;
    int i = 0;
    int temp;
    while(i < nums.size() ){
        int steps = nums[i];
        int temp_max = 0;
        for(int t = 1; t <= steps; t++){
            tem
        }
    }
   // cout << "steps : " << step << endl;
    return step;
}