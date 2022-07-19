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
	vector<int> vec1 {1,1,1};
	vector<int> vec2 {1,2,3};
	vector<int> vec3 {-1, -1, 0};
	//print_1d_array(prisonAfterNDays(vec1, 7));//; <<endl;
	cout << subarraySum(vec1, 2) << endl;
	cout << subarraySum(vec2, 3) << endl;
	cout << subarraySum(vec3, 3) << endl;
	return 0;
}
