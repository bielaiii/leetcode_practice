#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class MyCircularQueue {
    vector<int> q;
    int head;
    int tail;
    int sz;

    public:
    MyCircularQueue(int k) : q(k + 1), head(0), tail(0), sz(k + 1) {}
    bool isEmpty() {
        return head == tail;
    }

    bool isFull() {

        return head == (tail + 1) % sz;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        q[tail] = value;
        tail = (tail + 1) % sz;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        head = (head + 1) % sz;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return q[head];
    }

    int Rear() {
        if (isEmpty())
            return -1;
        int temp = (tail - 1 + sz) % sz;
        return q[temp];
    }
};

int main() {
    MyCircularQueue circularQueue = MyCircularQueue(3); // 设置长度为 3
    std::println("{}", circularQueue.enQueue(1)) ;
    std::println("{}", circularQueue.enQueue(2)) ;
    std::println("{}", circularQueue.enQueue(3)) ;
    std::println("{}", circularQueue.enQueue(4)) ;
    std::println("{}", circularQueue.Rear()) ;
    std::println("{}", circularQueue.isFull()) ;
    std::println("{}", circularQueue.deQueue()) ;
    std::println("{}", circularQueue.enQueue(4)) ;
    std::println("{}", circularQueue.Rear()) ;
    return 0;
}
