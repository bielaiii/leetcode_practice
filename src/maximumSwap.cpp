#include<iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
#include<stdlib.h>

using namespace std;
namespace A {

int maximumSwap(int num) {
      vector<int> vec;
      string strnum = to_string(num);
      string sorted = strnum;
      sort(sorted.begin(), sorted.end() , [](char a, char b){
            return a > b;
      });
      for(int i = 0 ; i < strnum.size(); i++){
            if(strnum[i] != sorted[i]){
                  int pos = strnum.find_last_of(sorted[i]);
                  char tmp = strnum[i];
                  strnum[i] = strnum[pos];
                  strnum[pos] = tmp;
                  break;
            }
      }
      cout << strnum <<endl;
      return stoi(strnum);
    }
}

namespace B {
    int maximumSwap(int num) {
        string s1 = to_string(num);
        string strNum = to_string(num);
        sort(s1.begin(), s1.end(), [](char c1, char c2) {
            return c1 > c2;
        });
        
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != strNum[i]) {
               int pos = strNum.find_last_of(s1[i]); 
               char temp = strNum[pos];
               strNum[pos] = strNum[i];
               strNum[i] = temp;
               return stoi(strNum);
            }
        
        }
        return num; 
    }
}