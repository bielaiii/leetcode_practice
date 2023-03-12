#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

string rearrangeString(string s, int k) {
      unordered_map<char, int> ct;
      for (auto c: s) {
            ct[c]++;
      }
      priority_queue<pair<int, char>> pq;
      for(auto it : ct){
            pq.push({it.second, it.first});
      }
      string str ="";
      queue<pair<int, char>> q;
      while (pq.size()) {
            pair<int, char> temp = pq.top();
            pq.pop();
            str += temp.second;
            temp.first--;
            q.push(temp);
            if(q.size() >= k){
                  while (q.size()) {
                        pair<int, char> fronq = q.front();
                        q.pop();
                        if(fronq.first) {
                              pq.push(fronq);
                        }
                  }
            }
      }
      return str.size() == s.size() ? str : "";
}