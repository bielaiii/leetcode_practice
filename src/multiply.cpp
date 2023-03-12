#include<iostream>
#include<vector>
using namespace std;

string multiply(string num1, string num2) {
      if(num1 == "0" || num2 == "0") return 0;
      
      int sum = 0;
      string str = "";
      int add = 0;
      vector<string> vec;
      for(int i = num2.size() - 1 ;i >= 0; i --){
            string temp = "";
            for(int t = num2.size() - 1 ; t > i; t --) temp += '0';
            int add = 0, sum = 0;
            for(int j = num1.size() - 1; j >= 0; j--){
                  //cout << num1[j] <<endl;
                  sum += (num2[i] - '0') * (num1[j] - '0');
                  temp = to_string(sum % 10) + temp;
                  sum /= 10;
            }
            if(sum) temp = to_string(sum) + temp;
            vec.push_back(temp);
      }
      str = vec[0];
      string ans = "";
      //for(auto c : vec) cout<< c <<endl;
      for(int i = 1; i < vec.size(); i++){
            add = 0;
            for(int j = vec[i].size() - 1, t = str.size() - 1; j>= 0 || t >= 0 || add; j --, t--){
                  int x =  j >= 0 ? vec[i][j] - '0' : 0;
                  int y =  t >= 0 ? str[t] - '0' : 0;
                  //cout << x <<" " <<y <<endl;
                  ans = to_string((x + y + add) % 10) + ans;
                  add = (x + y + add ) / 10;
            }
            //cout << ans <<endl;
            str = ans;
            ans = "";
      }
      
      return str;
}