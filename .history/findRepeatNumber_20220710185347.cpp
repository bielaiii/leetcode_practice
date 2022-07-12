#include<iostream?
#include<vector>
using namespace std;

int findRepeatNumber(std::vector<int> &nums){
    std::set<int> myset;
    for(auto num : nums){
        if(myset.count(num)){
            return num;
        }else{
            myset.insert(num);
        }
    }
    return 0;
}