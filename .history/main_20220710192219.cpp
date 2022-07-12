#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<int> vec1 {0,1,2,3,4,5,6,7,9};
	vector<int> vec2 {0,1,3};
	cout << missingNumber(vec1) << endl;;
	cout << missingNumber(vec2) << endl;;
	return 0;
}
