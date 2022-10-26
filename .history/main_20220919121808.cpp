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
#include"KthLargest.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<int> vec1{4,5,8,2};
	KthLargest k1(3,vec1 );
	cout << "ans :" << (k1.add(3)  == 4)<< endl;
	cout << "ans :" << (k1.add(5)  == 5)<< endl;
	cout << "ans :" << (k1.add(10) == 5) << endl;
	cout << "ans :" << (k1.add(9)  == 8)<< endl;
	cout << "ans :" << (k1.add(4)  == 8)<< endl;
	return 0;
}
