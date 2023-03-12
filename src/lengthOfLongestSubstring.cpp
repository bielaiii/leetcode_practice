#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
#include <algorithm>
using namespace std;


int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int j = 0;
    int maxlen = 0;
    for(int i = 0 ; i <s.size(); i++){
        st.emplace(s[i]);
        j = i + 1;
        while( j<s.size() && st.find(s[j]) == st.end()){
            
            st.emplace(s[j]);
            j++;
        }
        st.clear();
        maxlen = max(maxlen , j - i);
        
    }
    return maxlen;
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