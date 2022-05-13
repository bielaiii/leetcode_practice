#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;


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
  vector<int>vec1 {1,8,6,2,5,4,8,3,7};
  vector<int>vec2 {1,1};
  cout << maxArea(vec1) <<endl;
  cout << maxArea(vec2) <<endl;
}



