#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class MycircularDeque {
    vector<int> dq;
    int head;
    int tail;
    int capacity;

    public:
    MycircularDeque(int k) : dq(k + 1), head(0), tail(0), capacity(k + 1) {}

    bool isEmpty() {
        return head == tail;
    }

    bool isFull() {
        return head == (tail + 1) % capacity;
    }
    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }
        head = (head - 1 + capacity) % capacity;
        dq[head] = value;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }
        dq[tail] = value;
        tail = (tail + 1) % capacity;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }
        head = (head + 1 ) % capacity;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }
        tail = (tail - 1 + capacity) % capacity;
        return true;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return dq[head];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        int temp = (tail - 1 + capacity) % capacity;
        return dq[temp];
    }
};

int main() {
    MycircularDeque circularDeque = MycircularDeque(3); // 设置容量大小为3
    std::println("{}", circularDeque.insertLast(1));    // 返回 true
    std::println("{}", circularDeque.insertLast(2));    // 返回 true
    std::println("{}", circularDeque.insertFront(3));   // 返回 true
    std::println("{}", circularDeque.insertFront(4));   // 已经满了，返回 false
    std::println("{}", circularDeque.getRear());        // 返回 2
    std::println("{}", circularDeque.isFull());         // 返回 true
    std::println("{}", circularDeque.deleteLast());     // 返回 true
    std::println("{}", circularDeque.insertFront(4));   // 返回 true
    std::println("{}", circularDeque.getFront());       // 返回 4
    return 0;
}
