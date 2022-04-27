#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
#include <algorithm>
using namespace std;


int lengthOfLongestSubstring(string s) {
    int len = 1;
    int temp_len = 1;
    unordered_set<char> set_;
    set_.insert(s[0]);
    int size_ = s.length();
    for(int i = 1; i < s.length(); i++){
        if(set_.count(s[i])){
            temp_len ++;
            
        }else{
            len = max(len, temp_len);
        }
    }
}


/* int lengthOfLongestSubstring(string s) {
    if(s == "") return 0;
    unordered_set<char> set;
    int ret = 0;
    int left = 0;
    //int max = 0;
    for(int i =0; i < s.length(); i++){
        while(set.find(s[i]) != set.end()){
            set.erase(s[left]);
            left ++;
        }

        ret = max(ret, i-left+1);
        set.insert(s[i]);
    }
    return ret;
    
}
 */