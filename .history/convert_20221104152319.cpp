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
            if(i == 0){
                  step = 1;
            }else if(i == numRows - 1){
                  step = -1;
            }
            i += step;
            
      }
      for(auto c : vec) str += c;
      return str;
}