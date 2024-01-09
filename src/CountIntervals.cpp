#include <iostream>
#include <vector>
#include<map>
using namespace std;

class CountIntervals {
private:
    map<int, int> mp;
public:
    CountIntervals() {

    }
    
    void updateHead(int oldKey, int newKey, int val) {
       int oldVal = mp[oldKey];
       mp.erase(mp.find(oldKey));
       mp[newKey] = max(oldVal, val); 
    }

    void removeTwo(int key1, int key2)
    {
        mp.erase(mp.find(key1));
        mp.erase(mp.find(key2));
    }


    map<int,int>::iterator insert(int key, int val1, int val2, int val3) {
        mp[key] = max(max(val1, val2), val3);
        return mp.find(key);
    }

    void removeOverLap() {
        int tail = mp.begin()->second;
        

    }

    void updateVal(int key, int newVal) {
        int oldVal = mp[key];
        mp[key] = max(oldVal, newVal);
    }

    void add(int left, int right) {
        for (auto it : mp){
            if (it.first > left) {
                updateHead(it.first, left, right);
                return;

            } else if (left >= it.first && left <= it.second) {
                updateVal(it.first, right);
                return;
            }
        }        
        mp[left] = right;
    }
    
    int count() {
        int sum_ = 0;
        int tail = 0;
        for (auto it : mp) {
            int start = max(tail, it.first);
            sum_ += it.second - start + 1;
            tail = it.second;
        }
        return sum_;
    }
};