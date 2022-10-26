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
	vector<int> vec1 { 2,3,1,3,2 };
	vector<int> vec2 { -1,1,-6,4,5,-6,1,4,1};
	//vector<int> vec1 { 2,3,1,3,2 };
	frequencySort(vec1);
	frequencySort(vec2);
	//cout << largestIsland(vec1) <<endl;
	//cout << largestIsland(vec2) <<endl;
	//cout << largestIsland(vec3) <<endl;
	return 0;
}
