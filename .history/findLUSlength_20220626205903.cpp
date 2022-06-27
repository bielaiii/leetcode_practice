#include<iostream>
#include<vector>
#include<algorithm>
#include"header.h"
using namespace std;

bool checkSubStr(const string  &a, const string  &b){
    int j = 0;
    for(int i = 0 ; i < b.size(); i++){
        if(b[i] == a[j]) j++;
    }
    return j == a.size();
}

/* int findLUSlength(vector<string>& strs) {
    vector<vector<int>> vec;
    sort(strs.begin(), strs.end(), [](string a, string b){
        return a.size() > b.size();
    });
   // for(auto s : strs) cout << s << endl;
    for(int i = 0; i < strs.size(); i++){
        bool hasSub = 0;
        int j = 0;
        for(; j < strs.size() && strs[i].size() <= strs[j].size(); j++){
            if( i != j && checkSubStr(strs[i], strs[j])){
                hasSub = 1;
                break;
            }
        }
        //cout << hasSub <<endl;
        if(! hasSub) return strs[i].size(); 
    }
    return -1;
} */

bool isSubStr(string &a, string &b){//判断a是否为b的子串
        int i = 0;
        for (auto c: b)
            if (i < a.size() && c == a[i]) i++ ;
        return i == a.size();
    }
    int findLUSlength(vector<string>& strs) {
        sort(strs.begin(),strs.end(),[](string a, string b){//按照长度从大到小排 
            return a.size()>b.size();
        });
        for(int i = 0; i < strs.size(); i++){//按照长度从大到小枚举串i 判断i会否是特殊序列
            bool isSub = false;//先假设i不是任何串的子串
            for(int j = 0; j < strs.size()&&strs[i].size() <= strs[j].size(); j++){//判断i是否为j的子串
                if(i!=j&&isSubStr(strs[i],strs[j])){//若i是j的子串 则i不是特殊序列 跳出即可 
                    isSub = true;
                    break;
                }
            }
            if(!isSub) return strs[i].size();//i不是任何串的子串 则为特殊序列 直接返回即可 
        }
        return -1;
    }
