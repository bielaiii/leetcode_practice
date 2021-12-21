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
    int step = 1;
    int i = 0;
    int furthest_ = 0;
    int temp_s = 0;
    vector<int> steps (nums.size(), 0);
    while(i < nums.size() ){
        int cur = nums[i];
        int max_len = 0;
        for(int s = 1; s <= cur; s++){
            if(nums[s + i])
            max_len = max(max_len, nums[s + i]);
        }
        i += max_len;
        step ++;
        printer(steps);
    }
    
    return step;
}