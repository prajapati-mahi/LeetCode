class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n1= words.size();
        string ans= "";

        for(int i=0; i<n1; i++){
            ans= ans+ words[i][0];
        }
        if(s== ans){
            return true;
        }
        else{
            return false;
        }
    }
};