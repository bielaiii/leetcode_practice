#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;


vector<string> spliter(string s){
      s += ' ';
      vector<string> ans;
      string temp = "";
      for(int i = 0; i < s.size();){
            int j = i;
            while(j < s.size() && s[j] != ' ') j++;
            ans.emplace_back(s.substr(i, j - i));
            i = j;
      }
      return ans;
}

vector<string> basicCalculatorIV(string expression, vector<string>& evalvars, vector<int>& evalints) {
      unordered_map<string ,int > mp;
      for(int i = 0; i < evalvars.size(); i ++){
            mp[evalvars[i]] = evalints[i];
      }
      int numans = 0;
      string ans = "";
      vector<int> unknown;
      stack<int> numswt;
      vector<int> alpha;
      stack<char> st;
      stack<int> nums;
      char sign ;
      for(int i = 0 ; i < expression.size(); i++){
            if(expression[i] == ' ') continue;
            if(expression[i] == '('){
                  st.push('(');
            }else if(expression[i] == ')'){
                  st.pop();
            }else if(isdigit(expression[i])){
                  int j = i;
                  int num = 0;
                  while(j < expression.size() && isdigit(expression[j])){
                        num *= 10;
                        num += expression[i] - '0';
                        j ++;
                  }
                  i = j;
                  if(sign == '*'){
                        nums.top() *= num;
                  }else if(sign == '/'){
                        nums.top() /= num;
                  }else{
                        nums.push(num);
                  }
            }else if(expression[i] == '*' || expression[i] == '/' || expression[i] == '+' || expression[i] == '-' ){
                  sign = expression[i];
            }else{
                  int j = i;
                  string temp = "";
                  while(j < expression.size() && isalpha(expression[j])){
                        temp += expression[j];
                        j ++;
                  }
                  if(mp.find(temp) != mp.end()){
                        st.push(mp[temp]);
                  }else{
                        if(ans == ""){
                              if(sign == '-'){
                                    ans = "-1" + ans;
                              }else{
                                    ans = '1' + ans;
                              }
                        }else{
                              ans = "1" + ans;
                        }
                        ans += temp;
                  }
                  i = j;
            }
      }
      while(nums.size()){
            numans += nums.top();
            nums.pop();
      }
      return { ans  , to_string(numans)};
}