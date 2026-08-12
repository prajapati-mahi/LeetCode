#include <bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
        int n= s.size();
        if(n%2 ==1){
            return false;
        }
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i]=='(' || s[i]=='['|| s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.empty() == true){
                    st.push(s[i]);
                }
                if(st.top()== '('){
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
            else if(s[i]==']'){
                if(st.empty() == true){
                    st.push(s[i]);
                }
                if(st.top()== '['){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else if(s[i]=='}'){
                if(st.empty() == true){
                    st.push(s[i]);
                }
                if(st.top()== '{'){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        if(st.empty()== true){
            return true;
        }
        return false;        
    }
};