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
	vector<string> vec1 = {"d1/","d2/","../","d21/","./"};
	cout << minOperations(vec1) <<endl;
	//print_1d_array( constructArray(3,1));
	//print_1d_array( constructArray(3,2));
	
	return 0;
}
