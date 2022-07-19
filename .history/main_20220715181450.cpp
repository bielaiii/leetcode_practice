//#include "header.h"
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
	priority_queue<int> pq;
	pq.push(3);
	pq.push(5);
	pq.push(10);
	pq.push(1);
	pq.push(6);
	pq.push(7);
	while(! pq.empty()){
		cout << pq.top() << " -> ";
		pq.pop();
	}
	return 0;
}
