#include<iostream>
#include<vector>
#include<unordered_map>
#include<sstream>
#include<queue>
using namespace std;

//#define TRANSLATE_TIME_EXTRA(s) stoi(s.substr(0,2)) * 100 + stoi(s.substr(3))
#define TRANSLATE_TIME(s) stoi(s.substr(0,2)) * 100 + stoi(s.substr(3))


vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) 
{
      vector<string> vt;
      unordered_map<string, int> ct;
      unordered_map<string, queue<int>> time;
      for(int i = 0; i < keyName.size(); ++i) {
            if (time.find(keyName[i]) == time.end()) {
                  ct[keyName[i]] = 1;
                  time[keyName[i]].push(TRANSLATE_TIME(keyTime[i]) + 100);
            } else {
                  int cur_time = TRANSLATE_TIME(keyTime[i]);
                  if (time[keyName[i]].front() >= 2400 ){
                  } else if (cur_time <= time[keyName[i]].front()) {
                        ct[keyName[i]]++;
                        time[keyName[i]].push(cur_time + 100);
                        if (ct[keyName[i]] >= 3) {
                              vt.push_back(keyName[i]);
                        }
                  } else {
                        
                        
                  }
            }
      }
      sort(vt.begin(), vt.end());
      return vt;
}