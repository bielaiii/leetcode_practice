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



int rec(int i){
    int j = 0;
    if(! i) return i;
    j = rec( i - 1);
    cout << "i " << i <<endl;
    cout << "j " << j <<endl;
    return j;
}

int main(void){
    cout << findSubstringInWraproundString("aca") << endl;
}
