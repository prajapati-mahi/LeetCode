class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=-1;
        while(n>0){
            int last= n%2;
            if(last==1 && prev==1){
                return false;
            }
            else if(last==0 && prev==0){
                return false;
            }
            prev= last;
            n= n/2;
        }
        return true;
    }
};