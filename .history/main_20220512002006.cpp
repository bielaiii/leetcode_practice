#include "header.h"
#include <iostream>
#include <vector>
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
    vector<int> vec1 = {9};
    // bubblesort(vec1);
    //vector<int> vec2 = {3 ,6 ,4 ,2 , 11, 10, 5};
    //vector<int> vec3 = {39, 28, 55 ,87, 66 , 3 , 17 , 39};
    //QuickSort(vec3, 0, vec3.size() -1);
    // printer(vec1);
    //printer(vec3);
   // vector<int> vec = plusOne(vec1);
  //  printer(vec);
    cout << (bool)buddyStrings("ab", "ba") << endl;
    cout << "---------------"<<endl;
    cout << buddyStrings("ab", "ab") << endl;
    cout << "---------------"<<endl;
    cout << buddyStrings("aa", "aa") << endl;
    cout << "---------------"<<endl;
    cout << buddyStrings("abcd", "abcd") << endl;
}



