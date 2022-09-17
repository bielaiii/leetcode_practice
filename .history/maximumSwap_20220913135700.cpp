#include<iostream>
#include<vector>
#include"print_1d_array.cpp"
using namespace std;

int maximumSwap(int num) {
      vector<int> vec;
      int nums = num;
      while(nums > 0){
            vec.push_back(nums % 10);
            nums /= 10;
      }
      sort(vec.begin(), vec.end(),[](int a ,int b){
            return a > b;
      });
      print_1d_array(vec);
      return 1;
}