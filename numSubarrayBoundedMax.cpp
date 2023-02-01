#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
      int start = 0, p = -1;
      int sum = 0;
      for(int i = 0; i < nums.size(); i++){
            if(nums[i] > right) start = i + 1;
            if(nums[i] >= left) p = i;
            
            sum += p - start + 1; 
            cout << "sum "<< sum <<endl;
            cout << "p val " << p <<endl;
      }
      return sum;
}


