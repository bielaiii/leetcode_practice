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
 // vector<string> vec1 {"with", "example", "sceience"};
 // string target1 = "thehat";
 // cout << minStickers(vec1, target1) << endl;
    vector<vector<int>> vec1 {{0,0}, {0,1}, {1,0}, {0,2}, {2,0}};
    cout << largetstTriangleArea(vec1) <<endl;
}
