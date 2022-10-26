#include<iostream>
#include<vector>
using namespace std;

string convert(string s, int numRows) {
      vector<vector<char> > vec(numRows);
      for(int i = 0; i < s.size(); i++){
            vec[i % numRows ].push_back(s[i]);
      }
      string str = "";
      for(int i = 0; i < numRows; i++){
            
      }
}