#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
      int l = 0 ,r = arr.size() - 1;
      while(l <= r){
            int mid = l + (r - l ) / 2;
            if(arr[mid + 1] < arr[mid]){
                  l = mid + 1;
            }else if(arr[mid + 1] > arr[mid]){
                  r = mid - 1;
            }
      }
      return l;
}