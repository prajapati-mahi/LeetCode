class Solution {
public:
    bool checkString(string s) {
        string newone=s;
        sort(s.begin(), s.end());
        if(newone == s){
            return true;
        }
        return false;
    }
};