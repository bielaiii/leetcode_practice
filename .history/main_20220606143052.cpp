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
    vector<int> vec1 {3,6,7,11};
    cout << minEatingSpeed(vec1, 8) << endl;
    vector<int> vec2 {30,11,23,4,20};
    cout << minEatingSpeed(vec2, 5) << endl;
    cout << minEatingSpeed(vec2, 6) << endl;
}