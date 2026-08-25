class Solution {
public:
    int subtractProductAndSum(int n) {
        int k=n;
        int ans=0;
        int sum=0;
        int pro=1;

        while(k>0){
            int last= k%10;
            sum+= last;
            pro *= last;
            k= k/10;
        }
        return pro-sum;        
    }
};