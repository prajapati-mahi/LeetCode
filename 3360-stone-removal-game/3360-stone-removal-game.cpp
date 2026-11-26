class Solution {
public:
    bool canAliceWin(int n) {
        int k=10;
        int i=0;
        while(n>0){
            if(n>=k){
                n= n-k;
                i++;
            }
            else{
                if(i%2 ==1){
                    return true;
                }
                else{
                    return false;
                }
            }
            k--;
        }
        if(n==0){
            if(i%2==0){
                return false;
            }
            else{
                return true;
            }
        }
        return true;
    }
};