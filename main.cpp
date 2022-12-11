#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include<set>
#include<map>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include<queue>
#include"print_1d_array.cpp"
#include"print_2d_array.cpp"
#include"KthLargest.cpp"
#include"Twitter.cpp"
#include"template_checker.cpp"
#include "quicksort.cpp"
//#include "magicDictionary.cpp"
using namespace std;

/* vector<string> spliter(string s){
      s += ' ';
      vector<string> ans;
      string temp = "";
      
      for(int i = 0; i < s.size();){
            int j = i;
            while(j < s.size() && s[j] != ' ' && s[j] != '(' && s[j] != ')') j++;
            ans.emplace_back(s.substr(i, j - i ));
            i = j+1;
      }
      return ans;
} */


int main(void){
    
    string s1 = "e + 8 - a + 5";
    string s2 = "e - 8 + temperature - pressure";
    string s3 = "(e + 8) * (e - 8)";
    
    vector<string> evalvars1 {"e"};
    vector<string> evalvars2 {"e", "temperature"};
    vector<string> evalvars3 {"e", "temperature"};

    vector<int> evalints1 {1};
    vector<int> evalints2 {1,12};
    vector<int> evalints3 {1,12};

    print_1d_array(basicCalculatorIV(s1, evalvars1, evalints1));
    print_1d_array(basicCalculatorIV(s2, evalvars2, evalints2));
    print_1d_array(basicCalculatorIV(s3, evalvars3, evalints3));
    
    return 0;
}
