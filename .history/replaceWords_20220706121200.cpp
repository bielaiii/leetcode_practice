#include<iostream>
#include<vector>
#include<set>
using namespace std;

string replaceWords(vector<string>& dictionary, string sentence) {
    sentence += " ";
    set<string> myset;
    int len = 0;
    for(auto dict : dictionary ){
        len = max(len, (int)dict.size());
        myset.insert(dict);
    }
   
    int j = 0;
    string ans = "";
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            string temp = sentence.substr(j, i - j);
            j = i + 1;
            int c = 0;
            cout << temp <<endl;
            while(c <= len && c < temp.size()){
                
                if(myset.count(temp.substr(0, c))){
                  //  cout << temp.substr(0, c) <<endl;
                    ans += " ";
                    ans += temp.substr(0, c);
                    break;;
                    
                }else{
                    c ++;
                }
            }
            if(c > len || c == temp.size()){
                ans += " ";
                ans += temp;
            }
        }
    }
    return ans.substr(1);
}