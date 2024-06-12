#ifndef __LFU_CACHE__
#define __LFU_CACHE__
#include <iostream>
#include <map>
#include <memory>
#include <vector>
#include<algorithm>
using namespace std;
struct record {
    int lastUseFrame;
    int val;
    int usedCount;
    int key;
    record(int lastUse_, int key_, int val_, int usedCount_)
        : lastUseFrame(lastUse_), key(key_), val(val_),
          usedCount(usedCount_) {};
};

bool mycomp(const int& front, const int& back) { return front > back; }

class LFUCache {
  public:
    LFUCache(int capacity) {
        max_capacity = capacity;
        mp = decltype(mp)(mycomp);
        frame_ = 0;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }
        mp[key]->usedCount++;
        mp[key]->lastUseFrame = frame_;
        startFrame();
        return mp[key]->val;
    }

    void remove() {}

    void startFrame() { frame_++; }

    void reserve(int key) {
        vector<shared_ptr<record>> temp;
        auto comp = [](const record& front, const record& back) {
            if (front.usedCount == back.usedCount) {
                return front.lastUseFrame < back.lastUseFrame;
            }
            return front.usedCount < back.usedCount;
        };
        for (auto& [k, v] : mp) {
            temp.push_back(v);
        }

        auto min_count = min_element(
            temp.begin(), temp.end(),
            [](const shared_ptr<record>& t1, const shared_ptr<record>& t2) {
                return t1->usedCount < t2->usedCount;
            });

        int min_val = (*min_count)->usedCount;
        temp.erase(remove_if(temp.begin(), temp.end(),
                             [=](const shared_ptr<record> ptr) {
                                 return ptr->usedCount != min_val;
                             }),
                   temp.end());
        sort(temp.begin(), temp.end(),
             [](const shared_ptr<record>& t1, const shared_ptr<record>& t2) {
                 return t1->lastUseFrame < t2->lastUseFrame;
             });
        auto remove_key = temp[0]->key;
        mp.erase(remove_key);
    }

    void put(int key, int value) {

        if (mp.find(key) == mp.end() && mp.size() == max_capacity) {
            reserve(key);
        }
        auto temp = mp.begin();
        if (mp.find(key) != mp.end()) {
            temp = mp.find(key);
            mp[key] = make_shared<record>(frame_, key, value, temp->second->usedCount + 1);
        } else {
            mp[key] = make_shared<record>(frame_, key, value, 1);
            
        }
        startFrame();
    }

  public:
    int max_capacity;
    int frame_;
    map<int, shared_ptr<record>, decltype(mycomp)*> mp; //(comparator);
};

#endif