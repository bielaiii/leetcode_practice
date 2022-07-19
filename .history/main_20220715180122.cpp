//#include "header.h"
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
	vector<int> vec1 {1,2,4,5,2,95,3,100,26,37,53};
	vector<int> vec2 {1,2,4,5,2,95,3,100,26,37,53};
	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end(),[](int a, int b){
		return a > b;
	});
	print_1d_array( vec1 );
	print_1d_array( vec2 );
	
	
	
	return 0;
}
