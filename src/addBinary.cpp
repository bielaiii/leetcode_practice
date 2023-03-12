#include<iostream>
#include<vector>
using namespace std;

string addBinary(string a, string b) {
      string str = "";
      int maxlen = max(a.size() - 1, b.size() - 1);
      int sum = 0;
      for(int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--){
            sum += i >= 0? a[i] -'0' : 0; 
            sum += j >= 0? b[j] -'0' : 0;
            str = (sum % 2 ? '1' : '0') + str;
            sum /= 2;
      }
      if(sum){
            str = '1' + str;
      }
      return str;
}