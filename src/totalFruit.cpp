#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <unordered_map>
#include <vector>
using namespace std;

int totalFruit(vector<int>& fruits)
{
    unordered_map<int, int> mp;
    int left = 0;
    int right;
    int ret = 0;
    for ( right = 0 ; right < fruits.size(); right++) {
        mp[fruits[right]]++;
        while (mp.size() > 2) {
            mp[fruits[left]]--;
            if (mp[fruits[left]] == 0) {
                mp.erase(fruits[left]);
            }
            left++;
        }
        ret = max(ret, right - left + 1);
    }

    return ret;
}

int main()
{
    vector<int> fruits0 = { 1, 2, 1 };
    vector<int> fruits1 = { 0, 1, 2, 2 };
    vector<int> fruits2 = { 1, 2, 3, 2, 2 };
    vector<int> fruits3 = { 3,3,3,1,2,1,1,2,3,3,4 };
    // println("{}", totalFruit(fruits0));
    // println("{}", totalFruit(fruits1));
    println("{}", totalFruit(fruits2));
    println("{}", totalFruit(fruits3));
    return 0;
}