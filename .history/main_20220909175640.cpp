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
	vector<int> vec1 {3,0,1,4};
	vector<int> vec2 {9,6,4,2,3,5,7,0,1};
	//vector<int> vec2 {1,2,3,1};
	//vector<int> vec3 {1,2,3,4};
	cout << missingNumber2(vec1) <<endl;
	cout << missingNumber2(vec2) <<endl;
	return 0;
}
