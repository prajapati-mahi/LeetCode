class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=2; i<= num; i++){
            int k=i;
            int sum=0;
            while(k>0){
                int last= k%10;
                sum+= last;
                k=k/10;
            }
            if(sum%2 ==0){
                count++;
            }
        }
        return count;
    }
};