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
   vector<vector<int>> vec1  {{1,1},{2,3},{3,2}};
   vector<vector<int>> vec2  {{1,1},{2,2},{3,3}};
   vector<vector<int>> vec3  {{0,0},{1,2},{0,1}};
    cout << isBoomerang(vec1) << endl;;
    cout << isBoomerang(vec2) << endl;;
    cout << isBoomerang(vec3) << endl;;
}
