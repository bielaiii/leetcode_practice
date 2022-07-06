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
	string sentence = "the cattle was rattled by the battery";
	cout << replaceWords(vec1, sentence) <<endl;
}
