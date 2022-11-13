#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
      int l = 0, r = 0;
      vector<char > vec;
      char last = chars[0];
      int count= 0;
      for( int i = 0; i < chars.size(); i++){
            if(chars[i] == last ){
                  count ++;
                  continue;
            }else{
                  vec.push_back(last);
                  vec.push_back('0' )
                  last = chars[i];
            }
      }
}