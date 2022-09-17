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
	vector<int> vec1 {1,2,3,4};
	vector<int> vec2 {1,2,3,1};
	cout << containsDuplicate(vec1) <<endl;
	cout << containsDuplicate(vec2) <<endl;
	return 0;
}
