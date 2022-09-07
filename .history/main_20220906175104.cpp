#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include<set>
#include<map>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include<queue>
#include"print_1d_array.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	string str1 = "cbaebabacd";
	string str2 = "abc";
	vector<int> vec =  findAnagrams(str1, str2);
	print_1d_array(vec);
	
	return 0;
}
