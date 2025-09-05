#include <algorithm>
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

int find_opposite(int value, vector<int> &has_right, string senate,
                  char target) {
    for (int i = value; i < senate.size(); i = (i + 1) % senate.size()) {
        if (senate[i] == target && has_right[i]) {
            return i;
        }
    }
    return -1;
}

string predictPartyVictory(string senate) {
    if (senate.size() == 1) {
        return senate[0] == 'D' ? "Dire" : "Radiant";
    }
    queue<char> qq;
    vector<int> has_right(senate.size(), 1);
    vector<int> fake_queue(senate.size() + 1);
    int capacity = senate.size();
    int head = 0;
    int tail = 0;
    fake_queue[tail] = senate[0];
    tail++;
    map<char, int> mp;
    mp['R'] = std::count_if(senate.begin(), senate.end(),
                            [](const char c) { return c == 'R'; });
    mp['D'] = senate.size() - mp['R'];
    if (mp['R'] == 0) {
        return "Dire";
    } else if (mp['D'] == 0) {
        return "Radiant";
    }
    map<char, char> enemy{
      {'R', 'D'},
      {'D', 'R'}
    };

    for (int i = 0; i < senate.size(); i++) {
        int head_; //= fake_queue[head];

        while (!has_right[head]) {
            head = (head + 1) % capacity;
        }
        int idx = find_opposite(head, has_right, senate, enemy[senate[head]]);
        if (idx != -1) {
            has_right[idx] = 0;
            mp[enemy[senate[head]]]--;
        }

        if (mp['R'] <= 0) {
            return "Dire";
        } else if (mp['D'] <= 0) {
            return "Radiant";
        }
        head = (head + 1) % capacity;
    }
    return "Dire";
}

namespace id {

string predictPartyVictory(string senate) {
    int n = senate.size();
    queue<int> radiant, dire;
    for (int i = 0; i < n; ++i) {
        if (senate[i] == 'R') {
            radiant.push(i);
        } else {
            dire.push(i);
        }
    }
    while (!radiant.empty() && !dire.empty()) {
        if (radiant.front() < dire.front()) {
            radiant.push(radiant.front() + n);
        } else {
            dire.push(dire.front() + n);
        }
        radiant.pop();
        dire.pop();
    }
    return !radiant.empty() ? "Radiant" : "Dire";
}
} // namespace id

int main() {
    std::println("{}", predictPartyVictory("RD"));
    std::println("{}", predictPartyVictory("RDD"));
    return 0;
}
