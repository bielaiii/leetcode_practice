#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int tail = numbers.size() - 1;
    /*
    while(tail > 0 && numbers[tail] > target){
        tail --;
    }
    */
    int head = 0;
    vector<int> ret;
    while(head < tail ){
        if(numbers[head] + numbers[tail] > target){
            tail --;
        }else if(numbers[head] + numbers[tail] < target){
            head ++;
        }else{
            ret.push_back(head + 1);
            ret.push_back(tail + 1);
            return ret;
        }
    }
    return ret;
}