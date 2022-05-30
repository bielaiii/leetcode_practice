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
    cout << validIPAddress("192.168.0.1") <<endl;
    cout << validIPAddress("2001:0db8:85a3:0:0:8A2E:0370:7334") <<endl;
    cout << validIPAddress("256.56.256.256") <<endl;
}
