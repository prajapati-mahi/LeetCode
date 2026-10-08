class Solution {
public:
    string removeOuterParentheses(string s) {
        int left=0;
        int right=0;
        string ans="";

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                left++;
                if(left>1){
                    ans += s[i];
                }
            }
            if(s[i]== ')'){
                right++;
                if(right<left){
                    ans +=s[i];
                }
            }
            if(left== right){
                left=0;
                right=0;
            }
        }
        return ans;
    }
};