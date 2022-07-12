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
	vector<string> vec1 { "MagicDictionary", "buildDict", "search", "search", "search", "search", "search", "search", "search", "search", "search", "search", "search", "search", "search", "search", "search"
, "a","b","ab","abc","abcabacbababdbadbfaejfoiawfjaojfaojefaowjfoawjfoawj","abcdefghijawefe","aefawoifjowajfowafjeoawjfaow","cba","cas","aaewfawi","babcda","bcd","awefj", "a", "b", "c", "d", "e", "f", "ab", "ba", "abc", "cba", "abb", "bb", "aa", "bbc", "abcd"};
	mc.buildDict(vec);
	cout << mc.search("hello") <<endl;
	cout << mc.search("hgllo") <<endl;
	cout << mc.search("hell") <<endl;
	return 0;
}
