#include<vector>
#include<iostream>
#include<map>
using namespace std;

double trimMean(vector<int>& arr) {
      double sum = 0;
      double ct = 0;
      sort(arr.begin(), arr.end());
      for(int i = arr.size() * 0.05; i < arr.size() * 0.95; i++){
            ct ++;
            sum += arr[i];
      }
      return sum / ct;
}