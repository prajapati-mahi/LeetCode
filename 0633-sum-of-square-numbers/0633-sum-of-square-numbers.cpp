class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0; i<= sqrt(c); i++){
            long long rem= (long long)c - (long long)i*i;
            long long j= sqrt(rem);
            if(j*j == rem){
                return true;
            }
        }
        return false;
    }
};