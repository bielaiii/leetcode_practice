#include<iostream>
#include<vector>

using namespace std;

int maximumSwap(int num) {
      vector<int> vec;
      int nums = num;
      string strnum = to_string(num);
      while(nums > 0){
            vec.push_back(nums % 10);
            nums /= 10;
      }
      sort(vec.begin(), vec.end(),[](int a ,int b){
            return a > b;
      });
      //print_1d_array(vec);
      auto it = vec.begin();
      for(int i = 0; i < strnum.size(); i++){
            if(strnum[i] - '1' != *it){
                  
            }
      }
      return 1;
}