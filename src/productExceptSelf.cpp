#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> inorder (nums.size(), 0) ;;
      vector<int> reorder (nums.size(), 0) ;;
      inorder[0] = nums[0];
      reorder.back() = nums.back();
      for(int i = 1 ; i < nums.size(); i++){
            inorder[i] = nums[i] * inorder[i-1];
            reorder[nums.size() - 1 - i] = nums[nums.size() - 1 - i] * reorder[nums.size() - i]; 
      }
      vector<int> vt (nums.size(), 0);
      for(int i = 0; i < nums.size(); i++){
            int temp1 = i - 1 >= 0? inorder[i-1] : 1;
            int temp2 = i + 1 < nums.size()? reorder[i+1] : 1;
            vt[i] = temp1 * temp2;
      }
      return vt;
}