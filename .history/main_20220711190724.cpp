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
	vector<int> vec1 { 10,9,2,5,3,7,101,18};
	vector<int> vec2 { 0,1,0,3,2,3};
	cout << lengthOfLIS(vec1) << endl;
	cout << lengthOfLIS(vec2) << endl;
	return 0;
}
