
#include<iostream>
#include<unordered_map>
using namespace std;

class LRUCache {
    unordered_map<int, int> mymap;
public:
    LRUCache(int capacity) {
        for(int i = 0; i < capacity ; i++){
            mymap[i] = -1;
        }
    }
    
    int get(int key) {  
        return mymap[key];
    }
    
    void put(int key, int value) {
        return mymap[key] = valarray;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */