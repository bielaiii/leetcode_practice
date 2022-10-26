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
#include"Twitter.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<int> nums1 {1};
	vector<int> nums2 {2,3};
	vector<int> nums3 {1, 2, 3, 4, 6, 7, 9, 10};
	print_1d_array(missingTwo(nums1));
	cout <<"!!!!!!!" <<endl;
	print_1d_array(missingTwo(nums2));
	cout <<"!!!!!!!" <<endl;
	print_1d_array(missingTwo(nums3));


	
	return 0;
}
