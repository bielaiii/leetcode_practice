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
	vector<int> vec1 { 3,5};
	vector<int> vec2 { 0, 0, 0};
	vector<int> vec3 { 0, 4,3,0, 4};
	cout << specialArray(vec1) <<endl;
	cout << specialArray(vec2) <<endl;
	cout << specialArray(vec3) <<endl;
	return 0;
}
