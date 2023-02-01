/* #include "header.h"
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
#include "quicksort.cpp" */
#include <cassert>
#include <format>
#include<iostream>
//#include "magicDictionary.cpp"
//using namespace std;

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
      std::string message = std::format("The answer is {}.", 42);
    assert( message == "The answer is 42." );

    return 0;
}
