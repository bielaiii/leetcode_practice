#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include"print_1d_array.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<string> log1 {"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero", "let5 art zero"};
	
	print_1d_array( reorderLogFiles(log1) );
	
	return 0;
}
