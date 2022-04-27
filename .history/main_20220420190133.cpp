#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
#include <iomanip>
using namespace std;



int main(void){
    string str1 = "I speak Goat Latin";
    string str2 = "The quick brown fox jumped over the lazy dog";
    str1 = toGoatLatin(str1);
    str2 = toGoatLatin(str2);
    cout << str1 <<endl;
    cout << str2 <<endl;
    return 0;
}



