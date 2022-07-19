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
	vector<int> vec1 {0,1,0,1,1,0,0,1};
	print_1d_array(prisonAfterNDays(vec1, 7));//; <<endl;
	
	return 0;
}
