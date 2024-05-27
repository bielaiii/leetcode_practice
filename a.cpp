#include <functional>
#include <iostream>
#include <iterator>
#include <map>
using std::erase_if;

using namespace std;
struct record {
    int lastUseFrame;
    int val;
    int usedCount;
    record(int lastUse_, int val_) : lastUseFrame(lastUse_), val(val_) {
        usedCount = 0;
    };
    // operator<(const move_iterator<IteratorL> &x, const
    // move_iterator<IteratorR> &y)
};

bool mycomp(const int& front, const int& back) { return front > back; }

class LFUCache {
  public:
    LFUCache(int capacity) {
        max_capacity = capacity;
        mp = decltype(mp)(mycomp);
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }
    }

    void remove() {}

    void reserve() {}

    void put(int key, int value) {}

  public:
    int max_capacity;
    std::function<bool(const int& front, const int& back)> tempptr;
    map<int, record, decltype(tempptr)> mp; //(comparator);
};

int main() {
    //LFUCache cache(5); // Example usage
    vector<int> vt{1, 2, 3, 4, 5 ,6 };

    vt.erase(remove_if(vt.begin(), vt.end(), [](int a) {
        //cout << a % 2 << "\n";
        return a % 2 == 0;
    }), vt.end());
    
    //cout << "=============\n";

    //erase_if(vt, [](int a) { return a % 2 == 0; });
    copy(vt.begin(), vt.end(), ostream_iterator<int>(cout, " "));
    return 0;
}