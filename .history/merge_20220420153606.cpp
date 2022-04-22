#include <iostream>
#include <vector>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      for(auto i = nums1.begin(); i != nums1.end(); i ++){
                  if(*i == 0) nums1.erase(i);
      }
      if(m == 0 || n == 0){
            return;
      }
      
      int j = 0;
      auto it = nums1.begin();
      while(it != nums1.end()){
            if(*it > nums2[j]){
                  nums1.insert(it, nums2[j]);
                  j ++;
            }else{
                  it ++;
            }
      }

}