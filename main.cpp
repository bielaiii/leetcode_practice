#include "header.h"
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


int main(void){
    cout << "---------------------------"<<endl;
    cout <<  checkInclusion("ab", "eidbaooo") << endl;
    cout << "---------------------------"<<endl;
    cout <<  checkInclusion("ab", "ab") << endl;
    cout << "---------------------------"<<endl;
    cout <<  checkInclusion("hello", "ooolleoooleh") << endl;
    cout << "---------------------------"<<endl;
    cout << checkInclusion("adc", "dcda")<<endl;
    cout << "---------------------------"<<endl;
    cout << checkInclusion("prosperity", "properties")<<endl;
    cout << "---------------------------"<<endl;
    cout << checkInclusion("abcdxabcde","abcdeabcdx")<<endl;
    
    return 0;
}



