#include<iostream>
#include<vector>
using namespace std;

string convert(string s, int numRows) {
      vector<string > vec(numRows,"");
      vector<int> nums (numRows, 0);
      string str = "";
      int i = 0;
      int step = 1;
      for(auto c : s){
            vec[i].push_back(c);
            i += step;
            if(i == 0){
                  i ++;
            }else if(i == nums.size() - 1){
                  i --;
            }
            
      }
      return str;
}