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
	vector<int> vec1 {5,4,3,2,1};
	vector<int> vec2 {10, 3, 8, 9, 4};
	print_1d_array(findRelativeRanks(vec1));
	print_1d_array(findRelativeRanks(vec2));
	
	return 0;
}
