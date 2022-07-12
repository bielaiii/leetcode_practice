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
	vector<int> vec1 {5,7,7,8,8,10};
	cout << search2(vec1, 8) << endl;
	cout << search2(vec1, 6) << endl;
	return 0;
}
