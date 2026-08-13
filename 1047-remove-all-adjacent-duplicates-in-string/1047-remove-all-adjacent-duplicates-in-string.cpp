class Solution {
public:
    string removeDuplicates(string s) {
        int n= s.size();

        stack<char> st;
        for(int i=0; i<n; i++){
            if(st.empty()== true){
                st.push(s[i]);
            }
            else if(s[i]== st.top()){
                if(st.empty()== false){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string result= "";
        while(!st.empty()){
            result= st.top()+ result;
            st.pop();
        }
        return result;
    }
};