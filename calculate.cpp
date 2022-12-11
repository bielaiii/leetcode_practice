#include<iostream>
#include<vector>
#include<map>
using namespace std;

int calculate(string s) {
      int j = 0;
      vector<int> vt;
      vector<char> ops1; // + -
    //  vector<char> ops2; // * /
      int idx = 0 ;
      int num1 = -1;
      int num2 = -1;
      for(int i = 0 ; i < s.size(); i++){
            if(s[i] == ' ') continue;
            if(isdigit(s[i])){
                  j = 1;
                  while(i + j < s.size() && isdigit(s[i + j])){
                        j ++;
                  }
                  int num = stoi(s.substr(i, j));
                  i += j - 1;
                  if(vt.size() > 0 && num1 == vt.back() ){
                        num2 = num;
                        if(ops1.back() == '*'){
                              vt.back() *= num2;
                        }else{
                              vt.back() /= num2;
                        }
                        num1 = -1;
                        ops1.pop_back();
                  }else{
                        vt.push_back(num);
                  }
            }else{
                  if(s[i] == '*' || s[i] == '/' ){
                         num1 = vt.back();
                  }
                  ops1.push_back(s[i]);
            }
      }
     // cout << "sz " << vt.size() << endl;
     // cout << "ops sz " << ops1.size() << endl;
     // for(auto it : vt) cout << it << endl;
      num1 = vt[0];
      for(int i = 1, j= 0 ; i < vt.size(); i++, j++ ){
            num2 = vt[i];
           // cout << vt[i] << endl;
           // cout << ops1[j] << endl;
            if(ops1[j] == '+'){
                  num1 += num2;
            }else{
                  num1 -= num2;
            }
      }
      return num1;
}