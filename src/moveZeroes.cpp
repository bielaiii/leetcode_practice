#include <iostream>
#include <vector>
using namespace std;

void printer(vector<int> & myvec){
    for(int r = 0; r< myvec.size(); r++){
        cout << myvec[r] << " ";
    }
    cout << endl;
}

void moveZeroes(vector<int>& nums) {
    int tail = nums.size() - 1;
    //int taker = nums[tail];
    int head = 0;
    for(int i = 0; i < nums.size() - 1; i++){
      if(nums[i] == 0){
          for(int d = i; d < nums.size(); d++){
              if(nums[d]){
                  int taker = nums[d];
                  nums[d] = nums[i];
                  nums[i] = taker;
                  break;
              }
          }
      }
       
       //printer(nums);
    }
}