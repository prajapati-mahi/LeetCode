class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int k=x;
        while(k>0){
            int last= k%10;
            sum += last;
            k= k/10;
        }
        if(x% sum ==0){
            return sum;
        }
        else{
            return -1;
        }
    }
};