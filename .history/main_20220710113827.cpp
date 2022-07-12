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
	MagicDictionary mc;
	vector<string> vec {"hello", "leetcode"};
	mc.buildDict(vec);
	cout << mc.search("hello") <<endl;
	cout << mc.search("hgllo") <<endl;
	cout << mc.search("hell") <<endl;
	return 0;
}
