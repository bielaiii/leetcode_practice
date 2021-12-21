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
        int cur = nums[i];
        int max_len = 0;
        for(int s = 1; s <= cur; s++){
            if(s + i >= nums.size()){
                temp = s;
                break;
            }else if(nums[s + i])
                if(max_len <= nums[s+ i]){
                    max_len = nums[s + i];
                    temp = s;
                }
        }
        i += temp;
        step ++;
        cout << i << endl;
    }
    cout << "steps : " << step << endl;
    return step;
}