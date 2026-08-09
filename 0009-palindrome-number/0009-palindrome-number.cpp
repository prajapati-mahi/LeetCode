class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else if(x<10){
            return true;
        }
        int n=x;
        long long rev=0;
        while(n>0){
            int lastdigit= n%10;
            rev= rev*10 + lastdigit;
            n= n/10;
        }
        if(x== rev){
            return true;
        }
        return false;
    }
};