class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n; i<=n+t; i++){
            int lastdigit=0;
            int product=1;
            int k=i;
            while(k>0){
                lastdigit= k%10;
                product *= lastdigit;
                k= k/10;
            }
            if(product% t ==0){
                return i;
            }
        }
        return 0;
    }
};