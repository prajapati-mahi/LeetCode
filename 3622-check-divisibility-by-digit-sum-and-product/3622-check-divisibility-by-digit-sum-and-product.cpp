class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;

        int k=n;
        while(k>0){
            int lastdigit=k%10;
            sum += lastdigit;
            pro *= lastdigit;
            k=k/10;
        }
        if((n% (sum+pro)) ==0){
            return true;
        }
        return false;
    }
};