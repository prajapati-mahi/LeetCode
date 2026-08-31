class Solution {
public:
    vector<int> evenOddBit(int n) {
        int k=n;
        int bin=0;
        int count=1;
        int odd=0;
        int even=0;
        while(k>0){
            int last= k%2;
            if(last ==1){
                if(count% 2 ==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            count++;
            k= k/2;
        }
        return {odd, even};
    }
};