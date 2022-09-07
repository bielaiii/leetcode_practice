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
	vector<int> vec1 {2,7,11,15};
	vector<int> vec2 {10, 26, 35};
	QuickSort(vec1, 0, vec1.size() - 1);
	print_1d_array(vec1);

	
	return 0;
}
