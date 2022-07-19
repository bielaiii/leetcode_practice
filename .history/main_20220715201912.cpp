//#include "header.h"
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
	string str1 = "Bob hit a ball, the hit BALL flew far after it was hit.";
	vector<string> vec1 {"hit"};
	cout << mostCommonWord(str1, vec1) <<endl;
	return 0;
}
