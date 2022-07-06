#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<string> vec1 {"cat", "bat", "rat"};
	vector<string> vec2 {"a", "b", "c"};
	string sentence1 = "the cattle was rattled by the battery";
	string sentence2 = "aadsfasf absbs bbab cadsfafs";
	cout << replaceWords(vec1, sentence1) <<endl;
	cout << replaceWords(vec2, sentence2) <<endl;
}
