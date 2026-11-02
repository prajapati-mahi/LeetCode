class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0;
        while(n>0){
            int last= n%k;
            sum += last;
            n= n/k;
        }
        return sum;
    }
};