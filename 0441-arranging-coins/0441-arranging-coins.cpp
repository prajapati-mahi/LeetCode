class Solution {
public:
    int arrangeCoins(int n) {
        int k= n;
        int count=0;
        int i=1;
        if(n<1){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        if(n==3|| n==4|| n==5){
            return 2;
        }
        while(k>0){
            if(k-i ==0){
                return count+1;
            }
            k= k-i;
            i++;
            count++;
        }
        return count-1;
    }
};