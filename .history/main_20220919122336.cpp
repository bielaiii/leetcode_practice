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
	cout << k1.add(3)  << endl ;	
	cout << k1.add(5)  << endl ;	
	cout << k1.add(10) << endl ;	
	cout << k1.add(9)  << endl ;	
	cout << k1.add(4)  << endl ;	
	print(k1) <<endl;
	return 0;
}
