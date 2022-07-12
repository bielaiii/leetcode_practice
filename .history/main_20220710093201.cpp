#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<int> vec1 { -2, 1, -3, 4, -1, 2 ,1 ,-5 ,4};
	vector<int> vec2 { -1};
	//vector<int> vec1 { -2, 1, -3, 4, -1, 2 ,1 ,-5 ,4};
	vector<int> vec3 { 5 ,4 ,-1, 7, 8};
	cout << maximum_subarray(vec1) <<endl;
	cout << maximum_subarray(vec2) <<endl;
	cout << maximum_subarray(vec3) <<endl;
	return 0;
}
