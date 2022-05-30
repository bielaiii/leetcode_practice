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
   // std::cout << std::format("print out {} {} {}\n", "a", "b", "c");
    vector<int> nums1 { 1,2 ,3};
    vector<int> nums2 {1, 10, 2, 9};
    cout << minMove2(nums1) <<endl;
    cout << minMove2(nums2) <<endl;


  
}
