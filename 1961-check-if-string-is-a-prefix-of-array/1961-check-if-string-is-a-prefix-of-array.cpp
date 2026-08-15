class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n= s.size();
        int no= words.size();

        int i=0;
        string ans="";
        int lenofans=0;
        while(i<no){
            ans= ans+ words[i];
            lenofans= ans.size();
            if(s[0] != ans[0]){
                return false;
            }
            if(lenofans == n){
                if(s== ans){
                    return true;
                }
                else{
                    return false;
                }
            }
            else if(lenofans>n){
                return false;
            }
            i++;
        }
        return false;
    }
};