class Solution {
public:
    bool validDigit(int n, int x) {
        string s= to_string(n);
        int si= s.size();
        int f= s[0]-'0';
        if(f == x || si==1){
            return false;
        }
        // if(si==2){
        //     if(s[1]== x){
        //         return true;
        //     }
        //     return false;
        // }
        for(int i=1; i<si; i++){
            int a= s[i]- '0';
            if(a == x){
                return true;
            }
        }
        return false;
    }
};