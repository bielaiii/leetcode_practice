#include<iostream>
#include<vector>
using namespace std;

vector<int> nextGreaterElement2(vector<int>& nums1, vector<int>& nums2) {
      vector<int> vec;
      for(int i = 0; i < nums1.size(); i++){
            int j = 0;
            while(j < nums2.size() && nums1[i] != nums2[j]){
                  j ++;
            }
            while(j < nums2.size() && nums1[i] >= nums2[j]){
                  j++;
            }
            if(j < nums2.size()){
                  vec.push_back(nums2[j]);
            }else{
                  vec.push_back(-1);
            }
      }
      return vec;
}