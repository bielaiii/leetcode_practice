#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int> vec_;
      for(int i = 0, j = 0; i < m || j < n; ){
            if(i >= m){
                  vec_.push_back(nums2[j]);
                  j ++;
            }else if(j >= n){
                  vec_.push_back(nums1[i]);
                  i ++;
            }else if(nums1[i] <= nums2[j]){
                  vec_.push_back(nums1[i]);
                  i++;
            }else{
                  vec_.push_back(nums2[j]);
                  j++;
                  
            }
      }
      nums1.swap(vec_);
}