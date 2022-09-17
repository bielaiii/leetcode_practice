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
	vector<int> vec1 {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3};
	vector<int> vec2 {6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0};
	cout << trimMean(vec1) <<endl;
	cout << trimMean(vec2) <<endl;
	return 0;
}
