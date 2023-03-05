#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string largestNumber(vector<int>& nums) {
      vector<string> vt;
      vector<string> with_zero;
      for(int num: nums) {
            if(num % 10 == 0){
                  with_zero.push_back(to_string(num));
            }else{
                  vt.push_back(to_string(num));
            }
            
      }
      sort(vt.begin(), vt.end(),[](string s1, string s2){
            return s1 + s2 > s2 + s1;
      });
      sort(with_zero.begin(), with_zero.end(), [](string s1, string s2){
            return s1 + s2 > s2 + s1;
      });
      string str = "";
      for(auto it : vt){
            str += it;
      }
      for(auto it : with_zero){
            str += it;
      }
      return str;
}