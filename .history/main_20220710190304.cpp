#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<int> vec1 {2,3,1,0,4,5};
	findRepeatedDnaSequences(vec1);
	return 0;
}
