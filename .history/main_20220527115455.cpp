#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>

//using namespace std;


/*  vector<int> plusOne(vector<int>& digits) {
        auto it = digits.rbegin();
        while(it != digits.rend()){
            *it += 1;
            if(*it == 10){
                *it = 0;bool buddyStrings(string s, string goal)
                digits.insert(digits.begin(), 1);
                
            }else{
                break;
            }
            it ++;
        }
        
        return digits;
} */



int main(void){
  string s1 = "(()())";
  cout << removeOuterParaentheses(s1) <<endl;
    cout <<"----------" <<endl;
  string s2= "()()";
  cout << removeOuterParaentheses(s2) <<endl;
cout <<"----------" <<endl;
  string s3 = "(()())(())(()(()))";
  cout << removeOuterParaentheses(s3) <<endl;
}
